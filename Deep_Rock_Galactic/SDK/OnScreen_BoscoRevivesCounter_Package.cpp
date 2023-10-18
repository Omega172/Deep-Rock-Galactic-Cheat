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
	 * 		Name   -> Function OnScreen_BoscoRevivesCounter.OnScreen_BoscoRevivesCounter_C.SetViewAmmoCounter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ViewAmmo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOnScreen_BoscoRevivesCounter_C::SetViewAmmoCounter(bool ViewAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnScreen_BoscoRevivesCounter.OnScreen_BoscoRevivesCounter_C.SetViewAmmoCounter");
		
		UOnScreen_BoscoRevivesCounter_C_SetViewAmmoCounter_Params params {};
		params.ViewAmmo = ViewAmmo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnScreen_BoscoRevivesCounter.OnScreen_BoscoRevivesCounter_C.Construct
	 * 		Flags  -> ()
	 */
	void UOnScreen_BoscoRevivesCounter_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnScreen_BoscoRevivesCounter.OnScreen_BoscoRevivesCounter_C.Construct");
		
		UOnScreen_BoscoRevivesCounter_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnScreen_BoscoRevivesCounter.OnScreen_BoscoRevivesCounter_C.ExecuteUbergraph_OnScreen_BoscoRevivesCounter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOnScreen_BoscoRevivesCounter_C::ExecuteUbergraph_OnScreen_BoscoRevivesCounter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnScreen_BoscoRevivesCounter.OnScreen_BoscoRevivesCounter_C.ExecuteUbergraph_OnScreen_BoscoRevivesCounter");
		
		UOnScreen_BoscoRevivesCounter_C_ExecuteUbergraph_OnScreen_BoscoRevivesCounter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnScreen_BoscoRevivesCounter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnScreen_BoscoRevivesCounter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OnScreen_BoscoRevivesCounter.OnScreen_BoscoRevivesCounter_C");
		return ptr;
	}

}


