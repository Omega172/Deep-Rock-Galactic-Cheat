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
	 * 		Name   -> PredefinedFunction UCP_Mission_Unlock_Facility_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCP_Mission_Unlock_Facility_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CP_Mission_Unlock_Facility.CP_Mission_Unlock_Facility_C");
		return ptr;
	}

}


