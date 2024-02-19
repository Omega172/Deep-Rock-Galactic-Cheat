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
	 * 		Name   -> Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.UpdateTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPawnAfflictionComponent*                    InPawnAfflictions                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_EnemyTargeting_Affliction_C::UpdateTarget(class UPawnAfflictionComponent* InPawnAfflictions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.UpdateTarget");
		
		UHUD_EnemyTargeting_Affliction_C_UpdateTarget_Params params {};
		params.InPawnAfflictions = InPawnAfflictions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.SetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Inactive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_EnemyTargeting_Affliction_C::SetActive(bool Inactive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.SetActive");
		
		UHUD_EnemyTargeting_Affliction_C_SetActive_Params params {};
		params.Inactive = Inactive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_EnemyTargeting_Affliction_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.Construct");
		
		UHUD_EnemyTargeting_Affliction_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_EnemyTargeting_Affliction_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.PreConstruct");
		
		UHUD_EnemyTargeting_Affliction_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.OnFadeInFinished
	 * 		Flags  -> ()
	 */
	void UHUD_EnemyTargeting_Affliction_C::OnFadeInFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.OnFadeInFinished");
		
		UHUD_EnemyTargeting_Affliction_C_OnFadeInFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.ExecuteUbergraph_HUD_EnemyTargeting_Affliction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_EnemyTargeting_Affliction_C::ExecuteUbergraph_HUD_EnemyTargeting_Affliction(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C.ExecuteUbergraph_HUD_EnemyTargeting_Affliction");
		
		UHUD_EnemyTargeting_Affliction_C_ExecuteUbergraph_HUD_EnemyTargeting_Affliction_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_EnemyTargeting_Affliction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_EnemyTargeting_Affliction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C");
		return ptr;
	}

}


