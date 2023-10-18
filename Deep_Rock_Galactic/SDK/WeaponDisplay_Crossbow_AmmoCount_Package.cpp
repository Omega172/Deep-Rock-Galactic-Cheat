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
	 * 		Name   -> Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.GetArrowIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  OutIcon                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Crossbow_AmmoCount_C::GetArrowIcon(class UTexture2D** OutIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.GetArrowIcon");
		
		UWeaponDisplay_Crossbow_AmmoCount_C_GetArrowIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIcon != nullptr)
			*OutIcon = params.OutIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.Refresh
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_Crossbow_AmmoCount_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.Refresh");
		
		UWeaponDisplay_Crossbow_AmmoCount_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.SetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Crossbow_AmmoCount_C::SetItem(class AItem* InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.SetItem");
		
		UWeaponDisplay_Crossbow_AmmoCount_C_SetItem_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.OnAmountChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Crossbow_AmmoCount_C::OnAmountChanged(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.OnAmountChanged");
		
		UWeaponDisplay_Crossbow_AmmoCount_C_OnAmountChanged_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.OnArrowChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InDefaultArrow                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponDisplay_Crossbow_AmmoCount_C::OnArrowChanged(bool InDefaultArrow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.OnArrowChanged");
		
		UWeaponDisplay_Crossbow_AmmoCount_C_OnArrowChanged_Params params {};
		params.InDefaultArrow = InDefaultArrow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.OnItemSet
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_Crossbow_AmmoCount_C::OnItemSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.OnItemSet");
		
		UWeaponDisplay_Crossbow_AmmoCount_C_OnItemSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.OnCrossbowEquipped
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_Crossbow_AmmoCount_C::OnCrossbowEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.OnCrossbowEquipped");
		
		UWeaponDisplay_Crossbow_AmmoCount_C_OnCrossbowEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.OnCrossbowUnEquipped
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_Crossbow_AmmoCount_C::OnCrossbowUnEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.OnCrossbowUnEquipped");
		
		UWeaponDisplay_Crossbow_AmmoCount_C_OnCrossbowUnEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_Crossbow_AmmoCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Crossbow_AmmoCount_C::ExecuteUbergraph_WeaponDisplay_Crossbow_AmmoCount(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_Crossbow_AmmoCount");
		
		UWeaponDisplay_Crossbow_AmmoCount_C_ExecuteUbergraph_WeaponDisplay_Crossbow_AmmoCount_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponDisplay_Crossbow_AmmoCount_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponDisplay_Crossbow_AmmoCount_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponDisplay_Crossbow_AmmoCount.WeaponDisplay_Crossbow_AmmoCount_C");
		return ptr;
	}

}


