#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
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
	 * Function Faction_Popup_YesNoPrompt.Faction_Popup_YesNoPrompt_C.OnKeyUp
	 */
	struct UFaction_Popup_YesNoPrompt_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Faction_Popup_YesNoPrompt.Faction_Popup_YesNoPrompt_C.OnShow
	 */
	struct UFaction_Popup_YesNoPrompt_C_OnShow_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                Message;                                                 // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Faction_Popup_YesNoPrompt.Faction_Popup_YesNoPrompt_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UFaction_Popup_YesNoPrompt_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Faction_Popup_YesNoPrompt.Faction_Popup_YesNoPrompt_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UFaction_Popup_YesNoPrompt_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Faction_Popup_YesNoPrompt.Faction_Popup_YesNoPrompt_C.PreConstruct
	 */
	struct UFaction_Popup_YesNoPrompt_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Faction_Popup_YesNoPrompt.Faction_Popup_YesNoPrompt_C.Yes
	 */
	struct UFaction_Popup_YesNoPrompt_C_Yes_Params
	{	};

	/**
	 * Function Faction_Popup_YesNoPrompt.Faction_Popup_YesNoPrompt_C.No
	 */
	struct UFaction_Popup_YesNoPrompt_C_No_Params
	{	};

	/**
	 * Function Faction_Popup_YesNoPrompt.Faction_Popup_YesNoPrompt_C.Clear Resources
	 */
	struct UFaction_Popup_YesNoPrompt_C_ClearResources_Params
	{	};

	/**
	 * Function Faction_Popup_YesNoPrompt.Faction_Popup_YesNoPrompt_C.Add Resource
	 */
	struct UFaction_Popup_YesNoPrompt_C_AddResource_Params
	{
	public:
		class UResourceData*                                       InResource;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InAmount;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Faction_Popup_YesNoPrompt.Faction_Popup_YesNoPrompt_C.SetResources
	 */
	struct UFaction_Popup_YesNoPrompt_C_SetResources_Params
	{
	public:
		TArray<struct FCraftingCost>                               Resources;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Faction_Popup_YesNoPrompt.Faction_Popup_YesNoPrompt_C.ExecuteUbergraph_Faction_Popup_YesNoPrompt
	 */
	struct UFaction_Popup_YesNoPrompt_C_ExecuteUbergraph_Faction_Popup_YesNoPrompt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
