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
	 * 		Name   -> Function BP_E3trailer_AsteroidField.BP_E3trailer_AsteroidField_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_E3trailer_AsteroidField_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_E3trailer_AsteroidField.BP_E3trailer_AsteroidField_C.UserConstructionScript");
		
		ABP_E3trailer_AsteroidField_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_E3trailer_AsteroidField_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_E3trailer_AsteroidField_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_E3trailer_AsteroidField.BP_E3trailer_AsteroidField_C");
		return ptr;
	}

}


