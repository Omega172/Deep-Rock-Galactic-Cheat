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
	 * BlueprintGeneratedClass BP_MuleLeg.BP_MuleLeg_C
	 * Size -> 0x007F (FullSize[0x03C0] - InheritedSize[0x0341])
	 */
	class ABP_MuleLeg_C : public ABP_Gem_C
	{
	public:
		unsigned char                                              UnknownData_D55S[0x7];                                   // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     MiniMuleLegPickUp;                                       // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     MiniMuleLegDrop;                                         // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioPingWhenPickedUp;                                   // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTerrainPlacementComponent*                          terrainPlacement;                                        // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Distress_Sphere;                                         // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight;                                              // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Beacon_Alpha_5F66972149AD0193977EA08FF82B6FB4;           // 0x0380(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Beacon_Scale_5F66972149AD0193977EA08FF82B6FB4;           // 0x0384(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Beacon__Direction_5F66972149AD0193977EA08FF82B6FB4;      // 0x0388(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CUT8[0x7];                                   // 0x0389(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Beacon;                                                  // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsVisibleOnScanner;                                      // 0x0398(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_BHUE[0x7];                                   // 0x0399(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABP_MiniMule_Salvage_C*>                      PingingMules;                                            // 0x03A0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ABP_MiniMule_Salvage_C*>                      AllMules;                                                // 0x03B0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void GetDistToNearestMULE(float* OutDist);
		void UpdateBeacon();
		void InitVisibleOnScanner();
		void SetPingedByMule(class ABP_MiniMule_Salvage_C* InMiniMule, bool InPinged);
		void OnRep_IsVisibleOnScanner();
		void Beacon__FinishedFunc();
		void Beacon__UpdateFunc();
		void ReceiveBeginPlay();
		void DisableDistressSphere();
		void SetVisibleOnScanner();
		void OnDropped_Event_1();
		void OnPickedUp_Event();
		void PingBeacon();
		void OnDisableLegSpheres_Event();
		void PingWhileCarried();
		void ExecuteUbergraph_BP_MuleLeg(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
