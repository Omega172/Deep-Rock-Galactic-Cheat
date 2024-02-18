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
	 * Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.UpdateTitle
	 */
	struct UITM_CommunityGoal_ConsoleScreenV2_C_UpdateTitle_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.UpdateIcon
	 */
	struct UITM_CommunityGoal_ConsoleScreenV2_C_UpdateIcon_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.SetFaction
	 */
	struct UITM_CommunityGoal_ConsoleScreenV2_C_SetFaction_Params
	{
	public:
		class UCommunityGoalFaction*                               Faction;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.ResetAnim
	 */
	struct UITM_CommunityGoal_ConsoleScreenV2_C_ResetAnim_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.SetCommunityGoal
	 */
	struct UITM_CommunityGoal_ConsoleScreenV2_C_SetCommunityGoal_Params
	{
	public:
		class FText                                                Goal;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      BronzeProgress;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SilverProgress;                                          // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      GoldProgress;                                            // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.Tick
	 */
	struct UITM_CommunityGoal_ConsoleScreenV2_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.PreConstruct
	 */
	struct UITM_CommunityGoal_ConsoleScreenV2_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.SetGoal
	 */
	struct UITM_CommunityGoal_ConsoleScreenV2_C_SetGoal_Params
	{
	public:
		class FString                                              GoalID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      GoalValue;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Members;                                                 // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_ConsoleScreenV2_C_BndEvt__Button_58_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_CommunityGoal_ConsoleScreenV2_C_BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.CheckFaction
	 */
	struct UITM_CommunityGoal_ConsoleScreenV2_C_CheckFaction_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.ExecuteUbergraph_ITM_CommunityGoal_ConsoleScreenV2
	 */
	struct UITM_CommunityGoal_ConsoleScreenV2_C_ExecuteUbergraph_ITM_CommunityGoal_ConsoleScreenV2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.HoverEnded__DelegateSignature
	 */
	struct UITM_CommunityGoal_ConsoleScreenV2_C_HoverEnded__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_CommunityGoal_ConsoleScreenV2.ITM_CommunityGoal_ConsoleScreenV2_C.HoverStarted__DelegateSignature
	 */
	struct UITM_CommunityGoal_ConsoleScreenV2_C_HoverStarted__DelegateSignature_Params
	{
	public:
		class UCommunityGoalFaction*                               Faction;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCommunityGoal*                                      Goal;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
