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
	 * Function Check_ServerGameType.Check_ServerGameType_C.Verify
	 */
	struct UCheck_ServerGameType_C_Verify_Params
	{
	public:
		TArray<EGameType>                                          InSelectedGameTypes;                                     // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Check_ServerGameType.Check_ServerGameType_C.Reset
	 */
	struct UCheck_ServerGameType_C_Reset_Params
	{
	public:
		bool                                                       InSandbox;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7W0I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Check_ServerGameType.Check_ServerGameType_C.IsInteractable
	 */
	struct UCheck_ServerGameType_C_IsInteractable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Check_ServerGameType.Check_ServerGameType_C.GetIsChecked
	 */
	struct UCheck_ServerGameType_C_GetIsChecked_Params
	{
	public:
		bool                                                       Checked;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Check_ServerGameType.Check_ServerGameType_C.PreConstruct
	 */
	struct UCheck_ServerGameType_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Check_ServerGameType.Check_ServerGameType_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 */
	struct UCheck_ServerGameType_C_BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Check_ServerGameType.Check_ServerGameType_C.Construct
	 */
	struct UCheck_ServerGameType_C_Construct_Params
	{	};

	/**
	 * Function Check_ServerGameType.Check_ServerGameType_C.ExecuteUbergraph_Check_ServerGameType
	 */
	struct UCheck_ServerGameType_C_ExecuteUbergraph_Check_ServerGameType_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Check_ServerGameType.Check_ServerGameType_C.OnCheckedChanged__DelegateSignature
	 */
	struct UCheck_ServerGameType_C_OnCheckedChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EGameType                                                  Gametype;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
