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
	 * 		Name   -> PredefinedFunction AWPN_Pickaxe_Engineer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_Pickaxe_Engineer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_Pickaxe_Engineer.WPN_Pickaxe_Engineer_C");
		return ptr;
	}

}


