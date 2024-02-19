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
	 * BlueprintGeneratedClass WPN_MicrowaveGun.WPN_MicrowaveGun_C
	 * Size -> 0x0065 (FullSize[0x09F5] - InheritedSize[0x0990])
	 */
	class AWPN_MicrowaveGun_C : public AMicrowaveWeapon
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0990(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFirstPersonNiagaraComponent*                        HeatSmoke;                                               // 0x0998(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UProjectileLauncherComponent*                        projectileLauncher;                                      // 0x09A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonWidgetComponent*                         Widget_HeatNew;                                          // 0x09A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonStaticMeshComponent*                     FirstPersonStaticMesh;                                   // 0x09B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonWidgetComponent*                         FirstPersonWidget;                                       // 0x09B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                MuzzlePointLight;                                        // 0x09C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCrosshairAggregator*                                CrosshairAggregator;                                     // 0x09C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWeaponDisplay_MicrowaveGun_Heat_C*                  OverheatUI;                                              // 0x09D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         Curve_HeatColor;                                         // 0x09D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     ParticleImpactSoundLoop;                                 // 0x09E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LastClosestHit;                                          // 0x09E8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LastHitEnemy;                                            // 0x09F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void AddedToInventory(class APlayerCharacter* ItemOwner);
		void OnTemperatureChanged(float Temperature, bool overHeated);
		void CustomEvent1(class UItemUpgrade* Event);
		void Receive_IsFiringChanged(bool NewValue);
		void HeatUpdated(float SmoothedTemperature);
		void RecieveStopUsing();
		void BndEvt__WPN_MicrowaveGun_CapsuleHitscanComp_K2Node_ComponentBoundEvent_0_OnClosestHitDelegate__DelegateSignature(const struct FVector& Location, const struct FVector& Normal, bool bHitEnemy);
		void OnStartCharacterOverheat_Event();
		void RecieveUnequipped();
		void ExecuteUbergraph_WPN_MicrowaveGun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
