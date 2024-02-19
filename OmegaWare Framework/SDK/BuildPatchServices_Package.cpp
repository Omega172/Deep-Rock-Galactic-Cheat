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
	 * 		Name   -> PredefinedFunction UBuildPatchManifest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuildPatchManifest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BuildPatchServices.BuildPatchManifest");
		return ptr;
	}

}


