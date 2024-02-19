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
	 * 		Name   -> PredefinedFunction APRJ_BaseNormalGooProjectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRJ_BaseNormalGooProjectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRJ_BaseNormalGooProjectile.PRJ_BaseNormalGooProjectile_C");
		return ptr;
	}

}


