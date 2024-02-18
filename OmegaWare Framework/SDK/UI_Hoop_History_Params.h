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
	 * Function UI_Hoop_History.UI_Hoop_History_C.GetHistoryCount
	 */
	struct UUI_Hoop_History_C_GetHistoryCount_Params
	{
	public:
		int32_t                                                    HistoryCount;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Hoop_History.UI_Hoop_History_C.OnRep_Scores
	 */
	struct UUI_Hoop_History_C_OnRep_Scores_Params
	{	};

	/**
	 * Function UI_Hoop_History.UI_Hoop_History_C.Construct
	 */
	struct UUI_Hoop_History_C_Construct_Params
	{	};

	/**
	 * Function UI_Hoop_History.UI_Hoop_History_C.UpdateScores
	 */
	struct UUI_Hoop_History_C_UpdateScores_Params
	{
	public:
		TArray<int32_t>                                            Scores;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Hoop_History.UI_Hoop_History_C.ExecuteUbergraph_UI_Hoop_History
	 */
	struct UUI_Hoop_History_C_ExecuteUbergraph_UI_Hoop_History_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
