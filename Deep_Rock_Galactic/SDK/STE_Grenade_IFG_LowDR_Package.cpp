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
	 * 		Name   -> PredefinedFunction USTE_Grenade_IFG_LowDR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USTE_Grenade_IFG_LowDR_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass STE_Grenade_IFG_LowDR.STE_Grenade_IFG_LowDR_C");
		return ptr;
	}

}


