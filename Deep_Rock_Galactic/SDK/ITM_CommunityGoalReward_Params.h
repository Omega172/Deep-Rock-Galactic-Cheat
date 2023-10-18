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
	 * Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.TotalTiers
	 */
	struct UITM_CommunityGoalReward_C_TotalTiers_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.SetGoalResultTier
	 */
	struct UITM_CommunityGoalReward_C_SetGoalResultTier_Params
	{
	public:
		int32_t                                                    Tier;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9T2X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCommunityGoal*                                      Goal;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.BuildResources
	 */
	struct UITM_CommunityGoalReward_C_BuildResources_Params
	{
	public:
		int32_t                                                    Tier;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3MH0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.SetGoalResult
	 */
	struct UITM_CommunityGoalReward_C_SetGoalResult_Params
	{
	public:
		float                                                      Score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Members;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCommunityGoal*                                      Goal;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.UpdateTitle
	 */
	struct UITM_CommunityGoalReward_C_UpdateTitle_Params
	{	};

	/**
	 * Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.UpdateIcon
	 */
	struct UITM_CommunityGoalReward_C_UpdateIcon_Params
	{	};

	/**
	 * Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.SetFaction
	 */
	struct UITM_CommunityGoalReward_C_SetFaction_Params
	{
	public:
		class UCommunityGoalFaction*                               Faction;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.PreConstruct
	 */
	struct UITM_CommunityGoalReward_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.ExecuteUbergraph_ITM_CommunityGoalReward
	 */
	struct UITM_CommunityGoalReward_C_ExecuteUbergraph_ITM_CommunityGoalReward_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
