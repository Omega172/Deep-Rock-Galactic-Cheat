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
	 * 		Name   -> Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.AdjustCLBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULCD_MissionReadout_HazCompLen_C::AdjustCLBar(float InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.AdjustCLBar");
		
		ULCD_MissionReadout_HazCompLen_C_AdjustCLBar_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.AdjustBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULCD_MissionReadout_HazCompLen_C::AdjustBar(float InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.AdjustBar");
		
		ULCD_MissionReadout_HazCompLen_C_AdjustBar_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.SetGeneratedMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           InMission                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULCD_MissionReadout_HazCompLen_C::SetGeneratedMission(class UGeneratedMission* InMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.SetGeneratedMission");
		
		ULCD_MissionReadout_HazCompLen_C_SetGeneratedMission_Params params {};
		params.InMission = InMission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULCD_MissionReadout_HazCompLen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.Tick");
		
		ULCD_MissionReadout_HazCompLen_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           InMission                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULCD_MissionReadout_HazCompLen_C::BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature(class UGeneratedMission* InMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature");
		
		ULCD_MissionReadout_HazCompLen_C_BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature_Params params {};
		params.InMission = InMission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.ExecuteUbergraph_LCD_MissionReadout_HazCompLen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULCD_MissionReadout_HazCompLen_C::ExecuteUbergraph_LCD_MissionReadout_HazCompLen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.ExecuteUbergraph_LCD_MissionReadout_HazCompLen");
		
		ULCD_MissionReadout_HazCompLen_C_ExecuteUbergraph_LCD_MissionReadout_HazCompLen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULCD_MissionReadout_HazCompLen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULCD_MissionReadout_HazCompLen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C");
		return ptr;
	}

}


