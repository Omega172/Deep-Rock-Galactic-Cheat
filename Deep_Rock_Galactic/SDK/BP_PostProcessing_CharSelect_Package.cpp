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
	 * 		Name   -> Function BP_PostProcessing_CharSelect.BP_PostProcessing_CharSelect_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_PostProcessing_CharSelect_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PostProcessing_CharSelect.BP_PostProcessing_CharSelect_C.UserConstructionScript");
		
		ABP_PostProcessing_CharSelect_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PostProcessing_CharSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PostProcessing_CharSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PostProcessing_CharSelect.BP_PostProcessing_CharSelect_C");
		return ptr;
	}

}


