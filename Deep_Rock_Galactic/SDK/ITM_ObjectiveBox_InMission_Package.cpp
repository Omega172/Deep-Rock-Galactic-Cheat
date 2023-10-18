/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
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
	 * 		Name   -> Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.UpdateText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        InCounterText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTexture2D*                                  InCounterIcon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Completed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_ObjectiveBox_InMission_C::UpdateText(const class FText& InText, const class FText& InCounterText, class UTexture2D* InCounterIcon, bool Completed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.UpdateText");
		
		UITM_ObjectiveBox_InMission_C_UpdateText_Params params {};
		params.InText = InText;
		params.InCounterText = InCounterText;
		params.InCounterIcon = InCounterIcon;
		params.Completed = Completed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.Set Objective
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObjective*                                  Objective                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsPrimary                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_ObjectiveBox_InMission_C::SetObjective(class UObjective* Objective, bool IsPrimary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.Set Objective");
		
		UITM_ObjectiveBox_InMission_C_SetObjective_Params params {};
		params.Objective = Objective;
		params.IsPrimary = IsPrimary;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.OnObjectiveUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObjective*                                  Objective                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_ObjectiveBox_InMission_C::OnObjectiveUpdated(class UObjective* Objective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.OnObjectiveUpdated");
		
		UITM_ObjectiveBox_InMission_C_OnObjectiveUpdated_Params params {};
		params.Objective = Objective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.SetCustom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Completed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_ObjectiveBox_InMission_C::SetCustom(const class FText& Text, bool Completed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.SetCustom");
		
		UITM_ObjectiveBox_InMission_C_SetCustom_Params params {};
		params.Text = Text;
		params.Completed = Completed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.ExecuteUbergraph_ITM_ObjectiveBox_InMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_ObjectiveBox_InMission_C::ExecuteUbergraph_ITM_ObjectiveBox_InMission(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.ExecuteUbergraph_ITM_ObjectiveBox_InMission");
		
		UITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_ObjectiveBox_InMission_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_ObjectiveBox_InMission_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C");
		return ptr;
	}

}


