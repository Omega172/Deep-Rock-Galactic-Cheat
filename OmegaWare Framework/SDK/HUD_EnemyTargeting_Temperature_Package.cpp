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
	 * 		Name   -> Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.SetColors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                FillColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                BackgroundColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Revert                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_EnemyTargeting_Temperature_C::SetColors(const struct FLinearColor& FillColor, const struct FLinearColor& BackgroundColor, bool Revert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.SetColors");
		
		UHUD_EnemyTargeting_Temperature_C_SetColors_Params params {};
		params.FillColor = FillColor;
		params.BackgroundColor = BackgroundColor;
		params.Revert = Revert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.SetTemperatureEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InEffect                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_EnemyTargeting_Temperature_C::SetTemperatureEffect(float InEffect, bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.SetTemperatureEffect");
		
		UHUD_EnemyTargeting_Temperature_C_SetTemperatureEffect_Params params {};
		params.InEffect = InEffect;
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_EnemyTargeting_Temperature_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.Tick");
		
		UHUD_EnemyTargeting_Temperature_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_EnemyTargeting_Temperature_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.PreConstruct");
		
		UHUD_EnemyTargeting_Temperature_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.ExecuteUbergraph_HUD_EnemyTargeting_Temperature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_EnemyTargeting_Temperature_C::ExecuteUbergraph_HUD_EnemyTargeting_Temperature(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.ExecuteUbergraph_HUD_EnemyTargeting_Temperature");
		
		UHUD_EnemyTargeting_Temperature_C_ExecuteUbergraph_HUD_EnemyTargeting_Temperature_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_EnemyTargeting_Temperature_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_EnemyTargeting_Temperature_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C");
		return ptr;
	}

}


