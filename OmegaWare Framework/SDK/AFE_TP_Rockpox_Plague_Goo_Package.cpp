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
	 * 		Name   -> PredefinedFunction UAFE_TP_Rockpox_Plague_Goo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAFE_TP_Rockpox_Plague_Goo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AFE_TP_Rockpox_Plague_Goo.AFE_TP_Rockpox_Plague_Goo_C");
		return ptr;
	}

}


