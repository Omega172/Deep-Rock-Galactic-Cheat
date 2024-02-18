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
	 * 		Name   -> Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.SetClipCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Autocannon_AmmoCount_C::SetClipCount(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.SetClipCount");
		
		UWeaponDisplay_Autocannon_AmmoCount_C_SetClipCount_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.OnReloadStarted
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_Autocannon_AmmoCount_C::OnReloadStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.OnReloadStarted");
		
		UWeaponDisplay_Autocannon_AmmoCount_C_OnReloadStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.OnReloadComplete
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_Autocannon_AmmoCount_C::OnReloadComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.OnReloadComplete");
		
		UWeaponDisplay_Autocannon_AmmoCount_C_OnReloadComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.SetTotalCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Autocannon_AmmoCount_C::SetTotalCount(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.SetTotalCount");
		
		UWeaponDisplay_Autocannon_AmmoCount_C_SetTotalCount_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.Construct
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_Autocannon_AmmoCount_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.Construct");
		
		UWeaponDisplay_Autocannon_AmmoCount_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_Autocannon_AmmoCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Autocannon_AmmoCount_C::ExecuteUbergraph_WeaponDisplay_Autocannon_AmmoCount(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_Autocannon_AmmoCount");
		
		UWeaponDisplay_Autocannon_AmmoCount_C_ExecuteUbergraph_WeaponDisplay_Autocannon_AmmoCount_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponDisplay_Autocannon_AmmoCount_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponDisplay_Autocannon_AmmoCount_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponDisplay_Autocannon_AmmoCount.WeaponDisplay_Autocannon_AmmoCount_C");
		return ptr;
	}

}


