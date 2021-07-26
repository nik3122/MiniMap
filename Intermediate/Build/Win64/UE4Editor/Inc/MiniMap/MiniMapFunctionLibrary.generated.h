// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UObject;
class UMaterialParameterCollection;
class USpringArmComponent;
class UImage;
class UCanvasPanelSlot;
#ifdef MINIMAP_MiniMapFunctionLibrary_generated_h
#error "MiniMapFunctionLibrary.generated.h already included, missing '#pragma once' in MiniMapFunctionLibrary.h"
#endif
#define MINIMAP_MiniMapFunctionLibrary_generated_h

#define Plugin_Plugins_MiniMap_Source_MiniMap_Public_MiniMapFunctionLibrary_h_21_SPARSE_DATA
#define Plugin_Plugins_MiniMap_Source_MiniMap_Public_MiniMapFunctionLibrary_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCastToStandardCoordinateSystem); \
	DECLARE_FUNCTION(execSetMapOffset); \
	DECLARE_FUNCTION(execSetPlayerImageTransform);


#define Plugin_Plugins_MiniMap_Source_MiniMap_Public_MiniMapFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCastToStandardCoordinateSystem); \
	DECLARE_FUNCTION(execSetMapOffset); \
	DECLARE_FUNCTION(execSetPlayerImageTransform);


#define Plugin_Plugins_MiniMap_Source_MiniMap_Public_MiniMapFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMiniMapFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMiniMapFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMiniMapFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MiniMap"), NO_API) \
	DECLARE_SERIALIZER(UMiniMapFunctionLibrary)


#define Plugin_Plugins_MiniMap_Source_MiniMap_Public_MiniMapFunctionLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMiniMapFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMiniMapFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMiniMapFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MiniMap"), NO_API) \
	DECLARE_SERIALIZER(UMiniMapFunctionLibrary)


#define Plugin_Plugins_MiniMap_Source_MiniMap_Public_MiniMapFunctionLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMiniMapFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMiniMapFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMiniMapFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMiniMapFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMiniMapFunctionLibrary(UMiniMapFunctionLibrary&&); \
	NO_API UMiniMapFunctionLibrary(const UMiniMapFunctionLibrary&); \
public:


#define Plugin_Plugins_MiniMap_Source_MiniMap_Public_MiniMapFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMiniMapFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMiniMapFunctionLibrary(UMiniMapFunctionLibrary&&); \
	NO_API UMiniMapFunctionLibrary(const UMiniMapFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMiniMapFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMiniMapFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMiniMapFunctionLibrary)


#define Plugin_Plugins_MiniMap_Source_MiniMap_Public_MiniMapFunctionLibrary_h_21_PRIVATE_PROPERTY_OFFSET
#define Plugin_Plugins_MiniMap_Source_MiniMap_Public_MiniMapFunctionLibrary_h_18_PROLOG
#define Plugin_Plugins_MiniMap_Source_MiniMap_Public_MiniMapFunctionLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plugin_Plugins_MiniMap_Source_MiniMap_Public_MiniMapFunctionLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	Plugin_Plugins_MiniMap_Source_MiniMap_Public_MiniMapFunctionLibrary_h_21_SPARSE_DATA \
	Plugin_Plugins_MiniMap_Source_MiniMap_Public_MiniMapFunctionLibrary_h_21_RPC_WRAPPERS \
	Plugin_Plugins_MiniMap_Source_MiniMap_Public_MiniMapFunctionLibrary_h_21_INCLASS \
	Plugin_Plugins_MiniMap_Source_MiniMap_Public_MiniMapFunctionLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Plugin_Plugins_MiniMap_Source_MiniMap_Public_MiniMapFunctionLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plugin_Plugins_MiniMap_Source_MiniMap_Public_MiniMapFunctionLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	Plugin_Plugins_MiniMap_Source_MiniMap_Public_MiniMapFunctionLibrary_h_21_SPARSE_DATA \
	Plugin_Plugins_MiniMap_Source_MiniMap_Public_MiniMapFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Plugin_Plugins_MiniMap_Source_MiniMap_Public_MiniMapFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
	Plugin_Plugins_MiniMap_Source_MiniMap_Public_MiniMapFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIMAP_API UClass* StaticClass<class UMiniMapFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Plugin_Plugins_MiniMap_Source_MiniMap_Public_MiniMapFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
