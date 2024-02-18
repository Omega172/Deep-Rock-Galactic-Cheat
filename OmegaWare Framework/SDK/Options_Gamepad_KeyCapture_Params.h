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
	 * Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.UpdateKeyDisplay
	 */
	struct UOptions_Gamepad_KeyCapture_C_UpdateKeyDisplay_Params
	{
	public:
		struct FKey                                                InKey;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.IsInteractable
	 */
	struct UOptions_Gamepad_KeyCapture_C_IsInteractable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.ReceiveCapturingChanged
	 */
	struct UOptions_Gamepad_KeyCapture_C_ReceiveCapturingChanged_Params
	{
	public:
		bool                                                       InCapturing;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.ReceiveKeyChanged
	 */
	struct UOptions_Gamepad_KeyCapture_C_ReceiveKeyChanged_Params
	{
	public:
		struct FKey                                                InKey;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.Construct
	 */
	struct UOptions_Gamepad_KeyCapture_C_Construct_Params
	{	};

	/**
	 * Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.OnCustomKeyBindingsChanged
	 */
	struct UOptions_Gamepad_KeyCapture_C_OnCustomKeyBindingsChanged_Params
	{	};

	/**
	 * Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.ReceiveKeyCaptured
	 */
	struct UOptions_Gamepad_KeyCapture_C_ReceiveKeyCaptured_Params
	{
	public:
		struct FKey                                                InKey;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.PreConstruct
	 */
	struct UOptions_Gamepad_KeyCapture_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.ExecuteUbergraph_Options_Gamepad_KeyCapture
	 */
	struct UOptions_Gamepad_KeyCapture_C_ExecuteUbergraph_Options_Gamepad_KeyCapture_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Gamepad_KeyCapture.Options_Gamepad_KeyCapture_C.OnCapturingChanged__DelegateSignature
	 */
	struct UOptions_Gamepad_KeyCapture_C_OnCapturingChanged__DelegateSignature_Params
	{
	public:
		bool                                                       InCapturing;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
