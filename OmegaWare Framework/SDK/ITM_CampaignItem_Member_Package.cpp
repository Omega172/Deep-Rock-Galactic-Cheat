﻿/**
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
	 * 		Name   -> Function ITM_CampaignItem_Member.ITM_CampaignItem_Member_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_CampaignItem_Member_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CampaignItem_Member.ITM_CampaignItem_Member_C.Construct");
		
		UITM_CampaignItem_Member_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CampaignItem_Member.ITM_CampaignItem_Member_C.ExecuteUbergraph_ITM_CampaignItem_Member
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CampaignItem_Member_C::ExecuteUbergraph_ITM_CampaignItem_Member(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CampaignItem_Member.ITM_CampaignItem_Member_C.ExecuteUbergraph_ITM_CampaignItem_Member");
		
		UITM_CampaignItem_Member_C_ExecuteUbergraph_ITM_CampaignItem_Member_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_CampaignItem_Member_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_CampaignItem_Member_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_CampaignItem_Member.ITM_CampaignItem_Member_C");
		return ptr;
	}

}


