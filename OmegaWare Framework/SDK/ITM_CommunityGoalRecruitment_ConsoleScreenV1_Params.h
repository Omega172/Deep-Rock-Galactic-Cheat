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
	 * Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.SetResultFactionID
	 */
	struct UITM_CommunityGoalRecruitment_ConsoleScreenV1_C_SetResultFactionID_Params
	{
	public:
		class UITM_CommunityGoalResult_ConsoleScreenV1_C*          ResultUI;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FactionID;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U2BV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.BuildRecruitmentUI
	 */
	struct UITM_CommunityGoalRecruitment_ConsoleScreenV1_C_BuildRecruitmentUI_Params
	{
	public:
		class UCommunityGoalFaction*                               Faction;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.Construct
	 */
	struct UITM_CommunityGoalRecruitment_ConsoleScreenV1_C_Construct_Params
	{	};

	/**
	 * Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.ResetFactionCheckState
	 */
	struct UITM_CommunityGoalRecruitment_ConsoleScreenV1_C_ResetFactionCheckState_Params
	{	};

	/**
	 * Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.ExecuteUbergraph_ITM_CommunityGoalRecruitment_ConsoleScreenV1
	 */
	struct UITM_CommunityGoalRecruitment_ConsoleScreenV1_C_ExecuteUbergraph_ITM_CommunityGoalRecruitment_ConsoleScreenV1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoalRecruitment_ConsoleScreenV1.ITM_CommunityGoalRecruitment_ConsoleScreenV1_C.CheckState__DelegateSignature
	 */
	struct UITM_CommunityGoalRecruitment_ConsoleScreenV1_C_CheckState__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
