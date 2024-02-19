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
	 * 		Name   -> Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.ReceiveCanCloseWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InActionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        InKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               InIsMouseEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UWND_Crafting_Unlock_C::ReceiveCanCloseWindow(const class FName& InActionName, const struct FKey& InKey, bool InIsMouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.ReceiveCanCloseWindow");
		
		UWND_Crafting_Unlock_C_ReceiveCanCloseWindow_Params params {};
		params.InActionName = InActionName;
		params.InKey = InKey;
		params.InIsMouseEvent = InIsMouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.OnMouseButtonUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWND_Crafting_Unlock_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.OnMouseButtonUp");
		
		UWND_Crafting_Unlock_C_OnMouseButtonUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.CreateResources
	 * 		Flags  -> ()
	 */
	void UWND_Crafting_Unlock_C::CreateResources()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.CreateResources");
		
		UWND_Crafting_Unlock_C_CreateResources_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWND_Crafting_Unlock_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.OnKeyUp");
		
		UWND_Crafting_Unlock_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BuyWithResources
	 * 		Flags  -> ()
	 */
	void UWND_Crafting_Unlock_C::BuyWithResources()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BuyWithResources");
		
		UWND_Crafting_Unlock_C_BuyWithResources_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Cancel
	 * 		Flags  -> ()
	 */
	void UWND_Crafting_Unlock_C::Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Cancel");
		
		UWND_Crafting_Unlock_C_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Show
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_Crafting_Unlock_C::Show(class AFSDPlayerState* Player, class UClass* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Show");
		
		UWND_Crafting_Unlock_C_Show_Params params {};
		params.Player = Player;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWND_Crafting_Unlock_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.PreConstruct");
		
		UWND_Crafting_Unlock_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Close
	 * 		Flags  -> ()
	 */
	void UWND_Crafting_Unlock_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Close");
		
		UWND_Crafting_Unlock_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_BuyWithResources_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBasic_FlatButton_C*                         Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_Crafting_Unlock_C::BndEvt__BTN_BuyWithResources_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UBasic_FlatButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_BuyWithResources_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UWND_Crafting_Unlock_C_BndEvt__BTN_BuyWithResources_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_BuyWithFashionite_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBasic_FlatButton_C*                         Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_Crafting_Unlock_C::BndEvt__BTN_BuyWithFashionite_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UBasic_FlatButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_BuyWithFashionite_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UWND_Crafting_Unlock_C_BndEvt__BTN_BuyWithFashionite_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_Cancel_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_Crafting_Unlock_C::BndEvt__BTN_Cancel_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_Cancel_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UWND_Crafting_Unlock_C_BndEvt__BTN_Cancel_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_Crafting_Unlock_C::BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UWND_Crafting_Unlock_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWND_Crafting_Unlock_C::BndEvt__BTN_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UWND_Crafting_Unlock_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Equip
	 * 		Flags  -> ()
	 */
	void UWND_Crafting_Unlock_C::Equip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Equip");
		
		UWND_Crafting_Unlock_C_Equip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BuyWithFashionite
	 * 		Flags  -> ()
	 */
	void UWND_Crafting_Unlock_C::BuyWithFashionite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BuyWithFashionite");
		
		UWND_Crafting_Unlock_C_BuyWithFashionite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.ExecuteUbergraph_WND_Crafting_Unlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWND_Crafting_Unlock_C::ExecuteUbergraph_WND_Crafting_Unlock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.ExecuteUbergraph_WND_Crafting_Unlock");
		
		UWND_Crafting_Unlock_C_ExecuteUbergraph_WND_Crafting_Unlock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWND_Crafting_Unlock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWND_Crafting_Unlock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WND_Crafting_Unlock.WND_Crafting_Unlock_C");
		return ptr;
	}

}


