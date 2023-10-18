#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function SimpleUGC.UGCBlueprintLibrary.GetUGCSettings
	 */
	struct UUGCBlueprintLibrary_GetUGCSettings_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUGCSettings*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCBlueprintLibrary.GetUGCRegistry
	 */
	struct UUGCBlueprintLibrary_GetUGCRegistry_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUGCRegistry*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCBlueprintLibrary.GetUGCLatentActionManager
	 */
	struct UUGCBlueprintLibrary_GetUGCLatentActionManager_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUGCLatentActionManager*                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.ModioModInfoWrapper.IsModIdInvalid
	 */
	struct UModioModInfoWrapper_IsModIdInvalid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.ModioTermsWrapper.isEmpty
	 */
	struct UModioTermsWrapper_isEmpty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCLatentActionManager.GetCachedModioModMetaData
	 */
	struct UUGCLatentActionManager_GetCachedModioModMetaData_Params
	{
	public:
		int64_t                                                    ModId;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UModioModInfoWrapper*                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCPackage.GetIdAsString
	 */
	struct UUGCPackage_GetIdAsString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCPackage.GetIdAsInt
	 */
	struct UUGCPackage_GetIdAsInt_Params
	{
	public:
		int64_t                                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCRegistry.UnmountUGCPackages
	 */
	struct UUGCRegistry_UnmountUGCPackages_Params
	{
	public:
		TArray<class FString>                                      ExcludingModIds;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCRegistry.UnmountUGCPackage
	 */
	struct UUGCRegistry_UnmountUGCPackage_Params
	{
	public:
		class UUGCPackage*                                         Package;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       RemoveFromUserSettings;                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       RemoveFromDisk;                                          // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCRegistry.UnmountSandboxUGCPackages
	 */
	struct UUGCRegistry_UnmountSandboxUGCPackages_Params
	{	};

	/**
	 * Function SimpleUGC.UGCRegistry.UnmountAllNonVerifiedUGCPackages
	 */
	struct UUGCRegistry_UnmountAllNonVerifiedUGCPackages_Params
	{	};

	/**
	 * DelegateFunction SimpleUGC.UGCRegistry.UGCPackageMounted__DelegateSignature
	 */
	struct UUGCRegistry_UGCPackageMounted__DelegateSignature_Params
	{
	public:
		bool                                                       Sandbox;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SimpleUGC.UGCRegistry.UGCBlueprintsSpawned__DelegateSignature
	 */
	struct UUGCRegistry_UGCBlueprintsSpawned__DelegateSignature_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCRegistry.TryGetPackageFromId
	 */
	struct UUGCRegistry_TryGetPackageFromId_Params
	{
	public:
		class FString                                              ModId;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUGCPackage*                                         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCRegistry.ResetUGCPackagesManipulatedDuringJoin
	 */
	struct UUGCRegistry_ResetUGCPackagesManipulatedDuringJoin_Params
	{	};

	/**
	 * Function SimpleUGC.UGCRegistry.RegisterAssetFromPackage
	 */
	struct UUGCRegistry_RegisterAssetFromPackage_Params
	{
	public:
		class UUGCPackage*                                         Package;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCRegistry.NumberOfModsInstalled
	 */
	struct UUGCRegistry_NumberOfModsInstalled_Params
	{
	public:
		EUGCApprovalStatus                                         ApprovalStatus;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8YEB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCRegistry.MountUGCPackage
	 */
	struct UUGCRegistry_MountUGCPackage_Params
	{
	public:
		class UUGCPackage*                                         Package;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       FromJoining;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCRegistry.IsModToBeEnabled
	 */
	struct UUGCRegistry_IsModToBeEnabled_Params
	{
	public:
		int64_t                                                    ModId;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCRegistry.IsModInstalledImprecise
	 */
	struct UUGCRegistry_IsModInstalledImprecise_Params
	{
	public:
		class FString                                              ModName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IncludeDeprecatedLocation;                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCRegistry.IsModInstalledByIdOrName
	 */
	struct UUGCRegistry_IsModInstalledByIdOrName_Params
	{
	public:
		class FString                                              ModIdOrName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IncludeDeprecatedLocation;                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCRegistry.IsModInstalled
	 */
	struct UUGCRegistry_IsModInstalled_Params
	{
	public:
		class FString                                              ModId;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCRegistry.IsModEnabled
	 */
	struct UUGCRegistry_IsModEnabled_Params
	{
	public:
		class FString                                              ModId;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCRegistry.GetPackagesWhichDependsOnPackage
	 */
	struct UUGCRegistry_GetPackagesWhichDependsOnPackage_Params
	{
	public:
		class UUGCPackage*                                         Package;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UUGCPackage*>                                 ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCRegistry.GetPackagesSorted
	 */
	struct UUGCRegistry_GetPackagesSorted_Params
	{
	public:
		EPackageSortField                                          ByField;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Ascending;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A1B8[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UUGCPackage*>                                 ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCRegistry.GetMapsInPackage
	 */
	struct UUGCRegistry_GetMapsInPackage_Params
	{
	public:
		class UUGCPackage*                                         Package;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        Maps;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCRegistry.GetAllClassesInPackage
	 */
	struct UUGCRegistry_GetAllClassesInPackage_Params
	{
	public:
		class UUGCPackage*                                         Package;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UClass*>                                      Classes;                                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCRegistry.AreModsInstalled
	 */
	struct UUGCRegistry_AreModsInstalled_Params
	{
	public:
		EUGCApprovalStatus                                         ApprovalStatus;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCRegistry.AreDeprecatedModsInstalled
	 */
	struct UUGCRegistry_AreDeprecatedModsInstalled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSettings.WriteToPlainText
	 */
	struct UUGCSettings_WriteToPlainText_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              TextContent;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                OutError;                                                // 0x0020(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       Append;                                                  // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0039(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SimpleUGC.UGCSettings.UGCSettingsUpdated__DelegateSignature
	 */
	struct UUGCSettings_UGCSettingsUpdated__DelegateSignature_Params
	{	};

	/**
	 * Function SimpleUGC.UGCSettings.SetIconIndexOfSlot
	 */
	struct UUGCSettings_SetIconIndexOfSlot_Params
	{
	public:
		int32_t                                                    SlotNumber;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    iconIndex;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSettings.SaveToSlot
	 */
	struct UUGCSettings_SaveToSlot_Params
	{
	public:
		int32_t                                                    SlotNumber;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSettings.SaveToSelectedSlot
	 */
	struct UUGCSettings_SaveToSelectedSlot_Params
	{	};

	/**
	 * Function SimpleUGC.UGCSettings.ResetSlot
	 */
	struct UUGCSettings_ResetSlot_Params
	{	};

	/**
	 * Function SimpleUGC.UGCSettings.ReadFromPlainText
	 */
	struct UUGCSettings_ReadFromPlainText_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutTextContent;                                          // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSettings.LoadSlot
	 */
	struct UUGCSettings_LoadSlot_Params
	{
	public:
		int32_t                                                    SlotNumber;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSettings.GetModNamesOfSlot
	 */
	struct UUGCSettings_GetModNamesOfSlot_Params
	{
	public:
		int32_t                                                    SlotNumber;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    outNumberOfUnknown;                                      // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSettings.GetModIdsOfSlot
	 */
	struct UUGCSettings_GetModIdsOfSlot_Params
	{
	public:
		int32_t                                                    SlotNumber;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q9GN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSettings.GetIconIndexOfSlot
	 */
	struct UUGCSettings_GetIconIndexOfSlot_Params
	{
	public:
		int32_t                                                    SlotNumber;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSettings.DoesSlotContainMods
	 */
	struct UUGCSettings_DoesSlotContainMods_Params
	{
	public:
		int32_t                                                    SlotNumber;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSettings.ClearSlot
	 */
	struct UUGCSettings_ClearSlot_Params
	{
	public:
		int32_t                                                    SlotNumber;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSettings.CleanupSlots
	 */
	struct UUGCSettings_CleanupSlots_Params
	{	};

	/**
	 * DelegateFunction SimpleUGC.UGCSubsystem.UGRequiredModsFetched__DelegateSignature
	 */
	struct UUGCSubsystem_UGRequiredModsFetched__DelegateSignature_Params
	{
	public:
		TArray<class FString>                                      ModsToEnable;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ModsToInstall;                                           // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SimpleUGC.UGCSubsystem.UGModProgressDone__DelegateSignature
	 */
	struct UUGCSubsystem_UGModProgressDone__DelegateSignature_Params
	{
	public:
		class FString                                              ModName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ModId;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SimpleUGC.UGCSubsystem.UGInstallError__DelegateSignature
	 */
	struct UUGCSubsystem_UGInstallError__DelegateSignature_Params
	{
	public:
		class FString                                              ModName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUGCPackageError                                           ErrorType;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SimpleUGC.UGCSubsystem.UGCRequestHandled__DelegateSignature
	 */
	struct UUGCSubsystem_UGCRequestHandled__DelegateSignature_Params
	{
	public:
		EModioRequestType                                          requestType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SimpleUGC.UGCSubsystem.UGCModProgress__DelegateSignature
	 */
	struct UUGCSubsystem_UGCModProgress__DelegateSignature_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ModsPendingDownload;                                     // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       Downloading;                                             // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LB57[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Progress;                                                // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Total;                                                   // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SimpleUGC.UGCSubsystem.UGCModManagementStateChanged__DelegateSignature
	 */
	struct UUGCSubsystem_UGCModManagementStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SimpleUGC.UGCSubsystem.UGCLocalUserModsInstalled__DelegateSignature
	 */
	struct UUGCSubsystem_UGCLocalUserModsInstalled__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction SimpleUGC.UGCSubsystem.UGCHiddenMods__DelegateSignature
	 */
	struct UUGCSubsystem_UGCHiddenMods__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction SimpleUGC.UGCSubsystem.UGCEscapeMenuOpened__DelegateSignature
	 */
	struct UUGCSubsystem_UGCEscapeMenuOpened__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction SimpleUGC.UGCSubsystem.UGCAuthenticatedModioUser__DelegateSignature
	 */
	struct UUGCSubsystem_UGCAuthenticatedModioUser__DelegateSignature_Params
	{
	public:
		bool                                                       Authenticated;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSubsystem.SetPackagesAsRecentlyInstalled
	 */
	struct UUGCSubsystem_SetPackagesAsRecentlyInstalled_Params
	{
	public:
		TArray<class UUGCPackage*>                                 RecentMods;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSubsystem.SetModsAsRecentlyInstalled
	 */
	struct UUGCSubsystem_SetModsAsRecentlyInstalled_Params
	{
	public:
		TArray<class FString>                                      RecentMods;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSubsystem.SetModidngSettingsMenuEnabled
	 */
	struct UUGCSubsystem_SetModidngSettingsMenuEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSubsystem.SetCheckGameVersion
	 */
	struct UUGCSubsystem_SetCheckGameVersion_Params
	{
	public:
		bool                                                       ShouldCheck;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSubsystem.RemoveRequestOfType
	 */
	struct UUGCSubsystem_RemoveRequestOfType_Params
	{
	public:
		EModioRequestType                                          requestType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSubsystem.MarkRecentlyInstalledModsSuccesful
	 */
	struct UUGCSubsystem_MarkRecentlyInstalledModsSuccesful_Params
	{	};

	/**
	 * Function SimpleUGC.UGCSubsystem.K2_RequestTermsOfUse
	 */
	struct UUGCSubsystem_K2_RequestTermsOfUse_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSubsystem.K2_RequestSubscribe
	 */
	struct UUGCSubsystem_K2_RequestSubscribe_Params
	{
	public:
		class FString                                              ModId;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSubsystem.K2_RequestModThumbnailById
	 */
	struct UUGCSubsystem_K2_RequestModThumbnailById_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              ModId;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSubsystem.K2_RequestModThumbnail
	 */
	struct UUGCSubsystem_K2_RequestModThumbnail_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UUGCPackage*                                         Package;                                                 // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSubsystem.K2_RequestModMetaData
	 */
	struct UUGCSubsystem_K2_RequestModMetaData_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              ModioStringID;                                           // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    ModId;                                                   // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSubsystem.K2_RequestModDependencyList
	 */
	struct UUGCSubsystem_K2_RequestModDependencyList_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              ModId;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              outParentId;                                             // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      outModIds;                                               // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSubsystem.K2_RequestFetchModUpdates
	 */
	struct UUGCSubsystem_K2_RequestFetchModUpdates_Params
	{	};

	/**
	 * Function SimpleUGC.UGCSubsystem.K2_RequestAuthentication
	 */
	struct UUGCSubsystem_K2_RequestAuthentication_Params
	{	};

	/**
	 * Function SimpleUGC.UGCSubsystem.IsModPendingUninstall
	 */
	struct UUGCSubsystem_IsModPendingUninstall_Params
	{
	public:
		class UUGCPackage*                                         InMod;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSubsystem.HasOutstadingRequestOfType
	 */
	struct UUGCSubsystem_HasOutstadingRequestOfType_Params
	{
	public:
		EModioRequestType                                          requestType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSubsystem.GetQueuedModioRequests
	 */
	struct UUGCSubsystem_GetQueuedModioRequests_Params
	{
	public:
		TArray<EModioRequestType>                                  ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSubsystem.GetNamesOfModsPendingUpdate
	 */
	struct UUGCSubsystem_GetNamesOfModsPendingUpdate_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSubsystem.GetNamesOfModsPendingUninstall
	 */
	struct UUGCSubsystem_GetNamesOfModsPendingUninstall_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSubsystem.GetNamesOfModsPendingInstall
	 */
	struct UUGCSubsystem_GetNamesOfModsPendingInstall_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSubsystem.GetModdingSettingsMenuEnabled
	 */
	struct UUGCSubsystem_GetModdingSettingsMenuEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSubsystem.GetCheckGameVersion
	 */
	struct UUGCSubsystem_GetCheckGameVersion_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSubsystem.FetchModsForSession
	 */
	struct UUGCSubsystem_FetchModsForSession_Params
	{
	public:
		TArray<class FString>                                      HostMods;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnModsFetched;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SimpleUGC.UGCSubsystem.EnableModioModManagement
	 */
	struct UUGCSubsystem_EnableModioModManagement_Params
	{	};

	/**
	 * Function SimpleUGC.UGCSubsystem.DisableModioModManagement
	 */
	struct UUGCSubsystem_DisableModioModManagement_Params
	{	};

	/**
	 * Function SimpleUGC.UGCSubsystem.ApplyPendingMods
	 */
	struct UUGCSubsystem_ApplyPendingMods_Params
	{
	public:
		bool                                                       FromJoining;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
