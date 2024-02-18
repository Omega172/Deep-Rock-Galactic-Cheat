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
	 * WidgetBlueprintGeneratedClass UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C
	 * Size -> 0x0160 (FullSize[0x03C0] - InheritedSize[0x0260])
	 */
	class UUI_JettyBoots_Arcade_C : public UJettyBootsArcadeWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_JettyBoots_Announcement_C*                       Behind_Announce_UI;                                      // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Event_Overlay;                                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_JettyBoots_Announcement_C*                       Front_Announce_UI;                                       // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_JettyBoots_Game_C*                               Game_UI;                                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_JettyBoot_Score_C*                               HighScore_Label;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_Label_C*                                      Level_Label;                                             // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_JettyBoots_Lives_C*                              LivesUI;                                                 // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_JettyBoot_Score_C*                               PlayerScore_Label;                                       // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_Label_C*                                      PlayerScoreHeader;                                       // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Screen_Game;                                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_JettyBoots_StartScreen_C*                        Screen_Start;                                            // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Screen_Switcher;                                         // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USceneComponent*                                     AudioSceneComponent;                                     // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UJettyBootSettings*                                  LevelSettings;                                           // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxLives;                                                // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SIQP[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     MusicComponent;                                          // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ReplayStarted;                                           // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LocalGameStarted;                                        // 0x02E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5KWZ[0x6];                                   // 0x02EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerCharacter*                                    CurrentUser;                                             // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AJettyBootsArcadeActor*                              Arcade;                                                  // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ENUM_JettyBoots_GameState                                  previousState;                                           // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZG0G[0x3];                                   // 0x0301(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Seed;                                                    // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Level;                                                   // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Attempts;                                                // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TotalScore;                                              // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2I76[0x4];                                   // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRestartingLevel;                                       // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnLevelCompleted;                                        // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnReplayRecorded;                                        // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnGameOver;                                              // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnGameEnded;                                             // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FJettyBootsScore>                            HighScores;                                              // 0x0368(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FJettyBootsReplay                                   LastReplay;                                              // 0x0378(0x001C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		int32_t                                                    CurrentHighScore;                                        // 0x0394(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              EventWidgetPreview[0x28];                                // 0x0398(0x0028) UNKNOWN PROPERTY: SoftClassProperty

	public:
		void CheckFSDEvents();
		void StartNextLevel();
		void GetScoreStatus(int32_t InNewScore, bool* OutOnList, int32_t* OutIndex);
		void UpdateMusic(ENUM_JettyBoots_GameState InGameState, ENUM_JettyBoots_GameState* OutGameState);
		void ReplayGame(const struct FJettyBootsReplay& InReplay);
		void StopGame();
		void GetUserName(class FString* OutName);
		void StartGame(class APlayerCharacter* InUser, class AJettyBootsArcadeActor* InArcade);
		void SetHighScores(TArray<struct FJettyBootsScore>* InHighScores, int32_t InLastIndex);
		void DisplayLevel(int32_t InValue);
		void DisplayLives(int32_t InValue, bool* OutGameOver);
		void DisplayScore(int32_t InValue);
		void DisplayHighScore(int32_t InHighscore);
		void DisplayState(int32_t InLevel, int32_t InScore, int32_t InLives);
		void SetAudioSceneComponent(class USceneComponent* AudioSceneComponent);
		void IsJumpPressed(bool* OutPressed);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_4_OnGameTicked__DelegateSignature(int32_t InLevelSeed, const struct FVector2D& InCharacterPosition, ENUM_JettyBoots_GameState InGameState);
		void BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_3_OnGameStateChanged__DelegateSignature(ENUM_JettyBoots_GameState InState, ENUM_JettyBoots_GameState InPreviousState);
		void BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_0_OnReplayStateChanged__DelegateSignature(ENUM_JettyBoots_GameState InGameState);
		void BndEvt__UI_JettyBoots_Arcade_Game_UI_K2Node_ComponentBoundEvent_1_OnGateCleared__DelegateSignature();
		void BndEvt__UI_JettyBoots_Arcade_Game_UI_K2Node_ComponentBoundEvent_2_OnPointsGathered__DelegateSignature(int32_t OutPoints);
		void Construct();
		void SetupFSDEvents();
		void GameOverAudio();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_JettyBoots_Arcade(int32_t EntryPoint);
		void OnLevelCompleted__DelegateSignature(class APlayerCharacter* InPlayer);
		void OnRestartingLevel__DelegateSignature(class APlayerCharacter* InPlayer);
		void OnGameOver__DelegateSignature(const struct FJettyBootsScore& InScore, bool InOnHighScoreList, int32_t InHighScoreIndex, class APlayerCharacter* InPlayer);
		void OnReplayRecorded__DelegateSignature(const struct FJettyBootsReplay& InReplay);
		void OnGameEnded__DelegateSignature(const struct FJettyBootsScore& InScore, bool InOnHighScoreList, int32_t InIHighScoreIndex, class APlayerCharacter* InPlayer);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
