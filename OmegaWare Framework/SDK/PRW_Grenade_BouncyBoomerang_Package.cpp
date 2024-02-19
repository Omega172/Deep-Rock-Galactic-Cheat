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
	 * 		Name   -> PredefinedFunction APRW_Grenade_BouncyBoomerang_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRW_Grenade_BouncyBoomerang_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRW_Grenade_BouncyBoomerang.PRW_Grenade_BouncyBoomerang_C");
		return ptr;
	}

}


