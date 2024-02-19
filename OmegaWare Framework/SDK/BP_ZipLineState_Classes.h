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
	 * BlueprintGeneratedClass BP_ZipLineState.BP_ZipLineState_C
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class UBP_ZipLineState_C : public UZipLineStateComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		struct FVector GetJumpVector(const struct FVector& LookVector, const struct FVector& CurrentVelocity);
		void ReceiveSpeedBoostActivated();
		void ReceiveSpeedBoostDeactivated();
		void ExecuteUbergraph_BP_ZipLineState(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
