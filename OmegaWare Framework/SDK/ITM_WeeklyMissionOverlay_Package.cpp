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
	 * 		Name   -> Function ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_WeeklyMissionOverlay_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C.PreConstruct");
		
		UITM_WeeklyMissionOverlay_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCampaign*                                   Campaign                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Headline                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               ShowTimer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AllRequirementsMet                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_WeeklyMissionOverlay_C::SetData(class UCampaign* Campaign, const class FText& Headline, bool ShowTimer, bool AllRequirementsMet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C.SetData");
		
		UITM_WeeklyMissionOverlay_C_SetData_Params params {};
		params.Campaign = Campaign;
		params.Headline = Headline;
		params.ShowTimer = ShowTimer;
		params.AllRequirementsMet = AllRequirementsMet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C.Update Time
	 * 		Flags  -> ()
	 */
	void UITM_WeeklyMissionOverlay_C::UpdateTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C.Update Time");
		
		UITM_WeeklyMissionOverlay_C_UpdateTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C.SetInvalid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCampaign*                                   Campaign                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_WeeklyMissionOverlay_C::SetInvalid(class UCampaign* Campaign)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C.SetInvalid");
		
		UITM_WeeklyMissionOverlay_C_SetInvalid_Params params {};
		params.Campaign = Campaign;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C.ExecuteUbergraph_ITM_WeeklyMissionOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_WeeklyMissionOverlay_C::ExecuteUbergraph_ITM_WeeklyMissionOverlay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C.ExecuteUbergraph_ITM_WeeklyMissionOverlay");
		
		UITM_WeeklyMissionOverlay_C_ExecuteUbergraph_ITM_WeeklyMissionOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_WeeklyMissionOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_WeeklyMissionOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_WeeklyMissionOverlay.ITM_WeeklyMissionOverlay_C");
		return ptr;
	}

}


