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
	 * Function Basic_FlatGradientButton.Basic_FlatGradientButton_C.SetFontSize
	 */
	struct UBasic_FlatGradientButton_C_SetFontSize_Params
	{
	public:
		int32_t                                                    inFontSize;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_FlatGradientButton.Basic_FlatGradientButton_C.SetText
	 */
	struct UBasic_FlatGradientButton_C_SetText_Params
	{
	public:
		class FText                                                NewText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                OverrideControllerText;                                  // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Basic_FlatGradientButton.Basic_FlatGradientButton_C.Update
	 */
	struct UBasic_FlatGradientButton_C_Update_Params
	{	};

	/**
	 * Function Basic_FlatGradientButton.Basic_FlatGradientButton_C.PreConstruct
	 */
	struct UBasic_FlatGradientButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_FlatGradientButton.Basic_FlatGradientButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBasic_FlatGradientButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_FlatGradientButton.Basic_FlatGradientButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBasic_FlatGradientButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_FlatGradientButton.Basic_FlatGradientButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBasic_FlatGradientButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Basic_FlatGradientButton.Basic_FlatGradientButton_C.ExecuteUbergraph_Basic_FlatGradientButton
	 */
	struct UBasic_FlatGradientButton_C_ExecuteUbergraph_Basic_FlatGradientButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_FlatGradientButton.Basic_FlatGradientButton_C.OnClicked__DelegateSignature
	 */
	struct UBasic_FlatGradientButton_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
