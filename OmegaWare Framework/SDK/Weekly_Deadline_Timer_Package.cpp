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
	 * 		Name   -> Function Weekly_Deadline_Timer.Weekly_Deadline_Timer_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeekly_Deadline_Timer_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weekly_Deadline_Timer.Weekly_Deadline_Timer_C.PreConstruct");
		
		UWeekly_Deadline_Timer_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Weekly_Deadline_Timer.Weekly_Deadline_Timer_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCampaign*                                   Campaign                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeekly_Deadline_Timer_C::SetData(class UCampaign* Campaign)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weekly_Deadline_Timer.Weekly_Deadline_Timer_C.SetData");
		
		UWeekly_Deadline_Timer_C_SetData_Params params {};
		params.Campaign = Campaign;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Weekly_Deadline_Timer.Weekly_Deadline_Timer_C.Update Time
	 * 		Flags  -> ()
	 */
	void UWeekly_Deadline_Timer_C::UpdateTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weekly_Deadline_Timer.Weekly_Deadline_Timer_C.Update Time");
		
		UWeekly_Deadline_Timer_C_UpdateTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Weekly_Deadline_Timer.Weekly_Deadline_Timer_C.ExecuteUbergraph_Weekly_Deadline_Timer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeekly_Deadline_Timer_C::ExecuteUbergraph_Weekly_Deadline_Timer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weekly_Deadline_Timer.Weekly_Deadline_Timer_C.ExecuteUbergraph_Weekly_Deadline_Timer");
		
		UWeekly_Deadline_Timer_C_ExecuteUbergraph_Weekly_Deadline_Timer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeekly_Deadline_Timer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeekly_Deadline_Timer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Weekly_Deadline_Timer.Weekly_Deadline_Timer_C");
		return ptr;
	}

}


