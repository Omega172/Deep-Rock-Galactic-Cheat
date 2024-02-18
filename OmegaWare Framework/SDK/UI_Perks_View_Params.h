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
	 * Function UI_Perks_View.UI_Perks_View_C.SetColors
	 */
	struct UUI_Perks_View_C_SetColors_Params
	{	};

	/**
	 * Function UI_Perks_View.UI_Perks_View_C.HandleMouseEvent
	 */
	struct UUI_Perks_View_C_HandleMouseEvent_Params
	{
	public:
		struct FPointerEvent                                       InMouseEvent;                                            // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       InUp;                                                    // 0x0070(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OutHandled;                                              // 0x0071(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FZMV[0x2];                                   // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Perks_View.UI_Perks_View_C.HandleKeyEvent
	 */
	struct UUI_Perks_View_C_HandleKeyEvent_Params
	{
	public:
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       InUp;                                                    // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OutHandled;                                              // 0x0039(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Perks_View.UI_Perks_View_C.SelectPerkWidget
	 */
	struct UUI_Perks_View_C_SelectPerkWidget_Params
	{
	public:
		class UUI_Perks_Item_C*                                    PerkWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Perks_View.UI_Perks_View_C.PreConstruct
	 */
	struct UUI_Perks_View_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Perks_View.UI_Perks_View_C.OnPerkClicked_Event
	 */
	struct UUI_Perks_View_C_OnPerkClicked_Event_Params
	{
	public:
		class UUI_Perks_Item_C*                                    PerkWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Perks_View.UI_Perks_View_C.BndEvt__UI_Perks_Buy_K2Node_ComponentBoundEvent_0_OnPerkClaimed__DelegateSignature
	 */
	struct UUI_Perks_View_C_BndEvt__UI_Perks_Buy_K2Node_ComponentBoundEvent_0_OnPerkClaimed__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Perks_View.UI_Perks_View_C.BndEvt__ButtonOkHint_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UUI_Perks_View_C_BndEvt__ButtonOkHint_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Perks_View.UI_Perks_View_C.Toggle Loadout Hint
	 */
	struct UUI_Perks_View_C_ToggleLoadoutHint_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Perks_View.UI_Perks_View_C.Construct
	 */
	struct UUI_Perks_View_C_Construct_Params
	{	};

	/**
	 * Function UI_Perks_View.UI_Perks_View_C.OnFocusLost
	 */
	struct UUI_Perks_View_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_Perks_View.UI_Perks_View_C.ExecuteUbergraph_UI_Perks_View
	 */
	struct UUI_Perks_View_C_ExecuteUbergraph_UI_Perks_View_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
