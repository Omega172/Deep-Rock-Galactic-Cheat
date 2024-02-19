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
	 * Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.DoFactionToolTip
	 */
	struct UITM_CommunityGoalResult_C_DoFactionToolTip_Params
	{	};

	/**
	 * Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.UpdateTitle
	 */
	struct UITM_CommunityGoalResult_C_UpdateTitle_Params
	{	};

	/**
	 * Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.UpdateIcon
	 */
	struct UITM_CommunityGoalResult_C_UpdateIcon_Params
	{	};

	/**
	 * Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.SetFaction
	 */
	struct UITM_CommunityGoalResult_C_SetFaction_Params
	{
	public:
		class UCommunityGoalFaction*                               Faction;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.PreConstruct
	 */
	struct UITM_CommunityGoalResult_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.SetResult
	 */
	struct UITM_CommunityGoalResult_C_SetResult_Params
	{
	public:
		int32_t                                                    Score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Tier;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                GoalName;                                                // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.CheckFaction
	 */
	struct UITM_CommunityGoalResult_C_CheckFaction_Params
	{	};

	/**
	 * Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoalResult_C_BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoalResult_C_BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoalResult.ITM_CommunityGoalResult_C.ExecuteUbergraph_ITM_CommunityGoalResult
	 */
	struct UITM_CommunityGoalResult_C_ExecuteUbergraph_ITM_CommunityGoalResult_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5ZCE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
