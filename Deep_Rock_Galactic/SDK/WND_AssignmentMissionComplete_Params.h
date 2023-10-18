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
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.CheckMinersManualNotifications
	 */
	struct UWND_AssignmentMissionComplete_C_CheckMinersManualNotifications_Params
	{	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.UpdateGoogleAnalytics
	 */
	struct UWND_AssignmentMissionComplete_C_UpdateGoogleAnalytics_Params
	{	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.UpdateCampaignProgressBar
	 */
	struct UWND_AssignmentMissionComplete_C_UpdateCampaignProgressBar_Params
	{
	public:
		bool                                                       ShowLastMission;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.IsWindowOpen
	 */
	struct UWND_AssignmentMissionComplete_C_IsWindowOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L8ZD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnKeyUp
	 */
	struct UWND_AssignmentMissionComplete_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.SetFrameColor
	 */
	struct UWND_AssignmentMissionComplete_C_SetFrameColor_Params
	{
	public:
		ENUM_MenuColors                                            Color;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VOQE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.GetMissionCompleteShout
	 */
	struct UWND_AssignmentMissionComplete_C_GetMissionCompleteShout_Params
	{
	public:
		class UDialogDataAsset*                                    MissionCompleteShout;                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.CreateRewardWidget
	 */
	struct UWND_AssignmentMissionComplete_C_CreateRewardWidget_Params
	{
	public:
		class UReward*                                             Reward;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class URewardWidget*                                       Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Add Reward List
	 */
	struct UWND_AssignmentMissionComplete_C_AddRewardList_Params
	{
	public:
		TArray<class UReward*>                                     List;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Add Reward
	 */
	struct UWND_AssignmentMissionComplete_C_AddReward_Params
	{
	public:
		class UReward*                                             Reward;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.PreConstruct
	 */
	struct UWND_AssignmentMissionComplete_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UWND_AssignmentMissionComplete_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnShown
	 */
	struct UWND_AssignmentMissionComplete_C_OnShown_Params
	{	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnClosed
	 */
	struct UWND_AssignmentMissionComplete_C_OnClosed_Params
	{	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.SetMissionControlPaused
	 */
	struct UWND_AssignmentMissionComplete_C_SetMissionControlPaused_Params
	{
	public:
		bool                                                       IsPaused;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Continue
	 */
	struct UWND_AssignmentMissionComplete_C_Continue_Params
	{	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.CursorInputHack
	 */
	struct UWND_AssignmentMissionComplete_C_CursorInputHack_Params
	{	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Init Window
	 */
	struct UWND_AssignmentMissionComplete_C_InitWindow_Params
	{	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Start Mission Control Speak
	 */
	struct UWND_AssignmentMissionComplete_C_StartMissionControlSpeak_Params
	{	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnAppearFinished
	 */
	struct UWND_AssignmentMissionComplete_C_OnAppearFinished_Params
	{	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.On Mission Control Finished
	 */
	struct UWND_AssignmentMissionComplete_C_OnMissionControlFinished_Params
	{	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Count Down
	 */
	struct UWND_AssignmentMissionComplete_C_CountDown_Params
	{	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.Reward Claimed
	 */
	struct UWND_AssignmentMissionComplete_C_RewardClaimed_Params
	{	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnNewTopWindow
	 */
	struct UWND_AssignmentMissionComplete_C_OnNewTopWindow_Params
	{	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnProgressBarMoveFinished
	 */
	struct UWND_AssignmentMissionComplete_C_OnProgressBarMoveFinished_Params
	{	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnUpdateProgressBarFinished
	 */
	struct UWND_AssignmentMissionComplete_C_OnUpdateProgressBarFinished_Params
	{	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.OnProgressBarUpdateStep
	 */
	struct UWND_AssignmentMissionComplete_C_OnProgressBarUpdateStep_Params
	{	};

	/**
	 * Function WND_AssignmentMissionComplete.WND_AssignmentMissionComplete_C.ExecuteUbergraph_WND_AssignmentMissionComplete
	 */
	struct UWND_AssignmentMissionComplete_C_ExecuteUbergraph_WND_AssignmentMissionComplete_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
