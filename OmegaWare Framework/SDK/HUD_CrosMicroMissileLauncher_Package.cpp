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
	 * 		Name   -> Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CrosMicroMissileLauncher_C::SetData(class AItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.SetData");
		
		UHUD_CrosMicroMissileLauncher_C_SetData_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_CrosMicroMissileLauncher_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.Construct");
		
		UHUD_CrosMicroMissileLauncher_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.OnSpreadChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HorizontalSpread                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              VerticalSpread                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isAtRest                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_CrosMicroMissileLauncher_C::OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.OnSpreadChanged");
		
		UHUD_CrosMicroMissileLauncher_C_OnSpreadChanged_Params params {};
		params.HorizontalSpread = HorizontalSpread;
		params.VerticalSpread = VerticalSpread;
		params.isAtRest = isAtRest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_CrosMicroMissileLauncher_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.PreConstruct");
		
		UHUD_CrosMicroMissileLauncher_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.OnDamagedEnemy_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DamageModifier                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HealthRemaining                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsWeakPoint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsRadial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_CrosMicroMissileLauncher_C::OnDamagedEnemy_Event(float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.OnDamagedEnemy_Event");
		
		UHUD_CrosMicroMissileLauncher_C_OnDamagedEnemy_Event_Params params {};
		params.Damage = Damage;
		params.DamageModifier = DamageModifier;
		params.HealthRemaining = HealthRemaining;
		params.IsWeakPoint = IsWeakPoint;
		params.IsRadial = IsRadial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.StartCharging
	 * 		Flags  -> ()
	 */
	void UHUD_CrosMicroMissileLauncher_C::StartCharging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.StartCharging");
		
		UHUD_CrosMicroMissileLauncher_C_StartCharging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.EndCharge
	 * 		Flags  -> ()
	 */
	void UHUD_CrosMicroMissileLauncher_C::EndCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.EndCharge");
		
		UHUD_CrosMicroMissileLauncher_C_EndCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.ToggleBuckShotCrosshair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Spread                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CrosMicroMissileLauncher_C::ToggleBuckShotCrosshair(float Spread)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.ToggleBuckShotCrosshair");
		
		UHUD_CrosMicroMissileLauncher_C_ToggleBuckShotCrosshair_Params params {};
		params.Spread = Spread;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.CheckBuckShot
	 * 		Flags  -> ()
	 */
	void UHUD_CrosMicroMissileLauncher_C::CheckBuckShot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.CheckBuckShot");
		
		UHUD_CrosMicroMissileLauncher_C_CheckBuckShot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.ExecuteUbergraph_HUD_CrosMicroMissileLauncher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CrosMicroMissileLauncher_C::ExecuteUbergraph_HUD_CrosMicroMissileLauncher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C.ExecuteUbergraph_HUD_CrosMicroMissileLauncher");
		
		UHUD_CrosMicroMissileLauncher_C_ExecuteUbergraph_HUD_CrosMicroMissileLauncher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_CrosMicroMissileLauncher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_CrosMicroMissileLauncher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_CrosMicroMissileLauncher.HUD_CrosMicroMissileLauncher_C");
		return ptr;
	}

}


