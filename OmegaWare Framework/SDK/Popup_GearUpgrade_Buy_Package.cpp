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
	 * 		Name   -> Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UPopup_GearUpgrade_Buy_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.OnKeyUp");
		
		UPopup_GearUpgrade_Buy_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Show
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItemUpgrade*                                Upgrade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPopup_GearUpgrade_Buy_C::Show(class UClass* Item, class UItemUpgrade* Upgrade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Show");
		
		UPopup_GearUpgrade_Buy_C_Show_Params params {};
		params.Item = Item;
		params.Upgrade = Upgrade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPopup_GearUpgrade_Buy_C::BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UPopup_GearUpgrade_Buy_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPopup_GearUpgrade_Buy_C::BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UPopup_GearUpgrade_Buy_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPopup_GearUpgrade_Buy_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.PreConstruct");
		
		UPopup_GearUpgrade_Buy_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Back
	 * 		Flags  -> ()
	 */
	void UPopup_GearUpgrade_Buy_C::Back()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Back");
		
		UPopup_GearUpgrade_Buy_C_Back_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Buy
	 * 		Flags  -> ()
	 */
	void UPopup_GearUpgrade_Buy_C::Buy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Buy");
		
		UPopup_GearUpgrade_Buy_C_Buy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.OnClosed
	 * 		Flags  -> ()
	 */
	void UPopup_GearUpgrade_Buy_C::OnClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.OnClosed");
		
		UPopup_GearUpgrade_Buy_C_OnClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.ExecuteUbergraph_Popup_GearUpgrade_Buy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPopup_GearUpgrade_Buy_C::ExecuteUbergraph_Popup_GearUpgrade_Buy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.ExecuteUbergraph_Popup_GearUpgrade_Buy");
		
		UPopup_GearUpgrade_Buy_C_ExecuteUbergraph_Popup_GearUpgrade_Buy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPopup_GearUpgrade_Buy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPopup_GearUpgrade_Buy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C");
		return ptr;
	}

}


