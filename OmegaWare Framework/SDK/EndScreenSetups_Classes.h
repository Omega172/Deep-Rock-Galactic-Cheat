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
	 * BlueprintGeneratedClass EndScreenSetups.EndScreenSetups_C
	 * Size -> 0x0048 (FullSize[0x00F8] - InheritedSize[0x00B0])
	 */
	class UEndScreenSetups_C : public UActorComponent
	{
	public:
		TArray<struct FEndScreenMoveSet>                           VictorySets;                                             // 0x00B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		TArray<struct FEndScreenMoveSet>                           DefeatSets;                                              // 0x00C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		TArray<struct FEndScreenMoveSet>                           AvailableVictorySets;                                    // 0x00D0(0x0010) Edit, BlueprintVisible, Transient, DisableEditOnInstance
		TArray<struct FEndScreenMoveSet>                           AvailableDefeatSets;                                     // 0x00E0(0x0010) Edit, BlueprintVisible, Transient, DisableEditOnInstance
		struct FRandomStream                                       RandStream;                                              // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor

	public:
		void GetRandomWalkAnim(class UVictoryPose* VicPose, struct FRandomStream* RandStream);
		void LoadVictoryAnims(class UVictoryPose* InputPin, struct FRandomStream* RandStream, struct FEndScreenMove* EndScreenMove);
		void LoadActorClass(class UClass** Hard);
		void LoadAnimSeqArray(TArray<class UAnimSequence*>* Hard);
		void LoadAnimSeq(class UAnimSequence** Hard);
		void SplitMoveSetAnims(class UAnimSequence** Selected1);
		void ResetMovesets(int32_t NewSeed);
		void RandomWeightedMoveSet(TArray<struct FEndScreenMoveSet>* Array, struct FEndScreenMove* Selected);
		void GetEndScreenMoveSet(bool Survived, class UVictoryPose* VictPose, struct FRandomStream* RandStream, struct FEndScreenMove* Selected);
		void RandomAnimElement(TArray<class UAnimSequence*>* Array, class UAnimSequence** Output);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
