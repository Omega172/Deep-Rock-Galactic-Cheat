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
	 * Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.SetIsChecked
	 */
	struct UCheck_ServerWorkEnvironment_C_SetIsChecked_Params
	{
	public:
		bool                                                       InIsChecked;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.IsInteractable
	 */
	struct UCheck_ServerWorkEnvironment_C_IsInteractable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.GetIsChecked
	 */
	struct UCheck_ServerWorkEnvironment_C_GetIsChecked_Params
	{
	public:
		bool                                                       Checked;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.PreConstruct
	 */
	struct UCheck_ServerWorkEnvironment_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 */
	struct UCheck_ServerWorkEnvironment_C_BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCheck_ServerWorkEnvironment_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.Construct
	 */
	struct UCheck_ServerWorkEnvironment_C_Construct_Params
	{	};

	/**
	 * Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.ExecuteUbergraph_Check_ServerWorkEnvironment
	 */
	struct UCheck_ServerWorkEnvironment_C_ExecuteUbergraph_Check_ServerWorkEnvironment_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Check_ServerWorkEnvironment.Check_ServerWorkEnvironment_C.OnCheckedChanged__DelegateSignature
	 */
	struct UCheck_ServerWorkEnvironment_C_OnCheckedChanged__DelegateSignature_Params
	{
	public:
		class UCheck_ServerWorkEnvironment_C*                      CheckBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDifficultySetting*                                  Difficulty;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsChecked;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
