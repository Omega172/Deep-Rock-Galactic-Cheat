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
	 * BlueprintGeneratedClass LVL_CharacterSelection.LVL_CharacterSelection_C
	 * Size -> 0x0038 (FullSize[0x0260] - InheritedSize[0x0228])
	 */
	class ALVL_CharacterSelection_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ULevelSequencePlayer*                                Player;                                                  // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACharacterSelectionSwitcher_C*                       switcher;                                                // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FCharacterViewInfo>                          CharViewerList;                                          // 0x0240(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class ACharacterSelectionSwitcher_C*                       CharacterSelectionSwitcher_186_ExecuteUbergraph_LVL_CharacterSelection_RefProperty; // 0x0250(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACameraActor*                                        CameraActor_1_ExecuteUbergraph_LVL_CharacterSelection_RefProperty; // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void MakeVanity(bool UseSleves, struct FEquippedVanity* UseSleveless);
		void PlaySpecificSequence(class ULevelSequence* LevelSequence);
		void StopPlayer();
		void StartPlayer(ECharselectionCameraLocation CamSetting);
		void StopPlay();
		void StartPlay(ECharselectionCameraLocation selectionLocation);
		void StartLevelSeq(class ULevelSequence* CharacterLevelSequence);
		void ReceiveBeginPlay();
		void ReceiveDestroyed();
		void ExecuteUbergraph_LVL_CharacterSelection(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
