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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Check FSDEvents
	 */
	struct UUI_JettyBoots_Arcade_C_CheckFSDEvents_Params
	{	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.StartNextLevel
	 */
	struct UUI_JettyBoots_Arcade_C_StartNextLevel_Params
	{	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.GetScoreStatus
	 */
	struct UUI_JettyBoots_Arcade_C_GetScoreStatus_Params
	{
	public:
		int32_t                                                    InNewScore;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutOnList;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DMKH[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OutIndex;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.UpdateMusic
	 */
	struct UUI_JettyBoots_Arcade_C_UpdateMusic_Params
	{
	public:
		ENUM_JettyBoots_GameState                                  InGameState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENUM_JettyBoots_GameState                                  OutGameState;                                            // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.ReplayGame
	 */
	struct UUI_JettyBoots_Arcade_C_ReplayGame_Params
	{
	public:
		struct FJettyBootsReplay                                   InReplay;                                                // 0x0000(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.StopGame
	 */
	struct UUI_JettyBoots_Arcade_C_StopGame_Params
	{	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.GetUserName
	 */
	struct UUI_JettyBoots_Arcade_C_GetUserName_Params
	{
	public:
		class FString                                              OutName;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.StartGame
	 */
	struct UUI_JettyBoots_Arcade_C_StartGame_Params
	{
	public:
		class APlayerCharacter*                                    InUser;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AJettyBootsArcadeActor*                              InArcade;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.SetHighScores
	 */
	struct UUI_JettyBoots_Arcade_C_SetHighScores_Params
	{
	public:
		TArray<struct FJettyBootsScore>                            InHighScores;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    InLastIndex;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Display Level
	 */
	struct UUI_JettyBoots_Arcade_C_DisplayLevel_Params
	{
	public:
		int32_t                                                    InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Display Lives
	 */
	struct UUI_JettyBoots_Arcade_C_DisplayLives_Params
	{
	public:
		int32_t                                                    InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutGameOver;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NKLS[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Display Score
	 */
	struct UUI_JettyBoots_Arcade_C_DisplayScore_Params
	{
	public:
		int32_t                                                    InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Display HighScore
	 */
	struct UUI_JettyBoots_Arcade_C_DisplayHighScore_Params
	{
	public:
		int32_t                                                    InHighscore;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Display State
	 */
	struct UUI_JettyBoots_Arcade_C_DisplayState_Params
	{
	public:
		int32_t                                                    InLevel;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InScore;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InLives;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.SetAudioSceneComponent
	 */
	struct UUI_JettyBoots_Arcade_C_SetAudioSceneComponent_Params
	{
	public:
		class USceneComponent*                                     AudioSceneComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.IsJumpPressed
	 */
	struct UUI_JettyBoots_Arcade_C_IsJumpPressed_Params
	{
	public:
		bool                                                       OutPressed;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Tick
	 */
	struct UUI_JettyBoots_Arcade_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_4_OnGameTicked__DelegateSignature
	 */
	struct UUI_JettyBoots_Arcade_C_BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_4_OnGameTicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    InLevelSeed;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InCharacterPosition;                                     // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENUM_JettyBoots_GameState                                  InGameState;                                             // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_3_OnGameStateChanged__DelegateSignature
	 */
	struct UUI_JettyBoots_Arcade_C_BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_3_OnGameStateChanged__DelegateSignature_Params
	{
	public:
		ENUM_JettyBoots_GameState                                  InState;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENUM_JettyBoots_GameState                                  InPreviousState;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_0_OnReplayStateChanged__DelegateSignature
	 */
	struct UUI_JettyBoots_Arcade_C_BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_0_OnReplayStateChanged__DelegateSignature_Params
	{
	public:
		ENUM_JettyBoots_GameState                                  InGameState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.BndEvt__UI_JettyBoots_Arcade_Game_UI_K2Node_ComponentBoundEvent_1_OnGateCleared__DelegateSignature
	 */
	struct UUI_JettyBoots_Arcade_C_BndEvt__UI_JettyBoots_Arcade_Game_UI_K2Node_ComponentBoundEvent_1_OnGateCleared__DelegateSignature_Params
	{	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.BndEvt__UI_JettyBoots_Arcade_Game_UI_K2Node_ComponentBoundEvent_2_OnPointsGathered__DelegateSignature
	 */
	struct UUI_JettyBoots_Arcade_C_BndEvt__UI_JettyBoots_Arcade_Game_UI_K2Node_ComponentBoundEvent_2_OnPointsGathered__DelegateSignature_Params
	{
	public:
		int32_t                                                    OutPoints;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Construct
	 */
	struct UUI_JettyBoots_Arcade_C_Construct_Params
	{	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Setup FSD Events
	 */
	struct UUI_JettyBoots_Arcade_C_SetupFSDEvents_Params
	{	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.GameOverAudio
	 */
	struct UUI_JettyBoots_Arcade_C_GameOverAudio_Params
	{	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.PreConstruct
	 */
	struct UUI_JettyBoots_Arcade_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.ExecuteUbergraph_UI_JettyBoots_Arcade
	 */
	struct UUI_JettyBoots_Arcade_C_ExecuteUbergraph_UI_JettyBoots_Arcade_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.OnLevelCompleted__DelegateSignature
	 */
	struct UUI_JettyBoots_Arcade_C_OnLevelCompleted__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    InPlayer;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.OnRestartingLevel__DelegateSignature
	 */
	struct UUI_JettyBoots_Arcade_C_OnRestartingLevel__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    InPlayer;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.OnGameOver__DelegateSignature
	 */
	struct UUI_JettyBoots_Arcade_C_OnGameOver__DelegateSignature_Params
	{
	public:
		struct FJettyBootsScore                                    InScore;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       InOnHighScoreList;                                       // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B0R4[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InHighScoreIndex;                                        // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerCharacter*                                    InPlayer;                                                // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.OnReplayRecorded__DelegateSignature
	 */
	struct UUI_JettyBoots_Arcade_C_OnReplayRecorded__DelegateSignature_Params
	{
	public:
		struct FJettyBootsReplay                                   InReplay;                                                // 0x0000(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.OnGameEnded__DelegateSignature
	 */
	struct UUI_JettyBoots_Arcade_C_OnGameEnded__DelegateSignature_Params
	{
	public:
		struct FJettyBootsScore                                    InScore;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       InOnHighScoreList;                                       // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LJSM[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InIHighScoreIndex;                                       // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerCharacter*                                    InPlayer;                                                // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
