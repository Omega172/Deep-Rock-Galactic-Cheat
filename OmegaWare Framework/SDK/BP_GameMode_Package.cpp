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
	 * 		Name   -> Function BP_GameMode.BP_GameMode_C.GetEditorCharacterClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          CharacterClass                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameMode_C::GetEditorCharacterClass(class UPlayerCharacterID** CharacterClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.GetEditorCharacterClass");
		
		ABP_GameMode_C_GetEditorCharacterClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CharacterClass != nullptr)
			*CharacterClass = params.CharacterClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameMode.BP_GameMode_C.PreloadMuleClass
	 * 		Flags  -> ()
	 */
	void ABP_GameMode_C::PreloadMuleClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.PreloadMuleClass");
		
		ABP_GameMode_C_PreloadMuleClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameMode.BP_GameMode_C.TryPreloadCheatMenu
	 * 		Flags  -> ()
	 */
	void ABP_GameMode_C::TryPreloadCheatMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.TryPreloadCheatMenu");
		
		ABP_GameMode_C_TryPreloadCheatMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameMode.BP_GameMode_C.GetEscapepodLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  Location                                                   (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_GameMode_C::GetEscapepodLocation(struct FTransform* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.GetEscapepodLocation");
		
		ABP_GameMode_C_GetEscapepodLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameMode.BP_GameMode_C.EnableMuleButton
	 * 		Flags  -> ()
	 */
	void ABP_GameMode_C::EnableMuleButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.EnableMuleButton");
		
		ABP_GameMode_C_EnableMuleButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameMode.BP_GameMode_C.DestroyNetworkedActors
	 * 		Flags  -> ()
	 */
	void ABP_GameMode_C::DestroyNetworkedActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.DestroyNetworkedActors");
		
		ABP_GameMode_C_DestroyNetworkedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameMode.BP_GameMode_C.LoadToMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionTemplate*                            mission                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameMode_C::LoadToMission(class UMissionTemplate* mission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.LoadToMission");
		
		ABP_GameMode_C_LoadToMission_Params params {};
		params.mission = mission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameMode.BP_GameMode_C.GetDefaultPawnClassForController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 InController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UClass* ABP_GameMode_C::GetDefaultPawnClassForController(class AController* InController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.GetDefaultPawnClassForController");
		
		ABP_GameMode_C_GetDefaultPawnClassForController_Params params {};
		params.InController = InController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameMode.BP_GameMode_C.ChoosePlayerStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class AActor* ABP_GameMode_C::ChoosePlayerStart(class AController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.ChoosePlayerStart");
		
		ABP_GameMode_C_ChoosePlayerStart_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameMode.BP_GameMode_C.RecieveEndLevel
	 * 		Flags  -> ()
	 */
	void ABP_GameMode_C::RecieveEndLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.RecieveEndLevel");
		
		ABP_GameMode_C_RecieveEndLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameMode.BP_GameMode_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_GameMode_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.ReceiveBeginPlay");
		
		ABP_GameMode_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameMode.BP_GameMode_C.WaitForGeneration
	 * 		Flags  -> ()
	 */
	void ABP_GameMode_C::WaitForGeneration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.WaitForGeneration");
		
		ABP_GameMode_C_WaitForGeneration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameMode.BP_GameMode_C.Recieve_ContinueTimerEnded
	 * 		Flags  -> ()
	 */
	void ABP_GameMode_C::Recieve_ContinueTimerEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.Recieve_ContinueTimerEnded");
		
		ABP_GameMode_C_Recieve_ContinueTimerEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameMode.BP_GameMode_C.Call DropPod
	 * 		Flags  -> ()
	 */
	void ABP_GameMode_C::CallDropPod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.Call DropPod");
		
		ABP_GameMode_C_CallDropPod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameMode.BP_GameMode_C.Trigger End Wave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               cancelAllWaves                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GameMode_C::TriggerEndWave(bool cancelAllWaves)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.Trigger End Wave");
		
		ABP_GameMode_C_TriggerEndWave_Params params {};
		params.cancelAllWaves = cancelAllWaves;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameMode.BP_GameMode_C.SpawnBosco
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 */
	void ABP_GameMode_C::SpawnBosco(const struct FTransform& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.SpawnBosco");
		
		ABP_GameMode_C_SpawnBosco_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameMode.BP_GameMode_C.RemoveBosco
	 * 		Flags  -> ()
	 */
	void ABP_GameMode_C::RemoveBosco()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.RemoveBosco");
		
		ABP_GameMode_C_RemoveBosco_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameMode.BP_GameMode_C.Handle Bosco Respawn
	 * 		Flags  -> ()
	 */
	void ABP_GameMode_C::HandleBoscoRespawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.Handle Bosco Respawn");
		
		ABP_GameMode_C_HandleBoscoRespawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameMode.BP_GameMode_C.OnPlayerLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameMode_C::OnPlayerLeave(class AFSDPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.OnPlayerLeave");
		
		ABP_GameMode_C_OnPlayerLeave_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameMode.BP_GameMode_C.Loaded
	 * 		Flags  -> ()
	 */
	void ABP_GameMode_C::Loaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.Loaded");
		
		ABP_GameMode_C_Loaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameMode.BP_GameMode_C.DonkeyButtonPressed
	 * 		Flags  -> ()
	 */
	void ABP_GameMode_C::DonkeyButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.DonkeyButtonPressed");
		
		ABP_GameMode_C_DonkeyButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameMode.BP_GameMode_C.LoadSpaceRig
	 * 		Flags  -> ()
	 */
	void ABP_GameMode_C::LoadSpaceRig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.LoadSpaceRig");
		
		ABP_GameMode_C_LoadSpaceRig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameMode.BP_GameMode_C.ExecuteUbergraph_BP_GameMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameMode_C::ExecuteUbergraph_BP_GameMode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameMode.BP_GameMode_C.ExecuteUbergraph_BP_GameMode");
		
		ABP_GameMode_C_ExecuteUbergraph_BP_GameMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GameMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GameMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameMode.BP_GameMode_C");
		return ptr;
	}

}


