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
	 * 		Name   -> PredefinedFunction UCameraShake_Item_Gatling_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraShake_Item_Gatling_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CameraShake_Item_Gatling.CameraShake_Item_Gatling_C");
		return ptr;
	}

}


