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
	 * 		Name   -> PredefinedFunction ABP_Phys_Barrel01_Red_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Phys_Barrel01_Red_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Phys_Barrel01_Red.BP_Phys_Barrel01_Red_C");
		return ptr;
	}

}


