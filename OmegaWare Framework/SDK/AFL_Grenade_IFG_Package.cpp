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
	 * 		Name   -> PredefinedFunction UAFL_Grenade_IFG_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAFL_Grenade_IFG_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AFL_Grenade_IFG.AFL_Grenade_IFG_C");
		return ptr;
	}

}


