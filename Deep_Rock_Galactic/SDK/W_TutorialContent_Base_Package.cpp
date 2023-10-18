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
	 * 		Name   -> Function W_TutorialContent_Base.W_TutorialContent_Base_C.CompleteWithAnim
	 * 		Flags  -> ()
	 */
	void UW_TutorialContent_Base_C::CompleteWithAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialContent_Base.W_TutorialContent_Base_C.CompleteWithAnim");
		
		UW_TutorialContent_Base_C_CompleteWithAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialContent_Base.W_TutorialContent_Base_C.OnShown
	 * 		Flags  -> ()
	 */
	void UW_TutorialContent_Base_C::OnShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialContent_Base.W_TutorialContent_Base_C.OnShown");
		
		UW_TutorialContent_Base_C_OnShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        TaskHeader                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        TaskText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        CheckBoxText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_TutorialContent_Base_C::SetText(const class FText& TaskHeader, const class FText& TaskText, const class FText& CheckBoxText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetText");
		
		UW_TutorialContent_Base_C_SetText_Params params {};
		params.TaskHeader = TaskHeader;
		params.TaskText = TaskText;
		params.CheckBoxText = CheckBoxText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_TutorialContent_Base_C::SetImage(class UTexture2D* Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetImage");
		
		UW_TutorialContent_Base_C_SetImage_Params params {};
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialContent_Base.W_TutorialContent_Base_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_CompleteAnimationFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_TutorialContent_Base_C::BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_CompleteAnimationFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialContent_Base.W_TutorialContent_Base_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_CompleteAnimationFinished__DelegateSignature");
		
		UW_TutorialContent_Base_C_BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_CompleteAnimationFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialContent_Base.W_TutorialContent_Base_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_RemoveAnimationFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_TutorialContent_Base_C::BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_RemoveAnimationFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialContent_Base.W_TutorialContent_Base_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_RemoveAnimationFinished__DelegateSignature");
		
		UW_TutorialContent_Base_C_BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_RemoveAnimationFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialContent_Base.W_TutorialContent_Base_C.PlayTaskProgress
	 * 		Flags  -> ()
	 */
	void UW_TutorialContent_Base_C::PlayTaskProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialContent_Base.W_TutorialContent_Base_C.PlayTaskProgress");
		
		UW_TutorialContent_Base_C_PlayTaskProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialContent_Base.W_TutorialContent_Base_C.OnRemoveWidget
	 * 		Flags  -> ()
	 */
	void UW_TutorialContent_Base_C::OnRemoveWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialContent_Base.W_TutorialContent_Base_C.OnRemoveWidget");
		
		UW_TutorialContent_Base_C_OnRemoveWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetTaskCounter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Counter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Denominator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_TutorialContent_Base_C::SetTaskCounter(int32_t Counter, int32_t Denominator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetTaskCounter");
		
		UW_TutorialContent_Base_C_SetTaskCounter_Params params {};
		params.Counter = Counter;
		params.Denominator = Denominator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialContent_Base.W_TutorialContent_Base_C.ExecuteUbergraph_W_TutorialContent_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_TutorialContent_Base_C::ExecuteUbergraph_W_TutorialContent_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialContent_Base.W_TutorialContent_Base_C.ExecuteUbergraph_W_TutorialContent_Base");
		
		UW_TutorialContent_Base_C_ExecuteUbergraph_W_TutorialContent_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_TutorialContent_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_TutorialContent_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_TutorialContent_Base.W_TutorialContent_Base_C");
		return ptr;
	}

}


