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
	 * 		Name   -> PredefinedFunction UBP_MOD_MakeElite_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MOD_MakeElite_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MOD_MakeElite.BP_MOD_MakeElite_C");
		return ptr;
	}

}


