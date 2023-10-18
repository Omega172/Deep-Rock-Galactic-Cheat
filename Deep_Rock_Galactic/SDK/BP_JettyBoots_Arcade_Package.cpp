/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
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
	 * 		Name   -> Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.GetIsReplayUser
	 * 		Flags  -> ()
	 */
	bool ABP_JettyBoots_Arcade_C::GetIsReplayUser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.GetIsReplayUser");
		
		ABP_JettyBoots_Arcade_C_GetIsReplayUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.SetButtonLightsActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InLightsActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_JettyBoots_Arcade_C::SetButtonLightsActive(bool InLightsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.SetButtonLightsActive");
		
		ABP_JettyBoots_Arcade_C_SetButtonLightsActive_Params params {};
		params.InLightsActive = InLightsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.UpdateActivePlayer
	 * 		Flags  -> ()
	 */
	void ABP_JettyBoots_Arcade_C::UpdateActivePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.UpdateActivePlayer");
		
		ABP_JettyBoots_Arcade_C_UpdateActivePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.GetIsActiveUser
	 * 		Flags  -> ()
	 */
	bool ABP_JettyBoots_Arcade_C::GetIsActiveUser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.GetIsActiveUser");
		
		ABP_JettyBoots_Arcade_C_GetIsActiveUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.GetGameWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_JettyBoots_Arcade_C*                     OutWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_JettyBoots_Arcade_C::GetGameWidget(class UUI_JettyBoots_Arcade_C** OutWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.GetGameWidget");
		
		ABP_JettyBoots_Arcade_C_GetGameWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWidget != nullptr)
			*OutWidget = params.OutWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.OnGameEnded_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FJettyBootsScore                            InScore                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               InOnHighScoreList                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InIHighScoreIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerCharacter*                            InPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_JettyBoots_Arcade_C::OnGameEnded_Event(const struct FJettyBootsScore& InScore, bool InOnHighScoreList, int32_t InIHighScoreIndex, class APlayerCharacter* InPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.OnGameEnded_Event");
		
		ABP_JettyBoots_Arcade_C_OnGameEnded_Event_Params params {};
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
	 * 		Name   -> Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Server_GameEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FJettyBootsScore                            OutScore                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_JettyBoots_Arcade_C::Server_GameEnded(const struct FJettyBootsScore& OutScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Server_GameEnded");
		
		ABP_JettyBoots_Arcade_C_Server_GameEnded_Params params {};
		params.OutScore = OutScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.ReceiveHighScoreChanged
	 * 		Flags  -> ()
	 */
	void ABP_JettyBoots_Arcade_C::ReceiveHighScoreChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.ReceiveHighScoreChanged");
		
		ABP_JettyBoots_Arcade_C_ReceiveHighScoreChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.RefreshHighScores
	 * 		Flags  -> ()
	 */
	void ABP_JettyBoots_Arcade_C::RefreshHighScores()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.RefreshHighScores");
		
		ABP_JettyBoots_Arcade_C_RefreshHighScores_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.ReceiveReplayPackage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FJettyBootsReplay                           InPackage                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_JettyBoots_Arcade_C::ReceiveReplayPackage(const struct FJettyBootsReplay& InPackage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.ReceiveReplayPackage");
		
		ABP_JettyBoots_Arcade_C_ReceiveReplayPackage_Params params {};
		params.InPackage = InPackage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Setup Game Ended
	 * 		Flags  -> ()
	 */
	void ABP_JettyBoots_Arcade_C::SetupGameEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Setup Game Ended");
		
		ABP_JettyBoots_Arcade_C_SetupGameEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Setup Replay
	 * 		Flags  -> ()
	 */
	void ABP_JettyBoots_Arcade_C::SetupReplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Setup Replay");
		
		ABP_JettyBoots_Arcade_C_SetupReplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.OnReplayRecorded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FJettyBootsReplay                           InReplay                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABP_JettyBoots_Arcade_C::OnReplayRecorded(const struct FJettyBootsReplay& InReplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.OnReplayRecorded");
		
		ABP_JettyBoots_Arcade_C_OnReplayRecorded_Params params {};
		params.InReplay = InReplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.ReceivePlayerChanged
	 * 		Flags  -> ()
	 */
	void ABP_JettyBoots_Arcade_C::ReceivePlayerChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.ReceivePlayerChanged");
		
		ABP_JettyBoots_Arcade_C_ReceivePlayerChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_JettyBoots_Arcade_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.ReceiveBeginPlay");
		
		ABP_JettyBoots_Arcade_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.BndEvt__BP_JettyBoots_Arcade_StartGameUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputKeys                                         Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_JettyBoots_Arcade_C::BndEvt__BP_JettyBoots_Arcade_StartGameUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.BndEvt__BP_JettyBoots_Arcade_StartGameUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");
		
		ABP_JettyBoots_Arcade_C_BndEvt__BP_JettyBoots_Arcade_StartGameUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params params {};
		params.User = User;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Setup Shouts
	 * 		Flags  -> ()
	 */
	void ABP_JettyBoots_Arcade_C::SetupShouts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Setup Shouts");
		
		ABP_JettyBoots_Arcade_C_SetupShouts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Shout_OnGameOver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FJettyBootsScore                            InScore                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               InOnHighScoreList                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InHighScoreIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerCharacter*                            InPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_JettyBoots_Arcade_C::Shout_OnGameOver(const struct FJettyBootsScore& InScore, bool InOnHighScoreList, int32_t InHighScoreIndex, class APlayerCharacter* InPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Shout_OnGameOver");
		
		ABP_JettyBoots_Arcade_C_Shout_OnGameOver_Params params {};
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
	 * 		Name   -> Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Shout_OnStartGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputKeys                                         Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_JettyBoots_Arcade_C::Shout_OnStartGame(class APlayerCharacter* User, EInputKeys Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Shout_OnStartGame");
		
		ABP_JettyBoots_Arcade_C_Shout_OnStartGame_Params params {};
		params.User = User;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Shout_RestartingLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            InPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_JettyBoots_Arcade_C::Shout_RestartingLevel(class APlayerCharacter* InPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Shout_RestartingLevel");
		
		ABP_JettyBoots_Arcade_C_Shout_RestartingLevel_Params params {};
		params.InPlayer = InPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Shout_LevelCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            InPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_JettyBoots_Arcade_C::Shout_LevelCompleted(class APlayerCharacter* InPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.Shout_LevelCompleted");
		
		ABP_JettyBoots_Arcade_C_Shout_LevelCompleted_Params params {};
		params.InPlayer = InPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.MissionShout_GameStart
	 * 		Flags  -> ()
	 */
	void ABP_JettyBoots_Arcade_C::MissionShout_GameStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.MissionShout_GameStart");
		
		ABP_JettyBoots_Arcade_C_MissionShout_GameStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.ExecuteUbergraph_BP_JettyBoots_Arcade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_JettyBoots_Arcade_C::ExecuteUbergraph_BP_JettyBoots_Arcade(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C.ExecuteUbergraph_BP_JettyBoots_Arcade");
		
		ABP_JettyBoots_Arcade_C_ExecuteUbergraph_BP_JettyBoots_Arcade_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_JettyBoots_Arcade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_JettyBoots_Arcade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_JettyBoots_Arcade.BP_JettyBoots_Arcade_C");
		return ptr;
	}

}


