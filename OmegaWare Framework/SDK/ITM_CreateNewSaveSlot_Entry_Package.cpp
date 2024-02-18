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
	 * 		Name   -> Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.CreateCurrentProgressButtonToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UITM_CreateNewSaveSlot_Entry_C::CreateCurrentProgressButtonToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.CreateCurrentProgressButtonToolTip");
		
		UITM_CreateNewSaveSlot_Entry_C_CreateCurrentProgressButtonToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.CheckForIlligalChars
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsIlligal                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_CreateNewSaveSlot_Entry_C::CheckForIlligalChars(const class FString& inString, bool* IsIlligal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.CheckForIlligalChars");
		
		UITM_CreateNewSaveSlot_Entry_C_CheckForIlligalChars_Params params {};
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsIlligal != nullptr)
			*IsIlligal = params.IsIlligal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.ChangeSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               StartTutorial                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_CreateNewSaveSlot_Entry_C::ChangeSave(const class FString& Name, bool Reset, bool StartTutorial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.ChangeSave");
		
		UITM_CreateNewSaveSlot_Entry_C_ChangeSave_Params params {};
		params.Name = Name;
		params.Reset = Reset;
		params.StartTutorial = StartTutorial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.SaveSlotNameExists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Exists                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_CreateNewSaveSlot_Entry_C::SaveSlotNameExists(bool* Exists)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.SaveSlotNameExists");
		
		UITM_CreateNewSaveSlot_Entry_C_SaveSlotNameExists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Exists != nullptr)
			*Exists = params.Exists;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.SaveNameInputError
	 * 		Flags  -> ()
	 */
	void UITM_CreateNewSaveSlot_Entry_C::SaveNameInputError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.SaveNameInputError");
		
		UITM_CreateNewSaveSlot_Entry_C_SaveNameInputError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_2_OnTextCommitted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		unsigned char                                      CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CreateNewSaveSlot_Entry_C::BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_2_OnTextCommitted__DelegateSignature(const class FText& Text, unsigned char CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_2_OnTextCommitted__DelegateSignature");
		
		UITM_CreateNewSaveSlot_Entry_C_BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_2_OnTextCommitted__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CreateNewSaveSlot_Entry_C::BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature");
		
		UITM_CreateNewSaveSlot_Entry_C_BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.Answer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Yes                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_CreateNewSaveSlot_Entry_C::Answer(bool Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.Answer");
		
		UITM_CreateNewSaveSlot_Entry_C_Answer_Params params {};
		params.Yes = Yes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.BndEvt__Basic_NewProgress_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CreateNewSaveSlot_Entry_C::BndEvt__Basic_NewProgress_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.BndEvt__Basic_NewProgress_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature");
		
		UITM_CreateNewSaveSlot_Entry_C_BndEvt__Basic_NewProgress_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.TutorialAnswer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Yes                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_CreateNewSaveSlot_Entry_C::TutorialAnswer(bool Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.TutorialAnswer");
		
		UITM_CreateNewSaveSlot_Entry_C_TutorialAnswer_Params params {};
		params.Yes = Yes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UITM_CreateNewSaveSlot_Entry_C::BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature");
		
		UITM_CreateNewSaveSlot_Entry_C_BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.ExecuteUbergraph_ITM_CreateNewSaveSlot_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CreateNewSaveSlot_Entry_C::ExecuteUbergraph_ITM_CreateNewSaveSlot_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.ExecuteUbergraph_ITM_CreateNewSaveSlot_Entry");
		
		UITM_CreateNewSaveSlot_Entry_C_ExecuteUbergraph_ITM_CreateNewSaveSlot_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.OnSaveslotCreated__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CreateNewSaveSlot_Entry_C::OnSaveslotCreated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C.OnSaveslotCreated__DelegateSignature");
		
		UITM_CreateNewSaveSlot_Entry_C_OnSaveslotCreated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_CreateNewSaveSlot_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_CreateNewSaveSlot_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_CreateNewSaveSlot_Entry.ITM_CreateNewSaveSlot_Entry_C");
		return ptr;
	}

}


