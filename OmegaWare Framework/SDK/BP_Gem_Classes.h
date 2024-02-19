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
	 * BlueprintGeneratedClass BP_Gem.BP_Gem_C
	 * Size -> 0x00C1 (FullSize[0x0341] - InheritedSize[0x0280])
	 */
	class ABP_Gem_C : public AGem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTerrainDetectComponent*                             TerrainDetect;                                           // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTerrainDetectComponent*                             TerrainDetect5;                                          // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTerrainDetectComponent*                             TerrainDetect4;                                          // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTerrainDetectComponent*                             TerrainDetect3;                                          // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTerrainDetectComponent*                             TerrainDetect2;                                          // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTerrainDetectComponent*                             TerrainDetect1;                                          // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFirstPersonStaticMeshComponent*                     FirstPersonStaticMesh;                                   // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                TerrainScannerMesh;                                      // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USimpleObjectInfoComponent*                          SimpleObjectInfo;                                        // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCarriableComponent*                                 Carriable;                                               // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Detects;                                                 // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BKQK[0x4];                                   // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           DugFreeCue;                                              // 0x02F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanTriggerSound;                                         // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZCA7[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          ImpactSound;                                             // 0x0300(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ImpactSoundParameter;                                    // 0x0308(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          PickupSound;                                             // 0x0310(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             InWorldScale;                                            // 0x0318(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             throwForce;                                              // 0x0324(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       VisibleToTerrainScanner;                                 // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ExposeNeighbourhoodToTerrainScanner;                     // 0x0331(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6CR4[0x6];                                   // 0x0332(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFSDAchievement*                                     CollectedAchievement;                                    // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       VisibleToScannerAfterDigOut;                             // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReleaseToWorld();
		void SetPickedUp(class APlayerCharacter* Character);
		void PointCleared();
		void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
		void BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
		void BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
		void BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_4_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
		void BndEvt__TerrainDetect4_K2Node_ComponentBoundEvent_5_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
		void BndEvt__TerrainDetect5_K2Node_ComponentBoundEvent_6_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
		void All_PlayDugFree();
		void BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void BndEvt__Carriable_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature();
		void BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
		void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
		void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
		void Throw(const struct FVector& force);
		void ReceiveBeginPlay();
		void Receive_OnDeposited(class APlayerCharacter* fromPlayer, class AActor* toActor);
		void Cheat_ReleaseToWorld();
		void OnAttachChanged(bool Attached);
		void UpdateAttachState(bool Attached);
		void ExecuteUbergraph_BP_Gem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
