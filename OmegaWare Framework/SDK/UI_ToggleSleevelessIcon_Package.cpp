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
	 * 		Name   -> Function UI_ToggleSleevelessIcon.UI_ToggleSleevelessIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ToggleSleevelessIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ToggleSleevelessIcon.UI_ToggleSleevelessIcon_C.PreConstruct");
		
		UUI_ToggleSleevelessIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ToggleSleevelessIcon.UI_ToggleSleevelessIcon_C.PlayActivateAnimation
	 * 		Flags  -> ()
	 */
	void UUI_ToggleSleevelessIcon_C::PlayActivateAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ToggleSleevelessIcon.UI_ToggleSleevelessIcon_C.PlayActivateAnimation");
		
		UUI_ToggleSleevelessIcon_C_PlayActivateAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ToggleSleevelessIcon.UI_ToggleSleevelessIcon_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHovered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ToggleSleevelessIcon_C::SetHovered(bool IsHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ToggleSleevelessIcon.UI_ToggleSleevelessIcon_C.SetHovered");
		
		UUI_ToggleSleevelessIcon_C_SetHovered_Params params {};
		params.IsHovered = IsHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ToggleSleevelessIcon.UI_ToggleSleevelessIcon_C.OnSleevelessDesireChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DesireSleeveless                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ToggleSleevelessIcon_C::OnSleevelessDesireChanged(bool DesireSleeveless)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ToggleSleevelessIcon.UI_ToggleSleevelessIcon_C.OnSleevelessDesireChanged");
		
		UUI_ToggleSleevelessIcon_C_OnSleevelessDesireChanged_Params params {};
		params.DesireSleeveless = DesireSleeveless;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ToggleSleevelessIcon.UI_ToggleSleevelessIcon_C.OnSleevelessAvailabilityChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAvailable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ToggleSleevelessIcon_C::OnSleevelessAvailabilityChanged(bool IsAvailable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ToggleSleevelessIcon.UI_ToggleSleevelessIcon_C.OnSleevelessAvailabilityChanged");
		
		UUI_ToggleSleevelessIcon_C_OnSleevelessAvailabilityChanged_Params params {};
		params.IsAvailable = IsAvailable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ToggleSleevelessIcon.UI_ToggleSleevelessIcon_C.ExecuteUbergraph_UI_ToggleSleevelessIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ToggleSleevelessIcon_C::ExecuteUbergraph_UI_ToggleSleevelessIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ToggleSleevelessIcon.UI_ToggleSleevelessIcon_C.ExecuteUbergraph_UI_ToggleSleevelessIcon");
		
		UUI_ToggleSleevelessIcon_C_ExecuteUbergraph_UI_ToggleSleevelessIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ToggleSleevelessIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ToggleSleevelessIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ToggleSleevelessIcon.UI_ToggleSleevelessIcon_C");
		return ptr;
	}

}


