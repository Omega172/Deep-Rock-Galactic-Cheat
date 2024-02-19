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
	 * BlueprintGeneratedClass BP_FuelLine_Segment.BP_FuelLine_Segment_C
	 * Size -> 0x003C (FullSize[0x0304] - InheritedSize[0x02C8])
	 */
	class ABP_FuelLine_Segment_C : public AFuelLineSegment
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USimpleObjectInfoComponent*                          SimpleObjectInfo;                                        // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Placeing;                                          // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    UsableSphere;                                            // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class UMaterialInterface*>                          MaterialsDefaultEndPost;                                 // 0x02E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             EndLocation;                                             // 0x02F8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OverrideMaterialByIndex(class UPrimitiveComponent** InMesh, TArray<class UMaterialInterface*>* InDefaultMaterials, int32_t InIndex, class UMaterialInterface* InMaterial);
		void OverrideMaterialByName(class UMeshComponent* InMesh, TArray<class UMaterialInterface*>* InDefaultMaterials, const class FName& InMaterialSlotName, class UMaterialInterface* InMaterial);
		void UpdateVisualState();
		bool ReceiveCanPlaceAt(const struct FTransform& InCandidateTransform, class UTrackBuilderConnectPoint* InConnectPoint);
		void UserConstructionScript();
		void ReceivePlacementStateChanged(ETrackBuildPlacementState NewState);
		void BndEvt__NextSegmentUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
		void ReceiveBeginPlay();
		void ReceivPlacementValidChanged(bool InIsValid);
		void BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature(float Health);
		void BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
		void ExecuteUbergraph_BP_FuelLine_Segment(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
