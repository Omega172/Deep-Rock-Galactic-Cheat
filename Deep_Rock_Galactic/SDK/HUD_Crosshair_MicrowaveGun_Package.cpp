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
	 * 		Name   -> Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Crosshair_MicrowaveGun_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.Construct");
		
		UHUD_Crosshair_MicrowaveGun_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Crosshair_MicrowaveGun_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.PreConstruct");
		
		UHUD_Crosshair_MicrowaveGun_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.OnDamagedEnemy_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DamageModifier                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HealthRemaining                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsWeakPoint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsRadial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Crosshair_MicrowaveGun_C::OnDamagedEnemy_Event(float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.OnDamagedEnemy_Event");
		
		UHUD_Crosshair_MicrowaveGun_C_OnDamagedEnemy_Event_Params params {};
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
	 * 		Name   -> Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.IncreaseWidth
	 * 		Flags  -> ()
	 */
	void UHUD_Crosshair_MicrowaveGun_C::IncreaseWidth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.IncreaseWidth");
		
		UHUD_Crosshair_MicrowaveGun_C_IncreaseWidth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Crosshair_MicrowaveGun_C::SetData(class AItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.SetData");
		
		UHUD_Crosshair_MicrowaveGun_C_SetData_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.OnLenseActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isWideLens                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Crosshair_MicrowaveGun_C::OnLenseActivated(bool isWideLens)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.OnLenseActivated");
		
		UHUD_Crosshair_MicrowaveGun_C_OnLenseActivated_Params params {};
		params.isWideLens = isWideLens;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.OnLenseDeactivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isWideLens                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Crosshair_MicrowaveGun_C::OnLenseDeactivated(bool isWideLens)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.OnLenseDeactivated");
		
		UHUD_Crosshair_MicrowaveGun_C_OnLenseDeactivated_Params params {};
		params.isWideLens = isWideLens;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.SetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Multiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Crosshair_MicrowaveGun_C::SetSize(float Multiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.SetSize");
		
		UHUD_Crosshair_MicrowaveGun_C_SetSize_Params params {};
		params.Multiplier = Multiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.DecreaseWidth
	 * 		Flags  -> ()
	 */
	void UHUD_Crosshair_MicrowaveGun_C::DecreaseWidth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.DecreaseWidth");
		
		UHUD_Crosshair_MicrowaveGun_C_DecreaseWidth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.ExecuteUbergraph_HUD_Crosshair_MicrowaveGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Crosshair_MicrowaveGun_C::ExecuteUbergraph_HUD_Crosshair_MicrowaveGun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C.ExecuteUbergraph_HUD_Crosshair_MicrowaveGun");
		
		UHUD_Crosshair_MicrowaveGun_C_ExecuteUbergraph_HUD_Crosshair_MicrowaveGun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Crosshair_MicrowaveGun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Crosshair_MicrowaveGun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Crosshair_MicrowaveGun.HUD_Crosshair_MicrowaveGun_C");
		return ptr;
	}

}


