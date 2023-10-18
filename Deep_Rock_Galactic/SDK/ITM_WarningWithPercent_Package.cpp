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
	 * 		Name   -> Function ITM_WarningWithPercent.ITM_WarningWithPercent_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_WarningWithPercent_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_WarningWithPercent.ITM_WarningWithPercent_C.Construct");
		
		UITM_WarningWithPercent_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_WarningWithPercent.ITM_WarningWithPercent_C.ExecuteUbergraph_ITM_WarningWithPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_WarningWithPercent_C::ExecuteUbergraph_ITM_WarningWithPercent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_WarningWithPercent.ITM_WarningWithPercent_C.ExecuteUbergraph_ITM_WarningWithPercent");
		
		UITM_WarningWithPercent_C_ExecuteUbergraph_ITM_WarningWithPercent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_WarningWithPercent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_WarningWithPercent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_WarningWithPercent.ITM_WarningWithPercent_C");
		return ptr;
	}

}


