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
	 * Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.Next
	 */
	struct UOptions_Gamepad_Turn180Mode_C_Next_Params
	{
	public:
		bool                                                       Forward;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QBH6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.SetMode
	 */
	struct UOptions_Gamepad_Turn180Mode_C_SetMode_Params
	{
	public:
		ETurn180Mode                                               InMode;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3FM6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.Construct
	 */
	struct UOptions_Gamepad_Turn180Mode_C_Construct_Params
	{	};

	/**
	 * Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.OnRefresh
	 */
	struct UOptions_Gamepad_Turn180Mode_C_OnRefresh_Params
	{	};

	/**
	 * Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptions_Gamepad_Turn180Mode_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptions_Gamepad_Turn180Mode_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.PreConstruct
	 */
	struct UOptions_Gamepad_Turn180Mode_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_Gamepad_Turn180Mode.Options_Gamepad_Turn180Mode_C.ExecuteUbergraph_Options_Gamepad_Turn180Mode
	 */
	struct UOptions_Gamepad_Turn180Mode_C_ExecuteUbergraph_Options_Gamepad_Turn180Mode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M4HB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
