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
	 * Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OpenMenu
	 */
	struct UFilter_ServerWorkEnvironment_C_OpenMenu_Params
	{
	public:
		bool                                                       Open;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.GetSelectedDifficulties
	 */
	struct UFilter_ServerWorkEnvironment_C_GetSelectedDifficulties_Params
	{
	public:
		TArray<class UDifficultySetting*>                          Difficulties;                                            // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.IsDifficultySelected
	 */
	struct UFilter_ServerWorkEnvironment_C_IsDifficultySelected_Params
	{
	public:
		class UDifficultySetting*                                  InDifficulty;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Selected;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8KUD[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.UpdateSubheader
	 */
	struct UFilter_ServerWorkEnvironment_C_UpdateSubheader_Params
	{	};

	/**
	 * Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.Add Work Environment
	 */
	struct UFilter_ServerWorkEnvironment_C_AddWorkEnvironment_Params
	{
	public:
		class UDifficultySetting*                                  Difficulty;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCheck_ServerWorkEnvironment_C*                      OutWidget;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsChecked;                                            // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.PreConstruct
	 */
	struct UFilter_ServerWorkEnvironment_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OnCheckedChanged
	 */
	struct UFilter_ServerWorkEnvironment_C_OnCheckedChanged_Params
	{
	public:
		class UCheck_ServerWorkEnvironment_C*                      CheckBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDifficultySetting*                                  Difficulty;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsChecked;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.Reset
	 */
	struct UFilter_ServerWorkEnvironment_C_Reset_Params
	{	};

	/**
	 * Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.ExecuteUbergraph_Filter_ServerWorkEnvironment
	 */
	struct UFilter_ServerWorkEnvironment_C_ExecuteUbergraph_Filter_ServerWorkEnvironment_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7S4C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OnSelectionChanged__DelegateSignature
	 */
	struct UFilter_ServerWorkEnvironment_C_OnSelectionChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
