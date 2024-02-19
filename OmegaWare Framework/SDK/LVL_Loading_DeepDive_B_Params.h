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
	 * Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.StopPlayer
	 */
	struct ALVL_Loading_DeepDive_B_C_StopPlayer_Params
	{	};

	/**
	 * Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.Start Player
	 */
	struct ALVL_Loading_DeepDive_B_C_StartPlayer_Params
	{
	public:
		class ULevelSequence*                                      LevelSequence;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.ReceiveBeginPlay
	 */
	struct ALVL_Loading_DeepDive_B_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.PlayerStart
	 */
	struct ALVL_Loading_DeepDive_B_C_PlayerStart_Params
	{
	public:
		class ULevelSequence*                                      LoaderLevelSequence;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.PlayerStop
	 */
	struct ALVL_Loading_DeepDive_B_C_PlayerStop_Params
	{	};

	/**
	 * Function LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.ExecuteUbergraph_LVL_Loading_DeepDive_B
	 */
	struct ALVL_Loading_DeepDive_B_C_ExecuteUbergraph_LVL_Loading_DeepDive_B_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
