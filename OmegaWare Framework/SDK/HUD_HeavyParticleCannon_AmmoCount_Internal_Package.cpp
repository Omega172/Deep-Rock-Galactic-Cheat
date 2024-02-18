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
	 * 		Name   -> Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.OnTotalChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Total                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_HeavyParticleCannon_AmmoCount_Internal_C::OnTotalChanged(int32_t Total)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.OnTotalChanged");
		
		UHUD_HeavyParticleCannon_AmmoCount_Internal_C_OnTotalChanged_Params params {};
		params.Total = Total;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.OnAmountChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_HeavyParticleCannon_AmmoCount_Internal_C::OnAmountChanged(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.OnAmountChanged");
		
		UHUD_HeavyParticleCannon_AmmoCount_Internal_C_OnAmountChanged_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.OnVisibleChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               showClipCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_HeavyParticleCannon_AmmoCount_Internal_C::OnVisibleChanged(bool Visible, bool showClipCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.OnVisibleChanged");
		
		UHUD_HeavyParticleCannon_AmmoCount_Internal_C_OnVisibleChanged_Params params {};
		params.Visible = Visible;
		params.showClipCount = showClipCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.OnTotalVisibleChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_HeavyParticleCannon_AmmoCount_Internal_C::OnTotalVisibleChanged(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.OnTotalVisibleChanged");
		
		UHUD_HeavyParticleCannon_AmmoCount_Internal_C_OnTotalVisibleChanged_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_HeavyParticleCannon_AmmoCount_Internal_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.PreConstruct");
		
		UHUD_HeavyParticleCannon_AmmoCount_Internal_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ClipSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ReloadDuration                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_HeavyParticleCannon_AmmoCount_Internal_C::SetData(int32_t ClipSize, float ReloadDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.SetData");
		
		UHUD_HeavyParticleCannon_AmmoCount_Internal_C_SetData_Params params {};
		params.ClipSize = ClipSize;
		params.ReloadDuration = ReloadDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.OnReloadTimeChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_HeavyParticleCannon_AmmoCount_Internal_C::OnReloadTimeChanged_Event(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.OnReloadTimeChanged_Event");
		
		UHUD_HeavyParticleCannon_AmmoCount_Internal_C_OnReloadTimeChanged_Event_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.ExecuteUbergraph_HUD_HeavyParticleCannon_AmmoCount_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_HeavyParticleCannon_AmmoCount_Internal_C::ExecuteUbergraph_HUD_HeavyParticleCannon_AmmoCount_Internal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C.ExecuteUbergraph_HUD_HeavyParticleCannon_AmmoCount_Internal");
		
		UHUD_HeavyParticleCannon_AmmoCount_Internal_C_ExecuteUbergraph_HUD_HeavyParticleCannon_AmmoCount_Internal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_HeavyParticleCannon_AmmoCount_Internal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_HeavyParticleCannon_AmmoCount_Internal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_HeavyParticleCannon_AmmoCount_Internal.HUD_HeavyParticleCannon_AmmoCount_Internal_C");
		return ptr;
	}

}


