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
	 * 		Name   -> Function Loadout_BP_Sentry.Loadout_BP_Sentry_C.RecieveEquipped
	 * 		Flags  -> ()
	 */
	void ALoadout_BP_Sentry_C::RecieveEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_BP_Sentry.Loadout_BP_Sentry_C.RecieveEquipped");
		
		ALoadout_BP_Sentry_C_RecieveEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Loadout_BP_Sentry.Loadout_BP_Sentry_C.RecieveUnequipped
	 * 		Flags  -> ()
	 */
	void ALoadout_BP_Sentry_C::RecieveUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_BP_Sentry.Loadout_BP_Sentry_C.RecieveUnequipped");
		
		ALoadout_BP_Sentry_C_RecieveUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Loadout_BP_Sentry.Loadout_BP_Sentry_C.ExecuteUbergraph_Loadout_BP_Sentry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALoadout_BP_Sentry_C::ExecuteUbergraph_Loadout_BP_Sentry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_BP_Sentry.Loadout_BP_Sentry_C.ExecuteUbergraph_Loadout_BP_Sentry");
		
		ALoadout_BP_Sentry_C_ExecuteUbergraph_Loadout_BP_Sentry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALoadout_BP_Sentry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALoadout_BP_Sentry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Loadout_BP_Sentry.Loadout_BP_Sentry_C");
		return ptr;
	}

}


