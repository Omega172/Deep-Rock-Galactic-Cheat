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
	 * 		Name   -> Function WeaponDisplay_SMG_AmmoCount.WeaponDisplay_SMG_AmmoCount_C.SetTotalCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_SMG_AmmoCount_C::SetTotalCount(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_SMG_AmmoCount.WeaponDisplay_SMG_AmmoCount_C.SetTotalCount");
		
		UWeaponDisplay_SMG_AmmoCount_C_SetTotalCount_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_SMG_AmmoCount.WeaponDisplay_SMG_AmmoCount_C.SetClipCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_SMG_AmmoCount_C::SetClipCount(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_SMG_AmmoCount.WeaponDisplay_SMG_AmmoCount_C.SetClipCount");
		
		UWeaponDisplay_SMG_AmmoCount_C_SetClipCount_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_SMG_AmmoCount.WeaponDisplay_SMG_AmmoCount_C.Construct
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_SMG_AmmoCount_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_SMG_AmmoCount.WeaponDisplay_SMG_AmmoCount_C.Construct");
		
		UWeaponDisplay_SMG_AmmoCount_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_SMG_AmmoCount.WeaponDisplay_SMG_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_SMG_AmmoCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_SMG_AmmoCount_C::ExecuteUbergraph_WeaponDisplay_SMG_AmmoCount(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_SMG_AmmoCount.WeaponDisplay_SMG_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_SMG_AmmoCount");
		
		UWeaponDisplay_SMG_AmmoCount_C_ExecuteUbergraph_WeaponDisplay_SMG_AmmoCount_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponDisplay_SMG_AmmoCount_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponDisplay_SMG_AmmoCount_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponDisplay_SMG_AmmoCount.WeaponDisplay_SMG_AmmoCount_C");
		return ptr;
	}

}


