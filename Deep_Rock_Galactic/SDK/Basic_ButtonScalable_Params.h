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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Basic_ButtonScalable.Basic_ButtonScalable_C.IsPressed
	 */
	struct UBasic_ButtonScalable_C_IsPressed_Params
	{
	public:
		bool                                                       IsPressed;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_ButtonScalable.Basic_ButtonScalable_C.SetButtonText
	 */
	struct UBasic_ButtonScalable_C_SetButtonText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Basic_ButtonScalable.Basic_ButtonScalable_C.SetFontSize
	 */
	struct UBasic_ButtonScalable_C_SetFontSize_Params
	{
	public:
		int32_t                                                    FontSize;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q8CZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Basic_ButtonScalable.Basic_ButtonScalable_C.PreConstruct
	 */
	struct UBasic_ButtonScalable_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBasic_ButtonScalable_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBasic_ButtonScalable_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBasic_ButtonScalable_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBasic_ButtonScalable_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_ButtonScalable.Basic_ButtonScalable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UBasic_ButtonScalable_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_ButtonScalable.Basic_ButtonScalable_C.ExecuteUbergraph_Basic_ButtonScalable
	 */
	struct UBasic_ButtonScalable_C_ExecuteUbergraph_Basic_ButtonScalable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_ButtonScalable.Basic_ButtonScalable_C.OnReleased__DelegateSignature
	 */
	struct UBasic_ButtonScalable_C_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_ButtonScalable.Basic_ButtonScalable_C.OnPressed__DelegateSignature
	 */
	struct UBasic_ButtonScalable_C_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_ButtonScalable.Basic_ButtonScalable_C.OnClicked__DelegateSignature
	 */
	struct UBasic_ButtonScalable_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
