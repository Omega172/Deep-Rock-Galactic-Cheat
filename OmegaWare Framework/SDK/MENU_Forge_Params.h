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
	 * Function MENU_Forge.MENU_Forge_C.SetCursorVisible
	 */
	struct UMENU_Forge_C_SetCursorVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.OnMouseButtonUp
	 */
	struct UMENU_Forge_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.ToggleMasteryBar
	 */
	struct UMENU_Forge_C_ToggleMasteryBar_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AllowClaimButton;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.Forge Schematic
	 */
	struct UMENU_Forge_C_ForgeSchematic_Params
	{
	public:
		class UUI_Forge_Schematic_C*                               InSchematic;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.ToggleItemPopUp
	 */
	struct UMENU_Forge_C_ToggleItemPopUp_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.ToggleSelectionList
	 */
	struct UMENU_Forge_C_ToggleSelectionList_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.IncreaseCraftingStat
	 */
	struct UMENU_Forge_C_IncreaseCraftingStat_Params
	{	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.SetHeader
	 */
	struct UMENU_Forge_C_SetHeader_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.ShowSkipButton
	 */
	struct UMENU_Forge_C_ShowSkipButton_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.OnKeyUp
	 */
	struct UMENU_Forge_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.ShowList
	 */
	struct UMENU_Forge_C_ShowList_Params
	{
	public:
		bool                                                       History;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ForceRebuild;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WMFW[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.ShowItem
	 */
	struct UMENU_Forge_C_ShowItem_Params
	{
	public:
		class UUI_Forge_Schematic_C*                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.Refresh
	 */
	struct UMENU_Forge_C_Refresh_Params
	{	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.UpdateLevelProgress
	 */
	struct UMENU_Forge_C_UpdateLevelProgress_Params
	{
	public:
		bool                                                       animate;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.BndEvt__TabOverclocks_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature
	 */
	struct UMENU_Forge_C_BndEvt__TabOverclocks_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature_Params
	{
	public:
		class UUI_Forge_Schematic_C*                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.OnShown
	 */
	struct UMENU_Forge_C_OnShown_Params
	{	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_8_OnBackClicked__DelegateSignature
	 */
	struct UMENU_Forge_C_BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_8_OnBackClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.OnForgingXPChanged_Event
	 */
	struct UMENU_Forge_C_OnForgingXPChanged_Event_Params
	{
	public:
		float                                                      XP;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.BndEvt__CancelForgeBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UMENU_Forge_C_BndEvt__CancelForgeBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UMENU_Forge_C_BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.ForgeDone
	 */
	struct UMENU_Forge_C_ForgeDone_Params
	{	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.BndEvt__UI_Forge_Completed_K2Node_ComponentBoundEvent_3_OnFinished__DelegateSignature
	 */
	struct UMENU_Forge_C_BndEvt__UI_Forge_Completed_K2Node_ComponentBoundEvent_3_OnFinished__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.BndEvt__UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_4_OnCountingFinished__DelegateSignature
	 */
	struct UMENU_Forge_C_BndEvt__UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_4_OnCountingFinished__DelegateSignature_Params
	{
	public:
		unsigned char                                              Reward;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.BndEvt__UI_Forge_MasteryReward_K2Node_ComponentBoundEvent_6_OnFinished__DelegateSignature
	 */
	struct UMENU_Forge_C_BndEvt__UI_Forge_MasteryReward_K2Node_ComponentBoundEvent_6_OnFinished__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.Display Pending Mastery Reward
	 */
	struct UMENU_Forge_C_DisplayPendingMasteryReward_Params
	{	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct UMENU_Forge_C_BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.Construct
	 */
	struct UMENU_Forge_C_Construct_Params
	{	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.PreConstruct
	 */
	struct UMENU_Forge_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.ShoutLocally
	 */
	struct UMENU_Forge_C_ShoutLocally_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JDVE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDialogDataAsset*                                    ShoutData;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.ShoutLocallySoftPtr
	 */
	struct UMENU_Forge_C_ShoutLocallySoftPtr_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F2BV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.OnClosed
	 */
	struct UMENU_Forge_C_OnClosed_Params
	{	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.BndEvt__ButtonSkip_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 */
	struct UMENU_Forge_C_BndEvt__ButtonSkip_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.BndEvt__MENU_Forge_Forge_Rewards_Selector_K2Node_ComponentBoundEvent_5_OnRewardSelected__DelegateSignature
	 */
	struct UMENU_Forge_C_BndEvt__MENU_Forge_Forge_Rewards_Selector_K2Node_ComponentBoundEvent_5_OnRewardSelected__DelegateSignature_Params
	{
	public:
		class USchematic*                                          InReward;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.FinishMasteryReward
	 */
	struct UMENU_Forge_C_FinishMasteryReward_Params
	{	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.BndEvt__MENU_Forge_UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_10_OnClaimClicked__DelegateSignature
	 */
	struct UMENU_Forge_C_BndEvt__MENU_Forge_UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_10_OnClaimClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    InLevel;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSeed;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_Forge.MENU_Forge_C.ExecuteUbergraph_MENU_Forge
	 */
	struct UMENU_Forge_C_ExecuteUbergraph_MENU_Forge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_REOG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
