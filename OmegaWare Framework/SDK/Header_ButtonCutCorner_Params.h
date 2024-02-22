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
	 * Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.IsPressed
	 */
	struct UHeader_ButtonCutCorner_C_IsPressed_Params
	{
	public:
		bool                                                       IsPressed;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.SetButtonText
	 */
	struct UHeader_ButtonCutCorner_C_SetButtonText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.SetFontSize
	 */
	struct UHeader_ButtonCutCorner_C_SetFontSize_Params
	{
	public:
		int32_t                                                    FontSize;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N5T3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.PreConstruct
	 */
	struct UHeader_ButtonCutCorner_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHeader_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UHeader_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UHeader_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UHeader_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UHeader_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.Toggle
	 */
	struct UHeader_ButtonCutCorner_C_Toggle_Params
	{
	public:
		bool                                                       IsToggleOn;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.Update Look
	 */
	struct UHeader_ButtonCutCorner_C_UpdateLook_Params
	{	};

	/**
	 * Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.Click
	 */
	struct UHeader_ButtonCutCorner_C_Click_Params
	{	};

	/**
	 * Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.ToggleNotificationIcon
	 */
	struct UHeader_ButtonCutCorner_C_ToggleNotificationIcon_Params
	{
	public:
		bool                                                       InShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.Construct
	 */
	struct UHeader_ButtonCutCorner_C_Construct_Params
	{	};

	/**
	 * Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.ExecuteUbergraph_Header_ButtonCutCorner
	 */
	struct UHeader_ButtonCutCorner_C_ExecuteUbergraph_Header_ButtonCutCorner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.OnReleased__DelegateSignature
	 */
	struct UHeader_ButtonCutCorner_C_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.OnPressed__DelegateSignature
	 */
	struct UHeader_ButtonCutCorner_C_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function Header_ButtonCutCorner.Header_ButtonCutCorner_C.OnClicked__DelegateSignature
	 */
	struct UHeader_ButtonCutCorner_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UHeader_ButtonCutCorner_C*                           Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
