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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.Should Modding Menu be Enabled
	 */
	struct UITM_Tab_Modding_C_ShouldModdingMenubeEnabled_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.GetTermsOfUseAcesssText
	 */
	struct UITM_Tab_Modding_C_GetTermsOfUseAcesssText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.GetModSlotStatusText
	 */
	struct UITM_Tab_Modding_C_GetModSlotStatusText_Params
	{
	public:
		class FText                                                ModSlotStatus;                                           // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.ApplyChangedMods
	 */
	struct UITM_Tab_Modding_C_ApplyChangedMods_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.GatherChangedMods
	 */
	struct UITM_Tab_Modding_C_GatherChangedMods_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.IsUGCSubsystemAndRegistryValid
	 */
	struct UITM_Tab_Modding_C_IsUGCSubsystemAndRegistryValid_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EYK2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.RefreshApplyCancelButtons
	 */
	struct UITM_Tab_Modding_C_RefreshApplyCancelButtons_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.RemovePendingRequests
	 */
	struct UITM_Tab_Modding_C_RemovePendingRequests_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.ReorderInstalledMods
	 */
	struct UITM_Tab_Modding_C_ReorderInstalledMods_Params
	{
	public:
		EPackageSortField                                          InField;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InAscending;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P9M0[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnModOverlayClosed
	 */
	struct UITM_Tab_Modding_C_OnModOverlayClosed_Params
	{
	public:
		class FString                                              LastURL;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.UpdateModCounter
	 */
	struct UITM_Tab_Modding_C_UpdateModCounter_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.SetCompactMode
	 */
	struct UITM_Tab_Modding_C_SetCompactMode_Params
	{
	public:
		bool                                                       CompactView;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W6CV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.SetInteractability
	 */
	struct UITM_Tab_Modding_C_SetInteractability_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.GetOrCreatePendingInstallWidget
	 */
	struct UITM_Tab_Modding_C_GetOrCreatePendingInstallWidget_Params
	{
	public:
		class FString                                              InModName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ENUM_ModPendingStatus                                      InPendingStatus;                                         // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ST3Z[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UITM_PendingMod_C*                                   OutWidget;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnDownloadExtractMods
	 */
	struct UITM_Tab_Modding_C_OnDownloadExtractMods_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<class FString>                                      ModsPendingDownload;                                     // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Downloading;                                             // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6TUZ[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Progress;                                                // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Total;                                                   // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.JoinWithTitle
	 */
	struct UITM_Tab_Modding_C_JoinWithTitle_Params
	{
	public:
		class FText                                                inTitle;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<class FString>                                      Install;                                                 // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              OutResult;                                               // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.GetPendingModStatus
	 */
	struct UITM_Tab_Modding_C_GetPendingModStatus_Params
	{
	public:
		class FText                                                ModStatus;                                               // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.On Fetched Terms and Conditions
	 */
	struct UITM_Tab_Modding_C_OnFetchedTermsandConditions_Params
	{
	public:
		class UModioTermsWrapper*                                  Terms;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnTermsAndConditionAnswered
	 */
	struct UITM_Tab_Modding_C_OnTermsAndConditionAnswered_Params
	{
	public:
		bool                                                       Agree;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.CheckTermsAndConditions
	 */
	struct UITM_Tab_Modding_C_CheckTermsAndConditions_Params
	{
	public:
		bool                                                       Accepted;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.No_EC976CB74898DAEE8DC237B1C9A04A9B
	 */
	struct UITM_Tab_Modding_C_No_EC976CB74898DAEE8DC237B1C9A04A9B_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.Yes_EC976CB74898DAEE8DC237B1C9A04A9B
	 */
	struct UITM_Tab_Modding_C_Yes_EC976CB74898DAEE8DC237B1C9A04A9B_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.No_EC976CB74898DAEE8DC237B1445BDAB0
	 */
	struct UITM_Tab_Modding_C_No_EC976CB74898DAEE8DC237B1445BDAB0_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.Yes_EC976CB74898DAEE8DC237B1445BDAB0
	 */
	struct UITM_Tab_Modding_C_Yes_EC976CB74898DAEE8DC237B1445BDAB0_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnFailure_DA32360A4EE3DEB5BB1F39BA00736B96
	 */
	struct UITM_Tab_Modding_C_OnFailure_DA32360A4EE3DEB5BB1F39BA00736B96_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnSuccess_DA32360A4EE3DEB5BB1F39BA00736B96
	 */
	struct UITM_Tab_Modding_C_OnSuccess_DA32360A4EE3DEB5BB1F39BA00736B96_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.Construct
	 */
	struct UITM_Tab_Modding_C_Construct_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.Destruct
	 */
	struct UITM_Tab_Modding_C_Destruct_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UITM_Tab_Modding_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__InstallNewModsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UITM_Tab_Modding_C_BndEvt__InstallNewModsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__ButtonTermsAndConditions_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_Tab_Modding_C_BndEvt__ButtonTermsAndConditions_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.ConstructModUI
	 */
	struct UITM_Tab_Modding_C_ConstructModUI_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__InstallNewModsButtonCenter_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UITM_Tab_Modding_C_BndEvt__InstallNewModsButtonCenter_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnModManagementChanged
	 */
	struct UITM_Tab_Modding_C_OnModManagementChanged_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnModDownloadFinished
	 */
	struct UITM_Tab_Modding_C_OnModDownloadFinished_Params
	{
	public:
		class FString                                              ModName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ModId;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.RefreshInstallModsButton
	 */
	struct UITM_Tab_Modding_C_RefreshInstallModsButton_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.RefreshModUI
	 */
	struct UITM_Tab_Modding_C_RefreshModUI_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__UserSetting_CompactView_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature
	 */
	struct UITM_Tab_Modding_C_BndEvt__UserSetting_CompactView_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__SortByBox_K2Node_ComponentBoundEvent_4_OnSortByChanged__DelegateSignature
	 */
	struct UITM_Tab_Modding_C_BndEvt__SortByBox_K2Node_ComponentBoundEvent_4_OnSortByChanged__DelegateSignature_Params
	{
	public:
		EPackageSortField                                          InField;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InAscending;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__SortByBox_K2Node_ComponentBoundEvent_6_OnEnableDisableAll__DelegateSignature
	 */
	struct UITM_Tab_Modding_C_BndEvt__SortByBox_K2Node_ComponentBoundEvent_6_OnEnableDisableAll__DelegateSignature_Params
	{
	public:
		bool                                                       InEnableAll;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct UITM_Tab_Modding_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.UpdateButtonsAndCounter
	 */
	struct UITM_Tab_Modding_C_UpdateButtonsAndCounter_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnModActivationChanged
	 */
	struct UITM_Tab_Modding_C_OnModActivationChanged_Params
	{
	public:
		class UITM_Mod_C*                                          ManipulatedModItem;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.BndEvt__ITM_Tab_Modding_ITM_Modding_LoadoutSelection_K2Node_ComponentBoundEvent_8_OnSlotLoaded__DelegateSignature
	 */
	struct UITM_Tab_Modding_C_BndEvt__ITM_Tab_Modding_ITM_Modding_LoadoutSelection_K2Node_ComponentBoundEvent_8_OnSlotLoaded__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnModioRequestHandled
	 */
	struct UITM_Tab_Modding_C_OnModioRequestHandled_Params
	{
	public:
		EModioRequestType                                          requestType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.OnShouldRemoveDependencyProgress
	 */
	struct UITM_Tab_Modding_C_OnShouldRemoveDependencyProgress_Params
	{	};

	/**
	 * Function ITM_Tab_Modding.ITM_Tab_Modding_C.ExecuteUbergraph_ITM_Tab_Modding
	 */
	struct UITM_Tab_Modding_C_ExecuteUbergraph_ITM_Tab_Modding_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
