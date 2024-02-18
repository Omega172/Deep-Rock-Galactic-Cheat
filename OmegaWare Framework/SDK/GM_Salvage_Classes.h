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
	 * BlueprintGeneratedClass GM_Salvage.GM_Salvage_C
	 * Size -> 0x00B8 (FullSize[0x05E0] - InheritedSize[0x0528])
	 */
	class AGM_Salvage_C : public ABP_NetworkPlayGameMode_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0528(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     UplinkComplete_Cue;                                      // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     DroppodMuleReady_Cue;                                    // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ADropPod*                                            DropPod;                                                 // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AEVENT_DropPodDefense_Base_C*                        DefenseEvent;                                            // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      MulesSalvaged;                                           // 0x0550(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ABP_Salvage_Point_C*>                         RepairPoints;                                            // 0x0560(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class UOBJ_1st_Salvage_C*                                  Objective;                                               // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      RepairEvents;                                            // 0x0578(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    MollyFailsafeCounter;                                    // 0x0588(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MollyCloseCounter;                                       // 0x058C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class UClass*, int32_t>                               SalvagePointsAndDist;                                    // 0x0590(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void UpdateFailsafeMollyCounters(const struct FVector& v2);
		void SpawnRepairPoints();
		void EnableNextRepairPoint();
		void OnLevelGenerationComplete(int32_t pass);
		void CallDropPod();
		void DonkeyButtonPressed();
		void ReachedDropShip();
		void RepairPoint_Repaired(class AActor* RepairPoint);
		void DefendFail();
		void DefendDone();
		void OnCountdownFinished();
		void Countdowncomplete();
		void ActivateDonkeyButton();
		void OnMuleBayOpenedDispatch_Event_1();
		void OnObjectivesInitialized();
		void AllActorsSalaged();
		void Cheat_ActivateDropPod();
		void Cheat_FinishSalvagePoint();
		void ExecuteUbergraph_GM_Salvage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
