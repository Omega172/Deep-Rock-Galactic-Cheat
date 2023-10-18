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
	 * Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.GetEntryWidgetClass
	 */
	struct UUI_ClaimableRewards_View_C_GetEntryWidgetClass_Params
	{
	public:
		unsigned char                                              UnknownData_SEZF[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              OutWidgetClass;                                          // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.GetLine
	 */
	struct UUI_ClaimableRewards_View_C_GetLine_Params
	{
	public:
		class UHorizontalBox*                                      EntryBox;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.SetupView
	 */
	struct UUI_ClaimableRewards_View_C_SetupView_Params
	{
	public:
		struct FClaimableRewardView                                InViewData;                                              // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.TryFinish
	 */
	struct UUI_ClaimableRewards_View_C_TryFinish_Params
	{	};

	/**
	 * Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.StopAudio
	 */
	struct UUI_ClaimableRewards_View_C_StopAudio_Params
	{	};

	/**
	 * Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnAudioFinished_Event
	 */
	struct UUI_ClaimableRewards_View_C_OnAudioFinished_Event_Params
	{	};

	/**
	 * Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.Start Mission Control Speak
	 */
	struct UUI_ClaimableRewards_View_C_StartMissionControlSpeak_Params
	{	};

	/**
	 * Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ShowBlur
	 */
	struct UUI_ClaimableRewards_View_C_ShowBlur_Params
	{	};

	/**
	 * Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ShowMouseCursor
	 */
	struct UUI_ClaimableRewards_View_C_ShowMouseCursor_Params
	{	};

	/**
	 * Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.Move In Rewards
	 */
	struct UUI_ClaimableRewards_View_C_MoveInRewards_Params
	{	};

	/**
	 * Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnRewardClaimed
	 */
	struct UUI_ClaimableRewards_View_C_OnRewardClaimed_Params
	{
	public:
		class UClaimableRewardEntryWidget*                         InEntryWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ReceiveEndFlow
	 */
	struct UUI_ClaimableRewards_View_C_ReceiveEndFlow_Params
	{	};

	/**
	 * Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ReceiveDataChanged
	 */
	struct UUI_ClaimableRewards_View_C_ReceiveDataChanged_Params
	{	};

	/**
	 * Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ReceiveBeginFlow
	 */
	struct UUI_ClaimableRewards_View_C_ReceiveBeginFlow_Params
	{	};

	/**
	 * Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.ExecuteUbergraph_UI_ClaimableRewards_View
	 */
	struct UUI_ClaimableRewards_View_C_ExecuteUbergraph_UI_ClaimableRewards_View_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnRewardsAndMissionControlFinished__DelegateSignature
	 */
	struct UUI_ClaimableRewards_View_C_OnRewardsAndMissionControlFinished__DelegateSignature_Params
	{	};

	/**
	 * Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnRewardsClaimed__DelegateSignature
	 */
	struct UUI_ClaimableRewards_View_C_OnRewardsClaimed__DelegateSignature_Params
	{	};

	/**
	 * Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnMissionControlFinished__DelegateSignature
	 */
	struct UUI_ClaimableRewards_View_C_OnMissionControlFinished__DelegateSignature_Params
	{	};

	/**
	 * Function UI_ClaimableRewards_View.UI_ClaimableRewards_View_C.OnMissionControlStarted__DelegateSignature
	 */
	struct UUI_ClaimableRewards_View_C_OnMissionControlStarted__DelegateSignature_Params
	{
	public:
		class UAudioComponent*                                     MissionControlAudio;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
