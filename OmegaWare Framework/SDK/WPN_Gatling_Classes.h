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
	 * BlueprintGeneratedClass WPN_Gatling.WPN_Gatling_C
	 * Size -> 0x0058 (FullSize[0x0840] - InheritedSize[0x07E8])
	 */
	class AWPN_Gatling_C : public AGatlingGun
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   ParticleSystem;                                          // 0x07F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWeaponImpactComponent*                              WeaponImpact;                                            // 0x07F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDamageComponent*                                    CritcalOverheatDamage;                                   // 0x0800(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonParticleSystemComponent*                 FirstPersonParticleSystem;                               // 0x0808(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonPointLightComponent*                     Light_MuzzleFlash;                                       // 0x0810(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonWidgetComponent*                         Widget_Overheat;                                         // 0x0818(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UHeatMaterialComponent*                              HeatMaterial;                                            // 0x0820(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonWidgetComponent*                         Widget_Ammo;                                             // 0x0828(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCrosshairAggregator*                                CrosshairAggregator;                                     // 0x0830(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UHitscanComponent*                                   HitScan;                                                 // 0x0838(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
		void UserConstructionScript();
		void Receive_Overheated();
		void Receive_IsFiringChanged(bool NewValue);
		void RecieveEquipped();
		void RecieveUnequipped();
		void All_SpawnHeatBurst();
		void TriggerCriticalOverheat();
		void OnTemperatureChanged(float Temperature, bool overHeated);
		void ReceiveBeginPlay();
		void OnSkinChanged(class USkinEffect* Skin);
		void BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature();
		void CustomEvent1(class UItemUpgrade* Event);
		void ExecuteUbergraph_WPN_Gatling(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
