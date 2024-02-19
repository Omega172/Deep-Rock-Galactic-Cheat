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
	 * BlueprintGeneratedClass WPN_Cryospray.WPN_Cryospray_C
	 * Size -> 0x0068 (FullSize[0x0948] - InheritedSize[0x08E0])
	 */
	class AWPN_Cryospray_C : public ACryosprayItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x08E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     AudioPressurerising;                                     // 0x08E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonPointLightComponent*                     GaugeLight;                                              // 0x08F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonStaticMeshComponent*                     FirstPersonStaticMesh;                                   // 0x08F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonStaticMeshComponent*                     FP_Widget_Shooting_Gauge;                                // 0x0900(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonParticleSystemComponent*                 PressureVent_Particle;                                   // 0x0908(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonWidgetComponent*                         FPwidget_Ammo;                                           // 0x0910(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCrosshairAggregator*                                CrosshairAggregator;                                     // 0x0918(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                MuzzleLight;                                             // 0x0920(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWeaponDisplay_CryoSpray_Ammo_C*                     UI_Ammo;                                                 // 0x0928(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ChargeInstance;                                          // 0x0930(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     LaunchProjectileParticlesFP;                             // 0x0938(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     LaunchProjectileParticlesTP;                             // 0x0940(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
		void UserConstructionScript();
		void BndEvt__Aggregator_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature(int32_t Amount);
		void UpdateAmmoDisplay();
		void ReceiveRepressurisingChanged(bool Value);
		void RecieveEquipped();
		void RecieveUnequipped();
		void ToggleRepressurerisingFX(bool On);
		void OnProjectileLaunched(const struct FVector& Location);
		void ReceiveBeginPlay();
		void OnPreProjectileLaunch();
		void ExecuteUbergraph_WPN_Cryospray(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
