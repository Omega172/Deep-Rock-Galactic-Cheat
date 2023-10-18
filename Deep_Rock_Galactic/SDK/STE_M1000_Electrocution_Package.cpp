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
	 * 		Name   -> PredefinedFunction USTE_M1000_Electrocution_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USTE_M1000_Electrocution_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass STE_M1000_Electrocution.STE_M1000_Electrocution_C");
		return ptr;
	}

}


