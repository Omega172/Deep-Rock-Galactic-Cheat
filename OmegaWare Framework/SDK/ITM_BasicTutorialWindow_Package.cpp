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
	 * 		Name   -> Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Header                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        MainText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        TaskText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UITM_BasicTutorialWindow_C::SetText(const class FText& Header, const class FText& MainText, const class FText& TaskText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.SetText");
		
		UITM_BasicTutorialWindow_C_SetText_Params params {};
		params.Header = Header;
		params.MainText = MainText;
		params.TaskText = TaskText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayRemove
	 * 		Flags  -> ()
	 */
	void UITM_BasicTutorialWindow_C::PlayRemove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayRemove");
		
		UITM_BasicTutorialWindow_C_PlayRemove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayShow
	 * 		Flags  -> ()
	 */
	void UITM_BasicTutorialWindow_C::PlayShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayShow");
		
		UITM_BasicTutorialWindow_C_PlayShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayComplete
	 * 		Flags  -> ()
	 */
	void UITM_BasicTutorialWindow_C::PlayComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayComplete");
		
		UITM_BasicTutorialWindow_C_PlayComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.CompleteAnimFinished
	 * 		Flags  -> ()
	 */
	void UITM_BasicTutorialWindow_C::CompleteAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.CompleteAnimFinished");
		
		UITM_BasicTutorialWindow_C_CompleteAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.SetImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_BasicTutorialWindow_C::SetImage(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.SetImage");
		
		UITM_BasicTutorialWindow_C_SetImage_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayTaskProgress
	 * 		Flags  -> ()
	 */
	void UITM_BasicTutorialWindow_C::PlayTaskProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayTaskProgress");
		
		UITM_BasicTutorialWindow_C_PlayTaskProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.SetTaskCounter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Counter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Denominator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_BasicTutorialWindow_C::SetTaskCounter(int32_t Counter, int32_t Denominator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.SetTaskCounter");
		
		UITM_BasicTutorialWindow_C_SetTaskCounter_Params params {};
		params.Counter = Counter;
		params.Denominator = Denominator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_BasicTutorialWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.Construct");
		
		UITM_BasicTutorialWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.ExecuteUbergraph_ITM_BasicTutorialWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_BasicTutorialWindow_C::ExecuteUbergraph_ITM_BasicTutorialWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.ExecuteUbergraph_ITM_BasicTutorialWindow");
		
		UITM_BasicTutorialWindow_C_ExecuteUbergraph_ITM_BasicTutorialWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.RemoveAnimationFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_BasicTutorialWindow_C::RemoveAnimationFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.RemoveAnimationFinished__DelegateSignature");
		
		UITM_BasicTutorialWindow_C_RemoveAnimationFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.CompleteAnimationFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_BasicTutorialWindow_C::CompleteAnimationFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.CompleteAnimationFinished__DelegateSignature");
		
		UITM_BasicTutorialWindow_C_CompleteAnimationFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_BasicTutorialWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_BasicTutorialWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C");
		return ptr;
	}

}


