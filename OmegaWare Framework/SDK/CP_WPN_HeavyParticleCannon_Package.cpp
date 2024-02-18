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
	 * 		Name   -> PredefinedFunction UCP_WPN_HeavyParticleCannon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCP_WPN_HeavyParticleCannon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CP_WPN_HeavyParticleCannon.CP_WPN_HeavyParticleCannon_C");
		return ptr;
	}

}


