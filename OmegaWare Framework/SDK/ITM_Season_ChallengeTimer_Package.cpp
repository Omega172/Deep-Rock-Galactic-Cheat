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
	 * 		Name   -> Function ITM_Season_ChallengeTimer.ITM_Season_ChallengeTimer_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_Season_ChallengeTimer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_ChallengeTimer.ITM_Season_ChallengeTimer_C.Construct");
		
		UITM_Season_ChallengeTimer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_ChallengeTimer.ITM_Season_ChallengeTimer_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Season_ChallengeTimer_C::BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_ChallengeTimer.ITM_Season_ChallengeTimer_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Season_ChallengeTimer_C_BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_ChallengeTimer.ITM_Season_ChallengeTimer_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Season_ChallengeTimer_C::BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_ChallengeTimer.ITM_Season_ChallengeTimer_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Season_ChallengeTimer_C_BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_ChallengeTimer.ITM_Season_ChallengeTimer_C.UpdateTime
	 * 		Flags  -> ()
	 */
	void UITM_Season_ChallengeTimer_C::UpdateTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_ChallengeTimer.ITM_Season_ChallengeTimer_C.UpdateTime");
		
		UITM_Season_ChallengeTimer_C_UpdateTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_ChallengeTimer.ITM_Season_ChallengeTimer_C.ExecuteUbergraph_ITM_Season_ChallengeTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Season_ChallengeTimer_C::ExecuteUbergraph_ITM_Season_ChallengeTimer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_ChallengeTimer.ITM_Season_ChallengeTimer_C.ExecuteUbergraph_ITM_Season_ChallengeTimer");
		
		UITM_Season_ChallengeTimer_C_ExecuteUbergraph_ITM_Season_ChallengeTimer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Season_ChallengeTimer.ITM_Season_ChallengeTimer_C.ShouldGetNewChallenge__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Season_ChallengeTimer_C::ShouldGetNewChallenge__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Season_ChallengeTimer.ITM_Season_ChallengeTimer_C.ShouldGetNewChallenge__DelegateSignature");
		
		UITM_Season_ChallengeTimer_C_ShouldGetNewChallenge__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Season_ChallengeTimer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Season_ChallengeTimer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Season_ChallengeTimer.ITM_Season_ChallengeTimer_C");
		return ptr;
	}

}


