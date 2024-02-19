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
	 * 		Name   -> Function Basic_ScrollBarBox.Basic_ScrollBarBox_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_ScrollBarBox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ScrollBarBox.Basic_ScrollBarBox_C.PreConstruct");
		
		UBasic_ScrollBarBox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ScrollBarBox.Basic_ScrollBarBox_C.ScrollToChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     WidgetToFind                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AnimateScroll                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDescendantScrollDestination                       ScrollDestination                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_ScrollBarBox_C::ScrollToChild(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ScrollBarBox.Basic_ScrollBarBox_C.ScrollToChild");
		
		UBasic_ScrollBarBox_C_ScrollToChild_Params params {};
		params.WidgetToFind = WidgetToFind;
		params.AnimateScroll = AnimateScroll;
		params.ScrollDestination = ScrollDestination;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_ScrollBarBox.Basic_ScrollBarBox_C.ExecuteUbergraph_Basic_ScrollBarBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_ScrollBarBox_C::ExecuteUbergraph_Basic_ScrollBarBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_ScrollBarBox.Basic_ScrollBarBox_C.ExecuteUbergraph_Basic_ScrollBarBox");
		
		UBasic_ScrollBarBox_C_ExecuteUbergraph_Basic_ScrollBarBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasic_ScrollBarBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasic_ScrollBarBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Basic_ScrollBarBox.Basic_ScrollBarBox_C");
		return ptr;
	}

}


