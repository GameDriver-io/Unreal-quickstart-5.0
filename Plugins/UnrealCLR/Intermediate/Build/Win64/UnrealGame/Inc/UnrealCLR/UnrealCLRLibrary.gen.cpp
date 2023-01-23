// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCLR/Public/UnrealCLRLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealCLRLibrary() {}
// Cross Module References
	UNREALCLR_API UScriptStruct* Z_Construct_UScriptStruct_FManagedFunction();
	UPackage* Z_Construct_UPackage__Script_UnrealCLR();
	UNREALCLR_API UClass* Z_Construct_UClass_UUnrealCLRLibrary_NoRegister();
	UNREALCLR_API UClass* Z_Construct_UClass_UUnrealCLRLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNREALCLR_API UClass* Z_Construct_UClass_UUnrealCLRCharacter_NoRegister();
	UNREALCLR_API UClass* Z_Construct_UClass_UUnrealCLRCharacter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManagedFunction;
class UScriptStruct* FManagedFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManagedFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManagedFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManagedFunction, Z_Construct_UPackage__Script_UnrealCLR(), TEXT("ManagedFunction"));
	}
	return Z_Registration_Info_UScriptStruct_ManagedFunction.OuterSingleton;
}
template<> UNREALCLR_API UScriptStruct* StaticStruct<FManagedFunction>()
{
	return FManagedFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManagedFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManagedFunction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnrealCLRLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManagedFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManagedFunction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManagedFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCLR,
		nullptr,
		&NewStructOps,
		"ManagedFunction",
		sizeof(FManagedFunction),
		alignof(FManagedFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManagedFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManagedFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_ManagedFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManagedFunction.InnerSingleton, Z_Construct_UScriptStruct_FManagedFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManagedFunction.InnerSingleton;
	}
	DEFINE_FUNCTION(UUnrealCLRLibrary::execFindManagedFunction)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Method);
		P_GET_UBOOL(Z_Param_Optional);
		P_GET_UBOOL_REF(Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FManagedFunction*)Z_Param__Result=UUnrealCLRLibrary::FindManagedFunction(Z_Param_Method,Z_Param_Optional,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealCLRLibrary::execExecuteManagedFunction)
	{
		P_GET_STRUCT(FManagedFunction,Z_Param_ManagedFunction);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUnrealCLRLibrary::ExecuteManagedFunction(Z_Param_ManagedFunction,Z_Param_Object);
		P_NATIVE_END;
	}
	void UUnrealCLRLibrary::StaticRegisterNativesUUnrealCLRLibrary()
	{
		UClass* Class = UUnrealCLRLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteManagedFunction", &UUnrealCLRLibrary::execExecuteManagedFunction },
			{ "FindManagedFunction", &UUnrealCLRLibrary::execFindManagedFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUnrealCLRLibrary_ExecuteManagedFunction_Statics
	{
		struct UnrealCLRLibrary_eventExecuteManagedFunction_Parms
		{
			FManagedFunction ManagedFunction;
			UObject* Object;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ManagedFunction;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnrealCLRLibrary_ExecuteManagedFunction_Statics::NewProp_ManagedFunction = { "ManagedFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRLibrary_eventExecuteManagedFunction_Parms, ManagedFunction), Z_Construct_UScriptStruct_FManagedFunction, METADATA_PARAMS(nullptr, 0) }; // 3882203132
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRLibrary_ExecuteManagedFunction_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRLibrary_eventExecuteManagedFunction_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealCLRLibrary_ExecuteManagedFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRLibrary_ExecuteManagedFunction_Statics::NewProp_ManagedFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRLibrary_ExecuteManagedFunction_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRLibrary_ExecuteManagedFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", ".NET" },
		{ "ModuleRelativePath", "Public/UnrealCLRLibrary.h" },
		{ "ToolTip", "Executes the managed function with optional object reference argument" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealCLRLibrary_ExecuteManagedFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealCLRLibrary, nullptr, "ExecuteManagedFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnrealCLRLibrary_ExecuteManagedFunction_Statics::UnrealCLRLibrary_eventExecuteManagedFunction_Parms), Z_Construct_UFunction_UUnrealCLRLibrary_ExecuteManagedFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRLibrary_ExecuteManagedFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRLibrary_ExecuteManagedFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRLibrary_ExecuteManagedFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealCLRLibrary_ExecuteManagedFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealCLRLibrary_ExecuteManagedFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction_Statics
	{
		struct UnrealCLRLibrary_eventFindManagedFunction_Parms
		{
			FString Method;
			bool Optional;
			bool Result;
			FManagedFunction ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Method;
		static void NewProp_Optional_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Optional;
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRLibrary_eventFindManagedFunction_Parms, Method), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction_Statics::NewProp_Optional_SetBit(void* Obj)
	{
		((UnrealCLRLibrary_eventFindManagedFunction_Parms*)Obj)->Optional = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction_Statics::NewProp_Optional = { "Optional", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UnrealCLRLibrary_eventFindManagedFunction_Parms), &Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction_Statics::NewProp_Optional_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((UnrealCLRLibrary_eventFindManagedFunction_Parms*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UnrealCLRLibrary_eventFindManagedFunction_Parms), &Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRLibrary_eventFindManagedFunction_Parms, ReturnValue), Z_Construct_UScriptStruct_FManagedFunction, METADATA_PARAMS(nullptr, 0) }; // 3882203132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction_Statics::NewProp_Optional,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", ".NET" },
		{ "ModuleRelativePath", "Public/UnrealCLRLibrary.h" },
		{ "ToolTip", "Finds the managed function from loaded assembly, optional parameter suppresses errors if the function was not found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealCLRLibrary, nullptr, "FindManagedFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction_Statics::UnrealCLRLibrary_eventFindManagedFunction_Parms), Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnrealCLRLibrary);
	UClass* Z_Construct_UClass_UUnrealCLRLibrary_NoRegister()
	{
		return UUnrealCLRLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUnrealCLRLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnrealCLRLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCLR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUnrealCLRLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnrealCLRLibrary_ExecuteManagedFunction, "ExecuteManagedFunction" }, // 2010171372
		{ &Z_Construct_UFunction_UUnrealCLRLibrary_FindManagedFunction, "FindManagedFunction" }, // 1064537558
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealCLRLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnrealCLRLibrary.h" },
		{ "ModuleRelativePath", "Public/UnrealCLRLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnrealCLRLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealCLRLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnrealCLRLibrary_Statics::ClassParams = {
		&UUnrealCLRLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUnrealCLRLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealCLRLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnrealCLRLibrary()
	{
		if (!Z_Registration_Info_UClass_UUnrealCLRLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnrealCLRLibrary.OuterSingleton, Z_Construct_UClass_UUnrealCLRLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnrealCLRLibrary.OuterSingleton;
	}
	template<> UNREALCLR_API UClass* StaticClass<UUnrealCLRLibrary>()
	{
		return UUnrealCLRLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealCLRLibrary);
	DEFINE_FUNCTION(UUnrealCLRCharacter::execLanded)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Landed(Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void UUnrealCLRCharacter::StaticRegisterNativesUUnrealCLRCharacter()
	{
		UClass* Class = UUnrealCLRCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Landed", &UUnrealCLRCharacter::execLanded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUnrealCLRCharacter_Landed_Statics
	{
		struct UnrealCLRCharacter_eventLanded_Parms
		{
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRCharacter_Landed_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnrealCLRCharacter_Landed_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRCharacter_eventLanded_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRCharacter_Landed_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRCharacter_Landed_Statics::NewProp_Hit_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealCLRCharacter_Landed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRCharacter_Landed_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRCharacter_Landed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealCLRLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealCLRCharacter_Landed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealCLRCharacter, nullptr, "Landed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnrealCLRCharacter_Landed_Statics::UnrealCLRCharacter_eventLanded_Parms), Z_Construct_UFunction_UUnrealCLRCharacter_Landed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRCharacter_Landed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRCharacter_Landed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRCharacter_Landed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealCLRCharacter_Landed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnrealCLRCharacter_Landed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnrealCLRCharacter);
	UClass* Z_Construct_UClass_UUnrealCLRCharacter_NoRegister()
	{
		return UUnrealCLRCharacter::StaticClass();
	}
	struct Z_Construct_UClass_UUnrealCLRCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnrealCLRCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCLR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUnrealCLRCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnrealCLRCharacter_Landed, "Landed" }, // 4212246690
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealCLRCharacter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnrealCLRLibrary.h" },
		{ "ModuleRelativePath", "Public/UnrealCLRLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnrealCLRCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealCLRCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnrealCLRCharacter_Statics::ClassParams = {
		&UUnrealCLRCharacter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUnrealCLRCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealCLRCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnrealCLRCharacter()
	{
		if (!Z_Registration_Info_UClass_UUnrealCLRCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnrealCLRCharacter.OuterSingleton, Z_Construct_UClass_UUnrealCLRCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnrealCLRCharacter.OuterSingleton;
	}
	template<> UNREALCLR_API UClass* StaticClass<UUnrealCLRCharacter>()
	{
		return UUnrealCLRCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealCLRCharacter);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRLibrary_h_Statics::ScriptStructInfo[] = {
		{ FManagedFunction::StaticStruct, Z_Construct_UScriptStruct_FManagedFunction_Statics::NewStructOps, TEXT("ManagedFunction"), &Z_Registration_Info_UScriptStruct_ManagedFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManagedFunction), 3882203132U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnrealCLRLibrary, UUnrealCLRLibrary::StaticClass, TEXT("UUnrealCLRLibrary"), &Z_Registration_Info_UClass_UUnrealCLRLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnrealCLRLibrary), 945426015U) },
		{ Z_Construct_UClass_UUnrealCLRCharacter, UUnrealCLRCharacter::StaticClass, TEXT("UUnrealCLRCharacter"), &Z_Registration_Info_UClass_UUnrealCLRCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnrealCLRCharacter), 3810349351U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRLibrary_h_669288098(TEXT("/Script/UnrealCLR"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UnrealCLR_Source_UnrealCLR_Public_UnrealCLRLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
