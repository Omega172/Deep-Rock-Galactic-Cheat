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
	 * 		Name   -> PredefinedFunction UAFL_Gen_Burn_Small_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAFL_Gen_Burn_Small_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AFL_Gen_Burn_Small.AFL_Gen_Burn_Small_C");
		return ptr;
	}

}


