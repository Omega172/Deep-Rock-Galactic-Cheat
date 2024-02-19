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
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.InternalUpdateHovered
	 * 		Flags  -> ()
	 */
	void UICON_HeroSelect_C::InternalUpdateHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.InternalUpdateHovered");
		
		UICON_HeroSelect_C_InternalUpdateHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.IsEligibleForPromotion
	 * 		Flags  -> ()
	 */
	bool UICON_HeroSelect_C::IsEligibleForPromotion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.IsEligibleForPromotion");
		
		UICON_HeroSelect_C_IsEligibleForPromotion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.IsInteractable
	 * 		Flags  -> ()
	 */
	bool UICON_HeroSelect_C::IsInteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.IsInteractable");
		
		UICON_HeroSelect_C_IsInteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.GetSelectedClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          DesiredCharacterClass                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UICON_HeroSelect_C::GetSelectedClass(class UPlayerCharacterID** DesiredCharacterClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.GetSelectedClass");
		
		UICON_HeroSelect_C_GetSelectedClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DesiredCharacterClass != nullptr)
			*DesiredCharacterClass = params.DesiredCharacterClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseButtonUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UICON_HeroSelect_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseButtonUp");
		
		UICON_HeroSelect_C_OnMouseButtonUp_Params params {};
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
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.SetScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UICON_HeroSelect_C::SetScale(float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.SetScale");
		
		UICON_HeroSelect_C_SetScale_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.UpdateSelected
	 * 		Flags  -> ()
	 */
	void UICON_HeroSelect_C::UpdateSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.UpdateSelected");
		
		UICON_HeroSelect_C_UpdateSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.IsSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UICON_HeroSelect_C::IsSelected(bool* IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.IsSelected");
		
		UICON_HeroSelect_C_IsSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSelected != nullptr)
			*IsSelected = params.IsSelected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.SetCharacterClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UICON_HeroSelect_C::SetCharacterClass(class UPlayerCharacterID* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.SetCharacterClass");
		
		UICON_HeroSelect_C_SetCharacterClass_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UICON_HeroSelect_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseEnter");
		
		UICON_HeroSelect_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UICON_HeroSelect_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseLeave");
		
		UICON_HeroSelect_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.On Click
	 * 		Flags  -> ()
	 */
	void UICON_HeroSelect_C::OnClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.On Click");
		
		UICON_HeroSelect_C_OnClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.SelectedCharacterChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      NewCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UICON_HeroSelect_C::SelectedCharacterChanged(class UClass* NewCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.SelectedCharacterChanged");
		
		UICON_HeroSelect_C_SelectedCharacterChanged_Params params {};
		params.NewCharacter = NewCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.OnCharacterStatsChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UICON_HeroSelect_C::OnCharacterStatsChanged_Event(class AFSDPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnCharacterStatsChanged_Event");
		
		UICON_HeroSelect_C_OnCharacterStatsChanged_Event_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UICON_HeroSelect_C::Init(class UPlayerCharacterID* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.Init");
		
		UICON_HeroSelect_C_Init_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UICON_HeroSelect_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.PreConstruct");
		
		UICON_HeroSelect_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UICON_HeroSelect_C::BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature");
		
		UICON_HeroSelect_C_BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UICON_HeroSelect_C::BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature");
		
		UICON_HeroSelect_C_BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_63_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UICON_HeroSelect_C::BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_63_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_63_OnClicked__DelegateSignature");
		
		UICON_HeroSelect_C_BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_63_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.Update Retirement Button
	 * 		Flags  -> ()
	 */
	void UICON_HeroSelect_C::UpdateRetirementButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.Update Retirement Button");
		
		UICON_HeroSelect_C_UpdateRetirementButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UICON_HeroSelect_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.Tick");
		
		UICON_HeroSelect_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.SetChallengeIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InHovered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UICON_HeroSelect_C::SetChallengeIcon(bool InHovered, class UTexture2D* Icon, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.SetChallengeIcon");
		
		UICON_HeroSelect_C_SetChallengeIcon_Params params {};
		params.InHovered = InHovered;
		params.Icon = Icon;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.testselectcharacter
	 * 		Flags  -> ()
	 */
	void UICON_HeroSelect_C::testselectcharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.testselectcharacter");
		
		UICON_HeroSelect_C_testselectcharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.ExecuteUbergraph_ICON_HeroSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UICON_HeroSelect_C::ExecuteUbergraph_ICON_HeroSelect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.ExecuteUbergraph_ICON_HeroSelect");
		
		UICON_HeroSelect_C_ExecuteUbergraph_ICON_HeroSelect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          characterID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UICON_HeroSelect_C::OnUnhovered__DelegateSignature(class UPlayerCharacterID* characterID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnUnhovered__DelegateSignature");
		
		UICON_HeroSelect_C_OnUnhovered__DelegateSignature_Params params {};
		params.characterID = characterID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetireClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UICON_HeroSelect_C::OnRetireClicked__DelegateSignature(class UPlayerCharacterID* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetireClicked__DelegateSignature");
		
		UICON_HeroSelect_C_OnRetireClicked__DelegateSignature_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetirementUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UICON_HeroSelect_C::OnRetirementUnhovered__DelegateSignature(class UPlayerCharacterID* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetirementUnhovered__DelegateSignature");
		
		UICON_HeroSelect_C_OnRetirementUnhovered__DelegateSignature_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetirementHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UICON_HeroSelect_C::OnRetirementHovered__DelegateSignature(class UPlayerCharacterID* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetirementHovered__DelegateSignature");
		
		UICON_HeroSelect_C_OnRetirementHovered__DelegateSignature_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UICON_HeroSelect_C::OnHovered__DelegateSignature(class UPlayerCharacterID* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnHovered__DelegateSignature");
		
		UICON_HeroSelect_C_OnHovered__DelegateSignature_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ICON_HeroSelect.ICON_HeroSelect_C.OnCharacterSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UICON_HeroSelect_C::OnCharacterSelected__DelegateSignature(class UPlayerCharacterID* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnCharacterSelected__DelegateSignature");
		
		UICON_HeroSelect_C_OnCharacterSelected__DelegateSignature_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UICON_HeroSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UICON_HeroSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ICON_HeroSelect.ICON_HeroSelect_C");
		return ptr;
	}

}


