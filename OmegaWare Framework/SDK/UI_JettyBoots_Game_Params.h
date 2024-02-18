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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.InSafeZone
	 */
	struct UUI_JettyBoots_Game_C_InSafeZone_Params
	{
	public:
		bool                                                       OutValue;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YYYM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.UpdateReplaying
	 */
	struct UUI_JettyBoots_Game_C_UpdateReplaying_Params
	{	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.ReceiveReplay
	 */
	struct UUI_JettyBoots_Game_C_ReceiveReplay_Params
	{
	public:
		struct FJettyBootsReplay                                   InReplay;                                                // 0x0000(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.StopGame
	 */
	struct UUI_JettyBoots_Game_C_StopGame_Params
	{	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.StartGameSeeded
	 */
	struct UUI_JettyBoots_Game_C_StartGameSeeded_Params
	{
	public:
		int32_t                                                    InSeed;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.SetNextGate
	 */
	struct UUI_JettyBoots_Game_C_SetNextGate_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.GetNextGateIndex
	 */
	struct UUI_JettyBoots_Game_C_GetNextGateIndex_Params
	{
	public:
		int32_t                                                    OutIndex;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.Shout
	 */
	struct UUI_JettyBoots_Game_C_Shout_Params
	{
	public:
		class UDialogDataAsset*                                    InShout;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.DoAudio
	 */
	struct UUI_JettyBoots_Game_C_DoAudio_Params
	{
	public:
		class USoundCue*                                           InSound;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAudioComponent*                                     InOptionalAudioComponent;                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAudioComponent*                                     OutAudioComponent;                                       // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.GetBoostActive
	 */
	struct UUI_JettyBoots_Game_C_GetBoostActive_Params
	{
	public:
		bool                                                       OutBoosting;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.SetGameState
	 */
	struct UUI_JettyBoots_Game_C_SetGameState_Params
	{
	public:
		ENUM_JettyBoots_GameState                                  InGameState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.CheckCharacterState
	 */
	struct UUI_JettyBoots_Game_C_CheckCharacterState_Params
	{	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.SetCharacterPos
	 */
	struct UUI_JettyBoots_Game_C_SetCharacterPos_Params
	{
	public:
		struct FVector2D                                           InPos;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InMoveCamera;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YG7G[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.GetStartPos
	 */
	struct UUI_JettyBoots_Game_C_GetStartPos_Params
	{
	public:
		struct FVector2D                                           outPos;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.StartGame
	 */
	struct UUI_JettyBoots_Game_C_StartGame_Params
	{	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.CreateLevel
	 */
	struct UUI_JettyBoots_Game_C_CreateLevel_Params
	{
	public:
		int32_t                                                    InSeed;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.Tick
	 */
	struct UUI_JettyBoots_Game_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.PreConstruct
	 */
	struct UUI_JettyBoots_Game_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnActionKey
	 */
	struct UUI_JettyBoots_Game_C_OnActionKey_Params
	{
	public:
		bool                                                       InKeyDown;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.UpdateRunning
	 */
	struct UUI_JettyBoots_Game_C_UpdateRunning_Params
	{	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.UpdatePlayerDied
	 */
	struct UUI_JettyBoots_Game_C_UpdatePlayerDied_Params
	{	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.UpdateRestarting
	 */
	struct UUI_JettyBoots_Game_C_UpdateRestarting_Params
	{	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.UpdateFinishing
	 */
	struct UUI_JettyBoots_Game_C_UpdateFinishing_Params
	{	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.EnterRunning
	 */
	struct UUI_JettyBoots_Game_C_EnterRunning_Params
	{	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.EnterPlayerDied
	 */
	struct UUI_JettyBoots_Game_C_EnterPlayerDied_Params
	{	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.EnterFinishing
	 */
	struct UUI_JettyBoots_Game_C_EnterFinishing_Params
	{	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.FX_PlayerDied
	 */
	struct UUI_JettyBoots_Game_C_FX_PlayerDied_Params
	{	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.FX_LevelComplete
	 */
	struct UUI_JettyBoots_Game_C_FX_LevelComplete_Params
	{	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.FX_JetBoost
	 */
	struct UUI_JettyBoots_Game_C_FX_JetBoost_Params
	{	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.FX_GateCleared
	 */
	struct UUI_JettyBoots_Game_C_FX_GateCleared_Params
	{	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.ExecuteUbergraph_UI_JettyBoots_Game
	 */
	struct UUI_JettyBoots_Game_C_ExecuteUbergraph_UI_JettyBoots_Game_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnPointsGathered__DelegateSignature
	 */
	struct UUI_JettyBoots_Game_C_OnPointsGathered__DelegateSignature_Params
	{
	public:
		int32_t                                                    OutPoints;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnGateCleared__DelegateSignature
	 */
	struct UUI_JettyBoots_Game_C_OnGateCleared__DelegateSignature_Params
	{	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnReplayStateChanged__DelegateSignature
	 */
	struct UUI_JettyBoots_Game_C_OnReplayStateChanged__DelegateSignature_Params
	{
	public:
		ENUM_JettyBoots_GameState                                  InGameState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnGameStateChanged__DelegateSignature
	 */
	struct UUI_JettyBoots_Game_C_OnGameStateChanged__DelegateSignature_Params
	{
	public:
		ENUM_JettyBoots_GameState                                  InState;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENUM_JettyBoots_GameState                                  InPreviousState;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnGameTicked__DelegateSignature
	 */
	struct UUI_JettyBoots_Game_C_OnGameTicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    InLevelSeed;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InCharacterPosition;                                     // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENUM_JettyBoots_GameState                                  InGameState;                                             // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnProgressChanged__DelegateSignature
	 */
	struct UUI_JettyBoots_Game_C_OnProgressChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    InCurrentGate;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTotalGates;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnDistanceChanged__DelegateSignature
	 */
	struct UUI_JettyBoots_Game_C_OnDistanceChanged__DelegateSignature_Params
	{
	public:
		float                                                      InDistance;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
