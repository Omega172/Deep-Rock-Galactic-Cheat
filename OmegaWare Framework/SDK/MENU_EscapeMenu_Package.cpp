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
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.Remove Buttons If Condition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UHeader_ButtonCutCorner_C*>           InButtons                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		bool                                               InCondition                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMENU_EscapeMenu_C::RemoveButtonsIfCondition(TArray<class UHeader_ButtonCutCorner_C*>* InButtons, bool InCondition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.Remove Buttons If Condition");
		
		UMENU_EscapeMenu_C_RemoveButtonsIfCondition_Params params {};
		params.InCondition = InCondition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InButtons != nullptr)
			*InButtons = params.InButtons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.Remove Button If Condition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHeader_ButtonCutCorner_C*                   InButton                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InCondition                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMENU_EscapeMenu_C::RemoveButtonIfCondition(class UHeader_ButtonCutCorner_C* InButton, bool InCondition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.Remove Button If Condition");
		
		UMENU_EscapeMenu_C_RemoveButtonIfCondition_Params params {};
		params.InButton = InButton;
		params.InCondition = InCondition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.Should Modding Menu be Enabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMENU_EscapeMenu_C::ShouldModdingMenubeEnabled(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.Should Modding Menu be Enabled");
		
		UMENU_EscapeMenu_C_ShouldModdingMenubeEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UMENU_EscapeMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnKeyDown");
		
		UMENU_EscapeMenu_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMinersManualOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     IdentifyingObject                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OpenSpecificPage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMinersManualSinglePage                            page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_EscapeMenu_C::OnMinersManualOpen(class UObject* IdentifyingObject, bool OpenSpecificPage, EMinersManualSinglePage page)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMinersManualOpen");
		
		UMENU_EscapeMenu_C_OnMinersManualOpen_Params params {};
		params.IdentifyingObject = IdentifyingObject;
		params.OpenSpecificPage = OpenSpecificPage;
		params.page = page;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMinersManualNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMinersManualSection                               PendingSection                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       Pending_ID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMENU_EscapeMenu_C::OnMinersManualNotification(EMinersManualSection PendingSection, const struct FGuid& Pending_ID, const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMinersManualNotification");
		
		UMENU_EscapeMenu_C_OnMinersManualNotification_Params params {};
		params.PendingSection = PendingSection;
		params.Pending_ID = Pending_ID;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.ToggleButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHeader_ButtonCutCorner_C*                   InButton                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_EscapeMenu_C::ToggleButton(class UHeader_ButtonCutCorner_C* InButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.ToggleButton");
		
		UMENU_EscapeMenu_C_ToggleButton_Params params {};
		params.InButton = InButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenSection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWindowWidget*                               InSection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_EscapeMenu_C::OpenSection(class UWindowWidget* InSection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenSection");
		
		UMENU_EscapeMenu_C_OpenSection_Params params {};
		params.InSection = InSection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMouseButtonUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UMENU_EscapeMenu_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMouseButtonUp");
		
		UMENU_EscapeMenu_C_OnMouseButtonUp_Params params {};
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
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetHUDVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMENU_EscapeMenu_C::SetHUDVisible(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetHUDVisible");
		
		UMENU_EscapeMenu_C_SetHUDVisible_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.NotInParty
	 * 		Flags  -> ()
	 */
	bool UMENU_EscapeMenu_C::NotInParty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.NotInParty");
		
		UMENU_EscapeMenu_C_NotInParty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.UpdateDebugTerrainHash
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::UpdateDebugTerrainHash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.UpdateDebugTerrainHash");
		
		UMENU_EscapeMenu_C_UpdateDebugTerrainHash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetupLeaveButton
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::SetupLeaveButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetupLeaveButton");
		
		UMENU_EscapeMenu_C_SetupLeaveButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UMENU_EscapeMenu_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnKeyUp");
		
		UMENU_EscapeMenu_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_B9B49EC34D71CFDC07BF12AA58CE1ADE
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::OnFailure_B9B49EC34D71CFDC07BF12AA58CE1ADE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_B9B49EC34D71CFDC07BF12AA58CE1ADE");
		
		UMENU_EscapeMenu_C_OnFailure_B9B49EC34D71CFDC07BF12AA58CE1ADE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_B9B49EC34D71CFDC07BF12AA58CE1ADE
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::OnSuccess_B9B49EC34D71CFDC07BF12AA58CE1ADE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_B9B49EC34D71CFDC07BF12AA58CE1ADE");
		
		UMENU_EscapeMenu_C_OnSuccess_B9B49EC34D71CFDC07BF12AA58CE1ADE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.No_AE1052D648D3B4733E52C594A5522CE9
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::No_AE1052D648D3B4733E52C594A5522CE9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.No_AE1052D648D3B4733E52C594A5522CE9");
		
		UMENU_EscapeMenu_C_No_AE1052D648D3B4733E52C594A5522CE9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.Yes_AE1052D648D3B4733E52C594A5522CE9
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::Yes_AE1052D648D3B4733E52C594A5522CE9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.Yes_AE1052D648D3B4733E52C594A5522CE9");
		
		UMENU_EscapeMenu_C_Yes_AE1052D648D3B4733E52C594A5522CE9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.No_1ADE94D8445F020C5D27B8822516025E
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::No_1ADE94D8445F020C5D27B8822516025E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.No_1ADE94D8445F020C5D27B8822516025E");
		
		UMENU_EscapeMenu_C_No_1ADE94D8445F020C5D27B8822516025E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.Yes_1ADE94D8445F020C5D27B8822516025E
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::Yes_1ADE94D8445F020C5D27B8822516025E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.Yes_1ADE94D8445F020C5D27B8822516025E");
		
		UMENU_EscapeMenu_C_Yes_1ADE94D8445F020C5D27B8822516025E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.No_7D7D93E642CD15AC8E341D8B5ED1ACA8
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::No_7D7D93E642CD15AC8E341D8B5ED1ACA8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.No_7D7D93E642CD15AC8E341D8B5ED1ACA8");
		
		UMENU_EscapeMenu_C_No_7D7D93E642CD15AC8E341D8B5ED1ACA8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.Yes_7D7D93E642CD15AC8E341D8B5ED1ACA8
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::Yes_7D7D93E642CD15AC8E341D8B5ED1ACA8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.Yes_7D7D93E642CD15AC8E341D8B5ED1ACA8");
		
		UMENU_EscapeMenu_C_Yes_7D7D93E642CD15AC8E341D8B5ED1ACA8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.Construct");
		
		UMENU_EscapeMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.FSDSetFocus
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::FSDSetFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.FSDSetFocus");
		
		UMENU_EscapeMenu_C_FSDSetFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UMENU_EscapeMenu_C_BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMENU_EscapeMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.PreConstruct");
		
		UMENU_EscapeMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnShown
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::OnShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnShown");
		
		UMENU_EscapeMenu_C_OnShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnClosed
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::OnClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnClosed");
		
		UMENU_EscapeMenu_C_OnClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UMENU_EscapeMenu_C_BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_CallToAction2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::BndEvt__BTN_CallToAction2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_CallToAction2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");
		
		UMENU_EscapeMenu_C_BndEvt__BTN_CallToAction2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature");
		
		UMENU_EscapeMenu_C_BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenMinersManualSection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     IdentifyingObject                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_EscapeMenu_C::OpenMinersManualSection(class UObject* IdentifyingObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenMinersManualSection");
		
		UMENU_EscapeMenu_C_OpenMinersManualSection_Params params {};
		params.IdentifyingObject = IdentifyingObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHeader_ButtonCutCorner_C*                   Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_EscapeMenu_C::BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");
		
		UMENU_EscapeMenu_C_BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Statuss_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHeader_ButtonCutCorner_C*                   Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_EscapeMenu_C::BndEvt__BTN_Statuss_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Statuss_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature");
		
		UMENU_EscapeMenu_C_BndEvt__BTN_Statuss_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Options_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHeader_ButtonCutCorner_C*                   Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_EscapeMenu_C::BndEvt__BTN_Options_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Options_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature");
		
		UMENU_EscapeMenu_C_BndEvt__BTN_Options_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenMinersManualPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMinersManualSinglePage                            page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_EscapeMenu_C::OpenMinersManualPage(EMinersManualSinglePage page)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenMinersManualPage");
		
		UMENU_EscapeMenu_C_OpenMinersManualPage_Params params {};
		params.page = page;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.SelectNextButton
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::SelectNextButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.SelectNextButton");
		
		UMENU_EscapeMenu_C_SelectNextButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.SelectPrevButton
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::SelectPrevButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.SelectPrevButton");
		
		UMENU_EscapeMenu_C_SelectPrevButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__B_Exit_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBasic_ButtonCutCorner_C*                    Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_EscapeMenu_C::BndEvt__B_Exit_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__B_Exit_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UMENU_EscapeMenu_C_BndEvt__B_Exit_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__B_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::BndEvt__B_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__B_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");
		
		UMENU_EscapeMenu_C_BndEvt__B_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_ChangeProfile_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBasic_ButtonCutCorner_C*                    Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_EscapeMenu_C::BndEvt__BTN_ChangeProfile_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_ChangeProfile_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UMENU_EscapeMenu_C_BndEvt__BTN_ChangeProfile_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnNewTopWindow
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::OnNewTopWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnNewTopWindow");
		
		UMENU_EscapeMenu_C_OnNewTopWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_PatchNotes_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHeader_ButtonCutCorner_C*                   Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_EscapeMenu_C::BndEvt__BTN_PatchNotes_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_PatchNotes_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UMENU_EscapeMenu_C_BndEvt__BTN_PatchNotes_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Modding_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHeader_ButtonCutCorner_C*                   Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_EscapeMenu_C::BndEvt__BTN_Modding_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Modding_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UMENU_EscapeMenu_C_BndEvt__BTN_Modding_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__ITM_RestoreSave_K2Node_ComponentBoundEvent_6_OnShowRestoreSaveClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::BndEvt__ITM_RestoreSave_K2Node_ComponentBoundEvent_6_OnShowRestoreSaveClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__ITM_RestoreSave_K2Node_ComponentBoundEvent_6_OnShowRestoreSaveClicked__DelegateSignature");
		
		UMENU_EscapeMenu_C_BndEvt__ITM_RestoreSave_K2Node_ComponentBoundEvent_6_OnShowRestoreSaveClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_DLC_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHeader_ButtonCutCorner_C*                   Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_EscapeMenu_C::BndEvt__BTN_DLC_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_DLC_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");
		
		UMENU_EscapeMenu_C_BndEvt__BTN_DLC_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_DummyModding_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHeader_ButtonCutCorner_C*                   Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_EscapeMenu_C::BndEvt__BTN_DummyModding_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_DummyModding_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");
		
		UMENU_EscapeMenu_C_BndEvt__BTN_DummyModding_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenMinersManualFromID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMinersManualSection                               Section                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       ID                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_EscapeMenu_C::OpenMinersManualFromID(EMinersManualSection Section, const struct FGuid& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenMinersManualFromID");
		
		UMENU_EscapeMenu_C_OpenMinersManualFromID_Params params {};
		params.Section = Section;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__MENU_EscapeMenu_BTN_Merch_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHeader_ButtonCutCorner_C*                   Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_EscapeMenu_C::BndEvt__MENU_EscapeMenu_BTN_Merch_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__MENU_EscapeMenu_BTN_Merch_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");
		
		UMENU_EscapeMenu_C_BndEvt__MENU_EscapeMenu_BTN_Merch_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMinersManualClosed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWindowWidget*                               Window                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_EscapeMenu_C::OnMinersManualClosed(class UWindowWidget* Window)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMinersManualClosed");
		
		UMENU_EscapeMenu_C_OnMinersManualClosed_Params params {};
		params.Window = Window;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnCreditsClicked
	 * 		Flags  -> ()
	 */
	void UMENU_EscapeMenu_C::OnCreditsClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnCreditsClicked");
		
		UMENU_EscapeMenu_C_OnCreditsClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnInputSourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFSDInputSource                                    InputSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_EscapeMenu_C::OnInputSourceChanged(EFSDInputSource InputSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnInputSourceChanged");
		
		UMENU_EscapeMenu_C_OnInputSourceChanged_Params params {};
		params.InputSource = InputSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MENU_EscapeMenu.MENU_EscapeMenu_C.ExecuteUbergraph_MENU_EscapeMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMENU_EscapeMenu_C::ExecuteUbergraph_MENU_EscapeMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.ExecuteUbergraph_MENU_EscapeMenu");
		
		UMENU_EscapeMenu_C_ExecuteUbergraph_MENU_EscapeMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMENU_EscapeMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMENU_EscapeMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MENU_EscapeMenu.MENU_EscapeMenu_C");
		return ptr;
	}

}


