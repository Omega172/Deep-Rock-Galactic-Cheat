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
	 * 		Name   -> Function WeaponDisplay_GrenadeLauncher_AmmoCounter.WeaponDisplay_GrenadeLauncher_AmmoCounter_C.Construct
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_GrenadeLauncher_AmmoCounter_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_GrenadeLauncher_AmmoCounter.WeaponDisplay_GrenadeLauncher_AmmoCounter_C.Construct");
		
		UWeaponDisplay_GrenadeLauncher_AmmoCounter_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_GrenadeLauncher_AmmoCounter.WeaponDisplay_GrenadeLauncher_AmmoCounter_C.Max Ammo Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_GrenadeLauncher_AmmoCounter_C::MaxAmmoChanged(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_GrenadeLauncher_AmmoCounter.WeaponDisplay_GrenadeLauncher_AmmoCounter_C.Max Ammo Changed");
		
		UWeaponDisplay_GrenadeLauncher_AmmoCounter_C_MaxAmmoChanged_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_GrenadeLauncher_AmmoCounter.WeaponDisplay_GrenadeLauncher_AmmoCounter_C.Total Ammo left changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_GrenadeLauncher_AmmoCounter_C::TotalAmmoleftchanged(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_GrenadeLauncher_AmmoCounter.WeaponDisplay_GrenadeLauncher_AmmoCounter_C.Total Ammo left changed");
		
		UWeaponDisplay_GrenadeLauncher_AmmoCounter_C_TotalAmmoleftchanged_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_GrenadeLauncher_AmmoCounter.WeaponDisplay_GrenadeLauncher_AmmoCounter_C.ExecuteUbergraph_WeaponDisplay_GrenadeLauncher_AmmoCounter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_GrenadeLauncher_AmmoCounter_C::ExecuteUbergraph_WeaponDisplay_GrenadeLauncher_AmmoCounter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_GrenadeLauncher_AmmoCounter.WeaponDisplay_GrenadeLauncher_AmmoCounter_C.ExecuteUbergraph_WeaponDisplay_GrenadeLauncher_AmmoCounter");
		
		UWeaponDisplay_GrenadeLauncher_AmmoCounter_C_ExecuteUbergraph_WeaponDisplay_GrenadeLauncher_AmmoCounter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponDisplay_GrenadeLauncher_AmmoCounter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponDisplay_GrenadeLauncher_AmmoCounter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponDisplay_GrenadeLauncher_AmmoCounter.WeaponDisplay_GrenadeLauncher_AmmoCounter_C");
		return ptr;
	}

}


