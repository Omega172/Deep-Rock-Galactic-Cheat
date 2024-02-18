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
	 * 		Name   -> Function LCD_CampaignProgress.LCD_CampaignProgress_C.Construct
	 * 		Flags  -> ()
	 */
	void ULCD_CampaignProgress_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LCD_CampaignProgress.LCD_CampaignProgress_C.Construct");
		
		ULCD_CampaignProgress_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LCD_CampaignProgress.LCD_CampaignProgress_C.OnCampaignChanged_Event_1
	 * 		Flags  -> ()
	 */
	void ULCD_CampaignProgress_C::OnCampaignChanged_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LCD_CampaignProgress.LCD_CampaignProgress_C.OnCampaignChanged_Event_1");
		
		ULCD_CampaignProgress_C_OnCampaignChanged_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LCD_CampaignProgress.LCD_CampaignProgress_C.ExecuteUbergraph_LCD_CampaignProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULCD_CampaignProgress_C::ExecuteUbergraph_LCD_CampaignProgress(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LCD_CampaignProgress.LCD_CampaignProgress_C.ExecuteUbergraph_LCD_CampaignProgress");
		
		ULCD_CampaignProgress_C_ExecuteUbergraph_LCD_CampaignProgress_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULCD_CampaignProgress_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULCD_CampaignProgress_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LCD_CampaignProgress.LCD_CampaignProgress_C");
		return ptr;
	}

}


