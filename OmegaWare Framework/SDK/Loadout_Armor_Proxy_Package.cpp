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
	 * 		Name   -> PredefinedFunction ALoadout_Armor_Proxy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALoadout_Armor_Proxy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Loadout_Armor_Proxy.Loadout_Armor_Proxy_C");
		return ptr;
	}

}


