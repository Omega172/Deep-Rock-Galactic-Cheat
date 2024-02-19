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
	 * 		Name   -> Function HUD_CroBurstPistol.HUD_CroBurstPistol_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_CroBurstPistol_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CroBurstPistol.HUD_CroBurstPistol_C.Construct");
		
		UHUD_CroBurstPistol_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CroBurstPistol.HUD_CroBurstPistol_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CroBurstPistol_C::SetData(class AItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CroBurstPistol.HUD_CroBurstPistol_C.SetData");
		
		UHUD_CroBurstPistol_C_SetData_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CroBurstPistol.HUD_CroBurstPistol_C.OnSpreadChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HorizontalSpread                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              VerticalSpread                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isAtRest                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_CroBurstPistol_C::OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CroBurstPistol.HUD_CroBurstPistol_C.OnSpreadChanged");
		
		UHUD_CroBurstPistol_C_OnSpreadChanged_Params params {};
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
	 * 		Name   -> Function HUD_CroBurstPistol.HUD_CroBurstPistol_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_CroBurstPistol_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CroBurstPistol.HUD_CroBurstPistol_C.PreConstruct");
		
		UHUD_CroBurstPistol_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CroBurstPistol.HUD_CroBurstPistol_C.OnDamagedEnemy_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DamageModifier                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HealthRemaining                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsWeakPoint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsRadial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_CroBurstPistol_C::OnDamagedEnemy_Event(float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CroBurstPistol.HUD_CroBurstPistol_C.OnDamagedEnemy_Event");
		
		UHUD_CroBurstPistol_C_OnDamagedEnemy_Event_Params params {};
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
	 * 		Name   -> Function HUD_CroBurstPistol.HUD_CroBurstPistol_C.ExecuteUbergraph_HUD_CroBurstPistol
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CroBurstPistol_C::ExecuteUbergraph_HUD_CroBurstPistol(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CroBurstPistol.HUD_CroBurstPistol_C.ExecuteUbergraph_HUD_CroBurstPistol");
		
		UHUD_CroBurstPistol_C_ExecuteUbergraph_HUD_CroBurstPistol_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_CroBurstPistol_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_CroBurstPistol_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_CroBurstPistol.HUD_CroBurstPistol_C");
		return ptr;
	}

}


