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
	 * Function Console_MissionStatistics.Console_MissionStatistics_C.HasClaimablePerkPoints
	 */
	struct UConsole_MissionStatistics_C_HasClaimablePerkPoints_Params
	{
	public:
		bool                                                       Claimable;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WRXA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Console_MissionStatistics.Console_MissionStatistics_C.Construct
	 */
	struct UConsole_MissionStatistics_C_Construct_Params
	{	};

	/**
	 * Function Console_MissionStatistics.Console_MissionStatistics_C.StartClaimable
	 */
	struct UConsole_MissionStatistics_C_StartClaimable_Params
	{	};

	/**
	 * Function Console_MissionStatistics.Console_MissionStatistics_C.StopClaimable
	 */
	struct UConsole_MissionStatistics_C_StopClaimable_Params
	{	};

	/**
	 * Function Console_MissionStatistics.Console_MissionStatistics_C.Update
	 */
	struct UConsole_MissionStatistics_C_Update_Params
	{	};

	/**
	 * Function Console_MissionStatistics.Console_MissionStatistics_C.OnCountChanged_Event
	 */
	struct UConsole_MissionStatistics_C_OnCountChanged_Event_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMissionStat*                                        MissionStat;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Console_MissionStatistics.Console_MissionStatistics_C.OnMilestoneClaimed_Event
	 */
	struct UConsole_MissionStatistics_C_OnMilestoneClaimed_Event_Params
	{
	public:
		class UMilestoneAsset*                                     Milestone;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ClaimedTier;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Console_MissionStatistics.Console_MissionStatistics_C.ExecuteUbergraph_Console_MissionStatistics
	 */
	struct UConsole_MissionStatistics_C_ExecuteUbergraph_Console_MissionStatistics_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EMVS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
