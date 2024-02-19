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
	 * BlueprintGeneratedClass BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C
	 * Size -> 0x0052 (FullSize[0x028A] - InheritedSize[0x0238])
	 */
	class ABP_Grenade_Axe_Stuck_C : public AFSDPhysicsActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USimpleObjectInfoComponent*                          SimpleObjectInfo;                                        // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInstantUsable*                                      InstantUsable;                                           // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Blade;                                                   // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Handle;                                                  // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       WorldCollision;                                          // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_HandGrenade_M_Thrown2;                                // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AThrownGrenadeItem*                                  AxeGrenadeItem;                                          // 0x0278(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DynamicMaterial;                                         // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StandOnMe;                                               // 0x0288(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       SimulateAxePhysics;                                      // 0x0289(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor

	public:
		void OnRep_SimulateAxePhysics();
		void OnRep_StandOnMe();
		void OnRep_AxeGrenadeItem();
		void UserConstructionScript();
		void PickUpAxe(class AThrownGrenadeItem* ThrownGrenadeItem);
		void DetachAxe();
		void Attach(class AActor* ParentActor, class USceneComponent* ParentComponent, const class FName& ParentSocketName, bool CanRetrieve);
		void OnDestroyed_Event(class AActor* DestroyedActor);
		void OnDeath_Event(class UHealthComponentBase* HealthComponent);
		void GoPhysical(bool PassThrough, bool CanRetrieve);
		void MakeStandable(bool CanRetrieve);
		void SetRetrieval(bool CanRetrieve);
		void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
		void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
		void ExecuteUbergraph_BP_Grenade_Axe_Stuck(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
