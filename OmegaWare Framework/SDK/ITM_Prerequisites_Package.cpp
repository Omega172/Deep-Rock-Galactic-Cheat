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
	 * 		Name   -> Function ITM_Prerequisites.ITM_Prerequisites_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCampaign*                                   Campaign                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RequirementsMet                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Prerequisites_C::SetData(class UCampaign* Campaign, bool* RequirementsMet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Prerequisites.ITM_Prerequisites_C.SetData");
		
		UITM_Prerequisites_C_SetData_Params params {};
		params.Campaign = Campaign;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RequirementsMet != nullptr)
			*RequirementsMet = params.RequirementsMet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Prerequisites.ITM_Prerequisites_C.CreateValidSeedRequirement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCampaignRequirement*                        Requirement                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCampaign*                                   Campaign                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Prerequisites_C::CreateValidSeedRequirement(class UCampaignRequirement* Requirement, class UCampaign* Campaign)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Prerequisites.ITM_Prerequisites_C.CreateValidSeedRequirement");
		
		UITM_Prerequisites_C_CreateValidSeedRequirement_Params params {};
		params.Requirement = Requirement;
		params.Campaign = Campaign;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Prerequisites.ITM_Prerequisites_C.CreateCampaignCompletedRequirement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCamapaignCompletedRequirement*              CampaignReq                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCampaign*                                   Campaign                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Prerequisites_C::CreateCampaignCompletedRequirement(class UCamapaignCompletedRequirement* CampaignReq, class UCampaign* Campaign)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Prerequisites.ITM_Prerequisites_C.CreateCampaignCompletedRequirement");
		
		UITM_Prerequisites_C_CreateCampaignCompletedRequirement_Params params {};
		params.CampaignReq = CampaignReq;
		params.Campaign = Campaign;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Prerequisites.ITM_Prerequisites_C.CreateAnyRequirement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCampaignRequirement*                        Requirenent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCampaign*                                   Campaign                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Prerequisites_C::CreateAnyRequirement(class UCampaignRequirement* Requirenent, class UCampaign* Campaign)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Prerequisites.ITM_Prerequisites_C.CreateAnyRequirement");
		
		UITM_Prerequisites_C_CreateAnyRequirement_Params params {};
		params.Requirenent = Requirenent;
		params.Campaign = Campaign;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Prerequisites.ITM_Prerequisites_C.CreatePlayerRankBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RequiredRank                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Prerequisites_C::CreatePlayerRankBox(int32_t RequiredRank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Prerequisites.ITM_Prerequisites_C.CreatePlayerRankBox");
		
		UITM_Prerequisites_C_CreatePlayerRankBox_Params params {};
		params.RequiredRank = RequiredRank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Prerequisites.ITM_Prerequisites_C.CreateLevelRequirementBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RequiredLevel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerCharacterID*                          ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Prerequisites_C::CreateLevelRequirementBox(int32_t RequiredLevel, class UPlayerCharacterID* ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Prerequisites.ITM_Prerequisites_C.CreateLevelRequirementBox");
		
		UITM_Prerequisites_C_CreateLevelRequirementBox_Params params {};
		params.RequiredLevel = RequiredLevel;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Prerequisites_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Prerequisites_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Prerequisites.ITM_Prerequisites_C");
		return ptr;
	}

}


