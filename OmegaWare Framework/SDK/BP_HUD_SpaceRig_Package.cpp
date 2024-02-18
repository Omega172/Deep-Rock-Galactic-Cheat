/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.TryShowNextNotification
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::TryShowNextNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.TryShowNextNotification");
		
		ABP_HUD_SpaceRig_C_TryShowNextNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.FetchPromotionRewards
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutSuccess                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HUD_SpaceRig_C::FetchPromotionRewards(bool* OutSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.FetchPromotionRewards");
		
		ABP_HUD_SpaceRig_C_FetchPromotionRewards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSuccess != nullptr)
			*OutSuccess = params.OutSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.EnqueueWindow
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::EnqueueWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.EnqueueWindow");
		
		ABP_HUD_SpaceRig_C_EnqueueWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.PlayerSpawned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_SpaceRig_C::PlayerSpawned(class APlayerCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.PlayerSpawned");
		
		ABP_HUD_SpaceRig_C_PlayerSpawned_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnVisibilityChanged
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::OnVisibilityChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnVisibilityChanged");
		
		ABP_HUD_SpaceRig_C_OnVisibilityChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveDestroyed");
		
		ABP_HUD_SpaceRig_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveBeginPlay");
		
		ABP_HUD_SpaceRig_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnCountdownCompleted
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::OnCountdownCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnCountdownCompleted");
		
		ABP_HUD_SpaceRig_C_OnCountdownCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Update Visibility
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::UpdateVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Update Visibility");
		
		ABP_HUD_SpaceRig_C_UpdateVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Handle Count Down
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::HandleCountDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Handle Count Down");
		
		ABP_HUD_SpaceRig_C_HandleCountDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Campaign Notifications
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::SetupCampaignNotifications()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Campaign Notifications");
		
		ABP_HUD_SpaceRig_C_SetupCampaignNotifications_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnCampaignNotification_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCampaignNotification*                       Notification                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_SpaceRig_C::OnCampaignNotification_Event(class UCampaignNotification* Notification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnCampaignNotification_Event");
		
		ABP_HUD_SpaceRig_C_OnCampaignNotification_Event_Params params {};
		params.Notification = Notification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Retirement Shouts
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::SetupRetirementShouts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Retirement Shouts");
		
		ABP_HUD_SpaceRig_C_SetupRetirementShouts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnEligibleForRetirementAssignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_GameInstance_C*                          GameInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_SpaceRig_C::OnEligibleForRetirementAssignment(class UBP_GameInstance_C* GameInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnEligibleForRetirementAssignment");
		
		ABP_HUD_SpaceRig_C_OnEligibleForRetirementAssignment_Params params {};
		params.GameInstance = GameInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Spacerig Notifications
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::SetupSpacerigNotifications()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Spacerig Notifications");
		
		ABP_HUD_SpaceRig_C_SetupSpacerigNotifications_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup UI Notifications
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::SetupUINotifications()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup UI Notifications");
		
		ABP_HUD_SpaceRig_C_SetupUINotifications_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Promotion Rewards
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::SetupPromotionRewards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Promotion Rewards");
		
		ABP_HUD_SpaceRig_C_SetupPromotionRewards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup First Infused Core
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::SetupFirstInfusedCore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup First Infused Core");
		
		ABP_HUD_SpaceRig_C_SetupFirstInfusedCore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Pending Rewards
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::SetupPendingRewards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Pending Rewards");
		
		ABP_HUD_SpaceRig_C_SetupPendingRewards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup FSD Events
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::SetupFSDEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup FSD Events");
		
		ABP_HUD_SpaceRig_C_SetupFSDEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnFSDEventActiveChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFSDEvent*                                   InFsdEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HUD_SpaceRig_C::OnFSDEventActiveChanged(class UFSDEvent* InFsdEvent, bool InIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnFSDEventActiveChanged");
		
		ABP_HUD_SpaceRig_C_OnFSDEventActiveChanged_Params params {};
		params.InFsdEvent = InFsdEvent;
		params.InIsActive = InIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.SetupTutorialMessage
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::SetupTutorialMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.SetupTutorialMessage");
		
		ABP_HUD_SpaceRig_C_SetupTutorialMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.CheckForTutorialPrompt
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::CheckForTutorialPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.CheckForTutorialPrompt");
		
		ABP_HUD_SpaceRig_C_CheckForTutorialPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Stop Check For Tutorial Prompt
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::StopCheckForTutorialPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Stop Check For Tutorial Prompt");
		
		ABP_HUD_SpaceRig_C_StopCheckForTutorialPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Game DLC Announcements
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::SetupGameDLCAnnouncements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Game DLC Announcements");
		
		ABP_HUD_SpaceRig_C_SetupGameDLCAnnouncements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveNotificationQueueActivated
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::ReceiveNotificationQueueActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveNotificationQueueActivated");
		
		ABP_HUD_SpaceRig_C_ReceiveNotificationQueueActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveNotificationAdded
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::ReceiveNotificationAdded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ReceiveNotificationAdded");
		
		ABP_HUD_SpaceRig_C_ReceiveNotificationAdded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Notification Queue
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::SetupNotificationQueue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Notification Queue");
		
		ABP_HUD_SpaceRig_C_SetupNotificationQueue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.CheatMenuRequest
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::CheatMenuRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.CheatMenuRequest");
		
		ABP_HUD_SpaceRig_C_CheatMenuRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Cheat Menu
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::SetupCheatMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Cheat Menu");
		
		ABP_HUD_SpaceRig_C_SetupCheatMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Shouting Done
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::ShoutingDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Shouting Done");
		
		ABP_HUD_SpaceRig_C_ShoutingDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.SetupModWarnings]
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::SetupModWarnings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.SetupModWarnings]");
		
		ABP_HUD_SpaceRig_C_SetupModWarnings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Vanity Mastery Notification
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::SetupVanityMasteryNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Setup Vanity Mastery Notification");
		
		ABP_HUD_SpaceRig_C_SetupVanityMasteryNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Handle Event Rewards
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFSDEvent*                                   inEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_SpaceRig_C::HandleEventRewards(class UFSDEvent* inEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Handle Event Rewards");
		
		ABP_HUD_SpaceRig_C_HandleEventRewards_Params params {};
		params.inEvent = inEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Handle Event Popup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFSDEvent*                                   inEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_SpaceRig_C::HandleEventPopup(class UFSDEvent* inEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.Handle Event Popup");
		
		ABP_HUD_SpaceRig_C_HandleEventPopup_Params params {};
		params.inEvent = inEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.WaitAndTryNextNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              WaitDuration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_SpaceRig_C::WaitAndTryNextNotification(float WaitDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.WaitAndTryNextNotification");
		
		ABP_HUD_SpaceRig_C_WaitAndTryNextNotification_Params params {};
		params.WaitDuration = WaitDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnLastWindowClosed
	 * 		Flags  -> ()
	 */
	void ABP_HUD_SpaceRig_C::OnLastWindowClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.OnLastWindowClosed");
		
		ABP_HUD_SpaceRig_C_OnLastWindowClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ExecuteUbergraph_BP_HUD_SpaceRig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_SpaceRig_C::ExecuteUbergraph_BP_HUD_SpaceRig(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.ExecuteUbergraph_BP_HUD_SpaceRig");
		
		ABP_HUD_SpaceRig_C_ExecuteUbergraph_BP_HUD_SpaceRig_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HUD_SpaceRig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HUD_SpaceRig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HUD_SpaceRig.BP_HUD_SpaceRig_C");
		return ptr;
	}

}


