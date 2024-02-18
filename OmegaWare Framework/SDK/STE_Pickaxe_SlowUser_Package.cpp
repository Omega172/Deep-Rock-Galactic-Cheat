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
	 * 		Name   -> PredefinedFunction USTE_Pickaxe_SlowUser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USTE_Pickaxe_SlowUser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass STE_Pickaxe_SlowUser.STE_Pickaxe_SlowUser_C");
		return ptr;
	}

}


