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
	 * 		Name   -> Function IAlienEgg.IAlienEgg_C.SetSpecialEgg
	 * 		Flags  -> ()
	 */
	void UIAlienEgg_C::SetSpecialEgg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IAlienEgg.IAlienEgg_C.SetSpecialEgg");
		
		UIAlienEgg_C_SetSpecialEgg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIAlienEgg_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIAlienEgg_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IAlienEgg.IAlienEgg_C");
		return ptr;
	}

}


