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
	 * 		Name   -> Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ClipSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ReloadDuration                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxAmmo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_HeavyParticleCannon_AmmoCount_C::SetData(int32_t ClipSize, float ReloadDuration, int32_t MaxAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.SetData");
		
		UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_SetData_Params params {};
		params.ClipSize = ClipSize;
		params.ReloadDuration = ReloadDuration;
		params.MaxAmmo = MaxAmmo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.Construct
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_HeavyParticleCannon_AmmoCount_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.Construct");
		
		UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.OnReloadTimeChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_HeavyParticleCannon_AmmoCount_C::OnReloadTimeChanged_Event(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.OnReloadTimeChanged_Event");
		
		UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_OnReloadTimeChanged_Event_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.OnAmountChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_HeavyParticleCannon_AmmoCount_C::OnAmountChanged(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.OnAmountChanged");
		
		UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_OnAmountChanged_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.OnTotalChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Total                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_HeavyParticleCannon_AmmoCount_C::OnTotalChanged(int32_t Total)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.OnTotalChanged");
		
		UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_OnTotalChanged_Params params {};
		params.Total = Total;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.DoItemEquipped
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_HeavyParticleCannon_AmmoCount_C::DoItemEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.DoItemEquipped");
		
		UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_DoItemEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.UpdateTotalInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_HeavyParticleCannon_AmmoCount_C::UpdateTotalInfo(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.UpdateTotalInfo");
		
		UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_UpdateTotalInfo_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.UpdateClipInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_HeavyParticleCannon_AmmoCount_C::UpdateClipInfo(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.UpdateClipInfo");
		
		UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_UpdateClipInfo_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       ParticleWeapon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_HeavyParticleCannon_AmmoCount_C::Init(class AItem* ParticleWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.Init");
		
		UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_Init_Params params {};
		params.ParticleWeapon = ParticleWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.OnUnequipped
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_HeavyParticleCannon_AmmoCount_C::OnUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.OnUnequipped");
		
		UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_OnUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.OnEquipped
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_HeavyParticleCannon_AmmoCount_C::OnEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.OnEquipped");
		
		UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_OnEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_HeavyParticleCannon_AmmoCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_HeavyParticleCannon_AmmoCount_C::ExecuteUbergraph_WeaponDisplay_HeavyParticleCannon_AmmoCount(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C.ExecuteUbergraph_WeaponDisplay_HeavyParticleCannon_AmmoCount");
		
		UWeaponDisplay_HeavyParticleCannon_AmmoCount_C_ExecuteUbergraph_WeaponDisplay_HeavyParticleCannon_AmmoCount_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponDisplay_HeavyParticleCannon_AmmoCount_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponDisplay_HeavyParticleCannon_AmmoCount_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponDisplay_HeavyParticleCannon_AmmoCount.WeaponDisplay_HeavyParticleCannon_AmmoCount_C");
		return ptr;
	}

}


