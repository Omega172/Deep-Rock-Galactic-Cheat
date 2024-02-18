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
	 * 		Name   -> Function LCD_MissionReadout_Biome.LCD_MissionReadout_Biome_C.BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           InMission                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULCD_MissionReadout_Biome_C::BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature(class UGeneratedMission* InMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_Biome.LCD_MissionReadout_Biome_C.BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature");
		
		ULCD_MissionReadout_Biome_C_BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature_Params params {};
		params.InMission = InMission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LCD_MissionReadout_Biome.LCD_MissionReadout_Biome_C.Construct
	 * 		Flags  -> ()
	 */
	void ULCD_MissionReadout_Biome_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_Biome.LCD_MissionReadout_Biome_C.Construct");
		
		ULCD_MissionReadout_Biome_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LCD_MissionReadout_Biome.LCD_MissionReadout_Biome_C.ExecuteUbergraph_LCD_MissionReadout_Biome
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULCD_MissionReadout_Biome_C::ExecuteUbergraph_LCD_MissionReadout_Biome(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_Biome.LCD_MissionReadout_Biome_C.ExecuteUbergraph_LCD_MissionReadout_Biome");
		
		ULCD_MissionReadout_Biome_C_ExecuteUbergraph_LCD_MissionReadout_Biome_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULCD_MissionReadout_Biome_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULCD_MissionReadout_Biome_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LCD_MissionReadout_Biome.LCD_MissionReadout_Biome_C");
		return ptr;
	}

}


