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
	 * BlueprintGeneratedClass BP_InfectedState.BP_InfectedState_C
	 * Size -> 0x0008 (FullSize[0x0168] - InheritedSize[0x0160])
	 */
	class UBP_InfectedState_C : public UInfectedStateComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0160(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveStateEnter();
		void ReceiveStateExit();
		void ExecuteUbergraph_BP_InfectedState(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
