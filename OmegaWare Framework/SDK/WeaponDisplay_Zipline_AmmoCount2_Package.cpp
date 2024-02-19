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
	 * 		Name   -> Function WeaponDisplay_Zipline_AmmoCount2.WeaponDisplay_Zipline_AmmoCount2_C.SetTotalCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Zipline_AmmoCount2_C::SetTotalCount(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Zipline_AmmoCount2.WeaponDisplay_Zipline_AmmoCount2_C.SetTotalCount");
		
		UWeaponDisplay_Zipline_AmmoCount2_C_SetTotalCount_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Zipline_AmmoCount2.WeaponDisplay_Zipline_AmmoCount2_C.SetClipCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Zipline_AmmoCount2_C::SetClipCount(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Zipline_AmmoCount2.WeaponDisplay_Zipline_AmmoCount2_C.SetClipCount");
		
		UWeaponDisplay_Zipline_AmmoCount2_C_SetClipCount_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Zipline_AmmoCount2.WeaponDisplay_Zipline_AmmoCount2_C.ExecuteUbergraph_WeaponDisplay_Zipline_AmmoCount2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Zipline_AmmoCount2_C::ExecuteUbergraph_WeaponDisplay_Zipline_AmmoCount2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Zipline_AmmoCount2.WeaponDisplay_Zipline_AmmoCount2_C.ExecuteUbergraph_WeaponDisplay_Zipline_AmmoCount2");
		
		UWeaponDisplay_Zipline_AmmoCount2_C_ExecuteUbergraph_WeaponDisplay_Zipline_AmmoCount2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponDisplay_Zipline_AmmoCount2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponDisplay_Zipline_AmmoCount2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponDisplay_Zipline_AmmoCount2.WeaponDisplay_Zipline_AmmoCount2_C");
		return ptr;
	}

}


