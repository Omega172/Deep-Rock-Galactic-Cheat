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
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.Remove Buttons If Condition
	 */
	struct UMENU_EscapeMenu_C_RemoveButtonsIfCondition_Params
	{
	public:
		TArray<class UHeader_ButtonCutCorner_C*>                   InButtons;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		bool                                                       InCondition;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YV45[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.Remove Button If Condition
	 */
	struct UMENU_EscapeMenu_C_RemoveButtonIfCondition_Params
	{
	public:
		class UHeader_ButtonCutCorner_C*                           InButton;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InCondition;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.Should Modding Menu be Enabled
	 */
	struct UMENU_EscapeMenu_C_ShouldModdingMenubeEnabled_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnKeyDown
	 */
	struct UMENU_EscapeMenu_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMinersManualOpen
	 */
	struct UMENU_EscapeMenu_C_OnMinersManualOpen_Params
	{
	public:
		class UObject*                                             IdentifyingObject;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OpenSpecificPage;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMinersManualSinglePage                                    page;                                                    // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMinersManualNotification
	 */
	struct UMENU_EscapeMenu_C_OnMinersManualNotification_Params
	{
	public:
		EMinersManualSection                                       PendingSection;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P5LB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGuid                                               Pending_ID;                                              // 0x0004(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0YEM[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.ToggleButton
	 */
	struct UMENU_EscapeMenu_C_ToggleButton_Params
	{
	public:
		class UHeader_ButtonCutCorner_C*                           InButton;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenSection
	 */
	struct UMENU_EscapeMenu_C_OpenSection_Params
	{
	public:
		class UWindowWidget*                                       InSection;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMouseButtonUp
	 */
	struct UMENU_EscapeMenu_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetHUDVisible
	 */
	struct UMENU_EscapeMenu_C_SetHUDVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A9MM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.NotInParty
	 */
	struct UMENU_EscapeMenu_C_NotInParty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OGPV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.UpdateDebugTerrainHash
	 */
	struct UMENU_EscapeMenu_C_UpdateDebugTerrainHash_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetupLeaveButton
	 */
	struct UMENU_EscapeMenu_C_SetupLeaveButton_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnKeyUp
	 */
	struct UMENU_EscapeMenu_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_B9B49EC34D71CFDC07BF12AA58CE1ADE
	 */
	struct UMENU_EscapeMenu_C_OnFailure_B9B49EC34D71CFDC07BF12AA58CE1ADE_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_B9B49EC34D71CFDC07BF12AA58CE1ADE
	 */
	struct UMENU_EscapeMenu_C_OnSuccess_B9B49EC34D71CFDC07BF12AA58CE1ADE_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.No_AE1052D648D3B4733E52C594A5522CE9
	 */
	struct UMENU_EscapeMenu_C_No_AE1052D648D3B4733E52C594A5522CE9_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.Yes_AE1052D648D3B4733E52C594A5522CE9
	 */
	struct UMENU_EscapeMenu_C_Yes_AE1052D648D3B4733E52C594A5522CE9_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.No_1ADE94D8445F020C5D27B8822516025E
	 */
	struct UMENU_EscapeMenu_C_No_1ADE94D8445F020C5D27B8822516025E_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.Yes_1ADE94D8445F020C5D27B8822516025E
	 */
	struct UMENU_EscapeMenu_C_Yes_1ADE94D8445F020C5D27B8822516025E_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.No_7D7D93E642CD15AC8E341D8B5ED1ACA8
	 */
	struct UMENU_EscapeMenu_C_No_7D7D93E642CD15AC8E341D8B5ED1ACA8_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.Yes_7D7D93E642CD15AC8E341D8B5ED1ACA8
	 */
	struct UMENU_EscapeMenu_C_Yes_7D7D93E642CD15AC8E341D8B5ED1ACA8_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.Construct
	 */
	struct UMENU_EscapeMenu_C_Construct_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.FSDSetFocus
	 */
	struct UMENU_EscapeMenu_C_FSDSetFocus_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UMENU_EscapeMenu_C_BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.PreConstruct
	 */
	struct UMENU_EscapeMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnShown
	 */
	struct UMENU_EscapeMenu_C_OnShown_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnClosed
	 */
	struct UMENU_EscapeMenu_C_OnClosed_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UMENU_EscapeMenu_C_BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_CallToAction2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 */
	struct UMENU_EscapeMenu_C_BndEvt__BTN_CallToAction2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	 */
	struct UMENU_EscapeMenu_C_BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenMinersManualSection
	 */
	struct UMENU_EscapeMenu_C_OpenMinersManualSection_Params
	{
	public:
		class UObject*                                             IdentifyingObject;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
	 */
	struct UMENU_EscapeMenu_C_BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params
	{
	public:
		class UHeader_ButtonCutCorner_C*                           Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Statuss_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
	 */
	struct UMENU_EscapeMenu_C_BndEvt__BTN_Statuss_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params
	{
	public:
		class UHeader_ButtonCutCorner_C*                           Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Options_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature
	 */
	struct UMENU_EscapeMenu_C_BndEvt__BTN_Options_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature_Params
	{
	public:
		class UHeader_ButtonCutCorner_C*                           Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenMinersManualPage
	 */
	struct UMENU_EscapeMenu_C_OpenMinersManualPage_Params
	{
	public:
		EMinersManualSinglePage                                    page;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.SelectNextButton
	 */
	struct UMENU_EscapeMenu_C_SelectNextButton_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.SelectPrevButton
	 */
	struct UMENU_EscapeMenu_C_SelectPrevButton_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__B_Exit_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UMENU_EscapeMenu_C_BndEvt__B_Exit_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{
	public:
		class UBasic_ButtonCutCorner_C*                            Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__B_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 */
	struct UMENU_EscapeMenu_C_BndEvt__B_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_ChangeProfile_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UMENU_EscapeMenu_C_BndEvt__BTN_ChangeProfile_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class UBasic_ButtonCutCorner_C*                            Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnNewTopWindow
	 */
	struct UMENU_EscapeMenu_C_OnNewTopWindow_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_PatchNotes_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UMENU_EscapeMenu_C_BndEvt__BTN_PatchNotes_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	public:
		class UHeader_ButtonCutCorner_C*                           Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Modding_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UMENU_EscapeMenu_C_BndEvt__BTN_Modding_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{
	public:
		class UHeader_ButtonCutCorner_C*                           Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__ITM_RestoreSave_K2Node_ComponentBoundEvent_6_OnShowRestoreSaveClicked__DelegateSignature
	 */
	struct UMENU_EscapeMenu_C_BndEvt__ITM_RestoreSave_K2Node_ComponentBoundEvent_6_OnShowRestoreSaveClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_DLC_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct UMENU_EscapeMenu_C_BndEvt__BTN_DLC_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{
	public:
		class UHeader_ButtonCutCorner_C*                           Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_DummyModding_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 */
	struct UMENU_EscapeMenu_C_BndEvt__BTN_DummyModding_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
	{
	public:
		class UHeader_ButtonCutCorner_C*                           Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenMinersManualFromID
	 */
	struct UMENU_EscapeMenu_C_OpenMinersManualFromID_Params
	{
	public:
		EMinersManualSection                                       Section;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5KYT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGuid                                               ID;                                                      // 0x0004(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__MENU_EscapeMenu_BTN_Merch_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 */
	struct UMENU_EscapeMenu_C_BndEvt__MENU_EscapeMenu_BTN_Merch_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
	{
	public:
		class UHeader_ButtonCutCorner_C*                           Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMinersManualClosed
	 */
	struct UMENU_EscapeMenu_C_OnMinersManualClosed_Params
	{
	public:
		class UWindowWidget*                                       Window;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnCreditsClicked
	 */
	struct UMENU_EscapeMenu_C_OnCreditsClicked_Params
	{	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnInputSourceChanged
	 */
	struct UMENU_EscapeMenu_C_OnInputSourceChanged_Params
	{
	public:
		EFSDInputSource                                            InputSource;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MENU_EscapeMenu.MENU_EscapeMenu_C.ExecuteUbergraph_MENU_EscapeMenu
	 */
	struct UMENU_EscapeMenu_C_ExecuteUbergraph_MENU_EscapeMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
