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
	 * 		Name   -> Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.SetInfoToCurrentFaction
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoalProgress_C::SetInfoToCurrentFaction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.SetInfoToCurrentFaction");
		
		UITM_CommunityGoalProgress_C_SetInfoToCurrentFaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.SetGoals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Goals                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<float>                                      Values                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    Members                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              MinersUnionTier                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ForceRefresh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_CommunityGoalProgress_C::SetGoals(TArray<class FString>* Goals, TArray<float>* Values, TArray<int32_t>* Members, float MinersUnionTier, bool ForceRefresh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.SetGoals");
		
		UITM_CommunityGoalProgress_C_SetGoals_Params params {};
		params.MinersUnionTier = MinersUnionTier;
		params.ForceRefresh = ForceRefresh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Goals != nullptr)
			*Goals = params.Goals;
		if (Values != nullptr)
			*Values = params.Values;
		if (Members != nullptr)
			*Members = params.Members;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.TestCommunityGoal
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoalProgress_C::TestCommunityGoal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.TestCommunityGoal");
		
		UITM_CommunityGoalProgress_C_TestCommunityGoal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.SetTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoalProgress_C::SetTime(float Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.SetTime");
		
		UITM_CommunityGoalProgress_C_SetTime_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoalProgress_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.Construct");
		
		UITM_CommunityGoalProgress_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.CHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommunityGoalFaction*                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCommunityGoal*                              Goal                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoalProgress_C::CHover(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.CHover");
		
		UITM_CommunityGoalProgress_C_CHover_Params params {};
		params.Faction = Faction;
		params.Goal = Goal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F1Hover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommunityGoalFaction*                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCommunityGoal*                              Goal                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoalProgress_C::F1Hover(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F1Hover");
		
		UITM_CommunityGoalProgress_C_F1Hover_Params params {};
		params.Faction = Faction;
		params.Goal = Goal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F2Hover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommunityGoalFaction*                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCommunityGoal*                              Goal                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoalProgress_C::F2Hover(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F2Hover");
		
		UITM_CommunityGoalProgress_C_F2Hover_Params params {};
		params.Faction = Faction;
		params.Goal = Goal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.CHEnd
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoalProgress_C::CHEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.CHEnd");
		
		UITM_CommunityGoalProgress_C_CHEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F1End
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoalProgress_C::F1End()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F1End");
		
		UITM_CommunityGoalProgress_C_F1End_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F2End
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoalProgress_C::F2End()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.F2End");
		
		UITM_CommunityGoalProgress_C_F2End_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.TotalHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommunityGoalFaction*                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCommunityGoal*                              Goal                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoalProgress_C::TotalHover(class UCommunityGoalFaction* Faction, class UCommunityGoal* Goal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.TotalHover");
		
		UITM_CommunityGoalProgress_C_TotalHover_Params params {};
		params.Faction = Faction;
		params.Goal = Goal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.TotalEnd
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoalProgress_C::TotalEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.TotalEnd");
		
		UITM_CommunityGoalProgress_C_TotalEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.ExecuteUbergraph_ITM_CommunityGoalProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoalProgress_C::ExecuteUbergraph_ITM_CommunityGoalProgress(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C.ExecuteUbergraph_ITM_CommunityGoalProgress");
		
		UITM_CommunityGoalProgress_C_ExecuteUbergraph_ITM_CommunityGoalProgress_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_CommunityGoalProgress_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_CommunityGoalProgress_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_CommunityGoalProgress.ITM_CommunityGoalProgress_C");
		return ptr;
	}

}


