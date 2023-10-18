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
	 * 		Name   -> Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_CampaignProgress_NoBrackets_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.PreConstruct");
		
		UITM_CampaignProgress_NoBrackets_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_CampaignProgress_NoBrackets_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.Construct");
		
		UITM_CampaignProgress_NoBrackets_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.Update_Campaign
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCampaign*                                   Campaign                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CampaignProgress_NoBrackets_C::Update_Campaign(class UCampaign* Campaign)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.Update_Campaign");
		
		UITM_CampaignProgress_NoBrackets_C_Update_Campaign_Params params {};
		params.Campaign = Campaign;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.Refresh
	 * 		Flags  -> ()
	 */
	void UITM_CampaignProgress_NoBrackets_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.Refresh");
		
		UITM_CampaignProgress_NoBrackets_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.ExecuteUbergraph_ITM_CampaignProgress_NoBrackets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CampaignProgress_NoBrackets_C::ExecuteUbergraph_ITM_CampaignProgress_NoBrackets(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.ExecuteUbergraph_ITM_CampaignProgress_NoBrackets");
		
		UITM_CampaignProgress_NoBrackets_C_ExecuteUbergraph_ITM_CampaignProgress_NoBrackets_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_CampaignProgress_NoBrackets_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_CampaignProgress_NoBrackets_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C");
		return ptr;
	}

}


