// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/m2uFbxFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodem2uFbxFactory() {}
// Cross Module References
	M2UPLUGIN_API UClass* Z_Construct_UClass_Um2uFbxFactory_NoRegister();
	M2UPLUGIN_API UClass* Z_Construct_UClass_Um2uFbxFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFbxFactory();
	UPackage* Z_Construct_UPackage__Script_m2uPlugin();
// End Cross Module References
	void Um2uFbxFactory::StaticRegisterNativesUm2uFbxFactory()
	{
	}
	UClass* Z_Construct_UClass_Um2uFbxFactory_NoRegister()
	{
		return Um2uFbxFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_Um2uFbxFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UFbxFactory,
				(UObject* (*)())Z_Construct_UPackage__Script_m2uPlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "m2uFbxFactory.h" },
				{ "ModuleRelativePath", "Classes/m2uFbxFactory.h" },
				{ "ToolTip", "This is a \"silent\" FBX-factory which won't generate a popup dialog to ask for\noptions.\nThe default FBX-factory can't be told to not do that, because everything is\nprotected, unaccesible and hard coded to be intertwined with the UI.\nThe import settings data is stored in the UI and can only be changed from within\nthe class.\nThe only way around showing the UI would be to set GIsAutomationTesting true.\nThat may have side effects I don't know about...\n\nBy telling the import-operations to use THIS factory instead, we can silence the\nimport and even extend it to set ImportOptions programmatically, from command\nvalues, if we see the need for that.\n\n\nHow importing works (for reference if I have to look something up again):\n- The import process creates a Factory for the Filetype, checks if there\n  already exists an object where the Factory would create on. If so, dialogs for\n     user response are created.\n- The import process calls UFactory::StaticImportObject and provides the Factory\n  with which to create the Object. If no Factory is provided, UFactory will find\n     one automatically. (For the Content Browser the import process starts in\n     FAssetTools::ImportAssets)\n- Then UFactory does some evaluation about the File from which to import, if the\n  provided Factory reads binary or text and so on.\n     It will finally call Factory->FactoryCreateBinary\n- The (Fbx)Factory then will then detect the type to import (StaticMesh or SkelMesh)\n  It will create the UI where the User can set Flags.\n     And finally import the File (from UFactory::CurrentFilename) with the FFbxImporter" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<Um2uFbxFactory>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&Um2uFbxFactory::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Um2uFbxFactory, 541506617);
	static FCompiledInDefer Z_CompiledInDefer_UClass_Um2uFbxFactory(Z_Construct_UClass_Um2uFbxFactory, &Um2uFbxFactory::StaticClass, TEXT("/Script/m2uPlugin"), TEXT("Um2uFbxFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Um2uFbxFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
