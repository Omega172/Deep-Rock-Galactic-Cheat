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
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ResetCheats
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ResetCheats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ResetCheats");
		
		ABP_PlayerController_SpaceRig_C_ResetCheats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.GetEscapeMenu
	 * 		Flags  -> ()
	 */
	class UEscapeMenuWindow* ABP_PlayerController_SpaceRig_C::GetEscapeMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.GetEscapeMenu");
		
		ABP_PlayerController_SpaceRig_C_GetEscapeMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ModdedSavegameCheck
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ModdedSavegameCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ModdedSavegameCheck");
		
		ABP_PlayerController_SpaceRig_C_ModdedSavegameCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Change Savegame
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ChangeSavegame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Change Savegame");
		
		ABP_PlayerController_SpaceRig_C_ChangeSavegame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.GetMissionSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWindowWidget*                               Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::GetMissionSelect(class UWindowWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.GetMissionSelect");
		
		ABP_PlayerController_SpaceRig_C_GetMissionSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.GetPopupCrafting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWindowWidget*                               Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::GetPopupCrafting(class UWindowWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.GetPopupCrafting");
		
		ABP_PlayerController_SpaceRig_C_GetPopupCrafting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.GetCrafting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWindowWidget*                               Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::GetCrafting(class UWindowWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.GetCrafting");
		
		ABP_PlayerController_SpaceRig_C_GetCrafting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PreloadAssets
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::PreloadAssets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PreloadAssets");
		
		ABP_PlayerController_SpaceRig_C_PreloadAssets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.hudVisible
	 * 		Flags  -> ()
	 */
	bool ABP_PlayerController_SpaceRig_C::hudVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.hudVisible");
		
		ABP_PlayerController_SpaceRig_C_hudVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ChangeHUDVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHUDVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EHUDVisibilityReason                               reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::ChangeHUDVisible(bool IsHUDVisible, EHUDVisibilityReason reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ChangeHUDVisible");
		
		ABP_PlayerController_SpaceRig_C_ChangeHUDVisible_Params params {};
		params.IsHUDVisible = IsHUDVisible;
		params.reason = reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SelectLastPlayedCharacter
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::SelectLastPlayedCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SelectLastPlayedCharacter");
		
		ABP_PlayerController_SpaceRig_C_SelectLastPlayedCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.AddWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ZOrder                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::AddWidget(class UUserWidget** Widget, int32_t ZOrder, ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.AddWidget");
		
		ABP_PlayerController_SpaceRig_C_AddWidget_Params params {};
		params.ZOrder = ZOrder;
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ChangeCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          NewCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::ChangeCharacter(class UPlayerCharacterID* NewCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ChangeCharacter");
		
		ABP_PlayerController_SpaceRig_C_ChangeCharacter_Params params {};
		params.NewCharacter = NewCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.CreateUI
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::CreateUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.CreateUI");
		
		ABP_PlayerController_SpaceRig_C_CreateUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::InpActEvt_PushToTalk_K2Node_InputActionEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_6");
		
		ABP_PlayerController_SpaceRig_C_InpActEvt_PushToTalk_K2Node_InputActionEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::InpActEvt_PushToTalk_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_5");
		
		ABP_PlayerController_SpaceRig_C_InpActEvt_PushToTalk_K2Node_InputActionEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_MenuButton_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::InpActEvt_MenuButton_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_MenuButton_K2Node_InputActionEvent_4");
		
		ABP_PlayerController_SpaceRig_C_InpActEvt_MenuButton_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Chat_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::InpActEvt_Chat_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Chat_K2Node_InputActionEvent_3");
		
		ABP_PlayerController_SpaceRig_C_InpActEvt_Chat_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_CallDonkey_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::InpActEvt_CallDonkey_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_CallDonkey_K2Node_InputActionEvent_2");
		
		ABP_PlayerController_SpaceRig_C_InpActEvt_CallDonkey_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_MapTool_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::InpActEvt_MapTool_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_MapTool_K2Node_InputActionEvent_1");
		
		ABP_PlayerController_SpaceRig_C_InpActEvt_MapTool_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Subtract_K2Node_InputKeyEvent_7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::InpActEvt_Subtract_K2Node_InputKeyEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Subtract_K2Node_InputKeyEvent_7");
		
		ABP_PlayerController_SpaceRig_C_InpActEvt_Subtract_K2Node_InputKeyEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Eight_K2Node_InputKeyEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::InpActEvt_Eight_K2Node_InputKeyEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Eight_K2Node_InputKeyEvent_6");
		
		ABP_PlayerController_SpaceRig_C_InpActEvt_Eight_K2Node_InputKeyEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Eight_K2Node_InputKeyEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::InpActEvt_Eight_K2Node_InputKeyEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Eight_K2Node_InputKeyEvent_5");
		
		ABP_PlayerController_SpaceRig_C_InpActEvt_Eight_K2Node_InputKeyEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Nine_K2Node_InputKeyEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::InpActEvt_Nine_K2Node_InputKeyEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Nine_K2Node_InputKeyEvent_4");
		
		ABP_PlayerController_SpaceRig_C_InpActEvt_Nine_K2Node_InputKeyEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Nine_K2Node_InputKeyEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::InpActEvt_Nine_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Nine_K2Node_InputKeyEvent_3");
		
		ABP_PlayerController_SpaceRig_C_InpActEvt_Nine_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Ctrl+Alt_H_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::InpActEvt_CtrlAlt_H_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Ctrl+Alt_H_K2Node_InputKeyEvent_2");
		
		ABP_PlayerController_SpaceRig_C_InpActEvt_CtrlAlt_H_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnLoaded_0C1A95084D16C934A469CF8C3B445101
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::OnLoaded_0C1A95084D16C934A469CF8C3B445101(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnLoaded_0C1A95084D16C934A469CF8C3B445101");
		
		ABP_PlayerController_SpaceRig_C_OnLoaded_0C1A95084D16C934A469CF8C3B445101_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnFailure_84F86EB44BDC03B3D4D52D92FC0B069A
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::OnFailure_84F86EB44BDC03B3D4D52D92FC0B069A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnFailure_84F86EB44BDC03B3D4D52D92FC0B069A");
		
		ABP_PlayerController_SpaceRig_C_OnFailure_84F86EB44BDC03B3D4D52D92FC0B069A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnSuccess_84F86EB44BDC03B3D4D52D92FC0B069A
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::OnSuccess_84F86EB44BDC03B3D4D52D92FC0B069A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnSuccess_84F86EB44BDC03B3D4D52D92FC0B069A");
		
		ABP_PlayerController_SpaceRig_C_OnSuccess_84F86EB44BDC03B3D4D52D92FC0B069A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Home_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::InpActEvt_Home_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Home_K2Node_InputKeyEvent_1");
		
		ABP_PlayerController_SpaceRig_C_InpActEvt_Home_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnFailure_FD5D0BC24D561288D20ABE9353DBA180
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::OnFailure_FD5D0BC24D561288D20ABE9353DBA180()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnFailure_FD5D0BC24D561288D20ABE9353DBA180");
		
		ABP_PlayerController_SpaceRig_C_OnFailure_FD5D0BC24D561288D20ABE9353DBA180_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnSuccess_FD5D0BC24D561288D20ABE9353DBA180
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::OnSuccess_FD5D0BC24D561288D20ABE9353DBA180()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnSuccess_FD5D0BC24D561288D20ABE9353DBA180");
		
		ABP_PlayerController_SpaceRig_C_OnSuccess_FD5D0BC24D561288D20ABE9353DBA180_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowServerBrowser
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ShowServerBrowser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowServerBrowser");
		
		ABP_PlayerController_SpaceRig_C_ShowServerBrowser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowMissionSelect
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ShowMissionSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowMissionSelect");
		
		ABP_PlayerController_SpaceRig_C_ShowMissionSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Client_OpenMap
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::Client_OpenMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Client_OpenMap");
		
		ABP_PlayerController_SpaceRig_C_Client_OpenMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PlayerChangeCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          NewCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::PlayerChangeCharacter(class UPlayerCharacterID* NewCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PlayerChangeCharacter");
		
		ABP_PlayerController_SpaceRig_C_PlayerChangeCharacter_Params params {};
		params.NewCharacter = NewCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.RecievePreClientTravel
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::RecievePreClientTravel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.RecievePreClientTravel");
		
		ABP_PlayerController_SpaceRig_C_RecievePreClientTravel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterSelect
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ShowCharacterSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterSelect");
		
		ABP_PlayerController_SpaceRig_C_ShowCharacterSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ControllerReady
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ControllerReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ControllerReady");
		
		ABP_PlayerController_SpaceRig_C_ControllerReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.RecieveOnControllerReady
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::RecieveOnControllerReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.RecieveOnControllerReady");
		
		ABP_PlayerController_SpaceRig_C_RecieveOnControllerReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBuyItemPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItemUpgrade*                                Upgrade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::ShowBuyItemPopup(class UClass* Item, class UItemUpgrade* Upgrade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBuyItemPopup");
		
		ABP_PlayerController_SpaceRig_C_ShowBuyItemPopup_Params params {};
		params.Item = Item;
		params.Upgrade = Upgrade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ReceiveDestroyed");
		
		ABP_PlayerController_SpaceRig_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCharacterPossesd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::OnCharacterPossesd(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCharacterPossesd");
		
		ABP_PlayerController_SpaceRig_C_OnCharacterPossesd_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ReceiveBeginPlay");
		
		ABP_PlayerController_SpaceRig_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharCustomization
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ShowCharCustomization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharCustomization");
		
		ABP_PlayerController_SpaceRig_C_ShowCharCustomization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCrafting
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ShowCrafting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCrafting");
		
		ABP_PlayerController_SpaceRig_C_ShowCrafting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterScreenAndWorld
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ShowCharacterScreenAndWorld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterScreenAndWorld");
		
		ABP_PlayerController_SpaceRig_C_ShowCharacterScreenAndWorld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCraftingAndWorld
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ShowCraftingAndWorld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCraftingAndWorld");
		
		ABP_PlayerController_SpaceRig_C_ShowCraftingAndWorld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCustomizationAndWorld
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ShowCustomizationAndWorld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCustomizationAndWorld");
		
		ABP_PlayerController_SpaceRig_C_ShowCustomizationAndWorld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SpawnPlayer
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::SpawnPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SpawnPlayer");
		
		ABP_PlayerController_SpaceRig_C_SpawnPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowFirstCharacterSelect
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ShowFirstCharacterSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowFirstCharacterSelect");
		
		ABP_PlayerController_SpaceRig_C_ShowFirstCharacterSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OpenCharacterSelector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OpenVideo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AllowBack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerController_SpaceRig_C::OpenCharacterSelector(bool OpenVideo, bool AllowBack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OpenCharacterSelector");
		
		ABP_PlayerController_SpaceRig_C_OpenCharacterSelector_Params params {};
		params.OpenVideo = OpenVideo;
		params.AllowBack = AllowBack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowReconnectController
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ShowReconnectController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowReconnectController");
		
		ABP_PlayerController_SpaceRig_C_ShowReconnectController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnFirstWindowOpened
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::OnFirstWindowOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnFirstWindowOpened");
		
		ABP_PlayerController_SpaceRig_C_OnFirstWindowOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnLastWindowClosed
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::OnLastWindowClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnLastWindowClosed");
		
		ABP_PlayerController_SpaceRig_C_OnLastWindowClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowNetworkError
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ShowNetworkError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowNetworkError");
		
		ABP_PlayerController_SpaceRig_C_ShowNetworkError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowTrading
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ShowTrading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowTrading");
		
		ABP_PlayerController_SpaceRig_C_ShowTrading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowWindowByClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      WindowClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ZOrder                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::ShowWindowByClass(class UClass* WindowClass, int32_t ZOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowWindowByClass");
		
		ABP_PlayerController_SpaceRig_C_ShowWindowByClass_Params params {};
		params.WindowClass = WindowClass;
		params.ZOrder = ZOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCheatMenu
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ShowCheatMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCheatMenu");
		
		ABP_PlayerController_SpaceRig_C_ShowCheatMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBarMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASpaceRigBar*                                Bar                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::ShowBarMenu(class ASpaceRigBar* Bar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBarMenu");
		
		ABP_PlayerController_SpaceRig_C_ShowBarMenu_Params params {};
		params.Bar = Bar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnRoundSelected_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASpaceRigBar*                                Bar                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDrinkableDataAsset*                         RequestedDrink                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::OnRoundSelected_Event(class ASpaceRigBar* Bar, class UDrinkableDataAsset* RequestedDrink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnRoundSelected_Event");
		
		ABP_PlayerController_SpaceRig_C_OnRoundSelected_Event_Params params {};
		params.Bar = Bar;
		params.RequestedDrink = RequestedDrink;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OrderBarRound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASpaceRigBar*                                Bar                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDrinkableDataAsset*                         Drink                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::OrderBarRound(class ASpaceRigBar* Bar, class UDrinkableDataAsset* Drink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OrderBarRound");
		
		ABP_PlayerController_SpaceRig_C_OrderBarRound_Params params {};
		params.Bar = Bar;
		params.Drink = Drink;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Deduct Credits On Client
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::DeductCreditsOnClient(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Deduct Credits On Client");
		
		ABP_PlayerController_SpaceRig_C_DeductCreditsOnClient_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowJobs
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ShowJobs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowJobs");
		
		ABP_PlayerController_SpaceRig_C_ShowJobs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowItemUpgradeScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      CharacterClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      itemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemCategory                                      ItemCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::ShowItemUpgradeScreen(class UClass* CharacterClass, class UClass* itemClass, EItemCategory ItemCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowItemUpgradeScreen");
		
		ABP_PlayerController_SpaceRig_C_ShowItemUpgradeScreen_Params params {};
		params.CharacterClass = CharacterClass;
		params.itemClass = itemClass;
		params.ItemCategory = ItemCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBoscoUpgrades
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ShowBoscoUpgrades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBoscoUpgrades");
		
		ABP_PlayerController_SpaceRig_C_ShowBoscoUpgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnPlayerSpawnBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::OnPlayerSpawnBegin(int32_t PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnPlayerSpawnBegin");
		
		ABP_PlayerController_SpaceRig_C_OnPlayerSpawnBegin_Params params {};
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnDroppodLeave
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::OnDroppodLeave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnDroppodLeave");
		
		ABP_PlayerController_SpaceRig_C_OnDroppodLeave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PlayerThrewMugInHoop
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::PlayerThrewMugInHoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PlayerThrewMugInHoop");
		
		ABP_PlayerController_SpaceRig_C_PlayerThrewMugInHoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PlayerPlayedEntireSong
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::PlayerPlayedEntireSong()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PlayerPlayedEntireSong");
		
		ABP_PlayerController_SpaceRig_C_PlayerPlayedEntireSong_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.HandleDiscordConsole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_DiscordConsole_C*                        DiscordConsole                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::HandleDiscordConsole(class ABP_DiscordConsole_C* DiscordConsole)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.HandleDiscordConsole");
		
		ABP_PlayerController_SpaceRig_C_HandleDiscordConsole_Params params {};
		params.DiscordConsole = DiscordConsole;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SetUsableDiscord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Usable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerController_SpaceRig_C::SetUsableDiscord(bool Usable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SetUsableDiscord");
		
		ABP_PlayerController_SpaceRig_C_SetUsableDiscord_Params params {};
		params.Usable = Usable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowDeepDives
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ShowDeepDives()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowDeepDives");
		
		ABP_PlayerController_SpaceRig_C_ShowDeepDives_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OpenSpacerigConsole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_BaseSpaceRigConsole_C*                   Console                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::OpenSpacerigConsole(class ABP_BaseSpaceRigConsole_C* Console)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OpenSpacerigConsole");
		
		ABP_PlayerController_SpaceRig_C_OpenSpacerigConsole_Params params {};
		params.Console = Console;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SetHasShownCharacterSelector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasShown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerController_SpaceRig_C::SetHasShownCharacterSelector(bool HasShown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SetHasShownCharacterSelector");
		
		ABP_PlayerController_SpaceRig_C_SetHasShownCharacterSelector_Params params {};
		params.HasShown = HasShown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SetIsEscapeMenuEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEscapeMenuEnabled                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerController_SpaceRig_C::SetIsEscapeMenuEnabled(bool IsEscapeMenuEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SetIsEscapeMenuEnabled");
		
		ABP_PlayerController_SpaceRig_C_SetIsEscapeMenuEnabled_Params params {};
		params.IsEscapeMenuEnabled = IsEscapeMenuEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Reset Player Location
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ResetPlayerLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Reset Player Location");
		
		ABP_PlayerController_SpaceRig_C_ResetPlayerLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Reset Player Scale On Clients
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ResetPlayerScaleOnClients()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Reset Player Scale On Clients");
		
		ABP_PlayerController_SpaceRig_C_ResetPlayerScaleOnClients_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Server_PopLooatAtAffliction
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::Server_PopLooatAtAffliction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Server_PopLooatAtAffliction");
		
		ABP_PlayerController_SpaceRig_C_Server_PopLooatAtAffliction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowLookAtConsole
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ShowLookAtConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowLookAtConsole");
		
		ABP_PlayerController_SpaceRig_C_ShowLookAtConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.LaunchTutorial
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::LaunchTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.LaunchTutorial");
		
		ABP_PlayerController_SpaceRig_C_LaunchTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PromptLaunchTutorial
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::PromptLaunchTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PromptLaunchTutorial");
		
		ABP_PlayerController_SpaceRig_C_PromptLaunchTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.On Prompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Yes                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerController_SpaceRig_C::OnPrompt(bool Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.On Prompt");
		
		ABP_PlayerController_SpaceRig_C_OnPrompt_Params params {};
		params.Yes = Yes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterSelectionBackground
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               resetToDefaultWeapon                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ECharselectionCameraLocation                       cameraLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::ShowCharacterSelectionBackground(bool resetToDefaultWeapon, ECharselectionCameraLocation cameraLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterSelectionBackground");
		
		ABP_PlayerController_SpaceRig_C_ShowCharacterSelectionBackground_Params params {};
		params.resetToDefaultWeapon = resetToDefaultWeapon;
		params.cameraLocation = cameraLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowForgeWorkshop
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ShowForgeWorkshop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowForgeWorkshop");
		
		ABP_PlayerController_SpaceRig_C_ShowForgeWorkshop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ReloadSpacerig
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ReloadSpacerig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ReloadSpacerig");
		
		ABP_PlayerController_SpaceRig_C_ReloadSpacerig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnRestartGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Yes                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CreateModdedSave                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerController_SpaceRig_C::OnRestartGame(bool Yes, bool CreateModdedSave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnRestartGame");
		
		ABP_PlayerController_SpaceRig_C_OnRestartGame_Params params {};
		params.Yes = Yes;
		params.CreateModdedSave = CreateModdedSave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnRestartSpacerig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Yes                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CreateModdedSave                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerController_SpaceRig_C::OnRestartSpacerig(bool Yes, bool CreateModdedSave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnRestartSpacerig");
		
		ABP_PlayerController_SpaceRig_C_OnRestartSpacerig_Params params {};
		params.Yes = Yes;
		params.CreateModdedSave = CreateModdedSave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnPackageMounted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Sandbox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerController_SpaceRig_C::OnPackageMounted(bool Sandbox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnPackageMounted");
		
		ABP_PlayerController_SpaceRig_C_OnPackageMounted_Params params {};
		params.Sandbox = Sandbox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::OnPlayer(class AFSDPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnPlayer");
		
		ABP_PlayerController_SpaceRig_C_OnPlayer_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowEscapeMenu
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::ShowEscapeMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowEscapeMenu");
		
		ABP_PlayerController_SpaceRig_C_ShowEscapeMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OpenStandaloneMinersManual
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMinersManualSection                               Section                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       ID                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::OpenStandaloneMinersManual(EMinersManualSection Section, const struct FGuid& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OpenStandaloneMinersManual");
		
		ABP_PlayerController_SpaceRig_C_OpenStandaloneMinersManual_Params params {};
		params.Section = Section;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OpenStandaloneMinersManualPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMinersManualSinglePage                            page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::OpenStandaloneMinersManualPage(EMinersManualSinglePage page)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OpenStandaloneMinersManualPage");
		
		ABP_PlayerController_SpaceRig_C_OpenStandaloneMinersManualPage_Params params {};
		params.page = page;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Back_Event_1
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::Back_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Back_Event_1");
		
		ABP_PlayerController_SpaceRig_C_Back_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCharacterSelected
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::OnCharacterSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCharacterSelected");
		
		ABP_PlayerController_SpaceRig_C_OnCharacterSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnHostTimerChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              newTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::OnHostTimerChanged(float newTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnHostTimerChanged");
		
		ABP_PlayerController_SpaceRig_C_OnHostTimerChanged_Params params {};
		params.newTime = newTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnMissionTimerChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              newTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::OnMissionTimerChanged(float newTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnMissionTimerChanged");
		
		ABP_PlayerController_SpaceRig_C_OnMissionTimerChanged_Params params {};
		params.newTime = newTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.DoCountDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              newTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::DoCountDown(float newTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.DoCountDown");
		
		ABP_PlayerController_SpaceRig_C_DoCountDown_Params params {};
		params.newTime = newTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowReconnect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerController_SpaceRig_C::ShowReconnect(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowReconnect");
		
		ABP_PlayerController_SpaceRig_C_ShowReconnect_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnGravityChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentGravity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Change                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::OnGravityChanged(float CurrentGravity, float Change)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnGravityChanged");
		
		ABP_PlayerController_SpaceRig_C_OnGravityChanged_Params params {};
		params.CurrentGravity = CurrentGravity;
		params.Change = Change;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.CustomEvent_1");
		
		ABP_PlayerController_SpaceRig_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ExecuteUbergraph_BP_PlayerController_SpaceRig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_SpaceRig_C::ExecuteUbergraph_BP_PlayerController_SpaceRig(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ExecuteUbergraph_BP_PlayerController_SpaceRig");
		
		ABP_PlayerController_SpaceRig_C_ExecuteUbergraph_BP_PlayerController_SpaceRig_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCheatRequested__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::OnCheatRequested__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCheatRequested__DelegateSignature");
		
		ABP_PlayerController_SpaceRig_C_OnCheatRequested__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnOpenedEscapeMenu__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::OnOpenedEscapeMenu__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnOpenedEscapeMenu__DelegateSignature");
		
		ABP_PlayerController_SpaceRig_C_OnOpenedEscapeMenu__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnToggleHUD__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_PlayerController_SpaceRig_C::OnToggleHUD__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnToggleHUD__DelegateSignature");
		
		ABP_PlayerController_SpaceRig_C_OnToggleHUD__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PlayerController_SpaceRig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PlayerController_SpaceRig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C");
		return ptr;
	}

}


