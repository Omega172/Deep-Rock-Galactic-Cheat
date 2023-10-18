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
	 * 		Name   -> PredefinedFunction UPS5MockExternalEndpointSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPS5MockExternalEndpointSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PS5_Mock.PS5MockExternalEndpointSettings");
		return ptr;
	}

}


