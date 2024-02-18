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
	 * 		Name   -> Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.Set Progress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_CryoSpray_Ammo_C::SetProgress(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.Set Progress");
		
		UWeaponDisplay_CryoSpray_Ammo_C_SetProgress_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_CryoSpray_Ammo_C::Init(class AItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.Init");
		
		UWeaponDisplay_CryoSpray_Ammo_C_Init_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.OnItemUnequipped
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_CryoSpray_Ammo_C::OnItemUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.OnItemUnequipped");
		
		UWeaponDisplay_CryoSpray_Ammo_C_OnItemUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.OnItemEquipped
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_CryoSpray_Ammo_C::OnItemEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.OnItemEquipped");
		
		UWeaponDisplay_CryoSpray_Ammo_C_OnItemEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.ExecuteUbergraph_WeaponDisplay_CryoSpray_Ammo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_CryoSpray_Ammo_C::ExecuteUbergraph_WeaponDisplay_CryoSpray_Ammo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C.ExecuteUbergraph_WeaponDisplay_CryoSpray_Ammo");
		
		UWeaponDisplay_CryoSpray_Ammo_C_ExecuteUbergraph_WeaponDisplay_CryoSpray_Ammo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponDisplay_CryoSpray_Ammo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponDisplay_CryoSpray_Ammo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponDisplay_CryoSpray_Ammo.WeaponDisplay_CryoSpray_Ammo_C");
		return ptr;
	}

}


