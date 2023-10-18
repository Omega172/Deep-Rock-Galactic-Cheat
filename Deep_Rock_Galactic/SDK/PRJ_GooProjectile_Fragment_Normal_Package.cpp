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
	 * 		Name   -> PredefinedFunction APRJ_GooProjectile_Fragment_Normal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRJ_GooProjectile_Fragment_Normal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRJ_GooProjectile_Fragment_Normal.PRJ_GooProjectile_Fragment_Normal_C");
		return ptr;
	}

}


