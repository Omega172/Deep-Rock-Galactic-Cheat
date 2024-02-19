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
	 * 		Name   -> Function BP_EletrocutedSentry.BP_EletrocutedSentry_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_EletrocutedSentry_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EletrocutedSentry.BP_EletrocutedSentry_C.UserConstructionScript");
		
		ABP_EletrocutedSentry_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_EletrocutedSentry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_EletrocutedSentry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EletrocutedSentry.BP_EletrocutedSentry_C");
		return ptr;
	}

}


