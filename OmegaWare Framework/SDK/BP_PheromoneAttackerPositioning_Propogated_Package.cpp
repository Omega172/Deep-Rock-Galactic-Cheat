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
	 * 		Name   -> PredefinedFunction UBP_PheromoneAttackerPositioning_Propogated_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PheromoneAttackerPositioning_Propogated_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PheromoneAttackerPositioning_Propogated.BP_PheromoneAttackerPositioning_Propogated_C");
		return ptr;
	}

}


