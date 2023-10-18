/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMakeReplaceableActorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMakeReplaceableActorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimpleUGC.MakeReplaceableActorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplacementActorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplacementActorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimpleUGC.ReplacementActorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCBlueprintLibrary.GetUGCSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUGCSettings* UUGCBlueprintLibrary::GetUGCSettings(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCBlueprintLibrary.GetUGCSettings");
		
		UUGCBlueprintLibrary_GetUGCSettings_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCBlueprintLibrary.GetUGCRegistry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUGCRegistry* UUGCBlueprintLibrary::GetUGCRegistry(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCBlueprintLibrary.GetUGCRegistry");
		
		UUGCBlueprintLibrary_GetUGCRegistry_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCBlueprintLibrary.GetUGCLatentActionManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUGCLatentActionManager* UUGCBlueprintLibrary::GetUGCLatentActionManager(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCBlueprintLibrary.GetUGCLatentActionManager");
		
		UUGCBlueprintLibrary_GetUGCLatentActionManager_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUGCBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUGCBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimpleUGC.UGCBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.ModioModInfoWrapper.IsModIdInvalid
	 * 		Flags  -> ()
	 */
	bool UModioModInfoWrapper::IsModIdInvalid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.ModioModInfoWrapper.IsModIdInvalid");
		
		UModioModInfoWrapper_IsModIdInvalid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioModInfoWrapper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioModInfoWrapper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimpleUGC.ModioModInfoWrapper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.ModioTermsWrapper.isEmpty
	 * 		Flags  -> ()
	 */
	bool UModioTermsWrapper::isEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.ModioTermsWrapper.isEmpty");
		
		UModioTermsWrapper_isEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModioTermsWrapper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModioTermsWrapper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimpleUGC.ModioTermsWrapper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCLatentActionManager.GetCachedModioModMetaData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int64_t                                            ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UModioModInfoWrapper* UUGCLatentActionManager::GetCachedModioModMetaData(int64_t ModId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCLatentActionManager.GetCachedModioModMetaData");
		
		UUGCLatentActionManager_GetCachedModioModMetaData_Params params {};
		params.ModId = ModId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUGCLatentActionManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUGCLatentActionManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimpleUGC.UGCLatentActionManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCPackage.GetIdAsString
	 * 		Flags  -> ()
	 */
	class FString UUGCPackage::GetIdAsString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCPackage.GetIdAsString");
		
		UUGCPackage_GetIdAsString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCPackage.GetIdAsInt
	 * 		Flags  -> ()
	 */
	int64_t UUGCPackage::GetIdAsInt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCPackage.GetIdAsInt");
		
		UUGCPackage_GetIdAsInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUGCPackage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUGCPackage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimpleUGC.UGCPackage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCRegistry.UnmountUGCPackages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              ExcludingModIds                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUGCRegistry::UnmountUGCPackages(TArray<class FString> ExcludingModIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCRegistry.UnmountUGCPackages");
		
		UUGCRegistry_UnmountUGCPackages_Params params {};
		params.ExcludingModIds = ExcludingModIds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCRegistry.UnmountUGCPackage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUGCPackage*                                 Package                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               RemoveFromUserSettings                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               RemoveFromDisk                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGCRegistry::UnmountUGCPackage(class UUGCPackage* Package, bool RemoveFromUserSettings, bool RemoveFromDisk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCRegistry.UnmountUGCPackage");
		
		UUGCRegistry_UnmountUGCPackage_Params params {};
		params.Package = Package;
		params.RemoveFromUserSettings = RemoveFromUserSettings;
		params.RemoveFromDisk = RemoveFromDisk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCRegistry.UnmountSandboxUGCPackages
	 * 		Flags  -> ()
	 */
	void UUGCRegistry::UnmountSandboxUGCPackages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCRegistry.UnmountSandboxUGCPackages");
		
		UUGCRegistry_UnmountSandboxUGCPackages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCRegistry.UnmountAllNonVerifiedUGCPackages
	 * 		Flags  -> ()
	 */
	void UUGCRegistry::UnmountAllNonVerifiedUGCPackages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCRegistry.UnmountAllNonVerifiedUGCPackages");
		
		UUGCRegistry_UnmountAllNonVerifiedUGCPackages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction SimpleUGC.UGCRegistry.UGCPackageMounted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Sandbox                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGCRegistry::UGCPackageMounted__DelegateSignature(bool Sandbox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction SimpleUGC.UGCRegistry.UGCPackageMounted__DelegateSignature");
		
		UUGCRegistry_UGCPackageMounted__DelegateSignature_Params params {};
		params.Sandbox = Sandbox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction SimpleUGC.UGCRegistry.UGCBlueprintsSpawned__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGCRegistry::UGCBlueprintsSpawned__DelegateSignature(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction SimpleUGC.UGCRegistry.UGCBlueprintsSpawned__DelegateSignature");
		
		UUGCRegistry_UGCBlueprintsSpawned__DelegateSignature_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCRegistry.TryGetPackageFromId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ModId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUGCPackage* UUGCRegistry::TryGetPackageFromId(const class FString& ModId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCRegistry.TryGetPackageFromId");
		
		UUGCRegistry_TryGetPackageFromId_Params params {};
		params.ModId = ModId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCRegistry.ResetUGCPackagesManipulatedDuringJoin
	 * 		Flags  -> ()
	 */
	void UUGCRegistry::ResetUGCPackagesManipulatedDuringJoin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCRegistry.ResetUGCPackagesManipulatedDuringJoin");
		
		UUGCRegistry_ResetUGCPackagesManipulatedDuringJoin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCRegistry.RegisterAssetFromPackage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUGCPackage*                                 Package                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGCRegistry::RegisterAssetFromPackage(class UUGCPackage* Package)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCRegistry.RegisterAssetFromPackage");
		
		UUGCRegistry_RegisterAssetFromPackage_Params params {};
		params.Package = Package;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCRegistry.NumberOfModsInstalled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUGCApprovalStatus                                 ApprovalStatus                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUGCRegistry::NumberOfModsInstalled(EUGCApprovalStatus ApprovalStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCRegistry.NumberOfModsInstalled");
		
		UUGCRegistry_NumberOfModsInstalled_Params params {};
		params.ApprovalStatus = ApprovalStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCRegistry.MountUGCPackage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUGCPackage*                                 Package                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               FromJoining                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGCRegistry::MountUGCPackage(class UUGCPackage* Package, bool FromJoining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCRegistry.MountUGCPackage");
		
		UUGCRegistry_MountUGCPackage_Params params {};
		params.Package = Package;
		params.FromJoining = FromJoining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCRegistry.IsModToBeEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int64_t                                            ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGCRegistry::IsModToBeEnabled(int64_t ModId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCRegistry.IsModToBeEnabled");
		
		UUGCRegistry_IsModToBeEnabled_Params params {};
		params.ModId = ModId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCRegistry.IsModInstalledImprecise
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ModName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IncludeDeprecatedLocation                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGCRegistry::IsModInstalledImprecise(const class FString& ModName, bool IncludeDeprecatedLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCRegistry.IsModInstalledImprecise");
		
		UUGCRegistry_IsModInstalledImprecise_Params params {};
		params.ModName = ModName;
		params.IncludeDeprecatedLocation = IncludeDeprecatedLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCRegistry.IsModInstalledByIdOrName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ModIdOrName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IncludeDeprecatedLocation                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGCRegistry::IsModInstalledByIdOrName(const class FString& ModIdOrName, bool IncludeDeprecatedLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCRegistry.IsModInstalledByIdOrName");
		
		UUGCRegistry_IsModInstalledByIdOrName_Params params {};
		params.ModIdOrName = ModIdOrName;
		params.IncludeDeprecatedLocation = IncludeDeprecatedLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCRegistry.IsModInstalled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ModId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGCRegistry::IsModInstalled(const class FString& ModId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCRegistry.IsModInstalled");
		
		UUGCRegistry_IsModInstalled_Params params {};
		params.ModId = ModId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCRegistry.IsModEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ModId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGCRegistry::IsModEnabled(const class FString& ModId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCRegistry.IsModEnabled");
		
		UUGCRegistry_IsModEnabled_Params params {};
		params.ModId = ModId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCRegistry.GetPackagesWhichDependsOnPackage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUGCPackage*                                 Package                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UUGCPackage*> UUGCRegistry::GetPackagesWhichDependsOnPackage(class UUGCPackage* Package)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCRegistry.GetPackagesWhichDependsOnPackage");
		
		UUGCRegistry_GetPackagesWhichDependsOnPackage_Params params {};
		params.Package = Package;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCRegistry.GetPackagesSorted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPackageSortField                                  ByField                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Ascending                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UUGCPackage*> UUGCRegistry::GetPackagesSorted(EPackageSortField ByField, bool Ascending)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCRegistry.GetPackagesSorted");
		
		UUGCRegistry_GetPackagesSorted_Params params {};
		params.ByField = ByField;
		params.Ascending = Ascending;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCRegistry.GetMapsInPackage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUGCPackage*                                 Package                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                Maps                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUGCRegistry::GetMapsInPackage(class UUGCPackage* Package, TArray<class FName>* Maps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCRegistry.GetMapsInPackage");
		
		UUGCRegistry_GetMapsInPackage_Params params {};
		params.Package = Package;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Maps != nullptr)
			*Maps = params.Maps;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCRegistry.GetAllClassesInPackage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUGCPackage*                                 Package                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UClass*>                              Classes                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUGCRegistry::GetAllClassesInPackage(class UUGCPackage* Package, TArray<class UClass*>* Classes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCRegistry.GetAllClassesInPackage");
		
		UUGCRegistry_GetAllClassesInPackage_Params params {};
		params.Package = Package;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Classes != nullptr)
			*Classes = params.Classes;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCRegistry.AreModsInstalled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUGCApprovalStatus                                 ApprovalStatus                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGCRegistry::AreModsInstalled(EUGCApprovalStatus ApprovalStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCRegistry.AreModsInstalled");
		
		UUGCRegistry_AreModsInstalled_Params params {};
		params.ApprovalStatus = ApprovalStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCRegistry.AreDeprecatedModsInstalled
	 * 		Flags  -> ()
	 */
	bool UUGCRegistry::AreDeprecatedModsInstalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCRegistry.AreDeprecatedModsInstalled");
		
		UUGCRegistry_AreDeprecatedModsInstalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUGCRegistry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUGCRegistry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimpleUGC.UGCRegistry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSettings.WriteToPlainText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TextContent                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        OutError                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               Append                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGCSettings::WriteToPlainText(const class FString& Filename, const class FString& TextContent, class FText* OutError, bool Append)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSettings.WriteToPlainText");
		
		UUGCSettings_WriteToPlainText_Params params {};
		params.Filename = Filename;
		params.TextContent = TextContent;
		params.Append = Append;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutError != nullptr)
			*OutError = params.OutError;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction SimpleUGC.UGCSettings.UGCSettingsUpdated__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUGCSettings::UGCSettingsUpdated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction SimpleUGC.UGCSettings.UGCSettingsUpdated__DelegateSignature");
		
		UUGCSettings_UGCSettingsUpdated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSettings.SetIconIndexOfSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            iconIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGCSettings::SetIconIndexOfSlot(int32_t SlotNumber, int32_t iconIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSettings.SetIconIndexOfSlot");
		
		UUGCSettings_SetIconIndexOfSlot_Params params {};
		params.SlotNumber = SlotNumber;
		params.iconIndex = iconIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSettings.SaveToSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGCSettings::SaveToSlot(int32_t SlotNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSettings.SaveToSlot");
		
		UUGCSettings_SaveToSlot_Params params {};
		params.SlotNumber = SlotNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSettings.SaveToSelectedSlot
	 * 		Flags  -> ()
	 */
	void UUGCSettings::SaveToSelectedSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSettings.SaveToSelectedSlot");
		
		UUGCSettings_SaveToSelectedSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSettings.ResetSlot
	 * 		Flags  -> ()
	 */
	void UUGCSettings::ResetSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSettings.ResetSlot");
		
		UUGCSettings_ResetSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSettings.ReadFromPlainText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutTextContent                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGCSettings::ReadFromPlainText(const class FString& Filename, class FString* OutTextContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSettings.ReadFromPlainText");
		
		UUGCSettings_ReadFromPlainText_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTextContent != nullptr)
			*OutTextContent = params.OutTextContent;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSettings.LoadSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGCSettings::LoadSlot(int32_t SlotNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSettings.LoadSlot");
		
		UUGCSettings_LoadSlot_Params params {};
		params.SlotNumber = SlotNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSettings.GetModNamesOfSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            outNumberOfUnknown                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UUGCSettings::GetModNamesOfSlot(int32_t SlotNumber, int32_t* outNumberOfUnknown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSettings.GetModNamesOfSlot");
		
		UUGCSettings_GetModNamesOfSlot_Params params {};
		params.SlotNumber = SlotNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outNumberOfUnknown != nullptr)
			*outNumberOfUnknown = params.outNumberOfUnknown;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSettings.GetModIdsOfSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UUGCSettings::GetModIdsOfSlot(int32_t SlotNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSettings.GetModIdsOfSlot");
		
		UUGCSettings_GetModIdsOfSlot_Params params {};
		params.SlotNumber = SlotNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSettings.GetIconIndexOfSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUGCSettings::GetIconIndexOfSlot(int32_t SlotNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSettings.GetIconIndexOfSlot");
		
		UUGCSettings_GetIconIndexOfSlot_Params params {};
		params.SlotNumber = SlotNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSettings.DoesSlotContainMods
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGCSettings::DoesSlotContainMods(int32_t SlotNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSettings.DoesSlotContainMods");
		
		UUGCSettings_DoesSlotContainMods_Params params {};
		params.SlotNumber = SlotNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSettings.ClearSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGCSettings::ClearSlot(int32_t SlotNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSettings.ClearSlot");
		
		UUGCSettings_ClearSlot_Params params {};
		params.SlotNumber = SlotNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSettings.CleanupSlots
	 * 		Flags  -> ()
	 */
	void UUGCSettings::CleanupSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSettings.CleanupSlots");
		
		UUGCSettings_CleanupSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUGCSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUGCSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimpleUGC.UGCSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction SimpleUGC.UGCSubsystem.UGRequiredModsFetched__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              ModsToEnable                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              ModsToInstall                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUGCSubsystem::UGRequiredModsFetched__DelegateSignature(TArray<class FString> ModsToEnable, TArray<class FString> ModsToInstall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction SimpleUGC.UGCSubsystem.UGRequiredModsFetched__DelegateSignature");
		
		UUGCSubsystem_UGRequiredModsFetched__DelegateSignature_Params params {};
		params.ModsToEnable = ModsToEnable;
		params.ModsToInstall = ModsToInstall;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction SimpleUGC.UGCSubsystem.UGModProgressDone__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ModName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ModId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGCSubsystem::UGModProgressDone__DelegateSignature(const class FString& ModName, const class FString& ModId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction SimpleUGC.UGCSubsystem.UGModProgressDone__DelegateSignature");
		
		UUGCSubsystem_UGModProgressDone__DelegateSignature_Params params {};
		params.ModName = ModName;
		params.ModId = ModId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction SimpleUGC.UGCSubsystem.UGInstallError__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ModName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUGCPackageError                                   ErrorType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGCSubsystem::UGInstallError__DelegateSignature(const class FString& ModName, EUGCPackageError ErrorType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction SimpleUGC.UGCSubsystem.UGInstallError__DelegateSignature");
		
		UUGCSubsystem_UGInstallError__DelegateSignature_Params params {};
		params.ModName = ModName;
		params.ErrorType = ErrorType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction SimpleUGC.UGCSubsystem.UGCRequestHandled__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EModioRequestType                                  requestType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGCSubsystem::UGCRequestHandled__DelegateSignature(EModioRequestType requestType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction SimpleUGC.UGCSubsystem.UGCRequestHandled__DelegateSignature");
		
		UUGCSubsystem_UGCRequestHandled__DelegateSignature_Params params {};
		params.requestType = requestType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction SimpleUGC.UGCSubsystem.UGCModProgress__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              ModsPendingDownload                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               Downloading                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Total                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGCSubsystem::UGCModProgress__DelegateSignature(const class FString& Name, TArray<class FString> ModsPendingDownload, bool Downloading, int32_t Progress, int32_t Total)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction SimpleUGC.UGCSubsystem.UGCModProgress__DelegateSignature");
		
		UUGCSubsystem_UGCModProgress__DelegateSignature_Params params {};
		params.Name = Name;
		params.ModsPendingDownload = ModsPendingDownload;
		params.Downloading = Downloading;
		params.Progress = Progress;
		params.Total = Total;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction SimpleUGC.UGCSubsystem.UGCModManagementStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGCSubsystem::UGCModManagementStateChanged__DelegateSignature(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction SimpleUGC.UGCSubsystem.UGCModManagementStateChanged__DelegateSignature");
		
		UUGCSubsystem_UGCModManagementStateChanged__DelegateSignature_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction SimpleUGC.UGCSubsystem.UGCLocalUserModsInstalled__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUGCSubsystem::UGCLocalUserModsInstalled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction SimpleUGC.UGCSubsystem.UGCLocalUserModsInstalled__DelegateSignature");
		
		UUGCSubsystem_UGCLocalUserModsInstalled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction SimpleUGC.UGCSubsystem.UGCHiddenMods__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUGCSubsystem::UGCHiddenMods__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction SimpleUGC.UGCSubsystem.UGCHiddenMods__DelegateSignature");
		
		UUGCSubsystem_UGCHiddenMods__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction SimpleUGC.UGCSubsystem.UGCEscapeMenuOpened__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUGCSubsystem::UGCEscapeMenuOpened__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction SimpleUGC.UGCSubsystem.UGCEscapeMenuOpened__DelegateSignature");
		
		UUGCSubsystem_UGCEscapeMenuOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction SimpleUGC.UGCSubsystem.UGCAuthenticatedModioUser__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Authenticated                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGCSubsystem::UGCAuthenticatedModioUser__DelegateSignature(bool Authenticated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction SimpleUGC.UGCSubsystem.UGCAuthenticatedModioUser__DelegateSignature");
		
		UUGCSubsystem_UGCAuthenticatedModioUser__DelegateSignature_Params params {};
		params.Authenticated = Authenticated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.SetPackagesAsRecentlyInstalled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UUGCPackage*>                         RecentMods                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUGCSubsystem::SetPackagesAsRecentlyInstalled(TArray<class UUGCPackage*> RecentMods)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.SetPackagesAsRecentlyInstalled");
		
		UUGCSubsystem_SetPackagesAsRecentlyInstalled_Params params {};
		params.RecentMods = RecentMods;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.SetModsAsRecentlyInstalled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              RecentMods                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUGCSubsystem::SetModsAsRecentlyInstalled(TArray<class FString> RecentMods)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.SetModsAsRecentlyInstalled");
		
		UUGCSubsystem_SetModsAsRecentlyInstalled_Params params {};
		params.RecentMods = RecentMods;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.SetModidngSettingsMenuEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGCSubsystem::SetModidngSettingsMenuEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.SetModidngSettingsMenuEnabled");
		
		UUGCSubsystem_SetModidngSettingsMenuEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.SetCheckGameVersion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldCheck                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGCSubsystem::SetCheckGameVersion(bool ShouldCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.SetCheckGameVersion");
		
		UUGCSubsystem_SetCheckGameVersion_Params params {};
		params.ShouldCheck = ShouldCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.RemoveRequestOfType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EModioRequestType                                  requestType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGCSubsystem::RemoveRequestOfType(EModioRequestType requestType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.RemoveRequestOfType");
		
		UUGCSubsystem_RemoveRequestOfType_Params params {};
		params.requestType = requestType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.MarkRecentlyInstalledModsSuccesful
	 * 		Flags  -> ()
	 */
	void UUGCSubsystem::MarkRecentlyInstalledModsSuccesful()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.MarkRecentlyInstalledModsSuccesful");
		
		UUGCSubsystem_MarkRecentlyInstalledModsSuccesful_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.K2_RequestTermsOfUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUGCSubsystem::K2_RequestTermsOfUse(class UObject* WorldContext, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.K2_RequestTermsOfUse");
		
		UUGCSubsystem_K2_RequestTermsOfUse_Params params {};
		params.WorldContext = WorldContext;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.K2_RequestSubscribe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ModId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGCSubsystem::K2_RequestSubscribe(const class FString& ModId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.K2_RequestSubscribe");
		
		UUGCSubsystem_K2_RequestSubscribe_Params params {};
		params.ModId = ModId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.K2_RequestModThumbnailById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ModId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGCSubsystem::K2_RequestModThumbnailById(class UObject* WorldContext, const struct FLatentActionInfo& LatentInfo, const class FString& ModId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.K2_RequestModThumbnailById");
		
		UUGCSubsystem_K2_RequestModThumbnailById_Params params {};
		params.WorldContext = WorldContext;
		params.LatentInfo = LatentInfo;
		params.ModId = ModId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.K2_RequestModThumbnail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UUGCPackage*                                 Package                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGCSubsystem::K2_RequestModThumbnail(class UObject* WorldContext, const struct FLatentActionInfo& LatentInfo, class UUGCPackage* Package)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.K2_RequestModThumbnail");
		
		UUGCSubsystem_K2_RequestModThumbnail_Params params {};
		params.WorldContext = WorldContext;
		params.LatentInfo = LatentInfo;
		params.Package = Package;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.K2_RequestModMetaData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ModioStringID                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            ModId                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGCSubsystem::K2_RequestModMetaData(class UObject* WorldContext, const struct FLatentActionInfo& LatentInfo, const class FString& ModioStringID, int64_t* ModId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.K2_RequestModMetaData");
		
		UUGCSubsystem_K2_RequestModMetaData_Params params {};
		params.WorldContext = WorldContext;
		params.LatentInfo = LatentInfo;
		params.ModioStringID = ModioStringID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModId != nullptr)
			*ModId = params.ModId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.K2_RequestModDependencyList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ModId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      outParentId                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              outModIds                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUGCSubsystem::K2_RequestModDependencyList(class UObject* WorldContext, const struct FLatentActionInfo& LatentInfo, const class FString& ModId, class FString* outParentId, TArray<class FString>* outModIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.K2_RequestModDependencyList");
		
		UUGCSubsystem_K2_RequestModDependencyList_Params params {};
		params.WorldContext = WorldContext;
		params.LatentInfo = LatentInfo;
		params.ModId = ModId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outParentId != nullptr)
			*outParentId = params.outParentId;
		if (outModIds != nullptr)
			*outModIds = params.outModIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.K2_RequestFetchModUpdates
	 * 		Flags  -> ()
	 */
	void UUGCSubsystem::K2_RequestFetchModUpdates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.K2_RequestFetchModUpdates");
		
		UUGCSubsystem_K2_RequestFetchModUpdates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.K2_RequestAuthentication
	 * 		Flags  -> ()
	 */
	void UUGCSubsystem::K2_RequestAuthentication()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.K2_RequestAuthentication");
		
		UUGCSubsystem_K2_RequestAuthentication_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.IsModPendingUninstall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUGCPackage*                                 InMod                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGCSubsystem::IsModPendingUninstall(class UUGCPackage* InMod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.IsModPendingUninstall");
		
		UUGCSubsystem_IsModPendingUninstall_Params params {};
		params.InMod = InMod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.HasOutstadingRequestOfType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EModioRequestType                                  requestType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGCSubsystem::HasOutstadingRequestOfType(EModioRequestType requestType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.HasOutstadingRequestOfType");
		
		UUGCSubsystem_HasOutstadingRequestOfType_Params params {};
		params.requestType = requestType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.GetQueuedModioRequests
	 * 		Flags  -> ()
	 */
	TArray<EModioRequestType> UUGCSubsystem::GetQueuedModioRequests()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.GetQueuedModioRequests");
		
		UUGCSubsystem_GetQueuedModioRequests_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.GetNamesOfModsPendingUpdate
	 * 		Flags  -> ()
	 */
	TArray<class FString> UUGCSubsystem::GetNamesOfModsPendingUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.GetNamesOfModsPendingUpdate");
		
		UUGCSubsystem_GetNamesOfModsPendingUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.GetNamesOfModsPendingUninstall
	 * 		Flags  -> ()
	 */
	TArray<class FString> UUGCSubsystem::GetNamesOfModsPendingUninstall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.GetNamesOfModsPendingUninstall");
		
		UUGCSubsystem_GetNamesOfModsPendingUninstall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.GetNamesOfModsPendingInstall
	 * 		Flags  -> ()
	 */
	TArray<class FString> UUGCSubsystem::GetNamesOfModsPendingInstall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.GetNamesOfModsPendingInstall");
		
		UUGCSubsystem_GetNamesOfModsPendingInstall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.GetModdingSettingsMenuEnabled
	 * 		Flags  -> ()
	 */
	bool UUGCSubsystem::GetModdingSettingsMenuEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.GetModdingSettingsMenuEnabled");
		
		UUGCSubsystem_GetModdingSettingsMenuEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.GetCheckGameVersion
	 * 		Flags  -> ()
	 */
	bool UUGCSubsystem::GetCheckGameVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.GetCheckGameVersion");
		
		UUGCSubsystem_GetCheckGameVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.FetchModsForSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              HostMods                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnModsFetched                                              (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUGCSubsystem::FetchModsForSession(TArray<class FString> HostMods, const class FScriptDelegate& OnModsFetched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.FetchModsForSession");
		
		UUGCSubsystem_FetchModsForSession_Params params {};
		params.HostMods = HostMods;
		params.OnModsFetched = OnModsFetched;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.EnableModioModManagement
	 * 		Flags  -> ()
	 */
	void UUGCSubsystem::EnableModioModManagement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.EnableModioModManagement");
		
		UUGCSubsystem_EnableModioModManagement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.DisableModioModManagement
	 * 		Flags  -> ()
	 */
	void UUGCSubsystem::DisableModioModManagement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.DisableModioModManagement");
		
		UUGCSubsystem_DisableModioModManagement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SimpleUGC.UGCSubsystem.ApplyPendingMods
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FromJoining                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGCSubsystem::ApplyPendingMods(bool FromJoining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SimpleUGC.UGCSubsystem.ApplyPendingMods");
		
		UUGCSubsystem_ApplyPendingMods_Params params {};
		params.FromJoining = FromJoining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUGCSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUGCSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SimpleUGC.UGCSubsystem");
		return ptr;
	}

}


