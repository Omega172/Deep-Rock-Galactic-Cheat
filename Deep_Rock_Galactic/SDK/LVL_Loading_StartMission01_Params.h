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
	 * Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.OnFinshed
	 */
	struct ALVL_Loading_StartMission01_C_OnFinshed_Params
	{	};

	/**
	 * Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.StopPlayer
	 */
	struct ALVL_Loading_StartMission01_C_StopPlayer_Params
	{	};

	/**
	 * Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.StartPlayer
	 */
	struct ALVL_Loading_StartMission01_C_StartPlayer_Params
	{
	public:
		class ULevelSequence*                                      LevelSequence;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.ReceiveBeginPlay
	 */
	struct ALVL_Loading_StartMission01_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.PlayerStart
	 */
	struct ALVL_Loading_StartMission01_C_PlayerStart_Params
	{
	public:
		class ULevelSequence*                                      LoaderLevelSequence;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.PlayerStop
	 */
	struct ALVL_Loading_StartMission01_C_PlayerStop_Params
	{	};

	/**
	 * Function LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.ExecuteUbergraph_LVL_Loading_StartMission01
	 */
	struct ALVL_Loading_StartMission01_C_ExecuteUbergraph_LVL_Loading_StartMission01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
