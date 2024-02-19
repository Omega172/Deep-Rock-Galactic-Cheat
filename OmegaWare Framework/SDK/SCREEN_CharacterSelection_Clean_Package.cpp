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
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.HighlightClassChallenges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             AssetReferences                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               ShouldHighlight                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USeasonChallenge*                            Challenge                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USCREEN_CharacterSelection_Clean_C::HighlightClassChallenges(TArray<class UObject*>* AssetReferences, bool ShouldHighlight, class USeasonChallenge* Challenge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.HighlightClassChallenges");
		
		USCREEN_CharacterSelection_Clean_C_HighlightClassChallenges_Params params {};
		params.ShouldHighlight = ShouldHighlight;
		params.Challenge = Challenge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AssetReferences != nullptr)
			*AssetReferences = params.AssetReferences;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply USCREEN_CharacterSelection_Clean_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnKeyDown");
		
		USCREEN_CharacterSelection_Clean_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply USCREEN_CharacterSelection_Clean_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnKeyUp");
		
		USCREEN_CharacterSelection_Clean_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnCloseMenuReleased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Handled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USCREEN_CharacterSelection_Clean_C::OnCloseMenuReleased(bool* Handled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnCloseMenuReleased");
		
		USCREEN_CharacterSelection_Clean_C_OnCloseMenuReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Handled != nullptr)
			*Handled = params.Handled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.GetSelectedClass
	 * 		Flags  -> ()
	 */
	class UPlayerCharacterID* USCREEN_CharacterSelection_Clean_C::GetSelectedClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.GetSelectedClass");
		
		USCREEN_CharacterSelection_Clean_C_GetSelectedClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnFailure_0D1BB19C4CA8D7117BC6A688077A0BDE
	 * 		Flags  -> ()
	 */
	void USCREEN_CharacterSelection_Clean_C::OnFailure_0D1BB19C4CA8D7117BC6A688077A0BDE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnFailure_0D1BB19C4CA8D7117BC6A688077A0BDE");
		
		USCREEN_CharacterSelection_Clean_C_OnFailure_0D1BB19C4CA8D7117BC6A688077A0BDE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnSuccess_0D1BB19C4CA8D7117BC6A688077A0BDE
	 * 		Flags  -> ()
	 */
	void USCREEN_CharacterSelection_Clean_C::OnSuccess_0D1BB19C4CA8D7117BC6A688077A0BDE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnSuccess_0D1BB19C4CA8D7117BC6A688077A0BDE");
		
		USCREEN_CharacterSelection_Clean_C_OnSuccess_0D1BB19C4CA8D7117BC6A688077A0BDE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.Construct
	 * 		Flags  -> ()
	 */
	void USCREEN_CharacterSelection_Clean_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.Construct");
		
		USCREEN_CharacterSelection_Clean_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BackPressed
	 * 		Flags  -> ()
	 */
	void USCREEN_CharacterSelection_Clean_C::BackPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BackPressed");
		
		USCREEN_CharacterSelection_Clean_C_BackPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnInputSourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFSDInputSource                                    InputSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USCREEN_CharacterSelection_Clean_C::OnInputSourceChanged(EFSDInputSource InputSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnInputSourceChanged");
		
		USCREEN_CharacterSelection_Clean_C_OnInputSourceChanged_Params params {};
		params.InputSource = InputSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnSelectedCharacterChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      NewCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void USCREEN_CharacterSelection_Clean_C::OnSelectedCharacterChanged_Event(class UClass* NewCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnSelectedCharacterChanged_Event");
		
		USCREEN_CharacterSelection_Clean_C_OnSelectedCharacterChanged_Event_Params params {};
		params.NewCharacter = NewCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USCREEN_CharacterSelection_Clean_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.PreConstruct");
		
		USCREEN_CharacterSelection_Clean_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.UpdateCharacterDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          CharacterClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USCREEN_CharacterSelection_Clean_C::UpdateCharacterDescription(class UPlayerCharacterID* CharacterClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.UpdateCharacterDescription");
		
		USCREEN_CharacterSelection_Clean_C_UpdateCharacterDescription_Params params {};
		params.CharacterClass = CharacterClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ReceiveNewVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   NewVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USCREEN_CharacterSelection_Clean_C::ReceiveNewVisibility(ESlateVisibility NewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ReceiveNewVisibility");
		
		USCREEN_CharacterSelection_Clean_C_ReceiveNewVisibility_Params params {};
		params.NewVisibility = NewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnShown
	 * 		Flags  -> ()
	 */
	void USCREEN_CharacterSelection_Clean_C::OnShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnShown");
		
		USCREEN_CharacterSelection_Clean_C_OnShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnClosed
	 * 		Flags  -> ()
	 */
	void USCREEN_CharacterSelection_Clean_C::OnClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnClosed");
		
		USCREEN_CharacterSelection_Clean_C_OnClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.CreateMovie
	 * 		Flags  -> ()
	 */
	void USCREEN_CharacterSelection_Clean_C::CreateMovie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.CreateMovie");
		
		USCREEN_CharacterSelection_Clean_C_CreateMovie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.StopMovie
	 * 		Flags  -> ()
	 */
	void USCREEN_CharacterSelection_Clean_C::StopMovie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.StopMovie");
		
		USCREEN_CharacterSelection_Clean_C_StopMovie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USCREEN_CharacterSelection_Clean_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		USCREEN_CharacterSelection_Clean_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ReceiveCloseCommand
	 * 		Flags  -> ()
	 */
	void USCREEN_CharacterSelection_Clean_C::ReceiveCloseCommand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ReceiveCloseCommand");
		
		USCREEN_CharacterSelection_Clean_C_ReceiveCloseCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnNewLoadout
	 * 		Flags  -> ()
	 */
	void USCREEN_CharacterSelection_Clean_C::OnNewLoadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnNewLoadout");
		
		USCREEN_CharacterSelection_Clean_C_OnNewLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.Show
	 * 		Flags  -> ()
	 */
	void USCREEN_CharacterSelection_Clean_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.Show");
		
		USCREEN_CharacterSelection_Clean_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_4_OnCharacterHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USCREEN_CharacterSelection_Clean_C::BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_4_OnCharacterHovered__DelegateSignature(class UPlayerCharacterID* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_4_OnCharacterHovered__DelegateSignature");
		
		USCREEN_CharacterSelection_Clean_C_BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_4_OnCharacterHovered__DelegateSignature_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_1_OnCharacterSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USCREEN_CharacterSelection_Clean_C::BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_1_OnCharacterSelected__DelegateSignature(class UPlayerCharacterID* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_1_OnCharacterSelected__DelegateSignature");
		
		USCREEN_CharacterSelection_Clean_C_BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_1_OnCharacterSelected__DelegateSignature_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ExecuteUbergraph_SCREEN_CharacterSelection_Clean
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USCREEN_CharacterSelection_Clean_C::ExecuteUbergraph_SCREEN_CharacterSelection_Clean(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ExecuteUbergraph_SCREEN_CharacterSelection_Clean");
		
		USCREEN_CharacterSelection_Clean_C_ExecuteUbergraph_SCREEN_CharacterSelection_Clean_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.CharacterSelected__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USCREEN_CharacterSelection_Clean_C::CharacterSelected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.CharacterSelected__DelegateSignature");
		
		USCREEN_CharacterSelection_Clean_C_CharacterSelected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USCREEN_CharacterSelection_Clean_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USCREEN_CharacterSelection_Clean_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C");
		return ptr;
	}

}


