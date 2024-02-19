/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
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
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.InSafeZone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_JettyBoots_Game_C::InSafeZone(bool* OutValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.InSafeZone");
		
		UUI_JettyBoots_Game_C_InSafeZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutValue != nullptr)
			*OutValue = params.OutValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.UpdateReplaying
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Game_C::UpdateReplaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.UpdateReplaying");
		
		UUI_JettyBoots_Game_C_UpdateReplaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.ReceiveReplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FJettyBootsReplay                           InReplay                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_JettyBoots_Game_C::ReceiveReplay(const struct FJettyBootsReplay& InReplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.ReceiveReplay");
		
		UUI_JettyBoots_Game_C_ReceiveReplay_Params params {};
		params.InReplay = InReplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.StopGame
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Game_C::StopGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.StopGame");
		
		UUI_JettyBoots_Game_C_StopGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.StartGameSeeded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSeed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Game_C::StartGameSeeded(int32_t InSeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.StartGameSeeded");
		
		UUI_JettyBoots_Game_C_StartGameSeeded_Params params {};
		params.InSeed = InSeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.SetNextGate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Game_C::SetNextGate(int32_t InIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.SetNextGate");
		
		UUI_JettyBoots_Game_C_SetNextGate_Params params {};
		params.InIndex = InIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.GetNextGateIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Game_C::GetNextGateIndex(int32_t* OutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.GetNextGateIndex");
		
		UUI_JettyBoots_Game_C_GetNextGateIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIndex != nullptr)
			*OutIndex = params.OutIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.Shout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDialogDataAsset*                            InShout                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Game_C::Shout(class UDialogDataAsset* InShout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.Shout");
		
		UUI_JettyBoots_Game_C_Shout_Params params {};
		params.InShout = InShout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.DoAudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundCue*                                   InSound                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAudioComponent*                             InOptionalAudioComponent                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAudioComponent*                             OutAudioComponent                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Game_C::DoAudio(class USoundCue* InSound, class UAudioComponent* InOptionalAudioComponent, class UAudioComponent** OutAudioComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.DoAudio");
		
		UUI_JettyBoots_Game_C_DoAudio_Params params {};
		params.InSound = InSound;
		params.InOptionalAudioComponent = InOptionalAudioComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAudioComponent != nullptr)
			*OutAudioComponent = params.OutAudioComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.GetBoostActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutBoosting                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_JettyBoots_Game_C::GetBoostActive(bool* OutBoosting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.GetBoostActive");
		
		UUI_JettyBoots_Game_C_GetBoostActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBoosting != nullptr)
			*OutBoosting = params.OutBoosting;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.SetGameState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_JettyBoots_GameState                          InGameState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Game_C::SetGameState(ENUM_JettyBoots_GameState InGameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.SetGameState");
		
		UUI_JettyBoots_Game_C_SetGameState_Params params {};
		params.InGameState = InGameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.CheckCharacterState
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Game_C::CheckCharacterState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.CheckCharacterState");
		
		UUI_JettyBoots_Game_C_CheckCharacterState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.SetCharacterPos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InPos                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InMoveCamera                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_JettyBoots_Game_C::SetCharacterPos(const struct FVector2D& InPos, bool InMoveCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.SetCharacterPos");
		
		UUI_JettyBoots_Game_C_SetCharacterPos_Params params {};
		params.InPos = InPos;
		params.InMoveCamera = InMoveCamera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.GetStartPos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   outPos                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Game_C::GetStartPos(struct FVector2D* outPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.GetStartPos");
		
		UUI_JettyBoots_Game_C_GetStartPos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outPos != nullptr)
			*outPos = params.outPos;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.StartGame
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Game_C::StartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.StartGame");
		
		UUI_JettyBoots_Game_C_StartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.CreateLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSeed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Game_C::CreateLevel(int32_t InSeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.CreateLevel");
		
		UUI_JettyBoots_Game_C_CreateLevel_Params params {};
		params.InSeed = InSeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Game_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.Tick");
		
		UUI_JettyBoots_Game_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_JettyBoots_Game_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.PreConstruct");
		
		UUI_JettyBoots_Game_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnActionKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InKeyDown                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_JettyBoots_Game_C::OnActionKey(bool InKeyDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnActionKey");
		
		UUI_JettyBoots_Game_C_OnActionKey_Params params {};
		params.InKeyDown = InKeyDown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.UpdateRunning
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Game_C::UpdateRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.UpdateRunning");
		
		UUI_JettyBoots_Game_C_UpdateRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.UpdatePlayerDied
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Game_C::UpdatePlayerDied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.UpdatePlayerDied");
		
		UUI_JettyBoots_Game_C_UpdatePlayerDied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.UpdateRestarting
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Game_C::UpdateRestarting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.UpdateRestarting");
		
		UUI_JettyBoots_Game_C_UpdateRestarting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.UpdateFinishing
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Game_C::UpdateFinishing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.UpdateFinishing");
		
		UUI_JettyBoots_Game_C_UpdateFinishing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.EnterRunning
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Game_C::EnterRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.EnterRunning");
		
		UUI_JettyBoots_Game_C_EnterRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.EnterPlayerDied
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Game_C::EnterPlayerDied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.EnterPlayerDied");
		
		UUI_JettyBoots_Game_C_EnterPlayerDied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.EnterFinishing
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Game_C::EnterFinishing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.EnterFinishing");
		
		UUI_JettyBoots_Game_C_EnterFinishing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.FX_PlayerDied
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Game_C::FX_PlayerDied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.FX_PlayerDied");
		
		UUI_JettyBoots_Game_C_FX_PlayerDied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.FX_LevelComplete
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Game_C::FX_LevelComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.FX_LevelComplete");
		
		UUI_JettyBoots_Game_C_FX_LevelComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.FX_JetBoost
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Game_C::FX_JetBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.FX_JetBoost");
		
		UUI_JettyBoots_Game_C_FX_JetBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.FX_GateCleared
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Game_C::FX_GateCleared()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.FX_GateCleared");
		
		UUI_JettyBoots_Game_C_FX_GateCleared_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.ExecuteUbergraph_UI_JettyBoots_Game
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Game_C::ExecuteUbergraph_UI_JettyBoots_Game(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.ExecuteUbergraph_UI_JettyBoots_Game");
		
		UUI_JettyBoots_Game_C_ExecuteUbergraph_UI_JettyBoots_Game_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnPointsGathered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutPoints                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Game_C::OnPointsGathered__DelegateSignature(int32_t OutPoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnPointsGathered__DelegateSignature");
		
		UUI_JettyBoots_Game_C_OnPointsGathered__DelegateSignature_Params params {};
		params.OutPoints = OutPoints;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnGateCleared__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_JettyBoots_Game_C::OnGateCleared__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnGateCleared__DelegateSignature");
		
		UUI_JettyBoots_Game_C_OnGateCleared__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnReplayStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_JettyBoots_GameState                          InGameState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Game_C::OnReplayStateChanged__DelegateSignature(ENUM_JettyBoots_GameState InGameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnReplayStateChanged__DelegateSignature");
		
		UUI_JettyBoots_Game_C_OnReplayStateChanged__DelegateSignature_Params params {};
		params.InGameState = InGameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnGameStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_JettyBoots_GameState                          InState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENUM_JettyBoots_GameState                          InPreviousState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Game_C::OnGameStateChanged__DelegateSignature(ENUM_JettyBoots_GameState InState, ENUM_JettyBoots_GameState InPreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnGameStateChanged__DelegateSignature");
		
		UUI_JettyBoots_Game_C_OnGameStateChanged__DelegateSignature_Params params {};
		params.InState = InState;
		params.InPreviousState = InPreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnGameTicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLevelSeed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InCharacterPosition                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENUM_JettyBoots_GameState                          InGameState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Game_C::OnGameTicked__DelegateSignature(int32_t InLevelSeed, const struct FVector2D& InCharacterPosition, ENUM_JettyBoots_GameState InGameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnGameTicked__DelegateSignature");
		
		UUI_JettyBoots_Game_C_OnGameTicked__DelegateSignature_Params params {};
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
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnProgressChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCurrentGate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InTotalGates                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Game_C::OnProgressChanged__DelegateSignature(int32_t InCurrentGate, int32_t InTotalGates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnProgressChanged__DelegateSignature");
		
		UUI_JettyBoots_Game_C_OnProgressChanged__DelegateSignature_Params params {};
		params.InCurrentGate = InCurrentGate;
		params.InTotalGates = InTotalGates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnDistanceChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDistance                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_JettyBoots_Game_C::OnDistanceChanged__DelegateSignature(float InDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_JettyBoots_Game.UI_JettyBoots_Game_C.OnDistanceChanged__DelegateSignature");
		
		UUI_JettyBoots_Game_C_OnDistanceChanged__DelegateSignature_Params params {};
		params.InDistance = InDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_JettyBoots_Game_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_JettyBoots_Game_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_JettyBoots_Game.UI_JettyBoots_Game_C");
		return ptr;
	}

}


