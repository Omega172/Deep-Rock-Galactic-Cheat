﻿/**
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
	 * 		Name   -> PredefinedFunction APRJ_MicroMissile_Buck_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRJ_MicroMissile_Buck_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRJ_MicroMissile_Buck.PRJ_MicroMissile_Buck_C");
		return ptr;
	}

}


