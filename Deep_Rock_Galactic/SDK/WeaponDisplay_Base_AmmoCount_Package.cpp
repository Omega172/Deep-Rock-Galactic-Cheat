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
	 * 		Name   -> Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetMaxAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Base_AmmoCount_C::SetMaxAmmo(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetMaxAmmo");
		
		UWeaponDisplay_Base_AmmoCount_C_SetMaxAmmo_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.RequestRedraw
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_Base_AmmoCount_C::RequestRedraw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.RequestRedraw");
		
		UWeaponDisplay_Base_AmmoCount_C_RequestRedraw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetTotalCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Base_AmmoCount_C::SetTotalCount(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetTotalCount");
		
		UWeaponDisplay_Base_AmmoCount_C_SetTotalCount_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetClipCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Base_AmmoCount_C::SetClipCount(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.SetClipCount");
		
		UWeaponDisplay_Base_AmmoCount_C_SetClipCount_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnTotalAmountChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Base_AmmoCount_C::OnTotalAmountChanged(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnTotalAmountChanged");
		
		UWeaponDisplay_Base_AmmoCount_C_OnTotalAmountChanged_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnClipAmountChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Base_AmmoCount_C::OnClipAmountChanged(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnClipAmountChanged");
		
		UWeaponDisplay_Base_AmmoCount_C_OnClipAmountChanged_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnCarriedAmountChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Base_AmmoCount_C::OnCarriedAmountChanged(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnCarriedAmountChanged");
		
		UWeaponDisplay_Base_AmmoCount_C_OnCarriedAmountChanged_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnTotalAmountChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Base_AmmoCount_C::OnTotalAmountChange(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnTotalAmountChange");
		
		UWeaponDisplay_Base_AmmoCount_C_OnTotalAmountChange_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.InitializeAmmoWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       OwningItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidgetComponent*                            WidgetComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Base_AmmoCount_C::InitializeAmmoWidget(class AItem* OwningItem, class UWidgetComponent* WidgetComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.InitializeAmmoWidget");
		
		UWeaponDisplay_Base_AmmoCount_C_InitializeAmmoWidget_Params params {};
		params.OwningItem = OwningItem;
		params.WidgetComp = WidgetComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnReloadStarted
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_Base_AmmoCount_C::OnReloadStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnReloadStarted");
		
		UWeaponDisplay_Base_AmmoCount_C_OnReloadStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnReloadComplete
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_Base_AmmoCount_C::OnReloadComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnReloadComplete");
		
		UWeaponDisplay_Base_AmmoCount_C_OnReloadComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Max Ammo Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Base_AmmoCount_C::MaxAmmoChanged(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Max Ammo Changed");
		
		UWeaponDisplay_Base_AmmoCount_C_MaxAmmoChanged_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Total Ammo left changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Base_AmmoCount_C::TotalAmmoleftchanged(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Total Ammo left changed");
		
		UWeaponDisplay_Base_AmmoCount_C_TotalAmmoleftchanged_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Reload Time Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Base_AmmoCount_C::ReloadTimeTick(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.Reload Time Tick");
		
		UWeaponDisplay_Base_AmmoCount_C_ReloadTimeTick_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnItemUnequipped
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_Base_AmmoCount_C::OnItemUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnItemUnequipped");
		
		UWeaponDisplay_Base_AmmoCount_C_OnItemUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnItemEquipped
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_Base_AmmoCount_C::OnItemEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.OnItemEquipped");
		
		UWeaponDisplay_Base_AmmoCount_C_OnItemEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_Base_AmmoCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Base_AmmoCount_C::ExecuteUbergraph_WeaponDisplay_Base_AmmoCount(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_Base_AmmoCount");
		
		UWeaponDisplay_Base_AmmoCount_C_ExecuteUbergraph_WeaponDisplay_Base_AmmoCount_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponDisplay_Base_AmmoCount_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponDisplay_Base_AmmoCount_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C");
		return ptr;
	}

}


