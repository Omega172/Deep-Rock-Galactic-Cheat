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
	 * 		Name   -> Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.UpdateTitle
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoalResult_ConsoleScreenV1_C::UpdateTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.UpdateTitle");
		
		UITM_CommunityGoalResult_ConsoleScreenV1_C_UpdateTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.UpdateIcon
	 * 		Flags  -> ()
	 */
	void UITM_CommunityGoalResult_ConsoleScreenV1_C::UpdateIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.UpdateIcon");
		
		UITM_CommunityGoalResult_ConsoleScreenV1_C_UpdateIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.SetFaction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommunityGoalFaction*                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoalResult_ConsoleScreenV1_C::SetFaction(class UCommunityGoalFaction* Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.SetFaction");
		
		UITM_CommunityGoalResult_ConsoleScreenV1_C_SetFaction_Params params {};
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_CommunityGoalResult_ConsoleScreenV1_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.PreConstruct");
		
		UITM_CommunityGoalResult_ConsoleScreenV1_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.SetResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Tier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoalResult_ConsoleScreenV1_C::SetResult(int32_t Score, int32_t Tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.SetResult");
		
		UITM_CommunityGoalResult_ConsoleScreenV1_C_SetResult_Params params {};
		params.Score = Score;
		params.Tier = Tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.ExecuteUbergraph_ITM_CommunityGoalResult_ConsoleScreenV1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CommunityGoalResult_ConsoleScreenV1_C::ExecuteUbergraph_ITM_CommunityGoalResult_ConsoleScreenV1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C.ExecuteUbergraph_ITM_CommunityGoalResult_ConsoleScreenV1");
		
		UITM_CommunityGoalResult_ConsoleScreenV1_C_ExecuteUbergraph_ITM_CommunityGoalResult_ConsoleScreenV1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_CommunityGoalResult_ConsoleScreenV1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_CommunityGoalResult_ConsoleScreenV1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_CommunityGoalResult_ConsoleScreenV1.ITM_CommunityGoalResult_ConsoleScreenV1_C");
		return ptr;
	}

}


