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
	 * BlueprintGeneratedClass BP_FrozenState.BP_FrozenState_C
	 * Size -> 0x0008 (FullSize[0x01C8] - InheritedSize[0x01C0])
	 */
	class UBP_FrozenState_C : public UFrozenStateComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01C0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveStateEnter();
		void ReceiveStateExit();
		void ReceiveOnDefrosting();
		void ExecuteUbergraph_BP_FrozenState(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
