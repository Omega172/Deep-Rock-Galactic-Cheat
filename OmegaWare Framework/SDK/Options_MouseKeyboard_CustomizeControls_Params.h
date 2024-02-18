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
	 * Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.ContainsAnyName
	 */
	struct UOptions_MouseKeyboard_CustomizeControls_C_ContainsAnyName_Params
	{
	public:
		struct FCustomKeySetting                                   Button;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<class FName>                                        ActionNames;                                             // 0x0038(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Result;                                                  // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AEK6[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.OnKeyUp
	 */
	struct UOptions_MouseKeyboard_CustomizeControls_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.SetOpen
	 */
	struct UOptions_MouseKeyboard_CustomizeControls_C_SetOpen_Params
	{
	public:
		bool                                                       Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.CreateBindingWidgets
	 */
	struct UOptions_MouseKeyboard_CustomizeControls_C_CreateBindingWidgets_Params
	{	};

	/**
	 * Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UOptions_MouseKeyboard_CustomizeControls_C_BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.Construct
	 */
	struct UOptions_MouseKeyboard_CustomizeControls_C_Construct_Params
	{	};

	/**
	 * Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UOptions_MouseKeyboard_CustomizeControls_C_BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{
	public:
		class UBasic_ButtonCutCorner_C*                            Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.PreConstruct
	 */
	struct UOptions_MouseKeyboard_CustomizeControls_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_MouseKeyboard_CustomizeControls.Options_MouseKeyboard_CustomizeControls_C.ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls
	 */
	struct UOptions_MouseKeyboard_CustomizeControls_C_ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GSZC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
