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
	 * 		Name   -> PredefinedFunction APRW_Armor_Scout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRW_Armor_Scout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRW_Armor_Scout.PRW_Armor_Scout_C");
		return ptr;
	}

}


