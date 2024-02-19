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
	 * 		Name   -> Function HUD_PlayerInfection.HUD_PlayerInfection_C.SetFaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FadeOut                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_PlayerInfection_C::SetFaded(bool FadeOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfection.HUD_PlayerInfection_C.SetFaded");
		
		UHUD_PlayerInfection_C_SetFaded_Params params {};
		params.FadeOut = FadeOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerInfection.HUD_PlayerInfection_C.UpdateInfection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InTemperature                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InChange                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerInfection_C::UpdateInfection(float InTemperature, float InChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfection.HUD_PlayerInfection_C.UpdateInfection");
		
		UHUD_PlayerInfection_C_UpdateInfection_Params params {};
		params.InTemperature = InTemperature;
		params.InChange = InChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerInfection.HUD_PlayerInfection_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerInfection_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfection.HUD_PlayerInfection_C.Construct");
		
		UHUD_PlayerInfection_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerInfection.HUD_PlayerInfection_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_PlayerInfection_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfection.HUD_PlayerInfection_C.PreConstruct");
		
		UHUD_PlayerInfection_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerInfection.HUD_PlayerInfection_C.OnInfectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            IntValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerInfection_C::OnInfectionChanged(int32_t IntValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfection.HUD_PlayerInfection_C.OnInfectionChanged");
		
		UHUD_PlayerInfection_C_OnInfectionChanged_Params params {};
		params.IntValue = IntValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerInfection.HUD_PlayerInfection_C.OnInfectionStateChangedEvent_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInfectionState                                    State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerInfection_C::OnInfectionStateChangedEvent_Event_1(EInfectionState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfection.HUD_PlayerInfection_C.OnInfectionStateChangedEvent_Event_1");
		
		UHUD_PlayerInfection_C_OnInfectionStateChangedEvent_Event_1_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerInfection.HUD_PlayerInfection_C.ExecuteUbergraph_HUD_PlayerInfection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerInfection_C::ExecuteUbergraph_HUD_PlayerInfection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerInfection.HUD_PlayerInfection_C.ExecuteUbergraph_HUD_PlayerInfection");
		
		UHUD_PlayerInfection_C_ExecuteUbergraph_HUD_PlayerInfection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_PlayerInfection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_PlayerInfection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_PlayerInfection.HUD_PlayerInfection_C");
		return ptr;
	}

}


