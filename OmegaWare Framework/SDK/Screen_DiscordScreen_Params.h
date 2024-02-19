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
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.BuildProgressUI
	 */
	struct UScreen_DiscordScreen_C_BuildProgressUI_Params
	{
	public:
		bool                                                       ForceRefresh;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VWES[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.RefreshCurrentState
	 */
	struct UScreen_DiscordScreen_C_RefreshCurrentState_Params
	{	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.SetResult
	 */
	struct UScreen_DiscordScreen_C_SetResult_Params
	{
	public:
		class UITM_CommunityGoalResult_C*                          ResultUI;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FactionID;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UBRQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.AwardRewards
	 */
	struct UScreen_DiscordScreen_C_AwardRewards_Params
	{	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.MinersUnionTier
	 */
	struct UScreen_DiscordScreen_C_MinersUnionTier_Params
	{
	public:
		float                                                      DSMUTier;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.BuildRewardUI
	 */
	struct UScreen_DiscordScreen_C_BuildRewardUI_Params
	{	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.CurrentPlayerFaction
	 */
	struct UScreen_DiscordScreen_C_CurrentPlayerFaction_Params
	{
	public:
		class UCommunityGoalFaction*                               CurrentFaction;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.SetGoalState
	 */
	struct UScreen_DiscordScreen_C_SetGoalState_Params
	{
	public:
		bool                                                       isGoal;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isRecruitment;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.SetGoals
	 */
	struct UScreen_DiscordScreen_C_SetGoals_Params
	{
	public:
		TArray<class FString>                                      Goals;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<float>                                              Values;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            Members;                                                 // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.TestCommunityGoals
	 */
	struct UScreen_DiscordScreen_C_TestCommunityGoals_Params
	{	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.Construct
	 */
	struct UScreen_DiscordScreen_C_Construct_Params
	{	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.Do Running Text
	 */
	struct UScreen_DiscordScreen_C_DoRunningText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q7AC[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTextBlock*                                          Target;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.PreConstruct
	 */
	struct UScreen_DiscordScreen_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.CheckState
	 */
	struct UScreen_DiscordScreen_C_CheckState_Params
	{	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.RegisterEvents
	 */
	struct UScreen_DiscordScreen_C_RegisterEvents_Params
	{	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnFactionsDataRecievedEvent
	 */
	struct UScreen_DiscordScreen_C_OnFactionsDataRecievedEvent_Params
	{
	public:
		TArray<class FString>                                      Goals;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<float>                                              Values;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            Members;                                                 // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnCGSDataReceivedEvent
	 */
	struct UScreen_DiscordScreen_C_OnCGSDataReceivedEvent_Params
	{
	public:
		bool                                                       stateReceived;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.RequestData
	 */
	struct UScreen_DiscordScreen_C_RequestData_Params
	{	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.Destruct
	 */
	struct UScreen_DiscordScreen_C_Destruct_Params
	{	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.ResetFactionCheckState
	 */
	struct UScreen_DiscordScreen_C_ResetFactionCheckState_Params
	{	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.BndEvt__ClaimRewardButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
	 */
	struct UScreen_DiscordScreen_C_BndEvt__ClaimRewardButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnFactionChangedEvent
	 */
	struct UScreen_DiscordScreen_C_OnFactionChangedEvent_Params
	{	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.Refresh Ui
	 */
	struct UScreen_DiscordScreen_C_RefreshUi_Params
	{	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnGoalInitialized
	 */
	struct UScreen_DiscordScreen_C_OnGoalInitialized_Params
	{	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.ExecuteUbergraph_Screen_DiscordScreen
	 */
	struct UScreen_DiscordScreen_C_ExecuteUbergraph_Screen_DiscordScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_376G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Screen_DiscordScreen.Screen_DiscordScreen_C.ScreenChanged__DelegateSignature
	 */
	struct UScreen_DiscordScreen_C_ScreenChanged__DelegateSignature_Params
	{
	public:
		ECommunityUIState                                          CurrentState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECommunityUIState                                          previousState;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
