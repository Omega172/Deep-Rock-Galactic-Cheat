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
	 * BlueprintGeneratedClass BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C
	 * Size -> 0x0038 (FullSize[0x0278] - InheritedSize[0x0240])
	 */
	class ABP_Salvage_FuelPoint_C : public ABP_Salvage_Point_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTerrainPlacementComponent*                          terrainPlacement;                                        // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ABP_Salvage_FuelPod_C*                               Pod;                                                     // 0x0250(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              MoveIfCloseTo[0x10];                                     // 0x0258(0x0010) UNKNOWN PROPERTY: ArrayProperty
		struct FVector                                             InitalLocation;                                          // 0x0268(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TriesToSpawn;                                            // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SolveTooCloseToInvalidator();
		void CheckIfCloseToInvalidators(bool* IsClose);
		void EnableRepair();
		void OnDefenseStart();
		void OnDefenseComplete();
		void OnDefenseFail();
		void CallInPod();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Salvage_FuelPoint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
