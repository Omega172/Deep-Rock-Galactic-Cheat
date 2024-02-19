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
	 * 		Name   -> Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.SetFaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FadeOut                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_PlayerTemperature_C::SetFaded(bool FadeOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.SetFaded");
		
		UHUD_PlayerTemperature_C_SetFaded_Params params {};
		params.FadeOut = FadeOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.UpdateTemperature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InTemperature                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InChange                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerTemperature_C::UpdateTemperature(float InTemperature, float InChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.UpdateTemperature");
		
		UHUD_PlayerTemperature_C_UpdateTemperature_Params params {};
		params.InTemperature = InTemperature;
		params.InChange = InChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.UpdateArrows
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerTemperature_C::UpdateArrows()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.UpdateArrows");
		
		UHUD_PlayerTemperature_C_UpdateArrows_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerTemperature_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.Construct");
		
		UHUD_PlayerTemperature_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Temperature                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Change                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerTemperature_C::OnTemperatureChanged(float Temperature, float Change)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureChanged");
		
		UHUD_PlayerTemperature_C_OnTemperatureChanged_Params params {};
		params.Temperature = Temperature;
		params.Change = Change;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_PlayerTemperature_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.PreConstruct");
		
		UHUD_PlayerTemperature_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureChangeRate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ChangeRate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerTemperature_C::OnTemperatureChangeRate_Event(int32_t ChangeRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureChangeRate_Event");
		
		UHUD_PlayerTemperature_C_OnTemperatureChangeRate_Event_Params params {};
		params.ChangeRate = ChangeRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.ShowTemperature
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerTemperature_C::ShowTemperature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.ShowTemperature");
		
		UHUD_PlayerTemperature_C_ShowTemperature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnBarVisibilityChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               barVisible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_PlayerTemperature_C::OnBarVisibilityChanged(bool barVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnBarVisibilityChanged");
		
		UHUD_PlayerTemperature_C_OnBarVisibilityChanged_Params params {};
		params.barVisible = barVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerTemperatureState                            State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerTemperature_C::OnTemperatureStateChanged(EPlayerTemperatureState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureStateChanged");
		
		UHUD_PlayerTemperature_C_OnTemperatureStateChanged_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.ExecuteUbergraph_HUD_PlayerTemperature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerTemperature_C::ExecuteUbergraph_HUD_PlayerTemperature(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.ExecuteUbergraph_HUD_PlayerTemperature");
		
		UHUD_PlayerTemperature_C_ExecuteUbergraph_HUD_PlayerTemperature_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_PlayerTemperature_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_PlayerTemperature_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_PlayerTemperature.HUD_PlayerTemperature_C");
		return ptr;
	}

}


