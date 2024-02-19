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
	 * BlueprintGeneratedClass BP_InfectedState.BP_InfectedState_C
	 * Size -> 0x0014 (FullSize[0x01F4] - InheritedSize[0x01E0])
	 */
	class UBP_InfectedState_C : public UInfectedStateComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FTimerHandle                                        HandleStartDamage;                                       // 0x01E8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      GracePeriod;                                             // 0x01F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveStateEnter();
		void ReceiveStateExit();
		void StartDamage();
		void ExecuteUbergraph_BP_InfectedState(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
