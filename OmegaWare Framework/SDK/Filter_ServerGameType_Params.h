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
	 * Function Filter_ServerGameType.Filter_ServerGameType_C.VerifyOnlyModded
	 */
	struct UFilter_ServerGameType_C_VerifyOnlyModded_Params
	{
	public:
		EGameType                                                  LastClicked;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Filter_ServerGameType.Filter_ServerGameType_C.VerifyRules
	 */
	struct UFilter_ServerGameType_C_VerifyRules_Params
	{	};

	/**
	 * Function Filter_ServerGameType.Filter_ServerGameType_C.IsSandBoxMode
	 */
	struct UFilter_ServerGameType_C_IsSandBoxMode_Params
	{
	public:
		bool                                                       SandboxMode;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BEE1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Filter_ServerGameType.Filter_ServerGameType_C.CreateEntries
	 */
	struct UFilter_ServerGameType_C_CreateEntries_Params
	{	};

	/**
	 * Function Filter_ServerGameType.Filter_ServerGameType_C.Reset
	 */
	struct UFilter_ServerGameType_C_Reset_Params
	{	};

	/**
	 * Function Filter_ServerGameType.Filter_ServerGameType_C.GetSelectedGameTypes
	 */
	struct UFilter_ServerGameType_C_GetSelectedGameTypes_Params
	{
	public:
		TArray<EGameType>                                          GameTypes;                                               // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Filter_ServerGameType.Filter_ServerGameType_C.OpenMenu
	 */
	struct UFilter_ServerGameType_C_OpenMenu_Params
	{
	public:
		bool                                                       Open;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Filter_ServerGameType.Filter_ServerGameType_C.UpdateSubheader
	 */
	struct UFilter_ServerGameType_C_UpdateSubheader_Params
	{	};

	/**
	 * Function Filter_ServerGameType.Filter_ServerGameType_C.PreConstruct
	 */
	struct UFilter_ServerGameType_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Filter_ServerGameType.Filter_ServerGameType_C.OnGameTypeChanged
	 */
	struct UFilter_ServerGameType_C_OnGameTypeChanged_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EGameType                                                  Gametype;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Filter_ServerGameType.Filter_ServerGameType_C.Construct
	 */
	struct UFilter_ServerGameType_C_Construct_Params
	{	};

	/**
	 * Function Filter_ServerGameType.Filter_ServerGameType_C.BndEvt__Basic_BoolUserSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 */
	struct UFilter_ServerGameType_C_BndEvt__Basic_BoolUserSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Filter_ServerGameType.Filter_ServerGameType_C.ExecuteUbergraph_Filter_ServerGameType
	 */
	struct UFilter_ServerGameType_C_ExecuteUbergraph_Filter_ServerGameType_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Filter_ServerGameType.Filter_ServerGameType_C.OnSelectionChanged__DelegateSignature
	 */
	struct UFilter_ServerGameType_C_OnSelectionChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
