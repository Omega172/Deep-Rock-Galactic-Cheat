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
	 * 		Name   -> Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UITM_UnlockedCelebration_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.OnKeyUp");
		
		UITM_UnlockedCelebration_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_UnlockedCelebration_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.Construct");
		
		UITM_UnlockedCelebration_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_UnlockedCelebration_C::BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UITM_UnlockedCelebration_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.ClickContinue
	 * 		Flags  -> ()
	 */
	void UITM_UnlockedCelebration_C::ClickContinue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.ClickContinue");
		
		UITM_UnlockedCelebration_C_ClickContinue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.ShowRewards
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMasteryItem                                Rewards                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UnlockedCelebration_C::ShowRewards(const struct FMasteryItem& Rewards, class UClass* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.ShowRewards");
		
		UITM_UnlockedCelebration_C_ShowRewards_Params params {};
		params.Rewards = Rewards;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.ExecuteUbergraph_ITM_UnlockedCelebration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_UnlockedCelebration_C::ExecuteUbergraph_ITM_UnlockedCelebration(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.ExecuteUbergraph_ITM_UnlockedCelebration");
		
		UITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.OnFinished__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UUnlockReward*>                       Rewards                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UITM_UnlockedCelebration_C::OnFinished__DelegateSignature(TArray<class UUnlockReward*>* Rewards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.OnFinished__DelegateSignature");
		
		UITM_UnlockedCelebration_C_OnFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rewards != nullptr)
			*Rewards = params.Rewards;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_UnlockedCelebration_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_UnlockedCelebration_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_UnlockedCelebration.ITM_UnlockedCelebration_C");
		return ptr;
	}

}


