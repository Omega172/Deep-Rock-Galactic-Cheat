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
	 * BlueprintGeneratedClass BP_Crossbow_PheromoneAttackerPositioning.BP_Crossbow_PheromoneAttackerPositioning_C
	 * Size -> 0x0008 (FullSize[0x0118] - InheritedSize[0x0110])
	 */
	class UBP_Crossbow_PheromoneAttackerPositioning_C : public UBP_PheromoneAttackerPositioning_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0110(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Crossbow_PheromoneAttackerPositioning(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
