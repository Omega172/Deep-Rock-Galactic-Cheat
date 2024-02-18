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
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.TryShowNextNotification
	 */
	struct ABP_HUD_SpaceRig_C_TryShowNextNotification_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.FetchPromotionRewards
	 */
	struct ABP_HUD_SpaceRig_C_FetchPromotionRewards_Params
	{
	public:
		bool                                                       OutSuccess;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1EAT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.EnqueueWindow
	 */
	struct ABP_HUD_SpaceRig_C_EnqueueWindow_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.PlayerSpawned
	 */
	struct ABP_HUD_SpaceRig_C_PlayerSpawned_Params
	{
	public:
		class APlayerCharacter*                                    Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnVisibilityChanged
	 */
	struct ABP_HUD_SpaceRig_C_OnVisibilityChanged_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveDestroyed
	 */
	struct ABP_HUD_SpaceRig_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveBeginPlay
	 */
	struct ABP_HUD_SpaceRig_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnCountdownCompleted
	 */
	struct ABP_HUD_SpaceRig_C_OnCountdownCompleted_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Update Visibility
	 */
	struct ABP_HUD_SpaceRig_C_UpdateVisibility_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Handle Count Down
	 */
	struct ABP_HUD_SpaceRig_C_HandleCountDown_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Campaign Notifications
	 */
	struct ABP_HUD_SpaceRig_C_SetupCampaignNotifications_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnCampaignNotification_Event
	 */
	struct ABP_HUD_SpaceRig_C_OnCampaignNotification_Event_Params
	{
	public:
		class UCampaignNotification*                               Notification;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Retirement Shouts
	 */
	struct ABP_HUD_SpaceRig_C_SetupRetirementShouts_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnEligibleForRetirementAssignment
	 */
	struct ABP_HUD_SpaceRig_C_OnEligibleForRetirementAssignment_Params
	{
	public:
		class UBP_GameInstance_C*                                  GameInstance;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Spacerig Notifications
	 */
	struct ABP_HUD_SpaceRig_C_SetupSpacerigNotifications_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup UI Notifications
	 */
	struct ABP_HUD_SpaceRig_C_SetupUINotifications_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Promotion Rewards
	 */
	struct ABP_HUD_SpaceRig_C_SetupPromotionRewards_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup First Infused Core
	 */
	struct ABP_HUD_SpaceRig_C_SetupFirstInfusedCore_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Pending Rewards
	 */
	struct ABP_HUD_SpaceRig_C_SetupPendingRewards_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup FSD Events
	 */
	struct ABP_HUD_SpaceRig_C_SetupFSDEvents_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnFSDEventActiveChanged
	 */
	struct ABP_HUD_SpaceRig_C_OnFSDEventActiveChanged_Params
	{
	public:
		class UFSDEvent*                                           InFsdEvent;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsActive;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.SetupTutorialMessage
	 */
	struct ABP_HUD_SpaceRig_C_SetupTutorialMessage_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.CheckForTutorialPrompt
	 */
	struct ABP_HUD_SpaceRig_C_CheckForTutorialPrompt_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Stop Check For Tutorial Prompt
	 */
	struct ABP_HUD_SpaceRig_C_StopCheckForTutorialPrompt_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Game DLC Announcements
	 */
	struct ABP_HUD_SpaceRig_C_SetupGameDLCAnnouncements_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveNotificationQueueActivated
	 */
	struct ABP_HUD_SpaceRig_C_ReceiveNotificationQueueActivated_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveNotificationAdded
	 */
	struct ABP_HUD_SpaceRig_C_ReceiveNotificationAdded_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Notification Queue
	 */
	struct ABP_HUD_SpaceRig_C_SetupNotificationQueue_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.CheatMenuRequest
	 */
	struct ABP_HUD_SpaceRig_C_CheatMenuRequest_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Cheat Menu
	 */
	struct ABP_HUD_SpaceRig_C_SetupCheatMenu_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Shouting Done
	 */
	struct ABP_HUD_SpaceRig_C_ShoutingDone_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.SetupModWarnings]
	 */
	struct ABP_HUD_SpaceRig_C_SetupModWarnings_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Vanity Mastery Notification
	 */
	struct ABP_HUD_SpaceRig_C_SetupVanityMasteryNotification_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Handle Event Rewards
	 */
	struct ABP_HUD_SpaceRig_C_HandleEventRewards_Params
	{
	public:
		class UFSDEvent*                                           inEvent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Handle Event Popup
	 */
	struct ABP_HUD_SpaceRig_C_HandleEventPopup_Params
	{
	public:
		class UFSDEvent*                                           inEvent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.WaitAndTryNextNotification
	 */
	struct ABP_HUD_SpaceRig_C_WaitAndTryNextNotification_Params
	{
	public:
		float                                                      WaitDuration;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnLastWindowClosed
	 */
	struct ABP_HUD_SpaceRig_C_OnLastWindowClosed_Params
	{	};

	/**
	 * Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ExecuteUbergraph_BP_HUD_SpaceRig
	 */
	struct ABP_HUD_SpaceRig_C_ExecuteUbergraph_BP_HUD_SpaceRig_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
