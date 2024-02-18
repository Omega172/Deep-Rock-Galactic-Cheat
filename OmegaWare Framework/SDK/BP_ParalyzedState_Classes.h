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
	 * BlueprintGeneratedClass BP_ParalyzedState.BP_ParalyzedState_C
	 * Size -> 0x0018 (FullSize[0x0158] - InheritedSize[0x0140])
	 */
	class UBP_ParalyzedState_C : public UParalyzedStateComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0140(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FRotator                                            StoredRotation;                                          // 0x0148(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CameraArmYRotation;                                      // 0x0154(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void ReceiveStateEnter();
		void ReceiveStateExit();
		void ExecuteUbergraph_BP_ParalyzedState(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
