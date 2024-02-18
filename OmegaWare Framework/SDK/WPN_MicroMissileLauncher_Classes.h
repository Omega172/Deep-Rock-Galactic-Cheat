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
	 * BlueprintGeneratedClass WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C
	 * Size -> 0x0070 (FullSize[0x0870] - InheritedSize[0x0800])
	 */
	class AWPN_MicroMissileLauncher_C : public AMicroMissileLauncher
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0800(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UChargedProjectileLauncherComponent*                 ChargedProjectileLauncher;                               // 0x0808(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     HomingTarget;                                            // 0x0810(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonWidgetComponent*                         FirstPersonWidget_Ammo;                                  // 0x0818(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCrosshairAggregator*                                CrosshairAggregator;                                     // 0x0820(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<EObjectTypeQuery>                                   LineTraceTargets;                                        // 0x0828(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      TraceDistance;                                           // 0x0838(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             TargetLocation;                                          // 0x083C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NoHoming;                                                // 0x0848(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       JetFuelChosen;                                           // 0x0849(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1XCC[0x6];                                   // 0x084A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      HomingTargetIgnoreList;                                  // 0x0850(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      LongestLifetime;                                         // 0x0860(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G26I[0x4];                                   // 0x0864(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APRJ_MicroMissile_C*                                 OldestMissile;                                           // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetUpgradeModifiers(class UItemUpgrade* ItemUpgrade);
		void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
		void ReceiveBeginPlay();
		void CustomEvent1(class UItemUpgrade* Event);
		void SetHomingTarget();
		void OnProjectileSpawned_Event_1(class AProjectileBase* Projectile);
		void ReceiveTick(float DeltaSeconds);
		void Server_SetHomingLocation(const struct FVector_NetQuantize& HomingLocation);
		void All_SetHomingLocation(const struct FVector_NetQuantize& HomingLocation);
		void ExecuteUbergraph_WPN_MicroMissileLauncher(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
