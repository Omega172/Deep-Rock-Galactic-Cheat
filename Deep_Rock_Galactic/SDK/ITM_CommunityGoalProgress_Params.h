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
	 * Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.SetInfoToCurrentFaction
	 */
	struct UITM_CommunityGoalProgress_C_SetInfoToCurrentFaction_Params
	{	};

	/**
	 * Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.SetGoals
	 */
	struct UITM_CommunityGoalProgress_C_SetGoals_Params
	{
	public:
		TArray<class FString>                                      Goals;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<float>                                              Values;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            Members;                                                 // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      MinersUnionTier;                                         // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ForceRefresh;                                            // 0x0034(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ASQC[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.TestCommunityGoal
	 */
	struct UITM_CommunityGoalProgress_C_TestCommunityGoal_Params
	{	};

	/**
	 * Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.SetTime
	 */
	struct UITM_CommunityGoalProgress_C_SetTime_Params
	{
	public:
		float                                                      Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.Construct
	 */
	struct UITM_CommunityGoalProgress_C_Construct_Params
	{	};

	/**
	 * Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.CHover
	 */
	struct UITM_CommunityGoalProgress_C_CHover_Params
	{
	public:
		class UCommunityGoalFaction*                               Faction;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCommunityGoal*                                      Goal;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F1Hover
	 */
	struct UITM_CommunityGoalProgress_C_F1Hover_Params
	{
	public:
		class UCommunityGoalFaction*                               Faction;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCommunityGoal*                                      Goal;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F2Hover
	 */
	struct UITM_CommunityGoalProgress_C_F2Hover_Params
	{
	public:
		class UCommunityGoalFaction*                               Faction;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCommunityGoal*                                      Goal;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.CHEnd
	 */
	struct UITM_CommunityGoalProgress_C_CHEnd_Params
	{	};

	/**
	 * Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F1End
	 */
	struct UITM_CommunityGoalProgress_C_F1End_Params
	{	};

	/**
	 * Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F2End
	 */
	struct UITM_CommunityGoalProgress_C_F2End_Params
	{	};

	/**
	 * Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.TotalHover
	 */
	struct UITM_CommunityGoalProgress_C_TotalHover_Params
	{
	public:
		class UCommunityGoalFaction*                               Faction;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCommunityGoal*                                      Goal;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.TotalEnd
	 */
	struct UITM_CommunityGoalProgress_C_TotalEnd_Params
	{	};

	/**
	 * Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.ExecuteUbergraph_ITM_CommunityGoalProgress
	 */
	struct UITM_CommunityGoalProgress_C_ExecuteUbergraph_ITM_CommunityGoalProgress_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
