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
	 * BlueprintGeneratedClass BP_DeadState.BP_DeadState_C
	 * Size -> 0x0054 (FullSize[0x015C] - InheritedSize[0x0108])
	 */
	class UBP_DeadState_C : public UDeadStateComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0108(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FTransform                                          StartTransform;                                          // 0x0110(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     deathEffect;                                             // 0x0140(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        deathMontage;                                            // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ActiveDeathParticlesystem;                               // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Effectstartdelay;                                        // 0x0158(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ReceiveStateExit();
		void ReceiveStateEnter();
		void SetDeathParameters(float respawnDelay, float effectDelay, class UAnimMontage* deathMontage, class UParticleSystem* deathEffect, bool useAnimationTimeAsRespawnTime);
		void ExecuteUbergraph_BP_DeadState(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
