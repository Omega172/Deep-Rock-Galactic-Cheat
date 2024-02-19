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
	 * 		Name   -> Function Itm_SeasonChallenge_Small.Itm_SeasonChallenge_Small_C.Refresh
	 * 		Flags  -> ()
	 */
	void UItm_SeasonChallenge_Small_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Itm_SeasonChallenge_Small.Itm_SeasonChallenge_Small_C.Refresh");
		
		UItm_SeasonChallenge_Small_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Itm_SeasonChallenge_Small.Itm_SeasonChallenge_Small_C.Construct
	 * 		Flags  -> ()
	 */
	void UItm_SeasonChallenge_Small_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Itm_SeasonChallenge_Small.Itm_SeasonChallenge_Small_C.Construct");
		
		UItm_SeasonChallenge_Small_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Itm_SeasonChallenge_Small.Itm_SeasonChallenge_Small_C.OnImageLoaded
	 * 		Flags  -> ()
	 */
	void UItm_SeasonChallenge_Small_C::OnImageLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Itm_SeasonChallenge_Small.Itm_SeasonChallenge_Small_C.OnImageLoaded");
		
		UItm_SeasonChallenge_Small_C_OnImageLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Itm_SeasonChallenge_Small.Itm_SeasonChallenge_Small_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItm_SeasonChallenge_Small_C::BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Itm_SeasonChallenge_Small.Itm_SeasonChallenge_Small_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UItm_SeasonChallenge_Small_C_BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Itm_SeasonChallenge_Small.Itm_SeasonChallenge_Small_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItm_SeasonChallenge_Small_C::BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Itm_SeasonChallenge_Small.Itm_SeasonChallenge_Small_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UItm_SeasonChallenge_Small_C_BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Itm_SeasonChallenge_Small.Itm_SeasonChallenge_Small_C.SetHoverColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItm_SeasonChallenge_Small_C::SetHoverColor(const struct FLinearColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Itm_SeasonChallenge_Small.Itm_SeasonChallenge_Small_C.SetHoverColor");
		
		UItm_SeasonChallenge_Small_C_SetHoverColor_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Itm_SeasonChallenge_Small.Itm_SeasonChallenge_Small_C.ExecuteUbergraph_Itm_SeasonChallenge_Small
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItm_SeasonChallenge_Small_C::ExecuteUbergraph_Itm_SeasonChallenge_Small(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Itm_SeasonChallenge_Small.Itm_SeasonChallenge_Small_C.ExecuteUbergraph_Itm_SeasonChallenge_Small");
		
		UItm_SeasonChallenge_Small_C_ExecuteUbergraph_Itm_SeasonChallenge_Small_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Itm_SeasonChallenge_Small.Itm_SeasonChallenge_Small_C.HoverChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHovered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItm_SeasonChallenge_Small_C::HoverChanged__DelegateSignature(bool IsHovered, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Itm_SeasonChallenge_Small.Itm_SeasonChallenge_Small_C.HoverChanged__DelegateSignature");
		
		UItm_SeasonChallenge_Small_C_HoverChanged__DelegateSignature_Params params {};
		params.IsHovered = IsHovered;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItm_SeasonChallenge_Small_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItm_SeasonChallenge_Small_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Itm_SeasonChallenge_Small.Itm_SeasonChallenge_Small_C");
		return ptr;
	}

}


