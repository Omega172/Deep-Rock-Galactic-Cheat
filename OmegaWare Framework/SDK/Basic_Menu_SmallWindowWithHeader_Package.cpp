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
	 * 		Name   -> Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.SetHeaderText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NewHeaderText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBasic_Menu_SmallWindowWithHeader_C::SetHeaderText(const class FText& NewHeaderText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.SetHeaderText");
		
		UBasic_Menu_SmallWindowWithHeader_C_SetHeaderText_Params params {};
		params.NewHeaderText = NewHeaderText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.IsHovering
	 * 		Flags  -> ()
	 */
	bool UBasic_Menu_SmallWindowWithHeader_C::IsHovering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.IsHovering");
		
		UBasic_Menu_SmallWindowWithHeader_C_IsHovering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBasic_Menu_SmallWindowWithHeader_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UBasic_Menu_SmallWindowWithHeader_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBasic_Menu_SmallWindowWithHeader_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UBasic_Menu_SmallWindowWithHeader_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBasic_Menu_SmallWindowWithHeader_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UBasic_Menu_SmallWindowWithHeader_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_Menu_SmallWindowWithHeader_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.PreConstruct");
		
		UBasic_Menu_SmallWindowWithHeader_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.SetCounterText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBasic_Menu_SmallWindowWithHeader_C::SetCounterText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.SetCounterText");
		
		UBasic_Menu_SmallWindowWithHeader_C_SetCounterText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.ExecuteUbergraph_Basic_Menu_SmallWindowWithHeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_Menu_SmallWindowWithHeader_C::ExecuteUbergraph_Basic_Menu_SmallWindowWithHeader(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.ExecuteUbergraph_Basic_Menu_SmallWindowWithHeader");
		
		UBasic_Menu_SmallWindowWithHeader_C_ExecuteUbergraph_Basic_Menu_SmallWindowWithHeader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.On Clicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBasic_Menu_SmallWindowWithHeader_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.On Clicked__DelegateSignature");
		
		UBasic_Menu_SmallWindowWithHeader_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasic_Menu_SmallWindowWithHeader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasic_Menu_SmallWindowWithHeader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C");
		return ptr;
	}

}


