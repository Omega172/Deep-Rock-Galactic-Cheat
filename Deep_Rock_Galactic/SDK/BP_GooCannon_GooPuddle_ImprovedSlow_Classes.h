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
	 * BlueprintGeneratedClass BP_GooCannon_GooPuddle_ImprovedSlow.BP_GooCannon_GooPuddle_ImprovedSlow_C
	 * Size -> 0x000F (FullSize[0x0330] - InheritedSize[0x0321])
	 */
	class ABP_GooCannon_GooPuddle_ImprovedSlow_C : public ABP_GooCannon_GooPuddle_C
	{
	public:
		unsigned char                                              UnknownData_4KK1[0x7];                                   // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_GooCannon_GooPuddle_ImprovedSlow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
