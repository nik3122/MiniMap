// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MiniMap/Public/MiniMapFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniMapFunctionLibrary() {}
// Cross Module References
	MINIMAP_API UClass* Z_Construct_UClass_UMiniMapFunctionLibrary_NoRegister();
	MINIMAP_API UClass* Z_Construct_UClass_UMiniMapFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MiniMap();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMiniMapFunctionLibrary::execCastToStandardCoordinateSystem)
	{
		P_GET_STRUCT(FVector,Z_Param_OriginalLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CoordinateRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UMiniMapFunctionLibrary::CastToStandardCoordinateSystem(Z_Param_OriginalLocation,Z_Param_CoordinateRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMiniMapFunctionLibrary::execSetMapOffset)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_Collection);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterZoomName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ParameterZoomValue);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterOffsetXName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ParameterOffsetXValue);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterOffsetYName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ParameterOffsetYValue);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterWorldBorderName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ParameterWolrdBorderValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMiniMapFunctionLibrary::SetMapOffset(Z_Param_WorldContextObject,Z_Param_Collection,Z_Param_ParameterZoomName,Z_Param_ParameterZoomValue,Z_Param_ParameterOffsetXName,Z_Param_ParameterOffsetXValue,Z_Param_ParameterOffsetYName,Z_Param_ParameterOffsetYValue,Z_Param_ParameterWorldBorderName,Z_Param_ParameterWolrdBorderValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMiniMapFunctionLibrary::execSetPlayerImageTransform)
	{
		P_GET_OBJECT(USpringArmComponent,Z_Param_SpringArmComponent);
		P_GET_OBJECT(UImage,Z_Param_ImageObject);
		P_GET_OBJECT(UCanvasPanelSlot,Z_Param_CanvasPanelSlot);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WorldMapBorder);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MiniMapBorder);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CoordinateRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMiniMapFunctionLibrary::SetPlayerImageTransform(Z_Param_SpringArmComponent,Z_Param_ImageObject,Z_Param_CanvasPanelSlot,Z_Param_WorldMapBorder,Z_Param_MiniMapBorder,Z_Param_CoordinateRotation);
		P_NATIVE_END;
	}
	void UMiniMapFunctionLibrary::StaticRegisterNativesUMiniMapFunctionLibrary()
	{
		UClass* Class = UMiniMapFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CastToStandardCoordinateSystem", &UMiniMapFunctionLibrary::execCastToStandardCoordinateSystem },
			{ "SetMapOffset", &UMiniMapFunctionLibrary::execSetMapOffset },
			{ "SetPlayerImageTransform", &UMiniMapFunctionLibrary::execSetPlayerImageTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMiniMapFunctionLibrary_CastToStandardCoordinateSystem_Statics
	{
		struct MiniMapFunctionLibrary_eventCastToStandardCoordinateSystem_Parms
		{
			FVector OriginalLocation;
			float CoordinateRotation;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalLocation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoordinateRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMiniMapFunctionLibrary_CastToStandardCoordinateSystem_Statics::NewProp_OriginalLocation = { "OriginalLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiniMapFunctionLibrary_eventCastToStandardCoordinateSystem_Parms, OriginalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMiniMapFunctionLibrary_CastToStandardCoordinateSystem_Statics::NewProp_CoordinateRotation = { "CoordinateRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiniMapFunctionLibrary_eventCastToStandardCoordinateSystem_Parms, CoordinateRotation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMiniMapFunctionLibrary_CastToStandardCoordinateSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiniMapFunctionLibrary_eventCastToStandardCoordinateSystem_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMiniMapFunctionLibrary_CastToStandardCoordinateSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiniMapFunctionLibrary_CastToStandardCoordinateSystem_Statics::NewProp_OriginalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiniMapFunctionLibrary_CastToStandardCoordinateSystem_Statics::NewProp_CoordinateRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiniMapFunctionLibrary_CastToStandardCoordinateSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiniMapFunctionLibrary_CastToStandardCoordinateSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/MiniMapFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMiniMapFunctionLibrary_CastToStandardCoordinateSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMiniMapFunctionLibrary, nullptr, "CastToStandardCoordinateSystem", nullptr, nullptr, sizeof(MiniMapFunctionLibrary_eventCastToStandardCoordinateSystem_Parms), Z_Construct_UFunction_UMiniMapFunctionLibrary_CastToStandardCoordinateSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiniMapFunctionLibrary_CastToStandardCoordinateSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMiniMapFunctionLibrary_CastToStandardCoordinateSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiniMapFunctionLibrary_CastToStandardCoordinateSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMiniMapFunctionLibrary_CastToStandardCoordinateSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMiniMapFunctionLibrary_CastToStandardCoordinateSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics
	{
		struct MiniMapFunctionLibrary_eventSetMapOffset_Parms
		{
			UObject* WorldContextObject;
			UMaterialParameterCollection* Collection;
			FName ParameterZoomName;
			float ParameterZoomValue;
			FName ParameterOffsetXName;
			float ParameterOffsetXValue;
			FName ParameterOffsetYName;
			float ParameterOffsetYValue;
			FName ParameterWorldBorderName;
			float ParameterWolrdBorderValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collection;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterZoomName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParameterZoomValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterOffsetXName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParameterOffsetXValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterOffsetYName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParameterOffsetYValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterWorldBorderName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParameterWolrdBorderValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiniMapFunctionLibrary_eventSetMapOffset_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiniMapFunctionLibrary_eventSetMapOffset_Parms, Collection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::NewProp_ParameterZoomName = { "ParameterZoomName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiniMapFunctionLibrary_eventSetMapOffset_Parms, ParameterZoomName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::NewProp_ParameterZoomValue = { "ParameterZoomValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiniMapFunctionLibrary_eventSetMapOffset_Parms, ParameterZoomValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::NewProp_ParameterOffsetXName = { "ParameterOffsetXName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiniMapFunctionLibrary_eventSetMapOffset_Parms, ParameterOffsetXName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::NewProp_ParameterOffsetXValue = { "ParameterOffsetXValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiniMapFunctionLibrary_eventSetMapOffset_Parms, ParameterOffsetXValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::NewProp_ParameterOffsetYName = { "ParameterOffsetYName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiniMapFunctionLibrary_eventSetMapOffset_Parms, ParameterOffsetYName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::NewProp_ParameterOffsetYValue = { "ParameterOffsetYValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiniMapFunctionLibrary_eventSetMapOffset_Parms, ParameterOffsetYValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::NewProp_ParameterWorldBorderName = { "ParameterWorldBorderName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiniMapFunctionLibrary_eventSetMapOffset_Parms, ParameterWorldBorderName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::NewProp_ParameterWolrdBorderValue = { "ParameterWolrdBorderValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiniMapFunctionLibrary_eventSetMapOffset_Parms, ParameterWolrdBorderValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::NewProp_Collection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::NewProp_ParameterZoomName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::NewProp_ParameterZoomValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::NewProp_ParameterOffsetXName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::NewProp_ParameterOffsetXValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::NewProp_ParameterOffsetYName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::NewProp_ParameterOffsetYValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::NewProp_ParameterWorldBorderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::NewProp_ParameterWolrdBorderValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "MiniMap" },
		{ "Keywords", "SetFloatParameterValue" },
		{ "MaterialParameterCollectionFunction", "true" },
		{ "ModuleRelativePath", "Public/MiniMapFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMiniMapFunctionLibrary, nullptr, "SetMapOffset", nullptr, nullptr, sizeof(MiniMapFunctionLibrary_eventSetMapOffset_Parms), Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics
	{
		struct MiniMapFunctionLibrary_eventSetPlayerImageTransform_Parms
		{
			USpringArmComponent* SpringArmComponent;
			UImage* ImageObject;
			UCanvasPanelSlot* CanvasPanelSlot;
			float WorldMapBorder;
			float MiniMapBorder;
			float CoordinateRotation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImageObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasPanelSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CanvasPanelSlot;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldMapBorder;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MiniMapBorder;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoordinateRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiniMapFunctionLibrary_eventSetPlayerImageTransform_Parms, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::NewProp_ImageObject_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::NewProp_ImageObject = { "ImageObject", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiniMapFunctionLibrary_eventSetPlayerImageTransform_Parms, ImageObject), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::NewProp_ImageObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::NewProp_ImageObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::NewProp_CanvasPanelSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::NewProp_CanvasPanelSlot = { "CanvasPanelSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiniMapFunctionLibrary_eventSetPlayerImageTransform_Parms, CanvasPanelSlot), Z_Construct_UClass_UCanvasPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::NewProp_CanvasPanelSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::NewProp_CanvasPanelSlot_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::NewProp_WorldMapBorder = { "WorldMapBorder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiniMapFunctionLibrary_eventSetPlayerImageTransform_Parms, WorldMapBorder), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::NewProp_MiniMapBorder = { "MiniMapBorder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiniMapFunctionLibrary_eventSetPlayerImageTransform_Parms, MiniMapBorder), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::NewProp_CoordinateRotation = { "CoordinateRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiniMapFunctionLibrary_eventSetPlayerImageTransform_Parms, CoordinateRotation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::NewProp_SpringArmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::NewProp_ImageObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::NewProp_CanvasPanelSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::NewProp_WorldMapBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::NewProp_MiniMapBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::NewProp_CoordinateRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "MiniMap" },
		{ "ModuleRelativePath", "Public/MiniMapFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMiniMapFunctionLibrary, nullptr, "SetPlayerImageTransform", nullptr, nullptr, sizeof(MiniMapFunctionLibrary_eventSetPlayerImageTransform_Parms), Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMiniMapFunctionLibrary_NoRegister()
	{
		return UMiniMapFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMiniMapFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMiniMapFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MiniMap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMiniMapFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMiniMapFunctionLibrary_CastToStandardCoordinateSystem, "CastToStandardCoordinateSystem" }, // 3018179857
		{ &Z_Construct_UFunction_UMiniMapFunctionLibrary_SetMapOffset, "SetMapOffset" }, // 3729585325
		{ &Z_Construct_UFunction_UMiniMapFunctionLibrary_SetPlayerImageTransform, "SetPlayerImageTransform" }, // 1581405306
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMiniMapFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MiniMapFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MiniMapFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMiniMapFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMiniMapFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMiniMapFunctionLibrary_Statics::ClassParams = {
		&UMiniMapFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMiniMapFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMiniMapFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMiniMapFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMiniMapFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMiniMapFunctionLibrary, 857258184);
	template<> MINIMAP_API UClass* StaticClass<UMiniMapFunctionLibrary>()
	{
		return UMiniMapFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMiniMapFunctionLibrary(Z_Construct_UClass_UMiniMapFunctionLibrary, &UMiniMapFunctionLibrary::StaticClass, TEXT("/Script/MiniMap"), TEXT("UMiniMapFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMiniMapFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
