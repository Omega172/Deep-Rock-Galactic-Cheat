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
	 * 		Name   -> Function BP_Turret_Arc_Indicator.BP_Turret_Arc_Indicator_C.SetArcIndicatorActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Turret_Arc_Indicator_C::SetArcIndicatorActive(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Turret_Arc_Indicator.BP_Turret_Arc_Indicator_C.SetArcIndicatorActive");
		
		ABP_Turret_Arc_Indicator_C_SetArcIndicatorActive_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Turret_Arc_Indicator.BP_Turret_Arc_Indicator_C.ExecuteUbergraph_BP_Turret_Arc_Indicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Turret_Arc_Indicator_C::ExecuteUbergraph_BP_Turret_Arc_Indicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Turret_Arc_Indicator.BP_Turret_Arc_Indicator_C.ExecuteUbergraph_BP_Turret_Arc_Indicator");
		
		ABP_Turret_Arc_Indicator_C_ExecuteUbergraph_BP_Turret_Arc_Indicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Turret_Arc_Indicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Turret_Arc_Indicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Turret_Arc_Indicator.BP_Turret_Arc_Indicator_C");
		return ptr;
	}

}


