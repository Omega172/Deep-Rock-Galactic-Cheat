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
	 * 		Name   -> Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.SetResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_CommunityGoalResult_C*                  ResultUI                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FactionID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoalRecruitment_C::SetResult(class UITM_CommunityGoalResult_C* ResultUI, int32_t FactionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.SetResult");
		
		UITM_CommunityGoalRecruitment_C_SetResult_Params params {};
		params.ResultUI = ResultUI;
		params.FactionID = FactionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.BuildRecruitmentUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommunityGoalFaction*                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoalRecruitment_C::BuildRecruitmentUI(class UCommunityGoalFaction* Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.BuildRecruitmentUI");
		
		UITM_CommunityGoalRecruitment_C_BuildRecruitmentUI_Params params {};
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.SetTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoalRecruitment_C::SetTime(float Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.SetTime");
		
		UITM_CommunityGoalRecruitment_C_SetTime_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoalRecruitment_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.Construct");
		
		UITM_CommunityGoalRecruitment_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.ResetFactionCheckState
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoalRecruitment_C::ResetFactionCheckState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.ResetFactionCheckState");
		
		UITM_CommunityGoalRecruitment_C_ResetFactionCheckState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.ExecuteUbergraph_ITM_CommunityGoalRecruitment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoalRecruitment_C::ExecuteUbergraph_ITM_CommunityGoalRecruitment(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.ExecuteUbergraph_ITM_CommunityGoalRecruitment");
		
		UITM_CommunityGoalRecruitment_C_ExecuteUbergraph_ITM_CommunityGoalRecruitment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.CheckState__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoalRecruitment_C::CheckState__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C.CheckState__DelegateSignature");
		
		UITM_CommunityGoalRecruitment_C_CheckState__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_CommunityGoalRecruitment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_CommunityGoalRecruitment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_CommunityGoalRecruitment.ITM_CommunityGoalRecruitment_C");
		return ptr;
	}

}


