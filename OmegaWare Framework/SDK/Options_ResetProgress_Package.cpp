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
	 * 		Name   -> Function Options_ResetProgress.Options_ResetProgress_C.OnFailure_E60EC8DB4E80DB2E20AA1A9F09A53224
	 * 		Flags  -> ()
	 */
	void UOptions_ResetProgress_C::OnFailure_E60EC8DB4E80DB2E20AA1A9F09A53224()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ResetProgress.Options_ResetProgress_C.OnFailure_E60EC8DB4E80DB2E20AA1A9F09A53224");
		
		UOptions_ResetProgress_C_OnFailure_E60EC8DB4E80DB2E20AA1A9F09A53224_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ResetProgress.Options_ResetProgress_C.OnSuccess_E60EC8DB4E80DB2E20AA1A9F09A53224
	 * 		Flags  -> ()
	 */
	void UOptions_ResetProgress_C::OnSuccess_E60EC8DB4E80DB2E20AA1A9F09A53224()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ResetProgress.Options_ResetProgress_C.OnSuccess_E60EC8DB4E80DB2E20AA1A9F09A53224");
		
		UOptions_ResetProgress_C_OnSuccess_E60EC8DB4E80DB2E20AA1A9F09A53224_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ResetProgress.Options_ResetProgress_C.BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ResetProgress_C::BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ResetProgress.Options_ResetProgress_C.BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature");
		
		UOptions_ResetProgress_C_BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ResetProgress.Options_ResetProgress_C.Answer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Yes                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_ResetProgress_C::Answer(bool Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ResetProgress.Options_ResetProgress_C.Answer");
		
		UOptions_ResetProgress_C_Answer_Params params {};
		params.Yes = Yes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ResetProgress.Options_ResetProgress_C.TutorialAnswer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Yes                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_ResetProgress_C::TutorialAnswer(bool Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ResetProgress.Options_ResetProgress_C.TutorialAnswer");
		
		UOptions_ResetProgress_C_TutorialAnswer_Params params {};
		params.Yes = Yes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ResetProgress.Options_ResetProgress_C.ExecuteUbergraph_Options_ResetProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_ResetProgress_C::ExecuteUbergraph_Options_ResetProgress(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ResetProgress.Options_ResetProgress_C.ExecuteUbergraph_Options_ResetProgress");
		
		UOptions_ResetProgress_C_ExecuteUbergraph_Options_ResetProgress_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_ResetProgress_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_ResetProgress_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_ResetProgress.Options_ResetProgress_C");
		return ptr;
	}

}


