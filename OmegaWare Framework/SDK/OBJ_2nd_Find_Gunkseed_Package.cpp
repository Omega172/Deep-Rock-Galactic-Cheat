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
	 * 		Name   -> PredefinedFunction UOBJ_2nd_Find_Gunkseed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOBJ_2nd_Find_Gunkseed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OBJ_2nd_Find_Gunkseed.OBJ_2nd_Find_Gunkseed_C");
		return ptr;
	}

}


