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
	 * 		Name   -> Function HUD_Oxygen.HUD_Oxygen_C.OnOxygenChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            oxygenLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Oxygen_C::OnOxygenChanged_Event_1(int32_t oxygenLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Oxygen.HUD_Oxygen_C.OnOxygenChanged_Event_1");
		
		UHUD_Oxygen_C_OnOxygenChanged_Event_1_Params params {};
		params.oxygenLevel = oxygenLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Oxygen.HUD_Oxygen_C.OnOxygenReplenishingEvent_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Oxygen_C::OnOxygenReplenishingEvent_Event_1(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Oxygen.HUD_Oxygen_C.OnOxygenReplenishingEvent_Event_1");
		
		UHUD_Oxygen_C_OnOxygenReplenishingEvent_Event_1_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Oxygen.HUD_Oxygen_C.40PercentOxygenLeft
	 * 		Flags  -> ()
	 */
	void UHUD_Oxygen_C::_40PercentOxygenLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Oxygen.HUD_Oxygen_C.40PercentOxygenLeft");
		
		UHUD_Oxygen_C__40PercentOxygenLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Oxygen.HUD_Oxygen_C.SetProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Oxygen_C::SetProgress(float CurrentProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Oxygen.HUD_Oxygen_C.SetProgress");
		
		UHUD_Oxygen_C_SetProgress_Params params {};
		params.CurrentProgress = CurrentProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Oxygen.HUD_Oxygen_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Oxygen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Oxygen.HUD_Oxygen_C.Construct");
		
		UHUD_Oxygen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Oxygen.HUD_Oxygen_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Oxygen_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Oxygen.HUD_Oxygen_C.PreConstruct");
		
		UHUD_Oxygen_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Oxygen.HUD_Oxygen_C.ExecuteUbergraph_HUD_Oxygen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Oxygen_C::ExecuteUbergraph_HUD_Oxygen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Oxygen.HUD_Oxygen_C.ExecuteUbergraph_HUD_Oxygen");
		
		UHUD_Oxygen_C_ExecuteUbergraph_HUD_Oxygen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Oxygen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Oxygen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Oxygen.HUD_Oxygen_C");
		return ptr;
	}

}


