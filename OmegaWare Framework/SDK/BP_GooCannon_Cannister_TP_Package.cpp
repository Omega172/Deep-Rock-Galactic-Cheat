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
	 * 		Name   -> PredefinedFunction ABP_GooCannon_Cannister_TP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GooCannon_Cannister_TP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GooCannon_Cannister_TP.BP_GooCannon_Cannister_TP_C");
		return ptr;
	}

}


