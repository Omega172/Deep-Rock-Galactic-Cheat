#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
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
	 * WidgetBlueprintGeneratedClass ITM_Tab_Modding.ITM_Tab_Modding_C
	 * Size -> 0x0190 (FullSize[0x03F0] - InheritedSize[0x0260])
	 */
	class UITM_Tab_Modding_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBasic_ButtonScalable2_C*                            ApplyButton;                                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      ApplyCancelBox;                                          // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_Menu_ColorBar_C*                              Basic_Menu_ColorBar;                                     // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBlurBackground_C*                                   BlurBackground;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ButtonTermsAndConditions;                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_ButtonScalable2_C*                            CancelButton;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        DependenciesLoading;                                     // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ModdingProgressBar_C*                            DependenciesProgressBar;                                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          DisclaimerLabel;                                         // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        InstalledBox;                                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_ButtonScalable2_C*                            InstallNewModsButton;                                    // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_ButtonScalable2_C*                            InstallNewModsButtonCenter;                              // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_Modding_LoadoutSelection_C*                     ITM_Modding_LoadoutSelection;                            // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_Label_C*                                      LBL_ModCount;                                            // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             LockBorder;                                              // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            MainOverlay;                                             // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        NoModsBox;                                               // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          NoModsInstalledLabel;                                    // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        PendingBox;                                              // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBar;                                               // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USetting_Modding_CheckVersion_C*                     Setting_CheckVersion;                                    // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_BoolUserSetting_C*                            Setting_CompactView;                                     // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USetting_ShowSandboxLabel_C*                         Setting_ShowSandboxNotification;                         // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        Settings_Box;                                            // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Modding_SortBy_C*                                SortByBox;                                               // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCircularThrobber*                                   TermsOfServiceThrobber;                                  // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      TextTermsAndConditionsBlocked;                           // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        WaitBox;                                                 // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UUGCPackage*>                                 ModsPendingInstall;                                      // 0x0348(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UUGCPackage*>                                 ModsPendingUninstall;                                    // 0x0358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, class UITM_PendingMod_C*>              WidgetsPendingInstall;                                   // 0x0368(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FTimerHandle                                        RefreshWaitHandle;                                       // 0x03B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       CompactView;                                             // 0x03C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EPackageSortField                                          SortField;                                               // 0x03C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SortAscending;                                           // 0x03C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JLZI[0x5];                                   // 0x03C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UITM_Mod_C*>                                  ModWidgetsDueForUpdate;                                  // 0x03C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UITM_Mod_C*                                          ModWidgetDueForUpdate;                                   // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumOutstandingDependencyRequests;                        // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DependencyRequestsProgress;                              // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        DependencyProgressTimer;                                 // 0x03E8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void ShouldModdingMenubeEnabled(bool* Result);
		class FText GetTermsOfUseAcesssText();
		void GetModSlotStatusText(class FText* ModSlotStatus);
		void ApplyChangedMods();
		void GatherChangedMods();
		void IsUGCSubsystemAndRegistryValid(bool* IsValid);
		void RefreshApplyCancelButtons();
		void RemovePendingRequests();
		void ReorderInstalledMods(EPackageSortField InField, bool InAscending);
		void OnModOverlayClosed(const class FString& LastURL);
		void UpdateModCounter();
		void SetCompactMode(bool CompactView);
		void SetInteractability();
		void GetOrCreatePendingInstallWidget(const class FString& InModName, ENUM_ModPendingStatus InPendingStatus, class UITM_PendingMod_C** OutWidget);
		void OnDownloadExtractMods(const class FString& Name, TArray<class FString> ModsPendingDownload, bool Downloading, int32_t Progress, int32_t Total);
		void JoinWithTitle(const class FText& inTitle, TArray<class FString>* Install, class FString* OutResult);
		void GetPendingModStatus(class FText* ModStatus);
		void OnFetchedTermsandConditions(class UModioTermsWrapper* Terms);
		void OnTermsAndConditionAnswered(bool Agree);
		void CheckTermsAndConditions(bool* Accepted);
		void No_EC976CB74898DAEE8DC237B1C9A04A9B();
		void Yes_EC976CB74898DAEE8DC237B1C9A04A9B();
		void No_EC976CB74898DAEE8DC237B1445BDAB0();
		void Yes_EC976CB74898DAEE8DC237B1445BDAB0();
		void OnFailure_DA32360A4EE3DEB5BB1F39BA00736B96();
		void OnSuccess_DA32360A4EE3DEB5BB1F39BA00736B96();
		void Construct();
		void Destruct();
		void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__InstallNewModsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void BndEvt__ButtonTermsAndConditions_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void ConstructModUI();
		void BndEvt__InstallNewModsButtonCenter_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void OnModManagementChanged(bool Enabled);
		void OnModDownloadFinished(const class FString& ModName, const class FString& ModId);
		void RefreshInstallModsButton();
		void RefreshModUI();
		void BndEvt__UserSetting_CompactView_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature(bool IsChecked);
		void BndEvt__SortByBox_K2Node_ComponentBoundEvent_4_OnSortByChanged__DelegateSignature(EPackageSortField InField, bool InAscending);
		void BndEvt__SortByBox_K2Node_ComponentBoundEvent_6_OnEnableDisableAll__DelegateSignature(bool InEnableAll);
		void BndEvt__CancelButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
		void UpdateButtonsAndCounter();
		void OnModActivationChanged(class UITM_Mod_C* ManipulatedModItem);
		void BndEvt__ITM_Tab_Modding_ITM_Modding_LoadoutSelection_K2Node_ComponentBoundEvent_8_OnSlotLoaded__DelegateSignature();
		void OnModioRequestHandled(EModioRequestType requestType);
		void OnShouldRemoveDependencyProgress();
		void ExecuteUbergraph_ITM_Tab_Modding(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
