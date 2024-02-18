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
	 * 		Name   -> Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.HandleKeyInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Handled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FEventReply UITM_Wardrobe_ClassSelector_C::HandleKeyInput(struct FKeyEvent* InKeyEvent, bool* Handled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.HandleKeyInput");
		
		UITM_Wardrobe_ClassSelector_C_HandleKeyInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InKeyEvent != nullptr)
			*InKeyEvent = params.InKeyEvent;
		if (Handled != nullptr)
			*Handled = params.Handled;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SetSwitchButtonState
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ClassSelector_C::SetSwitchButtonState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SetSwitchButtonState");
		
		UITM_Wardrobe_ClassSelector_C_SetSwitchButtonState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.GetPrevCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          Character                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ClassSelector_C::GetPrevCharacter(class UPlayerCharacterID** Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.GetPrevCharacter");
		
		UITM_Wardrobe_ClassSelector_C_GetPrevCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Character != nullptr)
			*Character = params.Character;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.GetNextCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          Character                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ClassSelector_C::GetNextCharacter(class UPlayerCharacterID** Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.GetNextCharacter");
		
		UITM_Wardrobe_ClassSelector_C_GetNextCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Character != nullptr)
			*Character = params.Character;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.GetBPGameState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameState_C*                             GameState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ClassSelector_C::GetBPGameState(class ABP_GameState_C** GameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.GetBPGameState");
		
		UITM_Wardrobe_ClassSelector_C_GetBPGameState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameState != nullptr)
			*GameState = params.GameState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SetCharacterInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          characterID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ClassSelector_C::SetCharacterInfo(class UPlayerCharacterID* characterID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SetCharacterInfo");
		
		UITM_Wardrobe_ClassSelector_C_SetCharacterInfo_Params params {};
		params.characterID = characterID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ClassSelector_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.PreConstruct");
		
		UITM_Wardrobe_ClassSelector_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     CategoryID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ClassSelector_C::SetData(class UPlayerCharacterID* Character, class UObject* CategoryID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SetData");
		
		UITM_Wardrobe_ClassSelector_C_SetData_Params params {};
		params.Character = Character;
		params.CategoryID = CategoryID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ClassSelector_C::BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UITM_Wardrobe_ClassSelector_C_BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ClassSelector_C::BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");
		
		UITM_Wardrobe_ClassSelector_C_BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SelectPrev
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ClassSelector_C::SelectPrev()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SelectPrev");
		
		UITM_Wardrobe_ClassSelector_C_SelectPrev_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SelectNext
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ClassSelector_C::SelectNext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SelectNext");
		
		UITM_Wardrobe_ClassSelector_C_SelectNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SwitchToCharacter
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ClassSelector_C::SwitchToCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SwitchToCharacter");
		
		UITM_Wardrobe_ClassSelector_C_SwitchToCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ClassSelector_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.Construct");
		
		UITM_Wardrobe_ClassSelector_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.CharacterChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      NewCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ClassSelector_C::CharacterChanged(class UClass* NewCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.CharacterChanged");
		
		UITM_Wardrobe_ClassSelector_C_CharacterChanged_Params params {};
		params.NewCharacter = NewCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ClassSelector_C::BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UITM_Wardrobe_ClassSelector_C_BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.UpdateNotification
	 * 		Flags  -> ()
	 */
	void UITM_Wardrobe_ClassSelector_C::UpdateNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.UpdateNotification");
		
		UITM_Wardrobe_ClassSelector_C_UpdateNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.ExecuteUbergraph_ITM_Wardrobe_ClassSelector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ClassSelector_C::ExecuteUbergraph_ITM_Wardrobe_ClassSelector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.ExecuteUbergraph_ITM_Wardrobe_ClassSelector");
		
		UITM_Wardrobe_ClassSelector_C_ExecuteUbergraph_ITM_Wardrobe_ClassSelector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.OnCharacterChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Wardrobe_ClassSelector_C::OnCharacterChanged__DelegateSignature(class UClass* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.OnCharacterChanged__DelegateSignature");
		
		UITM_Wardrobe_ClassSelector_C_OnCharacterChanged__DelegateSignature_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Wardrobe_ClassSelector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Wardrobe_ClassSelector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C");
		return ptr;
	}

}


