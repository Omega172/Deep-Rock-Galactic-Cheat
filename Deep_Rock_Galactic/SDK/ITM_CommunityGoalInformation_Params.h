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
	 * Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.DoFactionToolTip
	 */
	struct UITM_CommunityGoalInformation_C_DoFactionToolTip_Params
	{	};

	/**
	 * Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.SetResourceBox
	 */
	struct UITM_CommunityGoalInformation_C_SetResourceBox_Params
	{
	public:
		int32_t                                                    Tier;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_77VH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.UpdateIcon
	 */
	struct UITM_CommunityGoalInformation_C_UpdateIcon_Params
	{	};

	/**
	 * Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.SetFaction
	 */
	struct UITM_CommunityGoalInformation_C_SetFaction_Params
	{
	public:
		class UCommunityGoalFaction*                               Faction;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.ResetAnim
	 */
	struct UITM_CommunityGoalInformation_C_ResetAnim_Params
	{	};

	/**
	 * Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.PreConstruct
	 */
	struct UITM_CommunityGoalInformation_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.SetGoal
	 */
	struct UITM_CommunityGoalInformation_C_SetGoal_Params
	{
	public:
		class UCommunityGoal*                                      Goal;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.CheckFaction
	 */
	struct UITM_CommunityGoalInformation_C_CheckFaction_Params
	{	};

	/**
	 * Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.SetFactionAndGoal
	 */
	struct UITM_CommunityGoalInformation_C_SetFactionAndGoal_Params
	{
	public:
		class UCommunityGoalFaction*                               Faction;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCommunityGoal*                                      Goal;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoalInformation_C_BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoalInformation_C_BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoalInformation.ITM_CommunityGoalInformation_C.ExecuteUbergraph_ITM_CommunityGoalInformation
	 */
	struct UITM_CommunityGoalInformation_C_ExecuteUbergraph_ITM_CommunityGoalInformation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X152[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
