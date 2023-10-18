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
	 * 		Name   -> Function ITM_RestoreSave.ITM_RestoreSave_C.ShowWindow
	 * 		Flags  -> ()
	 */
	void UITM_RestoreSave_C::ShowWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.ShowWindow");
		
		UITM_RestoreSave_C_ShowWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RestoreSave.ITM_RestoreSave_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_RestoreSave_C::BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature");
		
		UITM_RestoreSave_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RestoreSave.ITM_RestoreSave_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_RestoreSave_C::BndEvt__BTN_No_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature");
		
		UITM_RestoreSave_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RestoreSave.ITM_RestoreSave_C.HideUIDelayed
	 * 		Flags  -> ()
	 */
	void UITM_RestoreSave_C::HideUIDelayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.HideUIDelayed");
		
		UITM_RestoreSave_C_HideUIDelayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RestoreSave.ITM_RestoreSave_C.Check Savegame
	 * 		Flags  -> ()
	 */
	void UITM_RestoreSave_C::CheckSavegame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.Check Savegame");
		
		UITM_RestoreSave_C_CheckSavegame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RestoreSave.ITM_RestoreSave_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_RestoreSave_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.PreConstruct");
		
		UITM_RestoreSave_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RestoreSave.ITM_RestoreSave_C.ExecuteUbergraph_ITM_RestoreSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_RestoreSave_C::ExecuteUbergraph_ITM_RestoreSave(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.ExecuteUbergraph_ITM_RestoreSave");
		
		UITM_RestoreSave_C_ExecuteUbergraph_ITM_RestoreSave_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RestoreSave.ITM_RestoreSave_C.OnShowRestoreSaveClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_RestoreSave_C::OnShowRestoreSaveClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.OnShowRestoreSaveClicked__DelegateSignature");
		
		UITM_RestoreSave_C_OnShowRestoreSaveClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_RestoreSave.ITM_RestoreSave_C.ImageReady__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UITM_RestoreSave_C::ImageReady__DelegateSignature(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.ImageReady__DelegateSignature");
		
		UITM_RestoreSave_C_ImageReady__DelegateSignature_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_RestoreSave_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_RestoreSave_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_RestoreSave.ITM_RestoreSave_C");
		return ptr;
	}

}


