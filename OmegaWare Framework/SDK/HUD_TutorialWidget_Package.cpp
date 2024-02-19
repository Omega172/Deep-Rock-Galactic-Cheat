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
	 * 		Name   -> Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnShow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        Title                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        TaskText                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UTexture2D*                                  Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_TutorialWidget_C::OnShow(const class FText& Text, const class FText& Title, const class FText& TaskText, class UTexture2D* Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnShow");
		
		UHUD_TutorialWidget_C_OnShow_Params params {};
		params.Text = Text;
		params.Title = Title;
		params.TaskText = TaskText;
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TutorialWidget.HUD_TutorialWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_TutorialWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.Construct");
		
		UHUD_TutorialWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnHide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               watched                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_TutorialWidget_C::OnHide(bool watched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnHide");
		
		UHUD_TutorialWidget_C_OnHide_Params params {};
		params.watched = watched;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TutorialWidget.HUD_TutorialWidget_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_RemoveAnimationFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_TutorialWidget_C::BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_RemoveAnimationFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_RemoveAnimationFinished__DelegateSignature");
		
		UHUD_TutorialWidget_C_BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_RemoveAnimationFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TutorialWidget.HUD_TutorialWidget_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_CompleteAnimationFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_TutorialWidget_C::BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_CompleteAnimationFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_CompleteAnimationFinished__DelegateSignature");
		
		UHUD_TutorialWidget_C_BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_CompleteAnimationFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TutorialWidget.HUD_TutorialWidget_C.ContinueChange
	 * 		Flags  -> ()
	 */
	void UHUD_TutorialWidget_C::ContinueChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.ContinueChange");
		
		UHUD_TutorialWidget_C_ContinueChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_TutorialWidget.HUD_TutorialWidget_C.ExecuteUbergraph_HUD_TutorialWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_TutorialWidget_C::ExecuteUbergraph_HUD_TutorialWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.ExecuteUbergraph_HUD_TutorialWidget");
		
		UHUD_TutorialWidget_C_ExecuteUbergraph_HUD_TutorialWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_TutorialWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_TutorialWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_TutorialWidget.HUD_TutorialWidget_C");
		return ptr;
	}

}


