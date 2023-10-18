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
	 * 		Name   -> PredefinedFunction UAGG_SupplyPod_Ammo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAGG_SupplyPod_Ammo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AGG_SupplyPod_Ammo.AGG_SupplyPod_Ammo_C");
		return ptr;
	}

}


