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
	 * Function Basic_CheckBox.Basic_CheckBox_C.SetTextWidth
	 */
	struct UBasic_CheckBox_C_SetTextWidth_Params
	{
	public:
		float                                                      InWidthOverride;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_CheckBox.Basic_CheckBox_C.SetHovered
	 */
	struct UBasic_CheckBox_C_SetHovered_Params
	{
	public:
		bool                                                       InHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_CheckBox.Basic_CheckBox_C.SetSize
	 */
	struct UBasic_CheckBox_C_SetSize_Params
	{
	public:
		float                                                      InSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_CheckBox.Basic_CheckBox_C.GetState
	 */
	struct UBasic_CheckBox_C_GetState_Params
	{
	public:
		ECheckBoxState                                             State;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_CheckBox.Basic_CheckBox_C.SetState
	 */
	struct UBasic_CheckBox_C_SetState_Params
	{
	public:
		ECheckBoxState                                             InState;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_CheckBox.Basic_CheckBox_C.GetUpperCased
	 */
	struct UBasic_CheckBox_C_GetUpperCased_Params
	{
	public:
		bool                                                       UpperCase;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_CheckBox.Basic_CheckBox_C.SetText
	 */
	struct UBasic_CheckBox_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       InUpperCase;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_CheckBox.Basic_CheckBox_C.SetIsChecked
	 */
	struct UBasic_CheckBox_C_SetIsChecked_Params
	{
	public:
		bool                                                       InIsChecked;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_CheckBox.Basic_CheckBox_C.GetIsChecked
	 */
	struct UBasic_CheckBox_C_GetIsChecked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_CheckBox.Basic_CheckBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBasic_CheckBox_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_CheckBox.Basic_CheckBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBasic_CheckBox_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_CheckBox.Basic_CheckBox_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBasic_CheckBox_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_CheckBox.Basic_CheckBox_C.PreConstruct
	 */
	struct UBasic_CheckBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_CheckBox.Basic_CheckBox_C.ClickButton
	 */
	struct UBasic_CheckBox_C_ClickButton_Params
	{	};

	/**
	 * Function Basic_CheckBox.Basic_CheckBox_C.OnClicked
	 */
	struct UBasic_CheckBox_C_OnClicked_Params
	{
	public:
		bool                                                       InChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_CheckBox.Basic_CheckBox_C.ExecuteUbergraph_Basic_CheckBox
	 */
	struct UBasic_CheckBox_C_ExecuteUbergraph_Basic_CheckBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_CheckBox.Basic_CheckBox_C.OnCheckStateChanged__DelegateSignature
	 */
	struct UBasic_CheckBox_C_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
