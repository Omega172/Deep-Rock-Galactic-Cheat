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
	 * 		Name   -> Function ENE_Jelly_Passive_Mother.ENE_Jelly_Passive_Mother_C.OnDeath
	 * 		Flags  -> ()
	 */
	void AENE_Jelly_Passive_Mother_C::OnDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ENE_Jelly_Passive_Mother.ENE_Jelly_Passive_Mother_C.OnDeath");
		
		AENE_Jelly_Passive_Mother_C_OnDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ENE_Jelly_Passive_Mother.ENE_Jelly_Passive_Mother_C.ExecuteUbergraph_ENE_Jelly_Passive_Mother
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AENE_Jelly_Passive_Mother_C::ExecuteUbergraph_ENE_Jelly_Passive_Mother(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ENE_Jelly_Passive_Mother.ENE_Jelly_Passive_Mother_C.ExecuteUbergraph_ENE_Jelly_Passive_Mother");
		
		AENE_Jelly_Passive_Mother_C_ExecuteUbergraph_ENE_Jelly_Passive_Mother_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AENE_Jelly_Passive_Mother_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AENE_Jelly_Passive_Mother_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ENE_Jelly_Passive_Mother.ENE_Jelly_Passive_Mother_C");
		return ptr;
	}

}


