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
	 * 		Name   -> Function Basic_ScrollArrow2.Basic_ScrollArrow2_C.SetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewVar_1                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FLinearColor UBasic_ScrollArrow2_C::SetActive(bool NewVar_1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ScrollArrow2.Basic_ScrollArrow2_C.SetActive");
		
		UBasic_ScrollArrow2_C_SetActive_Params params {};
		params.NewVar_1 = NewVar_1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ScrollArrow2.Basic_ScrollArrow2_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_ScrollArrow2_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ScrollArrow2.Basic_ScrollArrow2_C.PreConstruct");
		
		UBasic_ScrollArrow2_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ScrollArrow2.Basic_ScrollArrow2_C.ExecuteUbergraph_Basic_ScrollArrow2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_ScrollArrow2_C::ExecuteUbergraph_Basic_ScrollArrow2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ScrollArrow2.Basic_ScrollArrow2_C.ExecuteUbergraph_Basic_ScrollArrow2");
		
		UBasic_ScrollArrow2_C_ExecuteUbergraph_Basic_ScrollArrow2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ScrollArrow2.Basic_ScrollArrow2_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBasic_ScrollArrow2_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ScrollArrow2.Basic_ScrollArrow2_C.OnClicked__DelegateSignature");
		
		UBasic_ScrollArrow2_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasic_ScrollArrow2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasic_ScrollArrow2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Basic_ScrollArrow2.Basic_ScrollArrow2_C");
		return ptr;
	}

}


