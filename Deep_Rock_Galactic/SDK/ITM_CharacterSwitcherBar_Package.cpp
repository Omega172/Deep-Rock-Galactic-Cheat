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
	 * 		Name   -> Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.Handle Key Input
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Handled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FEventReply UITM_CharacterSwitcherBar_C::HandleKeyInput(const struct FKeyEvent& InKeyEvent, bool* Handled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.Handle Key Input");
		
		UITM_CharacterSwitcherBar_C_HandleKeyInput_Params params {};
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Handled != nullptr)
			*Handled = params.Handled;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.CheckArmorUnlocks
	 * 		Flags  -> ()
	 */
	void UITM_CharacterSwitcherBar_C::CheckArmorUnlocks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.CheckArmorUnlocks");
		
		UITM_CharacterSwitcherBar_C_CheckArmorUnlocks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GotoNext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Next                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               PlaySound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_CharacterSwitcherBar_C::GotoNext(bool Next, bool PlaySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GotoNext");
		
		UITM_CharacterSwitcherBar_C_GotoNext_Params params {};
		params.Next = Next;
		params.PlaySound = PlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SetSwitchButtonState
	 * 		Flags  -> ()
	 */
	void UITM_CharacterSwitcherBar_C::SetSwitchButtonState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SetSwitchButtonState");
		
		UITM_CharacterSwitcherBar_C_SetSwitchButtonState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GetPrevCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          Character                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CharacterSwitcherBar_C::GetPrevCharacter(class UPlayerCharacterID** Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GetPrevCharacter");
		
		UITM_CharacterSwitcherBar_C_GetPrevCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Character != nullptr)
			*Character = params.Character;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GetNextCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          Character                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CharacterSwitcherBar_C::GetNextCharacter(class UPlayerCharacterID** Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GetNextCharacter");
		
		UITM_CharacterSwitcherBar_C_GetNextCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Character != nullptr)
			*Character = params.Character;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SetCharacterInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          playerClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CharacterSwitcherBar_C::SetCharacterInfo(class UPlayerCharacterID* playerClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SetCharacterInfo");
		
		UITM_CharacterSwitcherBar_C_SetCharacterInfo_Params params {};
		params.playerClass = playerClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_CharacterSwitcherBar_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.PreConstruct");
		
		UITM_CharacterSwitcherBar_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CharacterSwitcherBar_C::SetData(class UPlayerCharacterID* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SetData");
		
		UITM_CharacterSwitcherBar_C_SetData_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CharacterSwitcherBar_C::BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UITM_CharacterSwitcherBar_C_BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CharacterSwitcherBar_C::BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");
		
		UITM_CharacterSwitcherBar_C_BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SelectPrev
	 * 		Flags  -> ()
	 */
	void UITM_CharacterSwitcherBar_C::SelectPrev()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SelectPrev");
		
		UITM_CharacterSwitcherBar_C_SelectPrev_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SelectNext
	 * 		Flags  -> ()
	 */
	void UITM_CharacterSwitcherBar_C::SelectNext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SelectNext");
		
		UITM_CharacterSwitcherBar_C_SelectNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SwitchToCharacter
	 * 		Flags  -> ()
	 */
	void UITM_CharacterSwitcherBar_C::SwitchToCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SwitchToCharacter");
		
		UITM_CharacterSwitcherBar_C_SwitchToCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_CharacterSwitcherBar_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.Construct");
		
		UITM_CharacterSwitcherBar_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.CharacterChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      NewCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UITM_CharacterSwitcherBar_C::CharacterChanged(class UClass* NewCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.CharacterChanged");
		
		UITM_CharacterSwitcherBar_C_CharacterChanged_Params params {};
		params.NewCharacter = NewCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_CharacterSwitcherBar_C::BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UITM_CharacterSwitcherBar_C_BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.UpdateNotification
	 * 		Flags  -> ()
	 */
	void UITM_CharacterSwitcherBar_C::UpdateNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.UpdateNotification");
		
		UITM_CharacterSwitcherBar_C_UpdateNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.ExecuteUbergraph_ITM_CharacterSwitcherBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CharacterSwitcherBar_C::ExecuteUbergraph_ITM_CharacterSwitcherBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.ExecuteUbergraph_ITM_CharacterSwitcherBar");
		
		UITM_CharacterSwitcherBar_C_ExecuteUbergraph_ITM_CharacterSwitcherBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.OnCharacterChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_CharacterSwitcherBar_C::OnCharacterChanged__DelegateSignature(class UClass* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.OnCharacterChanged__DelegateSignature");
		
		UITM_CharacterSwitcherBar_C_OnCharacterChanged__DelegateSignature_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_CharacterSwitcherBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_CharacterSwitcherBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C");
		return ptr;
	}

}


