﻿/**
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
	 * 		Name   -> PredefinedFunction ABar_Glass_Physics_GlyphidSlammer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABar_Glass_Physics_GlyphidSlammer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Bar_Glass_Physics_GlyphidSlammer.Bar_Glass_Physics_GlyphidSlammer_C");
		return ptr;
	}

}


