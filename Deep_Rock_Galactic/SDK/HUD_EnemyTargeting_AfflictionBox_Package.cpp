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
	 * 		Name   -> Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.SetAfflictionComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPawnAfflictionComponent*                    InAfflictionComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_EnemyTargeting_AfflictionBox_C::SetAfflictionComponent(class UPawnAfflictionComponent* InAfflictionComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.SetAfflictionComponent");
		
		UHUD_EnemyTargeting_AfflictionBox_C_SetAfflictionComponent_Params params {};
		params.InAfflictionComponent = InAfflictionComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ToggleIgnoreAfflictions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UPawnAffliction*>                     Affliction                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               ShouldIgnore                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_EnemyTargeting_AfflictionBox_C::ToggleIgnoreAfflictions(TArray<class UPawnAffliction*>* Affliction, bool ShouldIgnore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ToggleIgnoreAfflictions");
		
		UHUD_EnemyTargeting_AfflictionBox_C_ToggleIgnoreAfflictions_Params params {};
		params.ShouldIgnore = ShouldIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Affliction != nullptr)
			*Affliction = params.Affliction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ToggleIgnoreAffliction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPawnAffliction*                             Affliction                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldIgnore                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_EnemyTargeting_AfflictionBox_C::ToggleIgnoreAffliction(class UPawnAffliction* Affliction, bool ShouldIgnore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ToggleIgnoreAffliction");
		
		UHUD_EnemyTargeting_AfflictionBox_C_ToggleIgnoreAffliction_Params params {};
		params.Affliction = Affliction;
		params.ShouldIgnore = ShouldIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ClearAfflictions
	 * 		Flags  -> ()
	 */
	void UHUD_EnemyTargeting_AfflictionBox_C::ClearAfflictions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ClearAfflictions");
		
		UHUD_EnemyTargeting_AfflictionBox_C_ClearAfflictions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ToggleAffliction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPawnAffliction*                             InAffliction                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_EnemyTargeting_AfflictionBox_C::ToggleAffliction(class UPawnAffliction* InAffliction, bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ToggleAffliction");
		
		UHUD_EnemyTargeting_AfflictionBox_C_ToggleAffliction_Params params {};
		params.InAffliction = InAffliction;
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.SetTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InAfflictionTarget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_EnemyTargeting_AfflictionBox_C::SetTarget(class AActor* InAfflictionTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.SetTarget");
		
		UHUD_EnemyTargeting_AfflictionBox_C_SetTarget_Params params {};
		params.InAfflictionTarget = InAfflictionTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.OnAfflictionActivatedEvent_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPawnAffliction*                             Affliction                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_EnemyTargeting_AfflictionBox_C::OnAfflictionActivatedEvent_Event(class UPawnAffliction* Affliction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.OnAfflictionActivatedEvent_Event");
		
		UHUD_EnemyTargeting_AfflictionBox_C_OnAfflictionActivatedEvent_Event_Params params {};
		params.Affliction = Affliction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.OnAfflictionDeactivatedEvent_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPawnAffliction*                             Affliction                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_EnemyTargeting_AfflictionBox_C::OnAfflictionDeactivatedEvent_Event(class UPawnAffliction* Affliction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.OnAfflictionDeactivatedEvent_Event");
		
		UHUD_EnemyTargeting_AfflictionBox_C_OnAfflictionDeactivatedEvent_Event_Params params {};
		params.Affliction = Affliction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_EnemyTargeting_AfflictionBox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.PreConstruct");
		
		UHUD_EnemyTargeting_AfflictionBox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ExecuteUbergraph_HUD_EnemyTargeting_AfflictionBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_EnemyTargeting_AfflictionBox_C::ExecuteUbergraph_HUD_EnemyTargeting_AfflictionBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ExecuteUbergraph_HUD_EnemyTargeting_AfflictionBox");
		
		UHUD_EnemyTargeting_AfflictionBox_C_ExecuteUbergraph_HUD_EnemyTargeting_AfflictionBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_EnemyTargeting_AfflictionBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_EnemyTargeting_AfflictionBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C");
		return ptr;
	}

}


