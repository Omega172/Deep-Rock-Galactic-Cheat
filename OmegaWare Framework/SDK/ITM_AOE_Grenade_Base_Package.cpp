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
	 * 		Name   -> Function ITM_AOE_Grenade_Base.ITM_AOE_Grenade_Base_C.OnExploded
	 * 		Flags  -> ()
	 */
	void AITM_AOE_Grenade_Base_C::OnExploded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_AOE_Grenade_Base.ITM_AOE_Grenade_Base_C.OnExploded");
		
		AITM_AOE_Grenade_Base_C_OnExploded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_AOE_Grenade_Base.ITM_AOE_Grenade_Base_C.ExecuteUbergraph_ITM_AOE_Grenade_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AITM_AOE_Grenade_Base_C::ExecuteUbergraph_ITM_AOE_Grenade_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_AOE_Grenade_Base.ITM_AOE_Grenade_Base_C.ExecuteUbergraph_ITM_AOE_Grenade_Base");
		
		AITM_AOE_Grenade_Base_C_ExecuteUbergraph_ITM_AOE_Grenade_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AITM_AOE_Grenade_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AITM_AOE_Grenade_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ITM_AOE_Grenade_Base.ITM_AOE_Grenade_Base_C");
		return ptr;
	}

}


