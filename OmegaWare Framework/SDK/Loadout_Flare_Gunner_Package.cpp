/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
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
	 * 		Name   -> PredefinedFunction ALoadout_Flare_Gunner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALoadout_Flare_Gunner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Loadout_Flare_Gunner.Loadout_Flare_Gunner_C");
		return ptr;
	}

}


