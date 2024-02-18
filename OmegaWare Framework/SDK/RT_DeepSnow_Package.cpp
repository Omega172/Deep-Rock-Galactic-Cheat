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
	 * 		Name   -> PredefinedFunction URT_DeepSnow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URT_DeepSnow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RT_DeepSnow.RT_DeepSnow_C");
		return ptr;
	}

}


