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
	 * 		Name   -> Function ITM_MisSel_MissionIconBasic_Locked.ITM_MisSel_MissionIconBasic_Locked_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MisSel_MissionIconBasic_Locked_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconBasic_Locked.ITM_MisSel_MissionIconBasic_Locked_C.PreConstruct");
		
		UITM_MisSel_MissionIconBasic_Locked_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MisSel_MissionIconBasic_Locked.ITM_MisSel_MissionIconBasic_Locked_C.ExecuteUbergraph_ITM_MisSel_MissionIconBasic_Locked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MisSel_MissionIconBasic_Locked_C::ExecuteUbergraph_ITM_MisSel_MissionIconBasic_Locked(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconBasic_Locked.ITM_MisSel_MissionIconBasic_Locked_C.ExecuteUbergraph_ITM_MisSel_MissionIconBasic_Locked");
		
		UITM_MisSel_MissionIconBasic_Locked_C_ExecuteUbergraph_ITM_MisSel_MissionIconBasic_Locked_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_MisSel_MissionIconBasic_Locked_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_MisSel_MissionIconBasic_Locked_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_MisSel_MissionIconBasic_Locked.ITM_MisSel_MissionIconBasic_Locked_C");
		return ptr;
	}

}


