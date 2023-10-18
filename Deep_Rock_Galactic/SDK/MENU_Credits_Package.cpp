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
	 * 		Name   -> Function MENU_Credits.MENU_Credits_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_Credits_C::BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Credits.MENU_Credits_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature");
		
		UMENU_Credits_C_BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Credits.MENU_Credits_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMENU_Credits_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Credits.MENU_Credits_C.PreConstruct");
		
		UMENU_Credits_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Credits.MENU_Credits_C.BndEvt__Basic_ButtonScalableMoreCredits_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_Credits_C::BndEvt__Basic_ButtonScalableMoreCredits_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Credits.MENU_Credits_C.BndEvt__Basic_ButtonScalableMoreCredits_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature");
		
		UMENU_Credits_C_BndEvt__Basic_ButtonScalableMoreCredits_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Credits.MENU_Credits_C.Construct
	 * 		Flags  -> ()
	 */
	void UMENU_Credits_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Credits.MENU_Credits_C.Construct");
		
		UMENU_Credits_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Credits.MENU_Credits_C.ReceiveCloseCommand
	 * 		Flags  -> ()
	 */
	void UMENU_Credits_C::ReceiveCloseCommand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Credits.MENU_Credits_C.ReceiveCloseCommand");
		
		UMENU_Credits_C_ReceiveCloseCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Credits.MENU_Credits_C.ExecuteUbergraph_MENU_Credits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_Credits_C::ExecuteUbergraph_MENU_Credits(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Credits.MENU_Credits_C.ExecuteUbergraph_MENU_Credits");
		
		UMENU_Credits_C_ExecuteUbergraph_MENU_Credits_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMENU_Credits_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMENU_Credits_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MENU_Credits.MENU_Credits_C");
		return ptr;
	}

}


