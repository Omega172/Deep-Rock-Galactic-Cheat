#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
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
	 * BlueprintGeneratedClass AIC_FriendlyShredder.AIC_FriendlyShredder_C
	 * Size -> 0x0014 (FullSize[0x036C] - InheritedSize[0x0358])
	 */
	class AAIC_FriendlyShredder_C : public AFSDAIController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AENE_Jelly_Passive_Mother_C*                         Mother;                                                  // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpeedModifier;                                           // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class AENE_Jelly_Passive_Mother_C* FindNewMother();
		void ReceiveBeginPlay();
		void OnDeath(class UHealthComponentBase* HealthComponent);
		void ReceivePossess(class APawn* PossessedPawn);
		void SpeedChanger();
		void StartSpeedModifier();
		void ExecuteUbergraph_AIC_FriendlyShredder(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
