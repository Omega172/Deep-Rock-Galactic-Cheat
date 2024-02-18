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
	 * 		Name   -> Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.FindOverlayWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerAfflictionOverlay*                    OverlayData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CreateIfNew                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPlayerAfflictionOverlayWidget*              OutWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScreenOverlay_Afflictions_C::FindOverlayWidget(class UPlayerAfflictionOverlay* OverlayData, bool CreateIfNew, class UPlayerAfflictionOverlayWidget** OutWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.FindOverlayWidget");
		
		UScreenOverlay_Afflictions_C_FindOverlayWidget_Params params {};
		params.OverlayData = OverlayData;
		params.CreateIfNew = CreateIfNew;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWidget != nullptr)
			*OutWidget = params.OutWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.Construct
	 * 		Flags  -> ()
	 */
	void UScreenOverlay_Afflictions_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.Construct");
		
		UScreenOverlay_Afflictions_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.OnShowOverlay_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerAfflictionOverlay*                    Overlay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScreenOverlay_Afflictions_C::OnShowOverlay_Event(class UPlayerAfflictionOverlay* Overlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.OnShowOverlay_Event");
		
		UScreenOverlay_Afflictions_C_OnShowOverlay_Event_Params params {};
		params.Overlay = Overlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.OnHideOverlay_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerAfflictionOverlay*                    Overlay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScreenOverlay_Afflictions_C::OnHideOverlay_Event(class UPlayerAfflictionOverlay* Overlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.OnHideOverlay_Event");
		
		UScreenOverlay_Afflictions_C_OnHideOverlay_Event_Params params {};
		params.Overlay = Overlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.ExecuteUbergraph_ScreenOverlay_Afflictions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScreenOverlay_Afflictions_C::ExecuteUbergraph_ScreenOverlay_Afflictions(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.ExecuteUbergraph_ScreenOverlay_Afflictions");
		
		UScreenOverlay_Afflictions_C_ExecuteUbergraph_ScreenOverlay_Afflictions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScreenOverlay_Afflictions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScreenOverlay_Afflictions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C");
		return ptr;
	}

}


