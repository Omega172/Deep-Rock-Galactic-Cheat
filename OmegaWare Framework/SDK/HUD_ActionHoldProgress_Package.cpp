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
	 * 		Name   -> Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_ActionHoldProgress_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.PreConstruct");
		
		UHUD_ActionHoldProgress_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_ActionHoldProgress_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.Construct");
		
		UHUD_ActionHoldProgress_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.OnActionHoldProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ActionHoldProgress_C::OnActionHoldProgress(const class FText& Description, float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.OnActionHoldProgress");
		
		UHUD_ActionHoldProgress_C_OnActionHoldProgress_Params params {};
		params.Description = Description;
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.ExecuteUbergraph_HUD_ActionHoldProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_ActionHoldProgress_C::ExecuteUbergraph_HUD_ActionHoldProgress(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.ExecuteUbergraph_HUD_ActionHoldProgress");
		
		UHUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_ActionHoldProgress_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_ActionHoldProgress_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_ActionHoldProgress.HUD_ActionHoldProgress_C");
		return ptr;
	}

}


