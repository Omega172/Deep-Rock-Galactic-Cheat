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
	 * 		Name   -> Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.OnModOverlayClosed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LastURL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UDialog_Modding_TermsAndConditions_C::OnModOverlayClosed(const class FString& LastURL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.OnModOverlayClosed");
		
		UDialog_Modding_TermsAndConditions_C_OnModOverlayClosed_Params params {};
		params.LastURL = LastURL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UDialog_Modding_TermsAndConditions_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.OnKeyUp");
		
		UDialog_Modding_TermsAndConditions_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.Construct
	 * 		Flags  -> ()
	 */
	void UDialog_Modding_TermsAndConditions_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.Construct");
		
		UDialog_Modding_TermsAndConditions_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.ShowTerms
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UModioTermsWrapper*                          Terms                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDialog_Modding_TermsAndConditions_C::ShowTerms(class UModioTermsWrapper* Terms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.ShowTerms");
		
		UDialog_Modding_TermsAndConditions_C_ShowTerms_Params params {};
		params.Terms = Terms;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.BndEvt__Terms_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDialog_Modding_TermsAndConditions_C::BndEvt__Terms_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.BndEvt__Terms_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UDialog_Modding_TermsAndConditions_C_BndEvt__Terms_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.BndEvt__Privacy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDialog_Modding_TermsAndConditions_C::BndEvt__Privacy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.BndEvt__Privacy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UDialog_Modding_TermsAndConditions_C_BndEvt__Privacy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.Disagree
	 * 		Flags  -> ()
	 */
	void UDialog_Modding_TermsAndConditions_C::Disagree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.Disagree");
		
		UDialog_Modding_TermsAndConditions_C_Disagree_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.Agree
	 * 		Flags  -> ()
	 */
	void UDialog_Modding_TermsAndConditions_C::Agree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.Agree");
		
		UDialog_Modding_TermsAndConditions_C_Agree_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDialog_Modding_TermsAndConditions_C::BndEvt__BTN_No_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UDialog_Modding_TermsAndConditions_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDialog_Modding_TermsAndConditions_C::BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UDialog_Modding_TermsAndConditions_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.DummyEventThatLeadToNowhere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Yes                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDialog_Modding_TermsAndConditions_C::DummyEventThatLeadToNowhere(bool Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.DummyEventThatLeadToNowhere");
		
		UDialog_Modding_TermsAndConditions_C_DummyEventThatLeadToNowhere_Params params {};
		params.Yes = Yes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.ExecuteUbergraph_Dialog_Modding_TermsAndConditions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDialog_Modding_TermsAndConditions_C::ExecuteUbergraph_Dialog_Modding_TermsAndConditions(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.ExecuteUbergraph_Dialog_Modding_TermsAndConditions");
		
		UDialog_Modding_TermsAndConditions_C_ExecuteUbergraph_Dialog_Modding_TermsAndConditions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.OnAnswer__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Agree                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDialog_Modding_TermsAndConditions_C::OnAnswer__DelegateSignature(bool Agree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C.OnAnswer__DelegateSignature");
		
		UDialog_Modding_TermsAndConditions_C_OnAnswer__DelegateSignature_Params params {};
		params.Agree = Agree;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialog_Modding_TermsAndConditions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialog_Modding_TermsAndConditions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Dialog_Modding_TermsAndConditions.Dialog_Modding_TermsAndConditions_C");
		return ptr;
	}

}


