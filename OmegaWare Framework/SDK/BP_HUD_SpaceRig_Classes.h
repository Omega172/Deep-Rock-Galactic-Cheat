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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_HUD_SpaceRig.BP_HUD_SpaceRig_C
	 * Size -> 0x0058 (FullSize[0x03A8] - InheritedSize[0x0350])
	 */
	class ABP_HUD_SpaceRig_C : public ASpaceRigHUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class APlayerCharacter*                                    PlayerCharacter;                                         // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UHUD_SpaceRig_C*                                     HUD;                                                     // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UUserWidget*>                                 OwnedWidgets;                                            // 0x0370(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FClaimableRewardEntry>                       PendingPromotionRewards;                                 // 0x0380(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       PendingFirstPromotion;                                   // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GEMH[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameDLCSettings*                                    DLCSettings;                                             // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWindowWidget*                                       CheatMenu;                                               // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TryShowNextNotification();
		void FetchPromotionRewards(bool* OutSuccess);
		void EnqueueWindow();
		void PlayerSpawned(class APlayerCharacter* Player);
		void OnVisibilityChanged();
		void ReceiveDestroyed();
		void ReceiveBeginPlay();
		void OnCountdownCompleted();
		void UpdateVisibility();
		void HandleCountDown();
		void SetupCampaignNotifications();
		void OnCampaignNotification_Event(class UCampaignNotification* Notification);
		void SetupRetirementShouts();
		void OnEligibleForRetirementAssignment(class UBP_GameInstance_C* GameInstance);
		void SetupSpacerigNotifications();
		void SetupUINotifications();
		void SetupPromotionRewards();
		void SetupFirstInfusedCore();
		void SetupPendingRewards();
		void SetupFSDEvents();
		void OnFSDEventActiveChanged(class UFSDEvent* InFsdEvent, bool InIsActive);
		void SetupTutorialMessage();
		void CheckForTutorialPrompt();
		void StopCheckForTutorialPrompt();
		void SetupGameDLCAnnouncements();
		void ReceiveNotificationQueueActivated();
		void ReceiveNotificationAdded();
		void SetupNotificationQueue();
		void CheatMenuRequest();
		void SetupCheatMenu();
		void ShoutingDone();
		void SetupModWarnings();
		void SetupVanityMasteryNotification();
		void HandleEventRewards(class UFSDEvent* inEvent);
		void HandleEventPopup(class UFSDEvent* inEvent);
		void WaitAndTryNextNotification(float WaitDuration);
		void OnLastWindowClosed();
		void ExecuteUbergraph_BP_HUD_SpaceRig(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
