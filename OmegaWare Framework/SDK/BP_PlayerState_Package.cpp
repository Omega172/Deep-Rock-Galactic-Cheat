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
	 * 		Name   -> Function BP_PlayerState.BP_PlayerState_C.GetDeepDiveCreditsReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StagesCompleted                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            goldCollected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	TArray<struct FCreditsReward> ABP_PlayerState_C::GetDeepDiveCreditsReward(int32_t StagesCompleted, int32_t goldCollected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.GetDeepDiveCreditsReward");
		
		ABP_PlayerState_C_GetDeepDiveCreditsReward_Params params {};
		params.StagesCompleted = StagesCompleted;
		params.goldCollected = goldCollected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState.BP_PlayerState_C.GetRessupyBeaconClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      PodSpawnClass                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_C::GetRessupyBeaconClass(class UClass** PodSpawnClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.GetRessupyBeaconClass");
		
		ABP_PlayerState_C_GetRessupyBeaconClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PodSpawnClass != nullptr)
			*PodSpawnClass = params.PodSpawnClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState.BP_PlayerState_C.GetRessuplySpawnClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      PodSpawnClass                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_C::GetRessuplySpawnClass(class UClass** PodSpawnClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.GetRessuplySpawnClass");
		
		ABP_PlayerState_C_GetRessuplySpawnClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PodSpawnClass != nullptr)
			*PodSpawnClass = params.PodSpawnClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState.BP_PlayerState_C.SpawnPlayerInPod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerController*                        Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_C::SpawnPlayerInPod(class AFSDPlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.SpawnPlayerInPod");
		
		ABP_PlayerState_C_SpawnPlayerInPod_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState.BP_PlayerState_C.SpawnPlayerDirectly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_C::SpawnPlayerDirectly(class AController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.SpawnPlayerDirectly");
		
		ABP_PlayerState_C_SpawnPlayerDirectly_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState.BP_PlayerState_C.OnLoaded_E2B28351414D5B2A20966496F0955946
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_C::OnLoaded_E2B28351414D5B2A20966496F0955946(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.OnLoaded_E2B28351414D5B2A20966496F0955946");
		
		ABP_PlayerState_C_OnLoaded_E2B28351414D5B2A20966496F0955946_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState.BP_PlayerState_C.OnLoaded_97A4F0694E71C770F24EA6A654B14857
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_C::OnLoaded_97A4F0694E71C770F24EA6A654B14857(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.OnLoaded_97A4F0694E71C770F24EA6A654B14857");
		
		ABP_PlayerState_C_OnLoaded_97A4F0694E71C770F24EA6A654B14857_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState.BP_PlayerState_C.OnLateJoinFinished
	 * 		Flags  -> ()
	 */
	void ABP_PlayerState_C::OnLateJoinFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.OnLateJoinFinished");
		
		ABP_PlayerState_C_OnLateJoinFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState.BP_PlayerState_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PlayerState_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.ReceiveBeginPlay");
		
		ABP_PlayerState_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState.BP_PlayerState_C.LogState
	 * 		Flags  -> ()
	 */
	void ABP_PlayerState_C::LogState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.LogState");
		
		ABP_PlayerState_C_LogState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState.BP_PlayerState_C.CharacterSelected
	 * 		Flags  -> ()
	 */
	void ABP_PlayerState_C::CharacterSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.CharacterSelected");
		
		ABP_PlayerState_C_CharacterSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState.BP_PlayerState_C.TestLatjoin
	 * 		Flags  -> ()
	 */
	void ABP_PlayerState_C::TestLatjoin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.TestLatjoin");
		
		ABP_PlayerState_C_TestLatjoin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState.BP_PlayerState_C.RespawnPlayer
	 * 		Flags  -> ()
	 */
	void ABP_PlayerState_C::RespawnPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.RespawnPlayer");
		
		ABP_PlayerState_C_RespawnPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState.BP_PlayerState_C.ExecuteUbergraph_BP_PlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_C::ExecuteUbergraph_BP_PlayerState(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState.BP_PlayerState_C.ExecuteUbergraph_BP_PlayerState");
		
		ABP_PlayerState_C_ExecuteUbergraph_BP_PlayerState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PlayerState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PlayerState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerState.BP_PlayerState_C");
		return ptr;
	}

}


