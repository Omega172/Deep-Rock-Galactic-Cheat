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
	 * 		Name   -> Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.SetHeatValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HeatPercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               overHeated                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponDisplay_Drill_Heat_C::SetHeatValue(float HeatPercentage, bool overHeated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.SetHeatValue");
		
		UWeaponDisplay_Drill_Heat_C_SetHeatValue_Params params {};
		params.HeatPercentage = HeatPercentage;
		params.overHeated = overHeated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.Construct
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_Drill_Heat_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.Construct");
		
		UWeaponDisplay_Drill_Heat_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Drill_Heat_C::Init(class AItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.Init");
		
		UWeaponDisplay_Drill_Heat_C_Init_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.On UnEquipped
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_Drill_Heat_C::OnUnEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.On UnEquipped");
		
		UWeaponDisplay_Drill_Heat_C_OnUnEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.OnEquipped
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_Drill_Heat_C::OnEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.OnEquipped");
		
		UWeaponDisplay_Drill_Heat_C_OnEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.ExecuteUbergraph_WeaponDisplay_Drill_Heat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Drill_Heat_C::ExecuteUbergraph_WeaponDisplay_Drill_Heat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C.ExecuteUbergraph_WeaponDisplay_Drill_Heat");
		
		UWeaponDisplay_Drill_Heat_C_ExecuteUbergraph_WeaponDisplay_Drill_Heat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponDisplay_Drill_Heat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponDisplay_Drill_Heat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponDisplay_Drill_Heat.WeaponDisplay_Drill_Heat_C");
		return ptr;
	}

}


