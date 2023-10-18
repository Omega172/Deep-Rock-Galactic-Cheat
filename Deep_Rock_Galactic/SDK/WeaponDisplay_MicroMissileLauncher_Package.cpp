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
	 * 		Name   -> Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.SetCurrentChargeWithAudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCharge                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_MicroMissileLauncher_C::SetCurrentChargeWithAudio(int32_t InCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.SetCurrentChargeWithAudio");
		
		UWeaponDisplay_MicroMissileLauncher_C_SetCurrentChargeWithAudio_Params params {};
		params.InCharge = InCharge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.SetTotalCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_MicroMissileLauncher_C::SetTotalCount(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.SetTotalCount");
		
		UWeaponDisplay_MicroMissileLauncher_C_SetTotalCount_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.SetClipCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_MicroMissileLauncher_C::SetClipCount(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.SetClipCount");
		
		UWeaponDisplay_MicroMissileLauncher_C_SetClipCount_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.InitializeAmmoWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       OwningItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidgetComponent*                            WidgetComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_MicroMissileLauncher_C::InitializeAmmoWidget(class AItem* OwningItem, class UWidgetComponent* WidgetComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.InitializeAmmoWidget");
		
		UWeaponDisplay_MicroMissileLauncher_C_InitializeAmmoWidget_Params params {};
		params.OwningItem = OwningItem;
		params.WidgetComp = WidgetComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.OnStartCharging
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_MicroMissileLauncher_C::OnStartCharging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.OnStartCharging");
		
		UWeaponDisplay_MicroMissileLauncher_C_OnStartCharging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.OnEndCharging
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_MicroMissileLauncher_C::OnEndCharging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.OnEndCharging");
		
		UWeaponDisplay_MicroMissileLauncher_C_OnEndCharging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.OnUpdateCharging
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_MicroMissileLauncher_C::OnUpdateCharging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.OnUpdateCharging");
		
		UWeaponDisplay_MicroMissileLauncher_C_OnUpdateCharging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.Construct
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_MicroMissileLauncher_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.Construct");
		
		UWeaponDisplay_MicroMissileLauncher_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.ResetChargingUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InHideIcons                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponDisplay_MicroMissileLauncher_C::ResetChargingUI(bool InHideIcons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.ResetChargingUI");
		
		UWeaponDisplay_MicroMissileLauncher_C_ResetChargingUI_Params params {};
		params.InHideIcons = InHideIcons;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.ExecuteUbergraph_WeaponDisplay_MicroMissileLauncher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_MicroMissileLauncher_C::ExecuteUbergraph_WeaponDisplay_MicroMissileLauncher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C.ExecuteUbergraph_WeaponDisplay_MicroMissileLauncher");
		
		UWeaponDisplay_MicroMissileLauncher_C_ExecuteUbergraph_WeaponDisplay_MicroMissileLauncher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponDisplay_MicroMissileLauncher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponDisplay_MicroMissileLauncher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponDisplay_MicroMissileLauncher.WeaponDisplay_MicroMissileLauncher_C");
		return ptr;
	}

}


