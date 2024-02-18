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
	 * 		Name   -> Function Console_MissionStatistics.Console_MissionStatistics_C.HasClaimablePerkPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Claimable                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConsole_MissionStatistics_C::HasClaimablePerkPoints(bool* Claimable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.HasClaimablePerkPoints");
		
		UConsole_MissionStatistics_C_HasClaimablePerkPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Claimable != nullptr)
			*Claimable = params.Claimable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_MissionStatistics.Console_MissionStatistics_C.Construct
	 * 		Flags  -> ()
	 */
	void UConsole_MissionStatistics_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.Construct");
		
		UConsole_MissionStatistics_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_MissionStatistics.Console_MissionStatistics_C.StartClaimable
	 * 		Flags  -> ()
	 */
	void UConsole_MissionStatistics_C::StartClaimable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.StartClaimable");
		
		UConsole_MissionStatistics_C_StartClaimable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_MissionStatistics.Console_MissionStatistics_C.StopClaimable
	 * 		Flags  -> ()
	 */
	void UConsole_MissionStatistics_C::StopClaimable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.StopClaimable");
		
		UConsole_MissionStatistics_C_StopClaimable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_MissionStatistics.Console_MissionStatistics_C.Update
	 * 		Flags  -> ()
	 */
	void UConsole_MissionStatistics_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.Update");
		
		UConsole_MissionStatistics_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_MissionStatistics.Console_MissionStatistics_C.OnCountChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMissionStat*                                MissionStat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsole_MissionStatistics_C::OnCountChanged_Event(class UObject* WorldContext, class UMissionStat* MissionStat, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.OnCountChanged_Event");
		
		UConsole_MissionStatistics_C_OnCountChanged_Event_Params params {};
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
	 * 		Name   -> Function Console_MissionStatistics.Console_MissionStatistics_C.OnMilestoneClaimed_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMilestoneAsset*                             Milestone                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ClaimedTier                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsole_MissionStatistics_C::OnMilestoneClaimed_Event(class UMilestoneAsset* Milestone, int32_t ClaimedTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.OnMilestoneClaimed_Event");
		
		UConsole_MissionStatistics_C_OnMilestoneClaimed_Event_Params params {};
		params.Milestone = Milestone;
		params.ClaimedTier = ClaimedTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Console_MissionStatistics.Console_MissionStatistics_C.ExecuteUbergraph_Console_MissionStatistics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsole_MissionStatistics_C::ExecuteUbergraph_Console_MissionStatistics(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Console_MissionStatistics.Console_MissionStatistics_C.ExecuteUbergraph_Console_MissionStatistics");
		
		UConsole_MissionStatistics_C_ExecuteUbergraph_Console_MissionStatistics_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConsole_MissionStatistics_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsole_MissionStatistics_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Console_MissionStatistics.Console_MissionStatistics_C");
		return ptr;
	}

}


