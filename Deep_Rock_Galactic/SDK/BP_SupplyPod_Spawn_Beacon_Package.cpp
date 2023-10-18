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
	 * 		Name   -> PredefinedFunction ABP_SupplyPod_Spawn_Beacon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SupplyPod_Spawn_Beacon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SupplyPod_Spawn_Beacon.BP_SupplyPod_Spawn_Beacon_C");
		return ptr;
	}

}


