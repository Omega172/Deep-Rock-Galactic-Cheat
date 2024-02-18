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
	 * 		Name   -> Function ITM_MissionBar_Objective.ITM_MissionBar_Objective_C.SetObjective
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           mission                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ObjectiveType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MissionBar_Objective_C::SetObjective(class UGeneratedMission* mission, class UClass* ObjectiveType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MissionBar_Objective.ITM_MissionBar_Objective_C.SetObjective");
		
		UITM_MissionBar_Objective_C_SetObjective_Params params {};
		params.mission = mission;
		params.ObjectiveType = ObjectiveType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MissionBar_Objective.ITM_MissionBar_Objective_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MissionBar_Objective_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MissionBar_Objective.ITM_MissionBar_Objective_C.PreConstruct");
		
		UITM_MissionBar_Objective_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MissionBar_Objective.ITM_MissionBar_Objective_C.ExecuteUbergraph_ITM_MissionBar_Objective
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MissionBar_Objective_C::ExecuteUbergraph_ITM_MissionBar_Objective(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MissionBar_Objective.ITM_MissionBar_Objective_C.ExecuteUbergraph_ITM_MissionBar_Objective");
		
		UITM_MissionBar_Objective_C_ExecuteUbergraph_ITM_MissionBar_Objective_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_MissionBar_Objective_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_MissionBar_Objective_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_MissionBar_Objective.ITM_MissionBar_Objective_C");
		return ptr;
	}

}


