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
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.AreDeepDiveRequirementsMet
	 * 		Flags  -> ()
	 */
	bool ABP_GameState_SpaceRig_C::AreDeepDiveRequirementsMet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.AreDeepDiveRequirementsMet");
		
		ABP_GameState_SpaceRig_C_AreDeepDiveRequirementsMet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.HandleActiveCountdown
	 * 		Flags  -> ()
	 */
	void ABP_GameState_SpaceRig_C::HandleActiveCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.HandleActiveCountdown");
		
		ABP_GameState_SpaceRig_C_HandleActiveCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_HostCountdown
	 * 		Flags  -> ()
	 */
	void ABP_GameState_SpaceRig_C::OnRep_HostCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_HostCountdown");
		
		ABP_GameState_SpaceRig_C_OnRep_HostCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_HostCountdownActive
	 * 		Flags  -> ()
	 */
	void ABP_GameState_SpaceRig_C::OnRep_HostCountdownActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_HostCountdownActive");
		
		ABP_GameState_SpaceRig_C_OnRep_HostCountdownActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_MissionTimerActive
	 * 		Flags  -> ()
	 */
	void ABP_GameState_SpaceRig_C::OnRep_MissionTimerActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_MissionTimerActive");
		
		ABP_GameState_SpaceRig_C_OnRep_MissionTimerActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_MissionCountdown
	 * 		Flags  -> ()
	 */
	void ABP_GameState_SpaceRig_C::OnRep_MissionCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRep_MissionCountdown");
		
		ABP_GameState_SpaceRig_C_OnRep_MissionCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRefresh_3EF307534AC5AC56C0D60384C554CF10
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBlueprintSessionResult>             Results                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_GameState_SpaceRig_C::OnRefresh_3EF307534AC5AC56C0D60384C554CF10(TArray<struct FBlueprintSessionResult> Results)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnRefresh_3EF307534AC5AC56C0D60384C554CF10");
		
		ABP_GameState_SpaceRig_C_OnRefresh_3EF307534AC5AC56C0D60384C554CF10_Params params {};
		params.Results = Results;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnFailure_3EF307534AC5AC56C0D60384C554CF10
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBlueprintSessionResult>             Results                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_GameState_SpaceRig_C::OnFailure_3EF307534AC5AC56C0D60384C554CF10(TArray<struct FBlueprintSessionResult> Results)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnFailure_3EF307534AC5AC56C0D60384C554CF10");
		
		ABP_GameState_SpaceRig_C_OnFailure_3EF307534AC5AC56C0D60384C554CF10_Params params {};
		params.Results = Results;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnSuccess_3EF307534AC5AC56C0D60384C554CF10
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBlueprintSessionResult>             Results                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_GameState_SpaceRig_C::OnSuccess_3EF307534AC5AC56C0D60384C554CF10(TArray<struct FBlueprintSessionResult> Results)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnSuccess_3EF307534AC5AC56C0D60384C554CF10");
		
		ABP_GameState_SpaceRig_C_OnSuccess_3EF307534AC5AC56C0D60384C554CF10_Params params {};
		params.Results = Results;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_SpaceRig_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ReceiveTick");
		
		ABP_GameState_SpaceRig_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StartMissionTimer
	 * 		Flags  -> ()
	 */
	void ABP_GameState_SpaceRig_C::StartMissionTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StartMissionTimer");
		
		ABP_GameState_SpaceRig_C_StartMissionTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StopMissionTimer
	 * 		Flags  -> ()
	 */
	void ABP_GameState_SpaceRig_C::StopMissionTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StopMissionTimer");
		
		ABP_GameState_SpaceRig_C_StopMissionTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StartHostTimer
	 * 		Flags  -> ()
	 */
	void ABP_GameState_SpaceRig_C::StartHostTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StartHostTimer");
		
		ABP_GameState_SpaceRig_C_StartHostTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StopHostTimer
	 * 		Flags  -> ()
	 */
	void ABP_GameState_SpaceRig_C::StopHostTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.StopHostTimer");
		
		ABP_GameState_SpaceRig_C_StopHostTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.CountDownCompleted
	 * 		Flags  -> ()
	 */
	void ABP_GameState_SpaceRig_C::CountDownCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.CountDownCompleted");
		
		ABP_GameState_SpaceRig_C_CountDownCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_GameState_SpaceRig_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ReceiveBeginPlay");
		
		ABP_GameState_SpaceRig_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.Search
	 * 		Flags  -> ()
	 */
	void ABP_GameState_SpaceRig_C::Search()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.Search");
		
		ABP_GameState_SpaceRig_C_Search_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ReceiveGeneratedMissionReplicated
	 * 		Flags  -> ()
	 */
	void ABP_GameState_SpaceRig_C::ReceiveGeneratedMissionReplicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ReceiveGeneratedMissionReplicated");
		
		ABP_GameState_SpaceRig_C_ReceiveGeneratedMissionReplicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ManualRefreshServerList
	 * 		Flags  -> ()
	 */
	void ABP_GameState_SpaceRig_C::ManualRefreshServerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ManualRefreshServerList");
		
		ABP_GameState_SpaceRig_C_ManualRefreshServerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.Shout_Cooldown_Started
	 * 		Flags  -> ()
	 */
	void ABP_GameState_SpaceRig_C::Shout_Cooldown_Started()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.Shout_Cooldown_Started");
		
		ABP_GameState_SpaceRig_C_Shout_Cooldown_Started_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ExecuteUbergraph_BP_GameState_SpaceRig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_SpaceRig_C::ExecuteUbergraph_BP_GameState_SpaceRig(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.ExecuteUbergraph_BP_GameState_SpaceRig");
		
		ABP_GameState_SpaceRig_C_ExecuteUbergraph_BP_GameState_SpaceRig_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnCountdownChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GameState_SpaceRig_C::OnCountdownChanged__DelegateSignature(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnCountdownChanged__DelegateSignature");
		
		ABP_GameState_SpaceRig_C_OnCountdownChanged__DelegateSignature_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnServerListChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_GameState_SpaceRig_C::OnServerListChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnServerListChanged__DelegateSignature");
		
		ABP_GameState_SpaceRig_C_OnServerListChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMissionTimerChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              newTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_SpaceRig_C::OnMissionTimerChanged__DelegateSignature(float newTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMissionTimerChanged__DelegateSignature");
		
		ABP_GameState_SpaceRig_C_OnMissionTimerChanged__DelegateSignature_Params params {};
		params.newTime = newTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnHostTimerChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              newTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_SpaceRig_C::OnHostTimerChanged__DelegateSignature(float newTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnHostTimerChanged__DelegateSignature");
		
		ABP_GameState_SpaceRig_C_OnHostTimerChanged__DelegateSignature_Params params {};
		params.newTime = newTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnCountdownCompleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_GameState_SpaceRig_C::OnCountdownCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnCountdownCompleted__DelegateSignature");
		
		ABP_GameState_SpaceRig_C_OnCountdownCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnHostCountdownChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GameState_SpaceRig_C::OnHostCountdownChanged__DelegateSignature(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnHostCountdownChanged__DelegateSignature");
		
		ABP_GameState_SpaceRig_C_OnHostCountdownChanged__DelegateSignature_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMissionCountdownChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GameState_SpaceRig_C::OnMissionCountdownChanged__DelegateSignature(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMissionCountdownChanged__DelegateSignature");
		
		ABP_GameState_SpaceRig_C_OnMissionCountdownChanged__DelegateSignature_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMisionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           mission                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_SpaceRig_C::OnMisionSelected__DelegateSignature(class UGeneratedMission* mission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GameState_SpaceRig.BP_GameState_SpaceRig_C.OnMisionSelected__DelegateSignature");
		
		ABP_GameState_SpaceRig_C_OnMisionSelected__DelegateSignature_Params params {};
		params.mission = mission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GameState_SpaceRig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GameState_SpaceRig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameState_SpaceRig.BP_GameState_SpaceRig_C");
		return ptr;
	}

}


