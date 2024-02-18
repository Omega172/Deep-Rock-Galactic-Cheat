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
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.DoFactionToolTip
	 */
	struct UITM_CommunityGoal_C_DoFactionToolTip_Params
	{	};

	/**
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.DoToolTip
	 */
	struct UITM_CommunityGoal_C_DoToolTip_Params
	{
	public:
		class UWidget*                                             ToolTipTarget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Tier;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DFR7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.UpdateTitle
	 */
	struct UITM_CommunityGoal_C_UpdateTitle_Params
	{	};

	/**
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.UpdateIcon
	 */
	struct UITM_CommunityGoal_C_UpdateIcon_Params
	{	};

	/**
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.SetFaction
	 */
	struct UITM_CommunityGoal_C_SetFaction_Params
	{
	public:
		class UCommunityGoalFaction*                               Faction;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.ResetAnim
	 */
	struct UITM_CommunityGoal_C_ResetAnim_Params
	{	};

	/**
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.Tick
	 */
	struct UITM_CommunityGoal_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.SetCommunityGoal
	 */
	struct UITM_CommunityGoal_C_SetCommunityGoal_Params
	{
	public:
		class FText                                                Goal;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      BronzeProgress;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SilverProgress;                                          // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      GoldProgress;                                            // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.PreConstruct
	 */
	struct UITM_CommunityGoal_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.SetGoal
	 */
	struct UITM_CommunityGoal_C_SetGoal_Params
	{
	public:
		class FString                                              GoalID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      GoalValue;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Members;                                                 // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ForceRefresh;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_C_BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_C_BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.CheckFaction
	 */
	struct UITM_CommunityGoal_C_CheckFaction_Params
	{	};

	/**
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_C_BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_C_BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_C_BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_C_BndEvt__Button_Goal_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_C_BndEvt__Button_Goal_1_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_C_BndEvt__Button_Goal_2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_C_BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_C_BndEvt__FactionIconToolTip_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.ExecuteUbergraph_ITM_CommunityGoal
	 */
	struct UITM_CommunityGoal_C_ExecuteUbergraph_ITM_CommunityGoal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.HoverEnded__DelegateSignature
	 */
	struct UITM_CommunityGoal_C_HoverEnded__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal.ITM_CommunityGoal_C.HoverStarted__DelegateSignature
	 */
	struct UITM_CommunityGoal_C_HoverStarted__DelegateSignature_Params
	{
	public:
		class UCommunityGoalFaction*                               Faction;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCommunityGoal*                                      Goal;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
