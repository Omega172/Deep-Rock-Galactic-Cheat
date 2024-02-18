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
	 * 		Name   -> Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.IsCloseButtonVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMENU_SpaceRigTemplate_C::IsCloseButtonVisible(bool* Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.IsCloseButtonVisible");
		
		UMENU_SpaceRigTemplate_C_IsCloseButtonVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visible != nullptr)
			*Visible = params.Visible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.SetBackMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CloseIsBack                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMENU_SpaceRigTemplate_C::SetBackMode(bool CloseIsBack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.SetBackMode");
		
		UMENU_SpaceRigTemplate_C_SetBackMode_Params params {};
		params.CloseIsBack = CloseIsBack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.UpdatePlayerCount
	 * 		Flags  -> ()
	 */
	void UMENU_SpaceRigTemplate_C::UpdatePlayerCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.UpdatePlayerCount");
		
		UMENU_SpaceRigTemplate_C_UpdatePlayerCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.SetCloseButtonVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowCloseButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMENU_SpaceRigTemplate_C::SetCloseButtonVisible(bool ShowCloseButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.SetCloseButtonVisible");
		
		UMENU_SpaceRigTemplate_C_SetCloseButtonVisible_Params params {};
		params.ShowCloseButton = ShowCloseButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Finished_ED75AEDE411AF062E427D788A257F78D
	 * 		Flags  -> ()
	 */
	void UMENU_SpaceRigTemplate_C::Finished_ED75AEDE411AF062E427D788A257F78D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Finished_ED75AEDE411AF062E427D788A257F78D");
		
		UMENU_SpaceRigTemplate_C_Finished_ED75AEDE411AF062E427D788A257F78D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMENU_SpaceRigTemplate_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.PreConstruct");
		
		UMENU_SpaceRigTemplate_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Construct
	 * 		Flags  -> ()
	 */
	void UMENU_SpaceRigTemplate_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Construct");
		
		UMENU_SpaceRigTemplate_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Refresh
	 * 		Flags  -> ()
	 */
	void UMENU_SpaceRigTemplate_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Refresh");
		
		UMENU_SpaceRigTemplate_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_SpaceRigTemplate_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature");
		
		UMENU_SpaceRigTemplate_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnCreditsChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Credits                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_SpaceRigTemplate_C::OnCreditsChanged_Event(int32_t Credits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnCreditsChanged_Event");
		
		UMENU_SpaceRigTemplate_C_OnCreditsChanged_Event_Params params {};
		params.Credits = Credits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnPlayerJoined_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_SpaceRigTemplate_C::OnPlayerJoined_Event(class AFSDPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnPlayerJoined_Event");
		
		UMENU_SpaceRigTemplate_C_OnPlayerJoined_Event_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnPlayerLeave_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_SpaceRigTemplate_C::OnPlayerLeave_Event(class AFSDPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnPlayerLeave_Event");
		
		UMENU_SpaceRigTemplate_C_OnPlayerLeave_Event_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnSelectedCharacterChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      NewCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UMENU_SpaceRigTemplate_C::OnSelectedCharacterChanged_Event(class UClass* NewCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnSelectedCharacterChanged_Event");
		
		UMENU_SpaceRigTemplate_C_OnSelectedCharacterChanged_Event_Params params {};
		params.NewCharacter = NewCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Setup Player Events
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_SpaceRigTemplate_C::SetupPlayerEvents(class APlayerState* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Setup Player Events");
		
		UMENU_SpaceRigTemplate_C_SetupPlayerEvents_Params params {};
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnSelectedCharacterChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      NewCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UMENU_SpaceRigTemplate_C::OnSelectedCharacterChanged(class UClass* NewCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnSelectedCharacterChanged");
		
		UMENU_SpaceRigTemplate_C_OnSelectedCharacterChanged_Params params {};
		params.NewCharacter = NewCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Click Close Button
	 * 		Flags  -> ()
	 */
	void UMENU_SpaceRigTemplate_C::ClickCloseButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Click Close Button");
		
		UMENU_SpaceRigTemplate_C_ClickCloseButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.PlayFadeIn
	 * 		Flags  -> ()
	 */
	void UMENU_SpaceRigTemplate_C::PlayFadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.PlayFadeIn");
		
		UMENU_SpaceRigTemplate_C_PlayFadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.AnimateTopBarVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMENU_SpaceRigTemplate_C::AnimateTopBarVisible(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.AnimateTopBarVisible");
		
		UMENU_SpaceRigTemplate_C_AnimateTopBarVisible_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.ExecuteUbergraph_MENU_SpaceRigTemplate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_SpaceRigTemplate_C::ExecuteUbergraph_MENU_SpaceRigTemplate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.ExecuteUbergraph_MENU_SpaceRigTemplate");
		
		UMENU_SpaceRigTemplate_C_ExecuteUbergraph_MENU_SpaceRigTemplate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnBackClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_SpaceRigTemplate_C::OnBackClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnBackClicked__DelegateSignature");
		
		UMENU_SpaceRigTemplate_C_OnBackClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnClosedClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_SpaceRigTemplate_C::OnClosedClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnClosedClicked__DelegateSignature");
		
		UMENU_SpaceRigTemplate_C_OnClosedClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMENU_SpaceRigTemplate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMENU_SpaceRigTemplate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C");
		return ptr;
	}

}


