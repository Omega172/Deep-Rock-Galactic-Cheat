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
	 * 		Name   -> Function ITM_CampaignCompletedRequirement.ITM_CampaignCompletedRequirement_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_CampaignCompletedRequirement_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CampaignCompletedRequirement.ITM_CampaignCompletedRequirement_C.Construct");
		
		UITM_CampaignCompletedRequirement_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CampaignCompletedRequirement.ITM_CampaignCompletedRequirement_C.ExecuteUbergraph_ITM_CampaignCompletedRequirement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CampaignCompletedRequirement_C::ExecuteUbergraph_ITM_CampaignCompletedRequirement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CampaignCompletedRequirement.ITM_CampaignCompletedRequirement_C.ExecuteUbergraph_ITM_CampaignCompletedRequirement");
		
		UITM_CampaignCompletedRequirement_C_ExecuteUbergraph_ITM_CampaignCompletedRequirement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_CampaignCompletedRequirement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_CampaignCompletedRequirement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_CampaignCompletedRequirement.ITM_CampaignCompletedRequirement_C");
		return ptr;
	}

}


