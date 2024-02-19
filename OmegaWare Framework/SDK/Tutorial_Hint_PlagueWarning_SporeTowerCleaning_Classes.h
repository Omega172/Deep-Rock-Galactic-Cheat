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
	 * BlueprintGeneratedClass Tutorial_Hint_PlagueWarning_SporeTowerCleaning.Tutorial_Hint_PlagueWarning_SporeTowerCleaning_C
	 * Size -> 0x0098 (FullSize[0x0208] - InheritedSize[0x0170])
	 */
	class UTutorial_Hint_PlagueWarning_SporeTowerCleaning_C : public UTutorialHintComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0170(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      AccumilatedDamage;                                       // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TotalDamageBeforeShowingHint;                            // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AEscortMule*                                         Drilldozer;                                              // 0x0180(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFriendlyHealthComponent*                            DrilldozerHealth;                                        // 0x0188(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_CleanupPod_C*                                    CleanupPod;                                              // 0x0190(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTutorialHint                                       FollowupHint;                                            // 0x0198(0x0070) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void ReceiveOnInitialized();
		void OnTriggerCleaningTutorial();
		void OnTutorialTaskFinished();
		void ExecuteUbergraph_Tutorial_Hint_PlagueWarning_SporeTowerCleaning(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
