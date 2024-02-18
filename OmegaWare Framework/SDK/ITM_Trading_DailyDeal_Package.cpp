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
	 * 		Name   -> Function ITM_Trading_DailyDeal.ITM_Trading_DailyDeal_C.UpdateDealText
	 * 		Flags  -> ()
	 */
	void UITM_Trading_DailyDeal_C::UpdateDealText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_DailyDeal.ITM_Trading_DailyDeal_C.UpdateDealText");
		
		UITM_Trading_DailyDeal_C_UpdateDealText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_DailyDeal.ITM_Trading_DailyDeal_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_Trading_DailyDeal_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_DailyDeal.ITM_Trading_DailyDeal_C.Construct");
		
		UITM_Trading_DailyDeal_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Trading_DailyDeal.ITM_Trading_DailyDeal_C.ExecuteUbergraph_ITM_Trading_DailyDeal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Trading_DailyDeal_C::ExecuteUbergraph_ITM_Trading_DailyDeal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Trading_DailyDeal.ITM_Trading_DailyDeal_C.ExecuteUbergraph_ITM_Trading_DailyDeal");
		
		UITM_Trading_DailyDeal_C_ExecuteUbergraph_ITM_Trading_DailyDeal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Trading_DailyDeal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Trading_DailyDeal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Trading_DailyDeal.ITM_Trading_DailyDeal_C");
		return ptr;
	}

}


