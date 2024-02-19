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
	 * 		Name   -> PredefinedFunction ALoadout_GrenadeProxy_Proximity_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALoadout_GrenadeProxy_Proximity_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Loadout_GrenadeProxy_Proximity.Loadout_GrenadeProxy_Proximity_C");
		return ptr;
	}

}


