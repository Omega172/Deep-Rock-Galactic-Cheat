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
	 * BlueprintGeneratedClass WPN_GooCannon.WPN_GooCannon_C
	 * Size -> 0x0060 (FullSize[0x0860] - InheritedSize[0x0800])
	 */
	class AWPN_GooCannon_C : public AGooGun
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0800(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     GooCannon_FullyCharged_Cue;                              // 0x0808(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonWidgetComponent*                         Widget_Ammo;                                             // 0x0810(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     GooCannonCharge_Cue;                                     // 0x0818(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChargedProjectileLauncherComponent*                 ChargedProjectileLauncher;                               // 0x0820(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                MuzzlePointLight;                                        // 0x0828(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCrosshairAggregator*                                CrosshairAggregator;                                     // 0x0830(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWeaponDisplay_ChargeBlaster_AmmoCounter_C*          AmmoUI;                                                  // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AC_ChargeLevel_1;                                        // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AC_ChargeSpinUp;                                         // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            OverheatEmitterInstance;                                 // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BurstFireActive;                                         // 0x0858(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasChargeUpgrade;                                        // 0x0859(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasVacuum;                                               // 0x085A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4X1F[0x1];                                   // 0x085B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PuddleAmmoPool;                                          // 0x085C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ApplyUpgradeModifiers(class UItemUpgrade* ItemUpgrade);
		void GetNearbyPuddles();
		void FadeOutIfValid(class UAudioComponent** AC);
		void HandleChargeAudio(float charge);
		void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
		void UserConstructionScript();
		void RecieveUnequipped();
		void AddedToInventory(class APlayerCharacter* ItemOwner);
		void OnChargeChanged_Event_1(float charge);
		void CustomEvent1(class UItemUpgrade* Event);
		void ReloadEvent();
		void SuckInPuddle(class ABP_GooCannon_GooPuddle_C* puddle);
		void ServerSuckInPuddle(class ABP_GooCannon_GooPuddle_C* puddle);
		void ReceiveBeginPlay();
		void OnPuddleSuckedIn();
		void ExecuteUbergraph_WPN_GooCannon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
