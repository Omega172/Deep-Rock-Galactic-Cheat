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
	 * 		Name   -> Function ITM_Community_Console_ClaimReward.ITM_Community_Console_ClaimReward_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Community_Console_ClaimReward_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Community_Console_ClaimReward.ITM_Community_Console_ClaimReward_C.PreConstruct");
		
		UITM_Community_Console_ClaimReward_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Community_Console_ClaimReward.ITM_Community_Console_ClaimReward_C.ExecuteUbergraph_ITM_Community_Console_ClaimReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Community_Console_ClaimReward_C::ExecuteUbergraph_ITM_Community_Console_ClaimReward(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Community_Console_ClaimReward.ITM_Community_Console_ClaimReward_C.ExecuteUbergraph_ITM_Community_Console_ClaimReward");
		
		UITM_Community_Console_ClaimReward_C_ExecuteUbergraph_ITM_Community_Console_ClaimReward_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Community_Console_ClaimReward_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Community_Console_ClaimReward_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Community_Console_ClaimReward.ITM_Community_Console_ClaimReward_C");
		return ptr;
	}

}


