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
	 * 		Name   -> Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.PlayerCanRestart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_SpaceRig_Gamemode_C::PlayerCanRestart(class APlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.PlayerCanRestart");
		
		ABP_SpaceRig_Gamemode_C_PlayerCanRestart_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.SendMissionStartAnalytics
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Gamemode_C::SendMissionStartAnalytics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.SendMissionStartAnalytics");
		
		ABP_SpaceRig_Gamemode_C_SendMissionStartAnalytics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.SelectRandomAvailableClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Gamemode_C::SelectRandomAvailableClass(class AFSDPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.SelectRandomAvailableClass");
		
		ABP_SpaceRig_Gamemode_C_SelectRandomAvailableClass_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ChoosePlayerStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class AActor* ABP_SpaceRig_Gamemode_C::ChoosePlayerStart(class AController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ChoosePlayerStart");
		
		ABP_SpaceRig_Gamemode_C_ChoosePlayerStart_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.GetGameState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameState_SpaceRig_C*                    GameState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Gamemode_C::GetGameState(class ABP_GameState_SpaceRig_C** GameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.GetGameState");
		
		ABP_SpaceRig_Gamemode_C_GetGameState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameState != nullptr)
			*GameState = params.GameState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.GetDefaultPawnClassForController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 InController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UClass* ABP_SpaceRig_Gamemode_C::GetDefaultPawnClassForController(class AController* InController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.GetDefaultPawnClassForController");
		
		ABP_SpaceRig_Gamemode_C_GetDefaultPawnClassForController_Params params {};
		params.InController = InController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnFailure_1E75EB674DDE2C1E6C7EC18D18AFDB55
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Gamemode_C::OnFailure_1E75EB674DDE2C1E6C7EC18D18AFDB55()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnFailure_1E75EB674DDE2C1E6C7EC18D18AFDB55");
		
		ABP_SpaceRig_Gamemode_C_OnFailure_1E75EB674DDE2C1E6C7EC18D18AFDB55_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnSuccess_1E75EB674DDE2C1E6C7EC18D18AFDB55
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Gamemode_C::OnSuccess_1E75EB674DDE2C1E6C7EC18D18AFDB55()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnSuccess_1E75EB674DDE2C1E6C7EC18D18AFDB55");
		
		ABP_SpaceRig_Gamemode_C_OnSuccess_1E75EB674DDE2C1E6C7EC18D18AFDB55_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnFailure_509E599D4BB91C15BA2979B190501E9F
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Gamemode_C::OnFailure_509E599D4BB91C15BA2979B190501E9F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnFailure_509E599D4BB91C15BA2979B190501E9F");
		
		ABP_SpaceRig_Gamemode_C_OnFailure_509E599D4BB91C15BA2979B190501E9F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnSuccess_509E599D4BB91C15BA2979B190501E9F
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Gamemode_C::OnSuccess_509E599D4BB91C15BA2979B190501E9F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnSuccess_509E599D4BB91C15BA2979B190501E9F");
		
		ABP_SpaceRig_Gamemode_C_OnSuccess_509E599D4BB91C15BA2979B190501E9F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Gamemode_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ReceiveBeginPlay");
		
		ABP_SpaceRig_Gamemode_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnCountdownComplete
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Gamemode_C::OnCountdownComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.OnCountdownComplete");
		
		ABP_SpaceRig_Gamemode_C_OnCountdownComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.K2_OnLogout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 ExitingController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Gamemode_C::K2_OnLogout(class AController* ExitingController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.K2_OnLogout");
		
		ABP_SpaceRig_Gamemode_C_K2_OnLogout_Params params {};
		params.ExitingController = ExitingController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.K2_OnRestartPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Gamemode_C::K2_OnRestartPlayer(class AController* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.K2_OnRestartPlayer");
		
		ABP_SpaceRig_Gamemode_C_K2_OnRestartPlayer_Params params {};
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ControllerReady
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerController*                        Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Gamemode_C::ControllerReady(class AFSDPlayerController* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ControllerReady");
		
		ABP_SpaceRig_Gamemode_C_ControllerReady_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.InstantlyStartMission
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Gamemode_C::InstantlyStartMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.InstantlyStartMission");
		
		ABP_SpaceRig_Gamemode_C_InstantlyStartMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.On online privilige checked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                CheckedPlayerState                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBlueprintableUserPrivileges                       CheckedPrivilege                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBlueprintablePrivilegeResults                     PrivilegeResult                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Gamemode_C::Ononlinepriviligechecked(class APlayerState* CheckedPlayerState, EBlueprintableUserPrivileges CheckedPrivilege, EBlueprintablePrivilegeResults PrivilegeResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.On online privilige checked");
		
		ABP_SpaceRig_Gamemode_C_Ononlinepriviligechecked_Params params {};
		params.CheckedPlayerState = CheckedPlayerState;
		params.CheckedPrivilege = CheckedPrivilege;
		params.PrivilegeResult = PrivilegeResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ExecuteUbergraph_BP_SpaceRig_Gamemode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Gamemode_C::ExecuteUbergraph_BP_SpaceRig_Gamemode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C.ExecuteUbergraph_BP_SpaceRig_Gamemode");
		
		ABP_SpaceRig_Gamemode_C_ExecuteUbergraph_BP_SpaceRig_Gamemode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SpaceRig_Gamemode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SpaceRig_Gamemode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpaceRig_GamemOde.BP_SpaceRig_Gamemode_C");
		return ptr;
	}

}


