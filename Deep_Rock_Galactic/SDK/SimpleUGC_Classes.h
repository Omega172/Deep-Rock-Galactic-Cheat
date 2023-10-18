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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class SimpleUGC.MakeReplaceableActorComponent
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UMakeReplaceableActorComponent : public UActorComponent
	{
	public:
		class UClass*                                              CompatibleReplacement;                                   // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimpleUGC.ReplacementActorComponent
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class UReplacementActorComponent : public UActorComponent
	{
	public:
		TArray<class UClass*>                                      ActorClassesToReplace;                                   // 0x00B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimpleUGC.UGCBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUGCBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UUGCSettings* GetUGCSettings(class UObject* WorldContextObject);
		class UUGCRegistry* GetUGCRegistry(class UObject* WorldContextObject);
		class UUGCLatentActionManager* GetUGCLatentActionManager(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class SimpleUGC.ModioModInfoWrapper
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UModioModInfoWrapper : public UObject
	{
	public:
		class FString                                              ModId;                                                   // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModName;                                                 // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModURL;                                                  // 0x0048(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModAuthor;                                               // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModVersion;                                              // 0x0068(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModDescription;                                          // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUGCApprovalStatus                                         Status;                                                  // 0x0088(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GHFY[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)

	public:
		bool IsModIdInvalid();
		static UClass* StaticClass();
	};

	/**
	 * Class SimpleUGC.ModioTermsWrapper
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UModioTermsWrapper : public UObject
	{
	public:
		class FString                                              AgreeButtonText;                                         // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisagreeButtonText;                                      // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TermsLink;                                               // 0x0048(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TermsText;                                               // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PrivacyLink;                                             // 0x0068(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PrivacyText;                                             // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TermsOfUseText;                                          // 0x0088(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		bool isEmpty();
		static UClass* StaticClass();
	};

	/**
	 * Class SimpleUGC.UGCLatentActionManager
	 * Size -> 0x01F0 (FullSize[0x0218] - InheritedSize[0x0028])
	 */
	class UUGCLatentActionManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_WJZE[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UModioTermsWrapper>                   LatestModioTermsAndConditions;                           // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LHB2[0x50];                                  // 0x0038(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int64_t, class UModioModInfoWrapper*>                 ModioModMetaDatas;                                       // 0x0088(0x0050) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PPRM[0x50];                                  // 0x00D8(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int64_t, class UTexture2DDynamic*>                    ModioModThumbnails;                                      // 0x0128(0x0050) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K0O2[0xA0];                                  // 0x0178(0x00A0) MISSED OFFSET (PADDING)

	public:
		class UModioModInfoWrapper* GetCachedModioModMetaData(int64_t ModId);
		static UClass* StaticClass();
	};

	/**
	 * Class SimpleUGC.UGCPackage
	 * Size -> 0x0100 (FullSize[0x0128] - InheritedSize[0x0028])
	 */
	class UUGCPackage : public UObject
	{
	public:
		unsigned char                                              UnknownData_D1NT[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModURL;                                                  // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Categories;                                              // 0x0060(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUGCApprovalStatus                                         Status;                                                  // 0x0070(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUGCDownloadVersion                                        DownloadVersion;                                         // 0x0071(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q531[0x6];                                   // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ModPath;                                                 // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PakFileLocation;                                         // 0x0088(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      PakFileAssets;                                           // 0x0098(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VEIM[0x20];                                  // 0x00A8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Author;                                                  // 0x00C8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AuthorURL;                                               // 0x00D8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x00E8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_96M4[0x4];                                   // 0x00F8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       IsMounted;                                               // 0x00FC(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MountingToBeApplied;                                     // 0x00FD(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DeprecatedLocation;                                      // 0x00FE(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O765[0x1];                                   // 0x00FF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       ShowStatusForAudioCosmetic;                              // 0x0100(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D9Q7[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int64_t>                                            Dependencies;                                            // 0x0108(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       DependencyRemoved;                                       // 0x0118(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PackagedForLatestVersion;                                // 0x0119(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverridePackedForLatestVersion;                          // 0x011A(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ITHI[0x5];                                   // 0x011B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           LastUpdated;                                             // 0x0120(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class FString GetIdAsString();
		int64_t GetIdAsInt();
		static UClass* StaticClass();
	};

	/**
	 * Class SimpleUGC.UGCRegistry
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UUGCRegistry : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnPackageMounted;                                        // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<class UUGCPackage*>                                 UGCPackages;                                             // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class UClass*, class UClass*>                         RegisteredOverrides;                                     // 0x0048(0x0050) BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       PackageChange;                                           // 0x0098(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_60JC[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnBlueprintsSpawned;                                     // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B9Z0[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUGCPackage*>                                 UGCPackagesInstalledDuringJoin;                          // 0x00C0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UUGCPackage*>                                 UGCPackagesUnmountedDuringJoin;                          // 0x00D0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NZMR[0x18];                                  // 0x00E0(0x0018) MISSED OFFSET (PADDING)

	public:
		void UnmountUGCPackages(TArray<class FString> ExcludingModIds);
		bool UnmountUGCPackage(class UUGCPackage* Package, bool RemoveFromUserSettings, bool RemoveFromDisk);
		void UnmountSandboxUGCPackages();
		void UnmountAllNonVerifiedUGCPackages();
		void UGCPackageMounted__DelegateSignature(bool Sandbox);
		void UGCBlueprintsSpawned__DelegateSignature(int32_t Count);
		class UUGCPackage* TryGetPackageFromId(const class FString& ModId);
		void ResetUGCPackagesManipulatedDuringJoin();
		void RegisterAssetFromPackage(class UUGCPackage* Package);
		int32_t NumberOfModsInstalled(EUGCApprovalStatus ApprovalStatus);
		bool MountUGCPackage(class UUGCPackage* Package, bool FromJoining);
		bool IsModToBeEnabled(int64_t ModId);
		bool IsModInstalledImprecise(const class FString& ModName, bool IncludeDeprecatedLocation);
		bool IsModInstalledByIdOrName(const class FString& ModIdOrName, bool IncludeDeprecatedLocation);
		bool IsModInstalled(const class FString& ModId);
		bool IsModEnabled(const class FString& ModId);
		TArray<class UUGCPackage*> GetPackagesWhichDependsOnPackage(class UUGCPackage* Package);
		TArray<class UUGCPackage*> GetPackagesSorted(EPackageSortField ByField, bool Ascending);
		bool GetMapsInPackage(class UUGCPackage* Package, TArray<class FName>* Maps);
		bool GetAllClassesInPackage(class UUGCPackage* Package, TArray<class UClass*>* Classes);
		bool AreModsInstalled(EUGCApprovalStatus ApprovalStatus);
		bool AreDeprecatedModsInstalled();
		static UClass* StaticClass();
	};

	/**
	 * Class SimpleUGC.UGCSettings
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UUGCSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_M45L[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      slot1;                                                   // 0x0038(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		int32_t                                                    slot1Icon;                                               // 0x0048(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8X3N[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      slot2;                                                   // 0x0050(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		int32_t                                                    slot2Icon;                                               // 0x0060(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BHSC[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      slot3;                                                   // 0x0068(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		int32_t                                                    slot3Icon;                                               // 0x0078(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VINB[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      slot4;                                                   // 0x0080(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		int32_t                                                    slot4Icon;                                               // 0x0090(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    SelectedSlot;                                            // 0x0094(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CZ15[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSettingsUpdated;                                       // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		bool WriteToPlainText(const class FString& Filename, const class FString& TextContent, class FText* OutError, bool Append);
		void UGCSettingsUpdated__DelegateSignature();
		void SetIconIndexOfSlot(int32_t SlotNumber, int32_t iconIndex);
		void SaveToSlot(int32_t SlotNumber);
		void SaveToSelectedSlot();
		void ResetSlot();
		bool ReadFromPlainText(const class FString& Filename, class FString* OutTextContent);
		bool LoadSlot(int32_t SlotNumber);
		TArray<class FString> GetModNamesOfSlot(int32_t SlotNumber, int32_t* outNumberOfUnknown);
		TArray<class FString> GetModIdsOfSlot(int32_t SlotNumber);
		int32_t GetIconIndexOfSlot(int32_t SlotNumber);
		bool DoesSlotContainMods(int32_t SlotNumber);
		void ClearSlot(int32_t SlotNumber);
		void CleanupSlots();
		static UClass* StaticClass();
	};

	/**
	 * Class SimpleUGC.UGCSubsystem
	 * Size -> 0x0238 (FullSize[0x0268] - InheritedSize[0x0030])
	 */
	class UUGCSubsystem : public UEngineSubsystem
	{
	public:
		bool                                                       forceNoMods;                                             // 0x0030(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       noInternetAccess;                                        // 0x0031(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       noModioUser;                                             // 0x0032(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9K28[0x1];                                   // 0x0033(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       IsJoining;                                               // 0x0034(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AU21[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUGCRegistry*                                        UGCRegistry;                                             // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUGCSettings*                                        UGCSettings;                                             // 0x0040(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUGCLatentActionManager*                             UGCLatentActionManager;                                  // 0x0048(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ModioTermsAndConditionsAccepted;                         // 0x0050(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VJ4R[0x17];                                  // 0x0051(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnModioUserAuthenticated;                                // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnErrorInstalling;                                       // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TMap<class FString, EUGCPackageError>                      ModsFailedInstall;                                       // 0x0088(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnModDownloadExtractProgress;                            // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnModDownloadExtractProgressFinished;                    // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnModUninstallProgressFinished;                          // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnModManagementStateChanged;                             // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       IsModioModManagementEnabled;                             // 0x0118(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HZ0R[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLocalUserModsInstalled;                                // 0x0120(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       IsLocalUserModsInstalled;                                // 0x0130(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T2LN[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnEscapeMenuOpened;                                      // 0x0138(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnModioRequestHandled;                                   // 0x0148(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<class FString>                                      CrashingDisabledMods;                                    // 0x0158(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_21D6[0x70];                                  // 0x0168(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUGCPackage*>                                 ModsPendingUninstall;                                    // 0x01D8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UUGCPackage*>                                 ModsPendingUpdate;                                       // 0x01E8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KK46[0x18];                                  // 0x01F8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EModioRequestType>                                  ModioRequests;                                           // 0x0210(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<int64_t>                                            ModioSubscribeRequestsIds;                               // 0x0220(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<int64_t>                                            ModioSubscribeDependecyRequestsIds;                      // 0x0230(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<int64_t>                                            ModioAddDependecyRequestsIds;                            // 0x0240(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BZM9[0x18];                                  // 0x0250(0x0018) MISSED OFFSET (PADDING)

	public:
		void UGRequiredModsFetched__DelegateSignature(TArray<class FString> ModsToEnable, TArray<class FString> ModsToInstall);
		void UGModProgressDone__DelegateSignature(const class FString& ModName, const class FString& ModId);
		void UGInstallError__DelegateSignature(const class FString& ModName, EUGCPackageError ErrorType);
		void UGCRequestHandled__DelegateSignature(EModioRequestType requestType);
		void UGCModProgress__DelegateSignature(const class FString& Name, TArray<class FString> ModsPendingDownload, bool Downloading, int32_t Progress, int32_t Total);
		void UGCModManagementStateChanged__DelegateSignature(bool Enabled);
		void UGCLocalUserModsInstalled__DelegateSignature();
		void UGCHiddenMods__DelegateSignature();
		void UGCEscapeMenuOpened__DelegateSignature();
		void UGCAuthenticatedModioUser__DelegateSignature(bool Authenticated);
		void SetPackagesAsRecentlyInstalled(TArray<class UUGCPackage*> RecentMods);
		void SetModsAsRecentlyInstalled(TArray<class FString> RecentMods);
		void SetModidngSettingsMenuEnabled(bool bEnabled);
		void SetCheckGameVersion(bool ShouldCheck);
		void RemoveRequestOfType(EModioRequestType requestType);
		void MarkRecentlyInstalledModsSuccesful();
		void K2_RequestTermsOfUse(class UObject* WorldContext, const struct FLatentActionInfo& LatentInfo);
		bool K2_RequestSubscribe(const class FString& ModId);
		void K2_RequestModThumbnailById(class UObject* WorldContext, const struct FLatentActionInfo& LatentInfo, const class FString& ModId);
		void K2_RequestModThumbnail(class UObject* WorldContext, const struct FLatentActionInfo& LatentInfo, class UUGCPackage* Package);
		void K2_RequestModMetaData(class UObject* WorldContext, const struct FLatentActionInfo& LatentInfo, const class FString& ModioStringID, int64_t* ModId);
		void K2_RequestModDependencyList(class UObject* WorldContext, const struct FLatentActionInfo& LatentInfo, const class FString& ModId, class FString* outParentId, TArray<class FString>* outModIds);
		void K2_RequestFetchModUpdates();
		void K2_RequestAuthentication();
		bool IsModPendingUninstall(class UUGCPackage* InMod);
		bool HasOutstadingRequestOfType(EModioRequestType requestType);
		TArray<EModioRequestType> GetQueuedModioRequests();
		TArray<class FString> GetNamesOfModsPendingUpdate();
		TArray<class FString> GetNamesOfModsPendingUninstall();
		TArray<class FString> GetNamesOfModsPendingInstall();
		bool GetModdingSettingsMenuEnabled();
		bool GetCheckGameVersion();
		bool FetchModsForSession(TArray<class FString> HostMods, const class FScriptDelegate& OnModsFetched);
		void EnableModioModManagement();
		void DisableModioModManagement();
		void ApplyPendingMods(bool FromJoining);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
