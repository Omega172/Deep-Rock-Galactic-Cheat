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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_SentryGun_Moveable.BP_SentryGun_Moveable_C
	 * Size -> 0x0031 (FullSize[0x0481] - InheritedSize[0x0450])
	 */
	class ABP_SentryGun_Moveable_C : public ARecallableSentryGun
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0450(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            P_SentryGunMovementTrail;                                // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioMoving;                                             // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                SentryGunActor;                                          // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       ReturnOnNoAmmo;                                          // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_06CQ[0x7];                                   // 0x0471(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARecallableSentryGunItem*                            Item;                                                    // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowAllOutlines;                                         // 0x0480(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetStateDescription(class FText* Description);
		void SpawnAudioOnPlayer(class USoundBase* audio);
		class UClass* GetSentryGunClass();
		void GetSentryOwner(class APlayerCharacter** AsPlayerCharacter);
		class ASentryGun* GetSentryGun();
		void ReceiveBeginPlay();
		void OnMoveRequested();
		void OnStateChanged_Event(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState);
		void ReceiveOnSentryReady(class ASentryGun* SentryGun, class APlayerCharacter* PlayerCharacter);
		void OnAmmoCountChanged_Event_1(int32_t AmmoCount, int32_t Change);
		void AudioReadyToBuild();
		void OnMoving();
		void OnMoveFinished(bool returnedHome);
		void AudioBeginMove();
		void AudioMoveFinished();
		void AudioReturnedHome();
		void ReceiveOnStateChanged();
		void UpdateOutlineAndIcon();
		void OnSentryStateChanged(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState);
		void OnToggleNameplatesEvent_Event_1(bool boolValue);
		void OnItemEquipped_Event(class AItem* Item);
		void OnSelectedItemChanged(class ARecallableSentryGun* SentryGun);
		void ExecuteUbergraph_BP_SentryGun_Moveable(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
