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
	 * 		Name   -> Function Itm_HeaderCategory.Itm_HeaderCategory_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItm_HeaderCategory_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Itm_HeaderCategory.Itm_HeaderCategory_C.PreConstruct");
		
		UItm_HeaderCategory_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Itm_HeaderCategory.Itm_HeaderCategory_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItm_HeaderCategory_C::SetSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Itm_HeaderCategory.Itm_HeaderCategory_C.SetSelected");
		
		UItm_HeaderCategory_C_SetSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Itm_HeaderCategory.Itm_HeaderCategory_C.SetColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 Filled                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSlateColor                                 outline                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSlateColor                                 Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UItm_HeaderCategory_C::SetColor(const struct FSlateColor& Filled, const struct FSlateColor& outline, const struct FSlateColor& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Itm_HeaderCategory.Itm_HeaderCategory_C.SetColor");
		
		UItm_HeaderCategory_C_SetColor_Params params {};
		params.Filled = Filled;
		params.outline = outline;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Itm_HeaderCategory.Itm_HeaderCategory_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItm_HeaderCategory_C::BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Itm_HeaderCategory.Itm_HeaderCategory_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UItm_HeaderCategory_C_BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Itm_HeaderCategory.Itm_HeaderCategory_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItm_HeaderCategory_C::BndEvt__Button_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Itm_HeaderCategory.Itm_HeaderCategory_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UItm_HeaderCategory_C_BndEvt__Button_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Itm_HeaderCategory.Itm_HeaderCategory_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItm_HeaderCategory_C::BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Itm_HeaderCategory.Itm_HeaderCategory_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UItm_HeaderCategory_C_BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Itm_HeaderCategory.Itm_HeaderCategory_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UItm_HeaderCategory_C::SetText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Itm_HeaderCategory.Itm_HeaderCategory_C.SetText");
		
		UItm_HeaderCategory_C_SetText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Itm_HeaderCategory.Itm_HeaderCategory_C.ExecuteUbergraph_Itm_HeaderCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItm_HeaderCategory_C::ExecuteUbergraph_Itm_HeaderCategory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Itm_HeaderCategory.Itm_HeaderCategory_C.ExecuteUbergraph_Itm_HeaderCategory");
		
		UItm_HeaderCategory_C_ExecuteUbergraph_Itm_HeaderCategory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Itm_HeaderCategory.Itm_HeaderCategory_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItm_HeaderCategory_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Itm_HeaderCategory.Itm_HeaderCategory_C.OnClicked__DelegateSignature");
		
		UItm_HeaderCategory_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItm_HeaderCategory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItm_HeaderCategory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Itm_HeaderCategory.Itm_HeaderCategory_C");
		return ptr;
	}

}


