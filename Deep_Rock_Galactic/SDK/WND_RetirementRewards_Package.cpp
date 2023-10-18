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
	 * 		Name   -> Function WND_RetirementRewards.WND_RetirementRewards_C.GetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FClaimableRewardView                        OutData                                                    (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWND_RetirementRewards_C::GetData(struct FClaimableRewardView* OutData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_RetirementRewards.WND_RetirementRewards_C.GetData");
		
		UWND_RetirementRewards_C_GetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutData != nullptr)
			*OutData = params.OutData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWND_RetirementRewards_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWND_RetirementRewards_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WND_RetirementRewards.WND_RetirementRewards_C");
		return ptr;
	}

}


