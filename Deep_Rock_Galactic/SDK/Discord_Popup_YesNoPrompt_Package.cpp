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
	 * 		Name   -> Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UDiscord_Popup_YesNoPrompt_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.OnKeyUp");
		
		UDiscord_Popup_YesNoPrompt_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.OnShow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Title                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UDiscord_Popup_YesNoPrompt_C::OnShow(const class FText& Title, const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.OnShow");
		
		UDiscord_Popup_YesNoPrompt_C_OnShow_Params params {};
		params.Title = Title;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDiscord_Popup_YesNoPrompt_C::BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UDiscord_Popup_YesNoPrompt_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDiscord_Popup_YesNoPrompt_C::BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UDiscord_Popup_YesNoPrompt_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDiscord_Popup_YesNoPrompt_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.PreConstruct");
		
		UDiscord_Popup_YesNoPrompt_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.Yes
	 * 		Flags  -> ()
	 */
	void UDiscord_Popup_YesNoPrompt_C::Yes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.Yes");
		
		UDiscord_Popup_YesNoPrompt_C_Yes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.No
	 * 		Flags  -> ()
	 */
	void UDiscord_Popup_YesNoPrompt_C::No()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.No");
		
		UDiscord_Popup_YesNoPrompt_C_No_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.Clear Resources
	 * 		Flags  -> ()
	 */
	void UDiscord_Popup_YesNoPrompt_C::ClearResources()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.Clear Resources");
		
		UDiscord_Popup_YesNoPrompt_C_ClearResources_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.Add Resource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResourceData*                               InResource                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDiscord_Popup_YesNoPrompt_C::AddResource(class UResourceData* InResource, float InAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.Add Resource");
		
		UDiscord_Popup_YesNoPrompt_C_AddResource_Params params {};
		params.InResource = InResource;
		params.InAmount = InAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.SetResources
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCraftingCost>                       Resources                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UDiscord_Popup_YesNoPrompt_C::SetResources(TArray<struct FCraftingCost> Resources)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.SetResources");
		
		UDiscord_Popup_YesNoPrompt_C_SetResources_Params params {};
		params.Resources = Resources;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.ExecuteUbergraph_Discord_Popup_YesNoPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDiscord_Popup_YesNoPrompt_C::ExecuteUbergraph_Discord_Popup_YesNoPrompt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C.ExecuteUbergraph_Discord_Popup_YesNoPrompt");
		
		UDiscord_Popup_YesNoPrompt_C_ExecuteUbergraph_Discord_Popup_YesNoPrompt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDiscord_Popup_YesNoPrompt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiscord_Popup_YesNoPrompt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Discord_Popup_YesNoPrompt.Discord_Popup_YesNoPrompt_C");
		return ptr;
	}

}


