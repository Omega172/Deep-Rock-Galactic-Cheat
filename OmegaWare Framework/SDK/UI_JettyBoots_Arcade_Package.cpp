/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Check FSDEvents
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Arcade_C::CheckFSDEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Check FSDEvents");
		
		UUI_JettyBoots_Arcade_C_CheckFSDEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.StartNextLevel
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Arcade_C::StartNextLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.StartNextLevel");
		
		UUI_JettyBoots_Arcade_C_StartNextLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.GetScoreStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InNewScore                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutOnList                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OutIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Arcade_C::GetScoreStatus(int32_t InNewScore, bool* OutOnList, int32_t* OutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.GetScoreStatus");
		
		UUI_JettyBoots_Arcade_C_GetScoreStatus_Params params {};
		params.InNewScore = InNewScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOnList != nullptr)
			*OutOnList = params.OutOnList;
		if (OutIndex != nullptr)
			*OutIndex = params.OutIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.UpdateMusic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_JettyBoots_GameState                          InGameState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENUM_JettyBoots_GameState                          OutGameState                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Arcade_C::UpdateMusic(ENUM_JettyBoots_GameState InGameState, ENUM_JettyBoots_GameState* OutGameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.UpdateMusic");
		
		UUI_JettyBoots_Arcade_C_UpdateMusic_Params params {};
		params.InGameState = InGameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutGameState != nullptr)
			*OutGameState = params.OutGameState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.ReplayGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FJettyBootsReplay                           InReplay                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_JettyBoots_Arcade_C::ReplayGame(const struct FJettyBootsReplay& InReplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.ReplayGame");
		
		UUI_JettyBoots_Arcade_C_ReplayGame_Params params {};
		params.InReplay = InReplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.StopGame
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Arcade_C::StopGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.StopGame");
		
		UUI_JettyBoots_Arcade_C_StopGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.GetUserName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OutName                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Arcade_C::GetUserName(class FString* OutName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.GetUserName");
		
		UUI_JettyBoots_Arcade_C_GetUserName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutName != nullptr)
			*OutName = params.OutName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.StartGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            InUser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AJettyBootsArcadeActor*                      InArcade                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Arcade_C::StartGame(class APlayerCharacter* InUser, class AJettyBootsArcadeActor* InArcade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.StartGame");
		
		UUI_JettyBoots_Arcade_C_StartGame_Params params {};
		params.InUser = InUser;
		params.InArcade = InArcade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.SetHighScores
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FJettyBootsScore>                    InHighScores                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InLastIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Arcade_C::SetHighScores(TArray<struct FJettyBootsScore>* InHighScores, int32_t InLastIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.SetHighScores");
		
		UUI_JettyBoots_Arcade_C_SetHighScores_Params params {};
		params.InLastIndex = InLastIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InHighScores != nullptr)
			*InHighScores = params.InHighScores;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Display Level
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Arcade_C::DisplayLevel(int32_t InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Display Level");
		
		UUI_JettyBoots_Arcade_C_DisplayLevel_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Display Lives
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutGameOver                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_JettyBoots_Arcade_C::DisplayLives(int32_t InValue, bool* OutGameOver)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Display Lives");
		
		UUI_JettyBoots_Arcade_C_DisplayLives_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutGameOver != nullptr)
			*OutGameOver = params.OutGameOver;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Display Score
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Arcade_C::DisplayScore(int32_t InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Display Score");
		
		UUI_JettyBoots_Arcade_C_DisplayScore_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Display HighScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InHighscore                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Arcade_C::DisplayHighScore(int32_t InHighscore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Display HighScore");
		
		UUI_JettyBoots_Arcade_C_DisplayHighScore_Params params {};
		params.InHighscore = InHighscore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Display State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InScore                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InLives                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Arcade_C::DisplayState(int32_t InLevel, int32_t InScore, int32_t InLives)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Display State");
		
		UUI_JettyBoots_Arcade_C_DisplayState_Params params {};
		params.InLevel = InLevel;
		params.InScore = InScore;
		params.InLives = InLives;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.SetAudioSceneComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             AudioSceneComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Arcade_C::SetAudioSceneComponent(class USceneComponent* AudioSceneComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.SetAudioSceneComponent");
		
		UUI_JettyBoots_Arcade_C_SetAudioSceneComponent_Params params {};
		params.AudioSceneComponent = AudioSceneComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.IsJumpPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutPressed                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_JettyBoots_Arcade_C::IsJumpPressed(bool* OutPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.IsJumpPressed");
		
		UUI_JettyBoots_Arcade_C_IsJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPressed != nullptr)
			*OutPressed = params.OutPressed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Arcade_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Tick");
		
		UUI_JettyBoots_Arcade_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_4_OnGameTicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLevelSeed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InCharacterPosition                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENUM_JettyBoots_GameState                          InGameState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Arcade_C::BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_4_OnGameTicked__DelegateSignature(int32_t InLevelSeed, const struct FVector2D& InCharacterPosition, ENUM_JettyBoots_GameState InGameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_4_OnGameTicked__DelegateSignature");
		
		UUI_JettyBoots_Arcade_C_BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_4_OnGameTicked__DelegateSignature_Params params {};
		params.InLevelSeed = InLevelSeed;
		params.InCharacterPosition = InCharacterPosition;
		params.InGameState = InGameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_3_OnGameStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_JettyBoots_GameState                          InState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENUM_JettyBoots_GameState                          InPreviousState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Arcade_C::BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_3_OnGameStateChanged__DelegateSignature(ENUM_JettyBoots_GameState InState, ENUM_JettyBoots_GameState InPreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_3_OnGameStateChanged__DelegateSignature");
		
		UUI_JettyBoots_Arcade_C_BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_3_OnGameStateChanged__DelegateSignature_Params params {};
		params.InState = InState;
		params.InPreviousState = InPreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_0_OnReplayStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_JettyBoots_GameState                          InGameState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Arcade_C::BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_0_OnReplayStateChanged__DelegateSignature(ENUM_JettyBoots_GameState InGameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_0_OnReplayStateChanged__DelegateSignature");
		
		UUI_JettyBoots_Arcade_C_BndEvt__UI_JettyBoots_Arcade_GameUI_K2Node_ComponentBoundEvent_0_OnReplayStateChanged__DelegateSignature_Params params {};
		params.InGameState = InGameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.BndEvt__UI_JettyBoots_Arcade_Game_UI_K2Node_ComponentBoundEvent_1_OnGateCleared__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Arcade_C::BndEvt__UI_JettyBoots_Arcade_Game_UI_K2Node_ComponentBoundEvent_1_OnGateCleared__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.BndEvt__UI_JettyBoots_Arcade_Game_UI_K2Node_ComponentBoundEvent_1_OnGateCleared__DelegateSignature");
		
		UUI_JettyBoots_Arcade_C_BndEvt__UI_JettyBoots_Arcade_Game_UI_K2Node_ComponentBoundEvent_1_OnGateCleared__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.BndEvt__UI_JettyBoots_Arcade_Game_UI_K2Node_ComponentBoundEvent_2_OnPointsGathered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutPoints                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Arcade_C::BndEvt__UI_JettyBoots_Arcade_Game_UI_K2Node_ComponentBoundEvent_2_OnPointsGathered__DelegateSignature(int32_t OutPoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.BndEvt__UI_JettyBoots_Arcade_Game_UI_K2Node_ComponentBoundEvent_2_OnPointsGathered__DelegateSignature");
		
		UUI_JettyBoots_Arcade_C_BndEvt__UI_JettyBoots_Arcade_Game_UI_K2Node_ComponentBoundEvent_2_OnPointsGathered__DelegateSignature_Params params {};
		params.OutPoints = OutPoints;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Arcade_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Construct");
		
		UUI_JettyBoots_Arcade_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Setup FSD Events
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Arcade_C::SetupFSDEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.Setup FSD Events");
		
		UUI_JettyBoots_Arcade_C_SetupFSDEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.GameOverAudio
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Arcade_C::GameOverAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.GameOverAudio");
		
		UUI_JettyBoots_Arcade_C_GameOverAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_JettyBoots_Arcade_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.PreConstruct");
		
		UUI_JettyBoots_Arcade_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.ExecuteUbergraph_UI_JettyBoots_Arcade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Arcade_C::ExecuteUbergraph_UI_JettyBoots_Arcade(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.ExecuteUbergraph_UI_JettyBoots_Arcade");
		
		UUI_JettyBoots_Arcade_C_ExecuteUbergraph_UI_JettyBoots_Arcade_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.OnLevelCompleted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            InPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Arcade_C::OnLevelCompleted__DelegateSignature(class APlayerCharacter* InPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.OnLevelCompleted__DelegateSignature");
		
		UUI_JettyBoots_Arcade_C_OnLevelCompleted__DelegateSignature_Params params {};
		params.InPlayer = InPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.OnRestartingLevel__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            InPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Arcade_C::OnRestartingLevel__DelegateSignature(class APlayerCharacter* InPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.OnRestartingLevel__DelegateSignature");
		
		UUI_JettyBoots_Arcade_C_OnRestartingLevel__DelegateSignature_Params params {};
		params.InPlayer = InPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.OnGameOver__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FJettyBootsScore                            InScore                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               InOnHighScoreList                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InHighScoreIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerCharacter*                            InPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Arcade_C::OnGameOver__DelegateSignature(const struct FJettyBootsScore& InScore, bool InOnHighScoreList, int32_t InHighScoreIndex, class APlayerCharacter* InPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.OnGameOver__DelegateSignature");
		
		UUI_JettyBoots_Arcade_C_OnGameOver__DelegateSignature_Params params {};
		params.InScore = InScore;
		params.InOnHighScoreList = InOnHighScoreList;
		params.InHighScoreIndex = InHighScoreIndex;
		params.InPlayer = InPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.OnReplayRecorded__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FJettyBootsReplay                           InReplay                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_JettyBoots_Arcade_C::OnReplayRecorded__DelegateSignature(const struct FJettyBootsReplay& InReplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.OnReplayRecorded__DelegateSignature");
		
		UUI_JettyBoots_Arcade_C_OnReplayRecorded__DelegateSignature_Params params {};
		params.InReplay = InReplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.OnGameEnded__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FJettyBootsScore                            InScore                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               InOnHighScoreList                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InIHighScoreIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerCharacter*                            InPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Arcade_C::OnGameEnded__DelegateSignature(const struct FJettyBootsScore& InScore, bool InOnHighScoreList, int32_t InIHighScoreIndex, class APlayerCharacter* InPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C.OnGameEnded__DelegateSignature");
		
		UUI_JettyBoots_Arcade_C_OnGameEnded__DelegateSignature_Params params {};
		params.InScore = InScore;
		params.InOnHighScoreList = InOnHighScoreList;
		params.InIHighScoreIndex = InIHighScoreIndex;
		params.InPlayer = InPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_JettyBoots_Arcade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_JettyBoots_Arcade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_JettyBoots_Arcade.UI_JettyBoots_Arcade_C");
		return ptr;
	}

}


