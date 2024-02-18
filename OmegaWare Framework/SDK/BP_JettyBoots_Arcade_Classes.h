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
	 * BlueprintGeneratedClass BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C
	 * Size -> 0x0060 (FullSize[0x0310] - InheritedSize[0x02B0])
	 */
	class ABP_JettyBoots_Arcade_C : public AJettyBootsArcadeActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     IdleAudio;                                               // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Plug;                                                 // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       UsableCollider;                                          // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ClearHighScores_Button;                                  // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    Widget;                                                  // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GameCost;                                                // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VUQU[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0300(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		bool GetIsReplayUser();
		void SetButtonLightsActive(bool InLightsActive);
		void UpdateActivePlayer();
		bool GetIsActiveUser();
		void GetGameWidget(class UUI_JettyBoots_Arcade_C** OutWidget);
		void OnGameEnded_Event(const struct FJettyBootsScore& InScore, bool InOnHighScoreList, int32_t InIHighScoreIndex, class APlayerCharacter* InPlayer);
		void Server_GameEnded(const struct FJettyBootsScore& OutScore);
		void ReceiveHighScoreChanged();
		void RefreshHighScores();
		void ReceiveReplayPackage(const struct FJettyBootsReplay& InPackage);
		void SetupGameEnded();
		void SetupReplay();
		void OnReplayRecorded(const struct FJettyBootsReplay& InReplay);
		void ReceivePlayerChanged();
		void ReceiveBeginPlay();
		void BndEvt__BP_JettyBoots_Arcade_StartGameUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
		void SetupShouts();
		void Shout_OnGameOver(const struct FJettyBootsScore& InScore, bool InOnHighScoreList, int32_t InHighScoreIndex, class APlayerCharacter* InPlayer);
		void Shout_OnStartGame(class APlayerCharacter* User, EInputKeys Key);
		void Shout_RestartingLevel(class APlayerCharacter* InPlayer);
		void Shout_LevelCompleted(class APlayerCharacter* InPlayer);
		void MissionShout_GameStart();
		void ExecuteUbergraph_BP_JettyBoots_Arcade(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
