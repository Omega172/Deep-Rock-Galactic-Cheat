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
	 * 		Name   -> Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.Handle Key Down
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               OutHandled                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FEventReply                                 OutReply                                                   (Parm, OutParm)
	 */
	void UITM_OnlineRestricted_C::HandleKeyDown(const struct FKeyEvent& KeyEvent, bool* OutHandled, struct FEventReply* OutReply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.Handle Key Down");
		
		UITM_OnlineRestricted_C_HandleKeyDown_Params params {};
		params.KeyEvent = KeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHandled != nullptr)
			*OutHandled = params.OutHandled;
		if (OutReply != nullptr)
			*OutReply = params.OutReply;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.SetFontSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            inFontSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_OnlineRestricted_C::SetFontSize(int32_t inFontSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.SetFontSize");
		
		UITM_OnlineRestricted_C_SetFontSize_Params params {};
		params.inFontSize = inFontSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UITM_OnlineRestricted_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.OnKeyDown");
		
		UITM_OnlineRestricted_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.SetBlockSolution
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBlueprintablePrivilegeResults                     priviligeResults                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_OnlineRestricted_C::SetBlockSolution(EBlueprintablePrivilegeResults priviligeResults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.SetBlockSolution");
		
		UITM_OnlineRestricted_C_SetBlockSolution_Params params {};
		params.priviligeResults = priviligeResults;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.SetBlockedReasonString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EBlueprintablePrivilegeResults>             InResults                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UITM_OnlineRestricted_C::SetBlockedReasonString(TArray<EBlueprintablePrivilegeResults>* InResults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.SetBlockedReasonString");
		
		UITM_OnlineRestricted_C_SetBlockedReasonString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InResults != nullptr)
			*InResults = params.InResults;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.Should Show Online Restriction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldShow                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_OnlineRestricted_C::ShouldShowOnlineRestriction(bool* ShouldShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.Should Show Online Restriction");
		
		UITM_OnlineRestricted_C_ShouldShowOnlineRestriction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldShow != nullptr)
			*ShouldShow = params.ShouldShow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_OnlineRestricted_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.PreConstruct");
		
		UITM_OnlineRestricted_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.Resolve Issue
	 * 		Flags  -> ()
	 */
	void UITM_OnlineRestricted_C::ResolveIssue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.Resolve Issue");
		
		UITM_OnlineRestricted_C_ResolveIssue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.Refresh Block Reasons
	 * 		Flags  -> ()
	 */
	void UITM_OnlineRestricted_C::RefreshBlockReasons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.Refresh Block Reasons");
		
		UITM_OnlineRestricted_C_RefreshBlockReasons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_OnlineRestricted_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.Construct");
		
		UITM_OnlineRestricted_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.BndEvt__Basic_FlatGradientButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_OnlineRestricted_C::BndEvt__Basic_FlatGradientButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.BndEvt__Basic_FlatGradientButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UITM_OnlineRestricted_C_BndEvt__Basic_FlatGradientButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.Show external resolve UI right away
	 * 		Flags  -> ()
	 */
	void UITM_OnlineRestricted_C::ShowexternalresolveUIrightaway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.Show external resolve UI right away");
		
		UITM_OnlineRestricted_C_ShowexternalresolveUIrightaway_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.BndEvt__Button_57_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_OnlineRestricted_C::BndEvt__Button_57_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.BndEvt__Button_57_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UITM_OnlineRestricted_C_BndEvt__Button_57_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.ExecuteUbergraph_ITM_OnlineRestricted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_OnlineRestricted_C::ExecuteUbergraph_ITM_OnlineRestricted(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.ExecuteUbergraph_ITM_OnlineRestricted");
		
		UITM_OnlineRestricted_C_ExecuteUbergraph_ITM_OnlineRestricted_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_OnlineRestricted_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_OnlineRestricted_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_OnlineRestricted.ITM_OnlineRestricted_C");
		return ptr;
	}

}


