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
	 * BlueprintGeneratedClass LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C
	 * Size -> 0x0018 (FullSize[0x0240] - InheritedSize[0x0228])
	 */
	class ALVL_Loading_DeepDive_B_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ULevelSequencePlayer*                                Player;                                                  // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_DepthCount_C*                                    BP_HUD_DepthCount_EdGraph_1_RefProperty;                 // 0x0238(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void StopPlayer();
		void StartPlayer(class ULevelSequence* LevelSequence);
		void ReceiveBeginPlay();
		void PlayerStart(class ULevelSequence* LoaderLevelSequence);
		void PlayerStop();
		void ExecuteUbergraph_LVL_Loading_DeepDive_B(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
