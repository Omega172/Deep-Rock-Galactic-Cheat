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
	 * BlueprintGeneratedClass BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C
	 * Size -> 0x0028 (FullSize[0x02A0] - InheritedSize[0x0278])
	 */
	class ABP_FuelLine_StartPoint_C : public AFuelLineStart
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetComponent*                                    WidgetStartFuelLine;                                     // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       UsableCollider;                                          // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class UMaterialInterface*>                          DefaultMaterials;                                        // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetMaterial(const class FName& InSlotName, class UMaterialInterface* InMaterial);
		void UpdateState();
		void UserConstructionScript();
		void BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
		void ReceiveBeginPlay();
		void FuelPodLanded();
		void BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_1_SegmentDelegate__DelegateSignature(class UTrackBuilderUsable* InUsable, class ATrackBuilderSegment* InSegment);
		void ExecuteUbergraph_BP_FuelLine_StartPoint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
