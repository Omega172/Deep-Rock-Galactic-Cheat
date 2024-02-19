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
	 * BlueprintGeneratedClass WPN_LineCutter.WPN_LineCutter_C
	 * Size -> 0x009C (FullSize[0x0814] - InheritedSize[0x0778])
	 */
	class AWPN_LineCutter_C : public ALineCutter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0778(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     HomingTarget;                                            // 0x0780(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonWidgetComponent*                         Widget_TotalAmmo;                                        // 0x0788(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonWidgetComponent*                         Widget_CurrentClip;                                      // 0x0790(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonParticleSystemComponent*                 FP_P_Plasma_Beam_Right;                                  // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                MuzzleLight;                                             // 0x07A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                Line_Light;                                              // 0x07A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonParticleSystemComponent*                 FP_P_Plasma_Beam;                                        // 0x07B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCrosshairAggregator*                                CrosshairAggregator;                                     // 0x07B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UProjectileLauncherComponent*                        projectileLauncher;                                      // 0x07C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Flicker_Brightness_Intensity_E04C79F0493C5086E3B612961CA53D93; // 0x07C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Flicker_Brightness__Direction_E04C79F0493C5086E3B612961CA53D93; // 0x07CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GY50[0x3];                                   // 0x07CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FlickerBrightness;                                       // 0x07D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageFrequency;                                         // 0x07D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MBL6[0x4];                                   // 0x07DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APRJ_LineCutter2_C*                                  CurrentProjectile;                                       // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HomingTraceDistance;                                     // 0x07E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HomingSteeringStrength;                                  // 0x07EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        HomingTimer;                                             // 0x07F0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class APRJ_LineCutter2_C*                                  HomingProjectile;                                        // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              HomingTargetHit;                                         // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            HomingLastRotation;                                      // 0x0808(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetHomingTargetLocation(struct FVector* OutLocation);
		void GetHomingIgnoreList(TArray<class AActor*>* OutTargets);
		void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
		void UserConstructionScript();
		void FlickerBrightness__FinishedFunc();
		void FlickerBrightness__UpdateFunc();
		void OnFireWhileLastProjectileAlive(class ALineCutterProjectile* Projectile);
		void BndEvt__WPN_LineCutter_ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature(class AProjectileBase* Projectile);
		void UpdateHomingTarget();
		void StopHoming();
		void Server_SetHomingLocation(const struct FVector_NetQuantize& HomingLocation);
		void OnHomingHit(const struct FHitResult& Result);
		void RecieveStopUsing();
		void ReceiveBeginPlay();
		void Server_StopHoming(class AProjectile* InProjectile);
		void All_SetHomingLocation(const struct FVector_NetQuantize& InLocation);
		void All_StopHoming(class AProjectile* InProjectile);
		void ExecuteUbergraph_WPN_LineCutter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
