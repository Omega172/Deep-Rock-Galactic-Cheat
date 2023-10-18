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
	 * 		Name   -> Function HUD_JetBootsFuel_Vertical.HUD_JetBootsFuel_Vertical_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_JetBootsFuel_Vertical_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_JetBootsFuel_Vertical.HUD_JetBootsFuel_Vertical_C.PreConstruct");
		
		UHUD_JetBootsFuel_Vertical_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_JetBootsFuel_Vertical.HUD_JetBootsFuel_Vertical_C.SetProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               overHeated                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_JetBootsFuel_Vertical_C::SetProgress(float CurrentProgress, bool overHeated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_JetBootsFuel_Vertical.HUD_JetBootsFuel_Vertical_C.SetProgress");
		
		UHUD_JetBootsFuel_Vertical_C_SetProgress_Params params {};
		params.CurrentProgress = CurrentProgress;
		params.overHeated = overHeated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_JetBootsFuel_Vertical.HUD_JetBootsFuel_Vertical_C.SetIsActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_JetBootsFuel_Vertical_C::SetIsActive(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_JetBootsFuel_Vertical.HUD_JetBootsFuel_Vertical_C.SetIsActive");
		
		UHUD_JetBootsFuel_Vertical_C_SetIsActive_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_JetBootsFuel_Vertical.HUD_JetBootsFuel_Vertical_C.ExecuteUbergraph_HUD_JetBootsFuel_Vertical
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_JetBootsFuel_Vertical_C::ExecuteUbergraph_HUD_JetBootsFuel_Vertical(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_JetBootsFuel_Vertical.HUD_JetBootsFuel_Vertical_C.ExecuteUbergraph_HUD_JetBootsFuel_Vertical");
		
		UHUD_JetBootsFuel_Vertical_C_ExecuteUbergraph_HUD_JetBootsFuel_Vertical_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_JetBootsFuel_Vertical_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_JetBootsFuel_Vertical_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_JetBootsFuel_Vertical.HUD_JetBootsFuel_Vertical_C");
		return ptr;
	}

}


