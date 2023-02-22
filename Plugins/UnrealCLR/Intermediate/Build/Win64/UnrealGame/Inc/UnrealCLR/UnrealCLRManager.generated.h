// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
class AActor;
struct FHitResult;
#ifdef UNREALCLR_UnrealCLRManager_generated_h
#error "UnrealCLRManager.generated.h already included, missing '#pragma once' in UnrealCLRManager.h"
#endif
#define UNREALCLR_UnrealCLRManager_generated_h

#define FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRManager_h_32_SPARSE_DATA
#define FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRManager_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execComponentReleased); \
	DECLARE_FUNCTION(execComponentClicked); \
	DECLARE_FUNCTION(execComponentEndCursorOver); \
	DECLARE_FUNCTION(execComponentBeginCursorOver); \
	DECLARE_FUNCTION(execComponentHit); \
	DECLARE_FUNCTION(execComponentEndOverlap); \
	DECLARE_FUNCTION(execComponentBeginOverlap); \
	DECLARE_FUNCTION(execActorReleased); \
	DECLARE_FUNCTION(execActorClicked); \
	DECLARE_FUNCTION(execActorEndCursorOver); \
	DECLARE_FUNCTION(execActorBeginCursorOver); \
	DECLARE_FUNCTION(execActorHit); \
	DECLARE_FUNCTION(execActorEndOverlap); \
	DECLARE_FUNCTION(execActorBeginOverlap);


#define FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execComponentReleased); \
	DECLARE_FUNCTION(execComponentClicked); \
	DECLARE_FUNCTION(execComponentEndCursorOver); \
	DECLARE_FUNCTION(execComponentBeginCursorOver); \
	DECLARE_FUNCTION(execComponentHit); \
	DECLARE_FUNCTION(execComponentEndOverlap); \
	DECLARE_FUNCTION(execComponentBeginOverlap); \
	DECLARE_FUNCTION(execActorReleased); \
	DECLARE_FUNCTION(execActorClicked); \
	DECLARE_FUNCTION(execActorEndCursorOver); \
	DECLARE_FUNCTION(execActorBeginCursorOver); \
	DECLARE_FUNCTION(execActorHit); \
	DECLARE_FUNCTION(execActorEndOverlap); \
	DECLARE_FUNCTION(execActorBeginOverlap);


#define FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRManager_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnrealCLRManager(); \
	friend struct Z_Construct_UClass_UUnrealCLRManager_Statics; \
public: \
	DECLARE_CLASS(UUnrealCLRManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCLR"), NO_API) \
	DECLARE_SERIALIZER(UUnrealCLRManager)


#define FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRManager_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUUnrealCLRManager(); \
	friend struct Z_Construct_UClass_UUnrealCLRManager_Statics; \
public: \
	DECLARE_CLASS(UUnrealCLRManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCLR"), NO_API) \
	DECLARE_SERIALIZER(UUnrealCLRManager)


#define FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRManager_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealCLRManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealCLRManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealCLRManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealCLRManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnrealCLRManager(UUnrealCLRManager&&); \
	NO_API UUnrealCLRManager(const UUnrealCLRManager&); \
public:


#define FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRManager_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealCLRManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnrealCLRManager(UUnrealCLRManager&&); \
	NO_API UUnrealCLRManager(const UUnrealCLRManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealCLRManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealCLRManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealCLRManager)


#define FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRManager_h_30_PROLOG
#define FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRManager_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRManager_h_32_SPARSE_DATA \
	FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRManager_h_32_RPC_WRAPPERS \
	FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRManager_h_32_INCLASS \
	FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRManager_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRManager_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRManager_h_32_SPARSE_DATA \
	FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRManager_h_32_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRManager_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCLR_API UClass* StaticClass<class UUnrealCLRManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
