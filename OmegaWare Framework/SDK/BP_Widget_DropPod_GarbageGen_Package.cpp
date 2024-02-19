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
	 * 		Name   -> PredefinedFunction ABP_Widget_DropPod_GarbageGen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Widget_DropPod_GarbageGen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Widget_DropPod_GarbageGen.BP_Widget_DropPod_GarbageGen_C");
		return ptr;
	}

}


