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
	 * 		Name   -> Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.GetMissionStatValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionStat*                                MissionStat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        StatValue                                                  (Parm, OutParm)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerState_SpaceRig_C::GetMissionStatValue(class UMissionStat* MissionStat, class FText* StatValue, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.GetMissionStatValue");
		
		ABP_PlayerState_SpaceRig_C_GetMissionStatValue_Params params {};
		params.MissionStat = MissionStat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatValue != nullptr)
			*StatValue = params.StatValue;
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.SendMissionStatData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionStat*                                MissionStat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_SpaceRig_C::SendMissionStatData(class UMissionStat* MissionStat, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.SendMissionStatData");
		
		ABP_PlayerState_SpaceRig_C_SendMissionStatData_Params params {};
		params.MissionStat = MissionStat;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.UpdateMissionStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionStat*                                MissionStat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_SpaceRig_C::UpdateMissionStat(class UMissionStat* MissionStat, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.UpdateMissionStat");
		
		ABP_PlayerState_SpaceRig_C_UpdateMissionStat_Params params {};
		params.MissionStat = MissionStat;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.IsListeningToMissionStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionStat*                                MissionStat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasStat                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerState_SpaceRig_C::IsListeningToMissionStat(class UMissionStat* MissionStat, bool* HasStat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.IsListeningToMissionStat");
		
		ABP_PlayerState_SpaceRig_C_IsListeningToMissionStat_Params params {};
		params.MissionStat = MissionStat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasStat != nullptr)
			*HasStat = params.HasStat;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnRep_MissionStats
	 * 		Flags  -> ()
	 */
	void ABP_PlayerState_SpaceRig_C::OnRep_MissionStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnRep_MissionStats");
		
		ABP_PlayerState_SpaceRig_C_OnRep_MissionStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.GetHealthInsuranceStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            HealthInsuranceStatus                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_SpaceRig_C::GetHealthInsuranceStatus(int32_t* HealthInsuranceStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.GetHealthInsuranceStatus");
		
		ABP_PlayerState_SpaceRig_C_GetHealthInsuranceStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HealthInsuranceStatus != nullptr)
			*HealthInsuranceStatus = params.HealthInsuranceStatus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_PlayerState_SpaceRig_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.UserConstructionScript");
		
		ABP_PlayerState_SpaceRig_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.WatchStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionStat*                                MissionStat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_SpaceRig_C::WatchStat(class UMissionStat* MissionStat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.WatchStat");
		
		ABP_PlayerState_SpaceRig_C_WatchStat_Params params {};
		params.MissionStat = MissionStat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PlayerState_SpaceRig_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.ReceiveBeginPlay");
		
		ABP_PlayerState_SpaceRig_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.CheckCampaign
	 * 		Flags  -> ()
	 */
	void ABP_PlayerState_SpaceRig_C::CheckCampaign()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.CheckCampaign");
		
		ABP_PlayerState_SpaceRig_C_CheckCampaign_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnMissionStatChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMissionStat*                                MissionStat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_SpaceRig_C::OnMissionStatChanged(class UObject* WorldContext, class UMissionStat* MissionStat, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnMissionStatChanged");
		
		ABP_PlayerState_SpaceRig_C_OnMissionStatChanged_Params params {};
		params.WorldContext = WorldContext;
		params.MissionStat = MissionStat;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.Server_UpdateStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionStat*                                MissionStat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              StatValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_SpaceRig_C::Server_UpdateStat(class UMissionStat* MissionStat, float StatValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.Server_UpdateStat");
		
		ABP_PlayerState_SpaceRig_C_Server_UpdateStat_Params params {};
		params.MissionStat = MissionStat;
		params.StatValue = StatValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.ExecuteUbergraph_BP_PlayerState_SpaceRig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_SpaceRig_C::ExecuteUbergraph_BP_PlayerState_SpaceRig(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.ExecuteUbergraph_BP_PlayerState_SpaceRig");
		
		ABP_PlayerState_SpaceRig_C_ExecuteUbergraph_BP_PlayerState_SpaceRig_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnStatChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionStat*                                MissionStat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        StatValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_PlayerState_SpaceRig_C::OnStatChange__DelegateSignature(class UMissionStat* MissionStat, const class FText& StatValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C.OnStatChange__DelegateSignature");
		
		ABP_PlayerState_SpaceRig_C_OnStatChange__DelegateSignature_Params params {};
		params.MissionStat = MissionStat;
		params.StatValue = StatValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PlayerState_SpaceRig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PlayerState_SpaceRig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C");
		return ptr;
	}

}


