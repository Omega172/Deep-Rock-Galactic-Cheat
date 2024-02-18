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
	 * 		Name   -> PredefinedFunction USalvage_FuelCells_Beacon_Hologram_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USalvage_FuelCells_Beacon_Hologram_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Salvage_FuelCells_Beacon_Hologram.Salvage_FuelCells_Beacon_Hologram_C");
		return ptr;
	}

}


