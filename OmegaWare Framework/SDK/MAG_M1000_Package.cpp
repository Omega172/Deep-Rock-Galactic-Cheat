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
	 * 		Name   -> Function MAG_M1000.MAG_M1000_C.OnSpawnRelease_Released
	 * 		Flags  -> ()
	 */
	bool AMAG_M1000_C::OnSpawnRelease_Released()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MAG_M1000.MAG_M1000_C.OnSpawnRelease_Released");
		
		AMAG_M1000_C_OnSpawnRelease_Released_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMAG_M1000_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMAG_M1000_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MAG_M1000.MAG_M1000_C");
		return ptr;
	}

}


