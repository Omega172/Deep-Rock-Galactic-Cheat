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
	 * 		Name   -> PredefinedFunction UAFL_Frozen_Player_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAFL_Frozen_Player_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AFL_Frozen_Player.AFL_Frozen_Player_C");
		return ptr;
	}

}


