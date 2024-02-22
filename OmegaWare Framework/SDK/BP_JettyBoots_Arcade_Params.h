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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.GetIsReplayUser
	 */
	struct ABP_JettyBoots_Arcade_C_GetIsReplayUser_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AI13[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.SetButtonLightsActive
	 */
	struct ABP_JettyBoots_Arcade_C_SetButtonLightsActive_Params
	{
	public:
		bool                                                       InLightsActive;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VKS5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.UpdateActivePlayer
	 */
	struct ABP_JettyBoots_Arcade_C_UpdateActivePlayer_Params
	{	};

	/**
	 * Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.GetIsActiveUser
	 */
	struct ABP_JettyBoots_Arcade_C_GetIsActiveUser_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E1VU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.GetGameWidget
	 */
	struct ABP_JettyBoots_Arcade_C_GetGameWidget_Params
	{
	public:
		class UUI_JettyBoots_Arcade_C*                             OutWidget;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.OnGameEnded_Event
	 */
	struct ABP_JettyBoots_Arcade_C_OnGameEnded_Event_Params
	{
	public:
		struct FJettyBootsScore                                    InScore;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       InOnHighScoreList;                                       // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7N55[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InIHighScoreIndex;                                       // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerCharacter*                                    InPlayer;                                                // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Server_GameEnded
	 */
	struct ABP_JettyBoots_Arcade_C_Server_GameEnded_Params
	{
	public:
		struct FJettyBootsScore                                    OutScore;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.ReceiveHighScoreChanged
	 */
	struct ABP_JettyBoots_Arcade_C_ReceiveHighScoreChanged_Params
	{	};

	/**
	 * Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.RefreshHighScores
	 */
	struct ABP_JettyBoots_Arcade_C_RefreshHighScores_Params
	{	};

	/**
	 * Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.ReceiveReplayPackage
	 */
	struct ABP_JettyBoots_Arcade_C_ReceiveReplayPackage_Params
	{
	public:
		struct FJettyBootsReplay                                   InPackage;                                               // 0x0000(0x001C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Setup Game Ended
	 */
	struct ABP_JettyBoots_Arcade_C_SetupGameEnded_Params
	{	};

	/**
	 * Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Setup Replay
	 */
	struct ABP_JettyBoots_Arcade_C_SetupReplay_Params
	{	};

	/**
	 * Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.OnReplayRecorded
	 */
	struct ABP_JettyBoots_Arcade_C_OnReplayRecorded_Params
	{
	public:
		struct FJettyBootsReplay                                   InReplay;                                                // 0x0000(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.ReceivePlayerChanged
	 */
	struct ABP_JettyBoots_Arcade_C_ReceivePlayerChanged_Params
	{	};

	/**
	 * Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.ReceiveBeginPlay
	 */
	struct ABP_JettyBoots_Arcade_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.BndEvt__BP_JettyBoots_Arcade_StartGameUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	 */
	struct ABP_JettyBoots_Arcade_C_BndEvt__BP_JettyBoots_Arcade_StartGameUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Setup Shouts
	 */
	struct ABP_JettyBoots_Arcade_C_SetupShouts_Params
	{	};

	/**
	 * Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Shout_OnGameOver
	 */
	struct ABP_JettyBoots_Arcade_C_Shout_OnGameOver_Params
	{
	public:
		struct FJettyBootsScore                                    InScore;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       InOnHighScoreList;                                       // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B9V6[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InHighScoreIndex;                                        // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerCharacter*                                    InPlayer;                                                // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Shout_OnStartGame
	 */
	struct ABP_JettyBoots_Arcade_C_Shout_OnStartGame_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Shout_RestartingLevel
	 */
	struct ABP_JettyBoots_Arcade_C_Shout_RestartingLevel_Params
	{
	public:
		class APlayerCharacter*                                    InPlayer;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Shout_LevelCompleted
	 */
	struct ABP_JettyBoots_Arcade_C_Shout_LevelCompleted_Params
	{
	public:
		class APlayerCharacter*                                    InPlayer;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.MissionShout_GameStart
	 */
	struct ABP_JettyBoots_Arcade_C_MissionShout_GameStart_Params
	{	};

	/**
	 * Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.ExecuteUbergraph_BP_JettyBoots_Arcade
	 */
	struct ABP_JettyBoots_Arcade_C_ExecuteUbergraph_BP_JettyBoots_Arcade_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
