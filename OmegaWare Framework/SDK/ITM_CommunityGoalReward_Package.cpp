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
	 * 		Name   -> Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.TotalTiers
	 * 		Flags  -> ()
	 */
	int32_t UITM_CommunityGoalReward_C::TotalTiers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.TotalTiers");
		
		UITM_CommunityGoalReward_C_TotalTiers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.SetGoalResultTier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Tier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCommunityGoal*                              Goal                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoalReward_C::SetGoalResultTier(int32_t Tier, class UCommunityGoal* Goal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.SetGoalResultTier");
		
		UITM_CommunityGoalReward_C_SetGoalResultTier_Params params {};
		params.Tier = Tier;
		params.Goal = Goal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.BuildResources
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Tier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoalReward_C::BuildResources(int32_t Tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.BuildResources");
		
		UITM_CommunityGoalReward_C_BuildResources_Params params {};
		params.Tier = Tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.SetGoalResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Members                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCommunityGoal*                              Goal                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoalReward_C::SetGoalResult(float Score, int32_t Members, class UCommunityGoal* Goal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.SetGoalResult");
		
		UITM_CommunityGoalReward_C_SetGoalResult_Params params {};
		params.Score = Score;
		params.Members = Members;
		params.Goal = Goal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.UpdateTitle
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoalReward_C::UpdateTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.UpdateTitle");
		
		UITM_CommunityGoalReward_C_UpdateTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.UpdateIcon
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoalReward_C::UpdateIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.UpdateIcon");
		
		UITM_CommunityGoalReward_C_UpdateIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.SetFaction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommunityGoalFaction*                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoalReward_C::SetFaction(class UCommunityGoalFaction* Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.SetFaction");
		
		UITM_CommunityGoalReward_C_SetFaction_Params params {};
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_CommunityGoalReward_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.PreConstruct");
		
		UITM_CommunityGoalReward_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.ExecuteUbergraph_ITM_CommunityGoalReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoalReward_C::ExecuteUbergraph_ITM_CommunityGoalReward(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalReward.ITM_CommunityGoalReward_C.ExecuteUbergraph_ITM_CommunityGoalReward");
		
		UITM_CommunityGoalReward_C_ExecuteUbergraph_ITM_CommunityGoalReward_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_CommunityGoalReward_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_CommunityGoalReward_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_CommunityGoalReward.ITM_CommunityGoalReward_C");
		return ptr;
	}

}


