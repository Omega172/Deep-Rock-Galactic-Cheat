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
	 * 		Name   -> Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.SetGamePrivacy
	 * 		Flags  -> ()
	 */
	void UPOPUP_KickPlayerConfirm_C::SetGamePrivacy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.SetGamePrivacy");
		
		UPOPUP_KickPlayerConfirm_C_SetGamePrivacy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.KickPlayer
	 * 		Flags  -> ()
	 */
	void UPOPUP_KickPlayerConfirm_C::KickPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.KickPlayer");
		
		UPOPUP_KickPlayerConfirm_C_KickPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.Get_BTN_Ban_Tooltip
	 * 		Flags  -> ()
	 */
	class UWidget* UPOPUP_KickPlayerConfirm_C::Get_BTN_Ban_Tooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.Get_BTN_Ban_Tooltip");
		
		UPOPUP_KickPlayerConfirm_C_Get_BTN_Ban_Tooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPOPUP_KickPlayerConfirm_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.PreConstruct");
		
		UPOPUP_KickPlayerConfirm_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.Construct
	 * 		Flags  -> ()
	 */
	void UPOPUP_KickPlayerConfirm_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.Construct");
		
		UPOPUP_KickPlayerConfirm_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__Basic_CheckBox_C_1_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPOPUP_KickPlayerConfirm_C::BndEvt__Basic_CheckBox_C_1_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__Basic_CheckBox_C_1_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");
		
		UPOPUP_KickPlayerConfirm_C_BndEvt__Basic_CheckBox_C_1_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__Basic_CheckBox_AFK_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPOPUP_KickPlayerConfirm_C::BndEvt__Basic_CheckBox_AFK_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__Basic_CheckBox_AFK_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature");
		
		UPOPUP_KickPlayerConfirm_C_BndEvt__Basic_CheckBox_AFK_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__Basic_CheckBox_Private_K2Node_ComponentBoundEvent_16_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPOPUP_KickPlayerConfirm_C::BndEvt__Basic_CheckBox_Private_K2Node_ComponentBoundEvent_16_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__Basic_CheckBox_Private_K2Node_ComponentBoundEvent_16_OnCheckStateChanged__DelegateSignature");
		
		UPOPUP_KickPlayerConfirm_C_BndEvt__Basic_CheckBox_Private_K2Node_ComponentBoundEvent_16_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_37_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPOPUP_KickPlayerConfirm_C::BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_37_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_37_OnClicked__DelegateSignature");
		
		UPOPUP_KickPlayerConfirm_C_BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_37_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.SetPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPOPUP_KickPlayerConfirm_C::SetPlayer(class APlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.SetPlayer");
		
		UPOPUP_KickPlayerConfirm_C_SetPlayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__BTN_Cancel_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPOPUP_KickPlayerConfirm_C::BndEvt__BTN_Cancel_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__BTN_Cancel_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature");
		
		UPOPUP_KickPlayerConfirm_C_BndEvt__BTN_Cancel_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__POPUP_KickPlayerConfirm_BTN_Ban_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPOPUP_KickPlayerConfirm_C::BndEvt__POPUP_KickPlayerConfirm_BTN_Ban_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__POPUP_KickPlayerConfirm_BTN_Ban_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UPOPUP_KickPlayerConfirm_C_BndEvt__POPUP_KickPlayerConfirm_BTN_Ban_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.ProfileClosed
	 * 		Flags  -> ()
	 */
	void UPOPUP_KickPlayerConfirm_C::ProfileClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.ProfileClosed");
		
		UPOPUP_KickPlayerConfirm_C_ProfileClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.ExecuteUbergraph_POPUP_KickPlayerConfirm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPOPUP_KickPlayerConfirm_C::ExecuteUbergraph_POPUP_KickPlayerConfirm(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.ExecuteUbergraph_POPUP_KickPlayerConfirm");
		
		UPOPUP_KickPlayerConfirm_C_ExecuteUbergraph_POPUP_KickPlayerConfirm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPOPUP_KickPlayerConfirm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPOPUP_KickPlayerConfirm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C");
		return ptr;
	}

}


