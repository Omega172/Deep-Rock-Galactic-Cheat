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
	 * 		Name   -> Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.UpdateThisSpacer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     ThisSpacer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPanelWidget*                                ThisAfflictionBox                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPanelWidget*                                OtherAfflictionBox                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TemperatureIsVisible                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_DamageClass_Indicator_C::UpdateThisSpacer(class UWidget* ThisSpacer, class UPanelWidget* ThisAfflictionBox, class UPanelWidget* OtherAfflictionBox, bool TemperatureIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.UpdateThisSpacer");
		
		UHUD_DamageClass_Indicator_C_UpdateThisSpacer_Params params {};
		params.ThisSpacer = ThisSpacer;
		params.ThisAfflictionBox = ThisAfflictionBox;
		params.OtherAfflictionBox = OtherAfflictionBox;
		params.TemperatureIsVisible = TemperatureIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.UpdateSpacers
	 * 		Flags  -> ()
	 */
	void UHUD_DamageClass_Indicator_C::UpdateSpacers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.UpdateSpacers");
		
		UHUD_DamageClass_Indicator_C_UpdateSpacers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.ClearIcons
	 * 		Flags  -> ()
	 */
	void UHUD_DamageClass_Indicator_C::ClearIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.ClearIcons");
		
		UHUD_DamageClass_Indicator_C_ClearIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.CreateIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPawnAffliction*                             Affliction                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UHUD_DamageClass_Item_C* UHUD_DamageClass_Indicator_C::CreateIcon(class UPawnAffliction* Affliction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.CreateIcon");
		
		UHUD_DamageClass_Indicator_C_CreateIcon_Params params {};
		params.Affliction = Affliction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_DamageClass_Indicator_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.Construct");
		
		UHUD_DamageClass_Indicator_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.OnAfflictionActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPawnAffliction*                             Affliction                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_DamageClass_Indicator_C::OnAfflictionActivated(class UPawnAffliction* Affliction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.OnAfflictionActivated");
		
		UHUD_DamageClass_Indicator_C_OnAfflictionActivated_Params params {};
		params.Affliction = Affliction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.OnAfflictionDeactivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPawnAffliction*                             Affliction                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_DamageClass_Indicator_C::OnAfflictionDeactivated(class UPawnAffliction* Affliction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.OnAfflictionDeactivated");
		
		UHUD_DamageClass_Indicator_C_OnAfflictionDeactivated_Params params {};
		params.Affliction = Affliction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.Elapsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUD_DamageClass_Item_C*                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_DamageClass_Indicator_C::Elapsed(class UHUD_DamageClass_Item_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.Elapsed");
		
		UHUD_DamageClass_Indicator_C_Elapsed_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.BndEvt__HUD_PlayerTemperature_K2Node_ComponentBoundEvent_0_VisibilityChangedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_DamageClass_Indicator_C::BndEvt__HUD_PlayerTemperature_K2Node_ComponentBoundEvent_0_VisibilityChangedDelegate__DelegateSignature(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.BndEvt__HUD_PlayerTemperature_K2Node_ComponentBoundEvent_0_VisibilityChangedDelegate__DelegateSignature");
		
		UHUD_DamageClass_Indicator_C_BndEvt__HUD_PlayerTemperature_K2Node_ComponentBoundEvent_0_VisibilityChangedDelegate__DelegateSignature_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.ExecuteUbergraph_HUD_DamageClass_Indicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_DamageClass_Indicator_C::ExecuteUbergraph_HUD_DamageClass_Indicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.ExecuteUbergraph_HUD_DamageClass_Indicator");
		
		UHUD_DamageClass_Indicator_C_ExecuteUbergraph_HUD_DamageClass_Indicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_DamageClass_Indicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_DamageClass_Indicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C");
		return ptr;
	}

}


