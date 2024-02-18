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
	 * BlueprintGeneratedClass BP_GameState.BP_GameState_C
	 * Size -> 0x0080 (FullSize[0x0720] - InheritedSize[0x06A0])
	 */
	class ABP_GameState_C : public AFSDGameState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x06A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class UPlayerCharacterID*>                          InitialHeroes;                                           // 0x06B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UPlayerCharacterID*>                          InitialHeroesLeft;                                       // 0x06C0(0x0010) Edit, BlueprintVisible, Transient, DisableEditOnInstance
		unsigned char                                              MaggotAnimationSharing[0x28];                            // 0x06D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              sjaromg[0x28];                                           // 0x06F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void GetAnimSharingAssets();
		TArray<class UPlayerCharacterID*> GetPlayableCharacterIDs();
		void GetRandomIntialHero(class UPlayerCharacterID** HeroClass);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void StartGame();
		void HandleSeamlessTravelEvent();
		void ReceiveTick(float DeltaSeconds);
		void CustomEvent_1();
		void ExecuteUbergraph_BP_GameState(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
