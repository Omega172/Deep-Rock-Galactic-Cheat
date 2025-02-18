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
	 * 		Name   -> Function EWC_Salvage_Ambush.EWC_Salvage_Ambush_C.StartWave
	 * 		Flags  -> ()
	 */
	void UEWC_Salvage_Ambush_C::StartWave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EWC_Salvage_Ambush.EWC_Salvage_Ambush_C.StartWave");
		
		UEWC_Salvage_Ambush_C_StartWave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EWC_Salvage_Ambush.EWC_Salvage_Ambush_C.ExecuteUbergraph_EWC_Salvage_Ambush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEWC_Salvage_Ambush_C::ExecuteUbergraph_EWC_Salvage_Ambush(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EWC_Salvage_Ambush.EWC_Salvage_Ambush_C.ExecuteUbergraph_EWC_Salvage_Ambush");
		
		UEWC_Salvage_Ambush_C_ExecuteUbergraph_EWC_Salvage_Ambush_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEWC_Salvage_Ambush_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEWC_Salvage_Ambush_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EWC_Salvage_Ambush.EWC_Salvage_Ambush_C");
		return ptr;
	}

}


