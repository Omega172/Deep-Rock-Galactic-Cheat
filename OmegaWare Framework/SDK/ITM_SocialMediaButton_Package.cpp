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
	 * 		Name   -> Function ITM_SocialMediaButton.ITM_SocialMediaButton_C.CreateToolTip
	 * 		Flags  -> ()
	 */
	void UITM_SocialMediaButton_C::CreateToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SocialMediaButton.ITM_SocialMediaButton_C.CreateToolTip");
		
		UITM_SocialMediaButton_C_CreateToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SocialMediaButton.ITM_SocialMediaButton_C.BndEvt__ITM_SocialMediaButton_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_SocialMediaButton_C::BndEvt__ITM_SocialMediaButton_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SocialMediaButton.ITM_SocialMediaButton_C.BndEvt__ITM_SocialMediaButton_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UITM_SocialMediaButton_C_BndEvt__ITM_SocialMediaButton_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SocialMediaButton.ITM_SocialMediaButton_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_SocialMediaButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SocialMediaButton.ITM_SocialMediaButton_C.PreConstruct");
		
		UITM_SocialMediaButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SocialMediaButton.ITM_SocialMediaButton_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_SocialMediaButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SocialMediaButton.ITM_SocialMediaButton_C.Construct");
		
		UITM_SocialMediaButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SocialMediaButton.ITM_SocialMediaButton_C.ExecuteUbergraph_ITM_SocialMediaButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_SocialMediaButton_C::ExecuteUbergraph_ITM_SocialMediaButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SocialMediaButton.ITM_SocialMediaButton_C.ExecuteUbergraph_ITM_SocialMediaButton");
		
		UITM_SocialMediaButton_C_ExecuteUbergraph_ITM_SocialMediaButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_SocialMediaButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_SocialMediaButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_SocialMediaButton.ITM_SocialMediaButton_C");
		return ptr;
	}

}


