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
	 * 		Name   -> Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UUI_Forge_Rewards_Display_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.OnKeyUp");
		
		UUI_Forge_Rewards_Display_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.Show
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USchematic*                                  InSchematic                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_Rewards_Display_C::Show(class USchematic* InSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.Show");
		
		UUI_Forge_Rewards_Display_C_Show_Params params {};
		params.InSchematic = InSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Rewards_Display_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.Construct");
		
		UUI_Forge_Rewards_Display_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.OnIntroStarted
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Rewards_Display_C::OnIntroStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.OnIntroStarted");
		
		UUI_Forge_Rewards_Display_C_OnIntroStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.OnIntroFinished
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Rewards_Display_C::OnIntroFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.OnIntroFinished");
		
		UUI_Forge_Rewards_Display_C_OnIntroFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Rewards_Display_C::BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UUI_Forge_Rewards_Display_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.ClickContinue
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Rewards_Display_C::ClickContinue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.ClickContinue");
		
		UUI_Forge_Rewards_Display_C_ClickContinue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.ExecuteUbergraph_UI_Forge_Rewards_Display
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Forge_Rewards_Display_C::ExecuteUbergraph_UI_Forge_Rewards_Display(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.ExecuteUbergraph_UI_Forge_Rewards_Display");
		
		UUI_Forge_Rewards_Display_C_ExecuteUbergraph_UI_Forge_Rewards_Display_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.OnFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Forge_Rewards_Display_C::OnFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C.OnFinished__DelegateSignature");
		
		UUI_Forge_Rewards_Display_C_OnFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Forge_Rewards_Display_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Forge_Rewards_Display_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Forge_Rewards_Display.UI_Forge_Rewards_Display_C");
		return ptr;
	}

}


