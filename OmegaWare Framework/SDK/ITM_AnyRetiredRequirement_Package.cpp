﻿/**
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
	 * 		Name   -> Function ITM_AnyRetiredRequirement.ITM_AnyRetiredRequirement_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_AnyRetiredRequirement_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_AnyRetiredRequirement.ITM_AnyRetiredRequirement_C.Construct");
		
		UITM_AnyRetiredRequirement_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_AnyRetiredRequirement.ITM_AnyRetiredRequirement_C.ExecuteUbergraph_ITM_AnyRetiredRequirement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_AnyRetiredRequirement_C::ExecuteUbergraph_ITM_AnyRetiredRequirement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_AnyRetiredRequirement.ITM_AnyRetiredRequirement_C.ExecuteUbergraph_ITM_AnyRetiredRequirement");
		
		UITM_AnyRetiredRequirement_C_ExecuteUbergraph_ITM_AnyRetiredRequirement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_AnyRetiredRequirement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_AnyRetiredRequirement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_AnyRetiredRequirement.ITM_AnyRetiredRequirement_C");
		return ptr;
	}

}


