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
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.GetCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_Loadout_C::GetCharacter(class APlayerCharacter** Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.GetCharacter");
		
		UMENU_Loadout_C_GetCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Character != nullptr)
			*Character = params.Character;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.PlayIntroAnimations
	 * 		Flags  -> ()
	 */
	void UMENU_Loadout_C::PlayIntroAnimations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.PlayIntroAnimations");
		
		UMENU_Loadout_C_PlayIntroAnimations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.CheckForNotification
	 * 		Flags  -> ()
	 */
	void UMENU_Loadout_C::CheckForNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.CheckForNotification");
		
		UMENU_Loadout_C_CheckForNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UMENU_Loadout_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.OnKeyUp");
		
		UMENU_Loadout_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.OnMouseWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UMENU_Loadout_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.OnMouseWheel");
		
		UMENU_Loadout_C_OnMouseWheel_Params params {};
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
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.GetClassFromPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          SelectedCharacter                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_Loadout_C::GetClassFromPlayerState(class UPlayerCharacterID** SelectedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.GetClassFromPlayerState");
		
		UMENU_Loadout_C_GetClassFromPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedCharacter != nullptr)
			*SelectedCharacter = params.SelectedCharacter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMENU_Loadout_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.PreConstruct");
		
		UMENU_Loadout_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.Construct
	 * 		Flags  -> ()
	 */
	void UMENU_Loadout_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.Construct");
		
		UMENU_Loadout_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.OnShown
	 * 		Flags  -> ()
	 */
	void UMENU_Loadout_C::OnShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.OnShown");
		
		UMENU_Loadout_C_OnShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.Refresh
	 * 		Flags  -> ()
	 */
	void UMENU_Loadout_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.Refresh");
		
		UMENU_Loadout_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.BndEvt__ITM_Loadout_CharSelect_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_Loadout_C::BndEvt__ITM_Loadout_CharSelect_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(class UClass* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.BndEvt__ITM_Loadout_CharSelect_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature");
		
		UMENU_Loadout_C_BndEvt__ITM_Loadout_CharSelect_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.Stop Ansel
	 * 		Flags  -> ()
	 */
	void UMENU_Loadout_C::StopAnsel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.Stop Ansel");
		
		UMENU_Loadout_C_StopAnsel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.Start Ansel
	 * 		Flags  -> ()
	 */
	void UMENU_Loadout_C::StartAnsel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.Start Ansel");
		
		UMENU_Loadout_C_StartAnsel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.OnClosed
	 * 		Flags  -> ()
	 */
	void UMENU_Loadout_C::OnClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.OnClosed");
		
		UMENU_Loadout_C_OnClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.Refresh Loadout Items
	 * 		Flags  -> ()
	 */
	void UMENU_Loadout_C::RefreshLoadoutItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.Refresh Loadout Items");
		
		UMENU_Loadout_C_RefreshLoadoutItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.Setup Loadout Items
	 * 		Flags  -> ()
	 */
	void UMENU_Loadout_C::SetupLoadoutItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.Setup Loadout Items");
		
		UMENU_Loadout_C_SetupLoadoutItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.OnNewTopWindow
	 * 		Flags  -> ()
	 */
	void UMENU_Loadout_C::OnNewTopWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.OnNewTopWindow");
		
		UMENU_Loadout_C_OnNewTopWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectCharacterCommand
	 * 		Flags  -> ()
	 */
	void UMENU_Loadout_C::ReceiveSelectCharacterCommand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectCharacterCommand");
		
		UMENU_Loadout_C_ReceiveSelectCharacterCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectNextCommand
	 * 		Flags  -> ()
	 */
	void UMENU_Loadout_C::ReceiveSelectNextCommand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectNextCommand");
		
		UMENU_Loadout_C_ReceiveSelectNextCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectPreviousCommand
	 * 		Flags  -> ()
	 */
	void UMENU_Loadout_C::ReceiveSelectPreviousCommand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectPreviousCommand");
		
		UMENU_Loadout_C_ReceiveSelectPreviousCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_1_NewLoadoutSelected__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_Loadout_C::BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_1_NewLoadoutSelected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_1_NewLoadoutSelected__DelegateSignature");
		
		UMENU_Loadout_C_BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_1_NewLoadoutSelected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.LoadoutRefreshed
	 * 		Flags  -> ()
	 */
	void UMENU_Loadout_C::LoadoutRefreshed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.LoadoutRefreshed");
		
		UMENU_Loadout_C_LoadoutRefreshed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.On Unhovered_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_Loadout_ItemWindow_C*                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_Loadout_C::OnUnhovered_Event(class UITM_Loadout_ItemWindow_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.On Unhovered_Event");
		
		UMENU_Loadout_C_OnUnhovered_Event_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.On Hovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_Loadout_ItemWindow_C*                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_Loadout_C::OnHovered(class UITM_Loadout_ItemWindow_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.On Hovered");
		
		UMENU_Loadout_C_OnHovered_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.Open Item Window
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_Loadout_ItemWindow_C*                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_Loadout_C::OpenItemWindow(class UITM_Loadout_ItemWindow_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.Open Item Window");
		
		UMENU_Loadout_C_OpenItemWindow_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.ExecuteUbergraph_MENU_Loadout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_Loadout_C::ExecuteUbergraph_MENU_Loadout(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.ExecuteUbergraph_MENU_Loadout");
		
		UMENU_Loadout_C_ExecuteUbergraph_MENU_Loadout_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_Loadout.MENU_Loadout_C.CharacterSelected__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_Loadout_C::CharacterSelected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.CharacterSelected__DelegateSignature");
		
		UMENU_Loadout_C_CharacterSelected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMENU_Loadout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMENU_Loadout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MENU_Loadout.MENU_Loadout_C");
		return ptr;
	}

}


