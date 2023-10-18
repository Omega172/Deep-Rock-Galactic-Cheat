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
	 * 		Name   -> PredefinedFunction USupplyPod_Beacon_Hologram_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USupplyPod_Beacon_Hologram_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SupplyPod_Beacon_Hologram.SupplyPod_Beacon_Hologram_C");
		return ptr;
	}

}


