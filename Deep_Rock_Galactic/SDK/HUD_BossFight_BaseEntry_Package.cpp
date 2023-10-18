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
	 * 		Name   -> Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.GetBossFight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBossFight                                  BossFight                                                  (Parm, OutParm, NoDestructor, ContainsInstancedReference)
	 */
	void UHUD_BossFight_BaseEntry_C::GetBossFight(struct FBossFight* BossFight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.GetBossFight");
		
		UHUD_BossFight_BaseEntry_C_GetBossFight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BossFight != nullptr)
			*BossFight = params.BossFight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.OnCanTakeDamageChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutCanTakeDamage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_BossFight_BaseEntry_C::OnCanTakeDamageChanged(bool OutCanTakeDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.OnCanTakeDamageChanged");
		
		UHUD_BossFight_BaseEntry_C_OnCanTakeDamageChanged_Params params {};
		params.OutCanTakeDamage = OutCanTakeDamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.OnDeath
	 * 		Flags  -> ()
	 */
	void UHUD_BossFight_BaseEntry_C::OnDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.OnDeath");
		
		UHUD_BossFight_BaseEntry_C_OnDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.OnDisengaged
	 * 		Flags  -> ()
	 */
	void UHUD_BossFight_BaseEntry_C::OnDisengaged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.OnDisengaged");
		
		UHUD_BossFight_BaseEntry_C_OnDisengaged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.OnHealthChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Health                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_BossFight_BaseEntry_C::OnHealthChanged(float Health)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.OnHealthChanged");
		
		UHUD_BossFight_BaseEntry_C_OnHealthChanged_Params params {};
		params.Health = Health;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_BossFight_BaseEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.Construct");
		
		UHUD_BossFight_BaseEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.OnFightRemoved
	 * 		Flags  -> ()
	 */
	void UHUD_BossFight_BaseEntry_C::OnFightRemoved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.OnFightRemoved");
		
		UHUD_BossFight_BaseEntry_C_OnFightRemoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.Setup Invulnerability
	 * 		Flags  -> ()
	 */
	void UHUD_BossFight_BaseEntry_C::SetupInvulnerability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.Setup Invulnerability");
		
		UHUD_BossFight_BaseEntry_C_SetupInvulnerability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.ExecuteUbergraph_HUD_BossFight_BaseEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_BossFight_BaseEntry_C::ExecuteUbergraph_HUD_BossFight_BaseEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C.ExecuteUbergraph_HUD_BossFight_BaseEntry");
		
		UHUD_BossFight_BaseEntry_C_ExecuteUbergraph_HUD_BossFight_BaseEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_BossFight_BaseEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_BossFight_BaseEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_BossFight_BaseEntry.HUD_BossFight_BaseEntry_C");
		return ptr;
	}

}


