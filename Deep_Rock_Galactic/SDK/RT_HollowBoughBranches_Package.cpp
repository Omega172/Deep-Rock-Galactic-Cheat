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
	 * 		Name   -> PredefinedFunction URT_HollowBoughBranches_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URT_HollowBoughBranches_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RT_HollowBoughBranches.RT_HollowBoughBranches_C");
		return ptr;
	}

}


