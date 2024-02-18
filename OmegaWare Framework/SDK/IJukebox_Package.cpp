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
	 * 		Name   -> Function IJukebox.IJukebox_C.StopJukebox
	 * 		Flags  -> ()
	 */
	void UIJukebox_C::StopJukebox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IJukebox.IJukebox_C.StopJukebox");
		
		UIJukebox_C_StopJukebox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIJukebox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIJukebox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IJukebox.IJukebox_C");
		return ptr;
	}

}


