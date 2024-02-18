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
	 * BlueprintGeneratedClass WPN_SMG_OneHand.WPN_SMG_OneHand_C
	 * Size -> 0x0088 (FullSize[0x0820] - InheritedSize[0x0798])
	 */
	class AWPN_SMG_OneHand_C : public AElectricalSMG
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0798(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFirstPersonStaticMeshComponent*                     FP_AnimationMag;                                         // 0x07A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                TP_AnimationMag;                                         // 0x07A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x07B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonParticleSystemComponent*                 FirstPersonParticleSystem;                               // 0x07B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                TP_SMG_MAG;                                              // 0x07C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonStaticMeshComponent*                     SMG_Mag_Full;                                            // 0x07C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonWidgetComponent*                         FirstPersonWidget;                                       // 0x07D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDamageComponent*                                    Damage;                                                  // 0x07D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                MuzzleLight;                                             // 0x07E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UHitscanComponent*                                   HitScan;                                                 // 0x07E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCrosshairAggregator*                                CrosshairAggregator;                                     // 0x07F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SalineConductorScale;                                    // 0x07F8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EHOB[0x4];                                   // 0x0804(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABP_TurretEMPDischarge_Indicator_C*>          EMPDischargeIndicators;                                  // 0x0808(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		struct FTimerHandle                                        EMPIndicatorUpdateTimer;                                 // 0x0818(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		class UStaticMeshComponent* Receive_GetTPAnimationEventMesh();
		class UFirstPersonStaticMeshComponent* Receive_GetFPAnimationEventMesh();
		void GetElectrutionChance(float* Chance);
		void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
		void UserConstructionScript();
		void Recieve_UpdateMeshses(bool IsFirstPerson);
		void ReceiveBeginPlay();
		void Receive_ReloadBegin();
		void Receive_ReloadEnd();
		void CustomEvent1(class UItemUpgrade* Event);
		void ElectriyPlatform(const struct FHitResult& Hit, bool alwaysPenetrate);
		void Server_OnHit(const struct FVector& Location);
		void OnSkinChanged(class USkinEffect* Skin);
		void RecieveUnequipped();
		void StopEMDischargeCheck();
		void ExecuteUbergraph_WPN_SMG_OneHand(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
