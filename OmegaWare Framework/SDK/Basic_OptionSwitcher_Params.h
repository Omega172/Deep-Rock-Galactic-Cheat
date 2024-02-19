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
	 * Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.ContainsOption
	 */
	struct UBasic_OptionSwitcher_C_ContainsOption_Params
	{
	public:
		class FText                                                Option;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       DoesContain;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.RemoveOption
	 */
	struct UBasic_OptionSwitcher_C_RemoveOption_Params
	{
	public:
		class FText                                                Item;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.GetOptionCount
	 */
	struct UBasic_OptionSwitcher_C_GetOptionCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.ClearOptions
	 */
	struct UBasic_OptionSwitcher_C_ClearOptions_Params
	{	};

	/**
	 * Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.Add Option
	 */
	struct UBasic_OptionSwitcher_C_AddOption_Params
	{
	public:
		class FText                                                Option;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.GetSelectedValue
	 */
	struct UBasic_OptionSwitcher_C_GetSelectedValue_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.GetSelectedIndex
	 */
	struct UBasic_OptionSwitcher_C_GetSelectedIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.SetSelectedValue
	 */
	struct UBasic_OptionSwitcher_C_SetSelectedValue_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.SetSelectedIndex
	 */
	struct UBasic_OptionSwitcher_C_SetSelectedIndex_Params
	{
	public:
		int32_t                                                    NewIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.Set Options
	 */
	struct UBasic_OptionSwitcher_C_SetOptions_Params
	{
	public:
		TArray<class FText>                                        options;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    DefaultIndex;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.PreConstruct
	 */
	struct UBasic_OptionSwitcher_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_143_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBasic_OptionSwitcher_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_143_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBasic_OptionSwitcher_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBasic_OptionSwitcher_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBasic_OptionSwitcher_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBasic_OptionSwitcher_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBasic_OptionSwitcher_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.ExecuteUbergraph_Basic_OptionSwitcher
	 */
	struct UBasic_OptionSwitcher_C_ExecuteUbergraph_Basic_OptionSwitcher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_OptionSwitcher.Basic_OptionSwitcher_C.OnSelectionChanged__DelegateSignature
	 */
	struct UBasic_OptionSwitcher_C_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
