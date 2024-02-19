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
	 * 		Name   -> Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.GetPercent_1
	 * 		Flags  -> ()
	 */
	float UWeaponDisplay_GatlingGun_AmmoCount_C::GetPercent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.GetPercent_1");
		
		UWeaponDisplay_GatlingGun_AmmoCount_C_GetPercent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.AdjustPercentage
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_GatlingGun_AmmoCount_C::AdjustPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.AdjustPercentage");
		
		UWeaponDisplay_GatlingGun_AmmoCount_C_AdjustPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.AnimateClipCount
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_GatlingGun_AmmoCount_C::AnimateClipCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.AnimateClipCount");
		
		UWeaponDisplay_GatlingGun_AmmoCount_C_AnimateClipCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.AdjustProgressBar
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_GatlingGun_AmmoCount_C::AdjustProgressBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.AdjustProgressBar");
		
		UWeaponDisplay_GatlingGun_AmmoCount_C_AdjustProgressBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.Check AmmoLow
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_GatlingGun_AmmoCount_C::CheckAmmoLow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.Check AmmoLow");
		
		UWeaponDisplay_GatlingGun_AmmoCount_C_CheckAmmoLow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.SetTotalCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_GatlingGun_AmmoCount_C::SetTotalCount(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.SetTotalCount");
		
		UWeaponDisplay_GatlingGun_AmmoCount_C_SetTotalCount_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.SetMaxAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_GatlingGun_AmmoCount_C::SetMaxAmmo(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.SetMaxAmmo");
		
		UWeaponDisplay_GatlingGun_AmmoCount_C_SetMaxAmmo_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.Construct
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_GatlingGun_AmmoCount_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.Construct");
		
		UWeaponDisplay_GatlingGun_AmmoCount_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.OnAmmoLowFinished
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_GatlingGun_AmmoCount_C::OnAmmoLowFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.OnAmmoLowFinished");
		
		UWeaponDisplay_GatlingGun_AmmoCount_C_OnAmmoLowFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.SetClipCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_GatlingGun_AmmoCount_C::SetClipCount(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.SetClipCount");
		
		UWeaponDisplay_GatlingGun_AmmoCount_C_SetClipCount_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_GatlingGun_AmmoCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_GatlingGun_AmmoCount_C::ExecuteUbergraph_WeaponDisplay_GatlingGun_AmmoCount(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_GatlingGun_AmmoCount");
		
		UWeaponDisplay_GatlingGun_AmmoCount_C_ExecuteUbergraph_WeaponDisplay_GatlingGun_AmmoCount_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponDisplay_GatlingGun_AmmoCount_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponDisplay_GatlingGun_AmmoCount_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponDisplay_GatlingGun_AmmoCount.WeaponDisplay_GatlingGun_AmmoCount_C");
		return ptr;
	}

}


