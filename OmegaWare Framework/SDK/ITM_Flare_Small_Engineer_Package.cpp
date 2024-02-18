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
	 * 		Name   -> PredefinedFunction AITM_Flare_Small_Engineer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AITM_Flare_Small_Engineer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ITM_Flare_Small_Engineer.ITM_Flare_Small_Engineer_C");
		return ptr;
	}

}


