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
	 * Function Options_Gamepad_CustomizeControls.Options_Gamepad_CustomizeControls_C.OnKeyUp
	 */
	struct UOptions_Gamepad_CustomizeControls_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Options_Gamepad_CustomizeControls.Options_Gamepad_CustomizeControls_C.SetOpen
	 */
	struct UOptions_Gamepad_CustomizeControls_C_SetOpen_Params
	{
	public:
		bool                                                       Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_Gamepad_CustomizeControls.Options_Gamepad_CustomizeControls_C.CreateBindingWidgets
	 */
	struct UOptions_Gamepad_CustomizeControls_C_CreateBindingWidgets_Params
	{	};

	/**
	 * Function Options_Gamepad_CustomizeControls.Options_Gamepad_CustomizeControls_C.PreConstruct
	 */
	struct UOptions_Gamepad_CustomizeControls_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_Gamepad_CustomizeControls.Options_Gamepad_CustomizeControls_C.Construct
	 */
	struct UOptions_Gamepad_CustomizeControls_C_Construct_Params
	{	};

	/**
	 * Function Options_Gamepad_CustomizeControls.Options_Gamepad_CustomizeControls_C.BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UOptions_Gamepad_CustomizeControls_C_BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{
	public:
		class UBasic_ButtonCutCorner_C*                            Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Gamepad_CustomizeControls.Options_Gamepad_CustomizeControls_C.BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UOptions_Gamepad_CustomizeControls_C_BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Options_Gamepad_CustomizeControls.Options_Gamepad_CustomizeControls_C.ExecuteUbergraph_Options_Gamepad_CustomizeControls
	 */
	struct UOptions_Gamepad_CustomizeControls_C_ExecuteUbergraph_Options_Gamepad_CustomizeControls_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
