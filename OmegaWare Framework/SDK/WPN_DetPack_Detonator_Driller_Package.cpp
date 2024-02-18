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
	 * 		Name   -> PredefinedFunction AWPN_DetPack_Detonator_Driller_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_DetPack_Detonator_Driller_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_DetPack_Detonator_Driller.WPN_DetPack_Detonator_Driller_C");
		return ptr;
	}

}


