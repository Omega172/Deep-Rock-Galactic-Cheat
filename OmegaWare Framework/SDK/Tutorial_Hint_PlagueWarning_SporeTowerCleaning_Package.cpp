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
	 * 		Name   -> Function Tutorial_Hint_PlagueWarning_SporeTowerCleaning.Tutorial_Hint_PlagueWarning_SporeTowerCleaning_C.ReceiveOnInitialized
	 * 		Flags  -> ()
	 */
	void UTutorial_Hint_PlagueWarning_SporeTowerCleaning_C::ReceiveOnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_PlagueWarning_SporeTowerCleaning.Tutorial_Hint_PlagueWarning_SporeTowerCleaning_C.ReceiveOnInitialized");
		
		UTutorial_Hint_PlagueWarning_SporeTowerCleaning_C_ReceiveOnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Tutorial_Hint_PlagueWarning_SporeTowerCleaning.Tutorial_Hint_PlagueWarning_SporeTowerCleaning_C.OnTriggerCleaningTutorial
	 * 		Flags  -> ()
	 */
	void UTutorial_Hint_PlagueWarning_SporeTowerCleaning_C::OnTriggerCleaningTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_PlagueWarning_SporeTowerCleaning.Tutorial_Hint_PlagueWarning_SporeTowerCleaning_C.OnTriggerCleaningTutorial");
		
		UTutorial_Hint_PlagueWarning_SporeTowerCleaning_C_OnTriggerCleaningTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Tutorial_Hint_PlagueWarning_SporeTowerCleaning.Tutorial_Hint_PlagueWarning_SporeTowerCleaning_C.OnTutorialTaskFinished
	 * 		Flags  -> ()
	 */
	void UTutorial_Hint_PlagueWarning_SporeTowerCleaning_C::OnTutorialTaskFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_PlagueWarning_SporeTowerCleaning.Tutorial_Hint_PlagueWarning_SporeTowerCleaning_C.OnTutorialTaskFinished");
		
		UTutorial_Hint_PlagueWarning_SporeTowerCleaning_C_OnTutorialTaskFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Tutorial_Hint_PlagueWarning_SporeTowerCleaning.Tutorial_Hint_PlagueWarning_SporeTowerCleaning_C.ExecuteUbergraph_Tutorial_Hint_PlagueWarning_SporeTowerCleaning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorial_Hint_PlagueWarning_SporeTowerCleaning_C::ExecuteUbergraph_Tutorial_Hint_PlagueWarning_SporeTowerCleaning(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_PlagueWarning_SporeTowerCleaning.Tutorial_Hint_PlagueWarning_SporeTowerCleaning_C.ExecuteUbergraph_Tutorial_Hint_PlagueWarning_SporeTowerCleaning");
		
		UTutorial_Hint_PlagueWarning_SporeTowerCleaning_C_ExecuteUbergraph_Tutorial_Hint_PlagueWarning_SporeTowerCleaning_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTutorial_Hint_PlagueWarning_SporeTowerCleaning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorial_Hint_PlagueWarning_SporeTowerCleaning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_Hint_PlagueWarning_SporeTowerCleaning.Tutorial_Hint_PlagueWarning_SporeTowerCleaning_C");
		return ptr;
	}

}


