// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MiniMapFunctionLibrary.generated.h"

class UObject;
class UImage;
class UCanvaspanelSlot;
class USpringArmComponent;
class UMaterialParameterCollection;

/**
 * 
 */
UCLASS()
class MINIMAP_API UMiniMapFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


public:
	UFUNCTION(BlueprintCallable, category = "MiniMap")
	static void SetPlayerImageTransform(USpringArmComponent* SpringArmComponent, UImage* ImageObject,
											UCanvasPanelSlot* CanvasPanelSlot,
											float WorldMapBorder, float MiniMapBorder, float CoordinateRotation);

	UFUNCTION(BlueprintCallable, Category = "MiniMap", meta = (Keywords = "SetFloatParameterValue", WorldContext = "WorldContextObject", MaterialParameterCollectionFunction = "true"))
	static void SetMapOffset(UObject* WorldContextObject, UMaterialParameterCollection* Collection,
							FName ParameterZoomName, float ParameterZoomValue,
							FName ParameterOffsetXName, float ParameterOffsetXValue,
							FName ParameterOffsetYName, float ParameterOffsetYValue,
							FName ParameterWorldBorderName, float ParameterWolrdBorderValue);

	UFUNCTION(BlueprintCallable, Category = "MiniMap")
		static FVector CastToStandardCoordinateSystem(FVector OriginalLocation, float CoordinateRotation);
	
};
