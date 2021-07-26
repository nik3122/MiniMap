// Fill out your copyright notice in the Description page of Project Settings.


#include "MiniMapFunctionLibrary.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Internationalization/Text.h"
#include "Components/PanelSlot.h"
#include "Math/UnrealMathUtility.h"
#include "Components/CanvasPanelSlot.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Materials/MaterialParameterCollection.h"
#include "Kismet/KismetMaterialLibrary.h"
#include "Materials/MaterialParameterCollectionInstance.h"


/**
 * 根据摄像机与根节点的位置关系计算映射关系
 */


void UMiniMapFunctionLibrary::SetPlayerImageTransform(USpringArmComponent* SpringArmComponent, UImage* ImageObject, UCanvasPanelSlot* CanvasPanelSlot, float WorldMapBorder, float MiniMapBorder, float CoordinateRotation)
{
	float ArmLenth = SpringArmComponent->TargetArmLength;
	float ArmRotationPitch = SpringArmComponent->GetTargetRotation().Pitch;
	float ArmRotationYaw = SpringArmComponent->GetTargetRotation().Yaw;
	ArmRotationYaw -= CoordinateRotation;

	//小地图图标位置
	FVector2D ImagePosition;

	//将玩家旋转角度转换为弧度
	float RadiansPitch = FMath::DegreesToRadians(ArmRotationPitch);
	float RadiansYaw = FMath::DegreesToRadians(ArmRotationYaw);

	//相机臂映射到小地图中的长度
	float Lenth2D = ArmLenth / WorldMapBorder * MiniMapBorder * FMath::Cos(RadiansPitch);

	ImagePosition.X = Lenth2D * FMath::Sin(RadiansYaw) * -1;
	ImagePosition.Y = Lenth2D * FMath::Cos(RadiansYaw);

	//更新小地图图标旋转
	ImageObject->SetRenderTransformAngle(ArmRotationYaw);
	//更新小地图图标位置
	CanvasPanelSlot->SetPosition(ImagePosition);

	//小地图图标与地图边缘的距离
	float Distance = FMath::Sqrt(FMath::Square(ImagePosition.X - 0) + FMath::Square(ImagePosition.Y - 0));

	if (Distance > (MiniMapBorder / 2 - CanvasPanelSlot->GetSize().X / 2))
	{
		ImagePosition.X = (MiniMapBorder / 2 - CanvasPanelSlot->GetSize().X / 2) * FMath::Sin(RadiansYaw) * -1;
		ImagePosition.Y = (MiniMapBorder / 2 - CanvasPanelSlot->GetSize().X / 2) * FMath::Cos(RadiansYaw);
		CanvasPanelSlot->SetPosition(ImagePosition);
	}
}

void UMiniMapFunctionLibrary::SetMapOffset(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterZoomName, float ParameterZoomValue, FName ParameterOffsetXName, float ParameterOffsetXValue, FName ParameterOffsetYName, float ParameterOffsetYValue, FName ParameterWorldBorderName, float ParameterWolrdBorderValue)
{
	if (Collection)
	{
		if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
		{
			UMaterialParameterCollectionInstance* Instance = World->GetParameterCollectionInstance(Collection);

			/*const bool bFoundParameter = */Instance->SetScalarParameterValue(ParameterZoomName, ParameterZoomValue);
			Instance->SetScalarParameterValue(ParameterWorldBorderName, ParameterWolrdBorderValue);
			Instance->SetScalarParameterValue(ParameterOffsetXName, ParameterOffsetXValue);
			Instance->SetScalarParameterValue(ParameterOffsetYName, ParameterOffsetYValue);
		}
	}
}

FVector UMiniMapFunctionLibrary::CastToStandardCoordinateSystem(FVector OriginalLocation, float CoordinateRotation)
{
	float Radians = FMath::DegreesToRadians(CoordinateRotation);
	FVector ResultLocation;

	ResultLocation.X = OriginalLocation.X * FMath::Cos(Radians) + OriginalLocation.Y * FMath::Sin(Radians);
	ResultLocation.Y = OriginalLocation.Y * FMath::Cos(Radians) - OriginalLocation.X * FMath::Sin(Radians);
	ResultLocation.Z = OriginalLocation.Z;

	return ResultLocation;
}

