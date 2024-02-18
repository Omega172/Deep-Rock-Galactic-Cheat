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
	 * Function Options_HUD_Element.Options_HUD_Element_C.UpdateDots
	 */
	struct UOptions_HUD_Element_C_UpdateDots_Params
	{	};

	/**
	 * Function Options_HUD_Element.Options_HUD_Element_C.SetupOptions
	 */
	struct UOptions_HUD_Element_C_SetupOptions_Params
	{	};

	/**
	 * Function Options_HUD_Element.Options_HUD_Element_C.PreConstruct
	 */
	struct UOptions_HUD_Element_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_HUD_Element.Options_HUD_Element_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	 */
	struct UOptions_HUD_Element_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_HUD_Element.Options_HUD_Element_C.BndEvt__Basic_Option_K2Node_ComponentBoundEvent_1_OnHoveringBegin__DelegateSignature
	 */
	struct UOptions_HUD_Element_C_BndEvt__Basic_Option_K2Node_ComponentBoundEvent_1_OnHoveringBegin__DelegateSignature_Params
	{	};

	/**
	 * Function Options_HUD_Element.Options_HUD_Element_C.BndEvt__Basic_Option_K2Node_ComponentBoundEvent_2_OnHoveringEnd__DelegateSignature
	 */
	struct UOptions_HUD_Element_C_BndEvt__Basic_Option_K2Node_ComponentBoundEvent_2_OnHoveringEnd__DelegateSignature_Params
	{	};

	/**
	 * Function Options_HUD_Element.Options_HUD_Element_C.Construct
	 */
	struct UOptions_HUD_Element_C_Construct_Params
	{	};

	/**
	 * Function Options_HUD_Element.Options_HUD_Element_C.OnModeChanged_Event
	 */
	struct UOptions_HUD_Element_C_OnModeChanged_Event_Params
	{
	public:
		class UHUDVisibilityGroup*                                 Group;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHUDVisibilityMode                                         Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_HUD_Element.Options_HUD_Element_C.ExecuteUbergraph_Options_HUD_Element
	 */
	struct UOptions_HUD_Element_C_ExecuteUbergraph_Options_HUD_Element_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
