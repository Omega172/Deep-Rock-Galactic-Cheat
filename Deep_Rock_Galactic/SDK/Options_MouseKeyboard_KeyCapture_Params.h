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
	 * Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.UpdateClearButton
	 */
	struct UOptions_MouseKeyboard_KeyCapture_C_UpdateClearButton_Params
	{	};

	/**
	 * Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.UpdateKeyInfo
	 */
	struct UOptions_MouseKeyboard_KeyCapture_C_UpdateKeyInfo_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.No_8623E71E42D4951E6FF011979EF3C667
	 */
	struct UOptions_MouseKeyboard_KeyCapture_C_No_8623E71E42D4951E6FF011979EF3C667_Params
	{	};

	/**
	 * Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.Yes_8623E71E42D4951E6FF011979EF3C667
	 */
	struct UOptions_MouseKeyboard_KeyCapture_C_Yes_8623E71E42D4951E6FF011979EF3C667_Params
	{	};

	/**
	 * Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptions_MouseKeyboard_KeyCapture_C_BndEvt__ClearButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnMouseEnter
	 */
	struct UOptions_MouseKeyboard_KeyCapture_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnMouseLeave
	 */
	struct UOptions_MouseKeyboard_KeyCapture_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.PreConstruct
	 */
	struct UOptions_MouseKeyboard_KeyCapture_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnCustomKeyBindingsChanged
	 */
	struct UOptions_MouseKeyboard_KeyCapture_C_OnCustomKeyBindingsChanged_Params
	{	};

	/**
	 * Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.Construct
	 */
	struct UOptions_MouseKeyboard_KeyCapture_C_Construct_Params
	{	};

	/**
	 * Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.ReceiveKeyChanged
	 */
	struct UOptions_MouseKeyboard_KeyCapture_C_ReceiveKeyChanged_Params
	{
	public:
		struct FKey                                                InKey;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.ReceiveKeyCaptured
	 */
	struct UOptions_MouseKeyboard_KeyCapture_C_ReceiveKeyCaptured_Params
	{
	public:
		struct FKey                                                InKey;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.ReceiveCapturingChanged
	 */
	struct UOptions_MouseKeyboard_KeyCapture_C_ReceiveCapturingChanged_Params
	{
	public:
		bool                                                       InCapturing;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.ExecuteUbergraph_Options_MouseKeyboard_KeyCapture
	 */
	struct UOptions_MouseKeyboard_KeyCapture_C_ExecuteUbergraph_Options_MouseKeyboard_KeyCapture_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnKeyCaptureCancelled__DelegateSignature
	 */
	struct UOptions_MouseKeyboard_KeyCapture_C_OnKeyCaptureCancelled__DelegateSignature_Params
	{	};

	/**
	 * Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnKeyCaptureChanged__DelegateSignature
	 */
	struct UOptions_MouseKeyboard_KeyCapture_C_OnKeyCaptureChanged__DelegateSignature_Params
	{	};

	/**
	 * Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnKeyCaptureError__DelegateSignature
	 */
	struct UOptions_MouseKeyboard_KeyCapture_C_OnKeyCaptureError__DelegateSignature_Params
	{	};

	/**
	 * Function Options_MouseKeyboard_KeyCapture.Options_MouseKeyboard_KeyCapture_C.OnKeyCaptureFinished__DelegateSignature
	 */
	struct UOptions_MouseKeyboard_KeyCapture_C_OnKeyCaptureFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
