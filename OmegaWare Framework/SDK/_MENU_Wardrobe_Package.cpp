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
	 * 		Name   -> Function _MENU_Wardrobe._MENU_Wardrobe_C.EquipRandomItems
	 * 		Flags  -> ()
	 */
	void U_MENU_Wardrobe_C::EquipRandomItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_Wardrobe._MENU_Wardrobe_C.EquipRandomItems");
		
		U_MENU_Wardrobe_C_EquipRandomItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_Wardrobe._MENU_Wardrobe_C.PlayIntroAnimations
	 * 		Flags  -> ()
	 */
	void U_MENU_Wardrobe_C::PlayIntroAnimations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_Wardrobe._MENU_Wardrobe_C.PlayIntroAnimations");
		
		U_MENU_Wardrobe_C_PlayIntroAnimations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_Wardrobe._MENU_Wardrobe_C.CheckArmorMasteryUnlocks
	 * 		Flags  -> ()
	 */
	void U_MENU_Wardrobe_C::CheckArmorMasteryUnlocks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_Wardrobe._MENU_Wardrobe_C.CheckArmorMasteryUnlocks");
		
		U_MENU_Wardrobe_C_CheckArmorMasteryUnlocks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_Wardrobe._MENU_Wardrobe_C.InitSlotColumn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPanelWidget*                                InBox                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UITM_Wardrobe_ItemSelector_C*                InSelector                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InLeftSide                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U_MENU_Wardrobe_C::InitSlotColumn(class UPanelWidget* InBox, class UITM_Wardrobe_ItemSelector_C* InSelector, bool InLeftSide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_Wardrobe._MENU_Wardrobe_C.InitSlotColumn");
		
		U_MENU_Wardrobe_C_InitSlotColumn_Params params {};
		params.InBox = InBox;
		params.InSelector = InSelector;
		params.InLeftSide = InLeftSide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_Wardrobe._MENU_Wardrobe_C.RefreshSlots
	 * 		Flags  -> ()
	 */
	void U_MENU_Wardrobe_C::RefreshSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_Wardrobe._MENU_Wardrobe_C.RefreshSlots");
		
		U_MENU_Wardrobe_C_RefreshSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_Wardrobe._MENU_Wardrobe_C.ReleaseRenderTargets
	 * 		Flags  -> ()
	 */
	void U_MENU_Wardrobe_C::ReleaseRenderTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_Wardrobe._MENU_Wardrobe_C.ReleaseRenderTargets");
		
		U_MENU_Wardrobe_C_ReleaseRenderTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_Wardrobe._MENU_Wardrobe_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply U_MENU_Wardrobe_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_Wardrobe._MENU_Wardrobe_C.OnKeyUp");
		
		U_MENU_Wardrobe_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function _MENU_Wardrobe._MENU_Wardrobe_C.GetCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IgnorePreviewCharacter                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APlayerCharacter*                            Character                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_Wardrobe_C::GetCharacter(bool IgnorePreviewCharacter, class APlayerCharacter** Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_Wardrobe._MENU_Wardrobe_C.GetCharacter");
		
		U_MENU_Wardrobe_C_GetCharacter_Params params {};
		params.IgnorePreviewCharacter = IgnorePreviewCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Character != nullptr)
			*Character = params.Character;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_Wardrobe._MENU_Wardrobe_C.BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void U_MENU_Wardrobe_C::BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_Wardrobe._MENU_Wardrobe_C.BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature");
		
		U_MENU_Wardrobe_C_BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_Wardrobe._MENU_Wardrobe_C.ReceiveCloseCommand
	 * 		Flags  -> ()
	 */
	void U_MENU_Wardrobe_C::ReceiveCloseCommand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_Wardrobe._MENU_Wardrobe_C.ReceiveCloseCommand");
		
		U_MENU_Wardrobe_C_ReceiveCloseCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_Wardrobe._MENU_Wardrobe_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U_MENU_Wardrobe_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_Wardrobe._MENU_Wardrobe_C.PreConstruct");
		
		U_MENU_Wardrobe_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_Wardrobe._MENU_Wardrobe_C.OnShown
	 * 		Flags  -> ()
	 */
	void U_MENU_Wardrobe_C::OnShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_Wardrobe._MENU_Wardrobe_C.OnShown");
		
		U_MENU_Wardrobe_C_OnShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_Wardrobe._MENU_Wardrobe_C.BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_Wardrobe_C::BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(class UClass* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_Wardrobe._MENU_Wardrobe_C.BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature");
		
		U_MENU_Wardrobe_C_BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_Wardrobe._MENU_Wardrobe_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature
	 * 		Flags  -> ()
	 */
	void U_MENU_Wardrobe_C::BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_Wardrobe._MENU_Wardrobe_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature");
		
		U_MENU_Wardrobe_C_BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_Wardrobe._MENU_Wardrobe_C.Refresh
	 * 		Flags  -> ()
	 */
	void U_MENU_Wardrobe_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_Wardrobe._MENU_Wardrobe_C.Refresh");
		
		U_MENU_Wardrobe_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_Wardrobe._MENU_Wardrobe_C.SetCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_Wardrobe_C::SetCharacter(class UPlayerCharacterID* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_Wardrobe._MENU_Wardrobe_C.SetCharacter");
		
		U_MENU_Wardrobe_C_SetCharacter_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_Wardrobe._MENU_Wardrobe_C.OnClosed
	 * 		Flags  -> ()
	 */
	void U_MENU_Wardrobe_C::OnClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_Wardrobe._MENU_Wardrobe_C.OnClosed");
		
		U_MENU_Wardrobe_C_OnClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_Wardrobe._MENU_Wardrobe_C.Construct
	 * 		Flags  -> ()
	 */
	void U_MENU_Wardrobe_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_Wardrobe._MENU_Wardrobe_C.Construct");
		
		U_MENU_Wardrobe_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_Wardrobe._MENU_Wardrobe_C.OnEquippedChanged_Event_1
	 * 		Flags  -> ()
	 */
	void U_MENU_Wardrobe_C::OnEquippedChanged_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_Wardrobe._MENU_Wardrobe_C.OnEquippedChanged_Event_1");
		
		U_MENU_Wardrobe_C_OnEquippedChanged_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_Wardrobe._MENU_Wardrobe_C.LoadoutRefreshed
	 * 		Flags  -> ()
	 */
	void U_MENU_Wardrobe_C::LoadoutRefreshed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_Wardrobe._MENU_Wardrobe_C.LoadoutRefreshed");
		
		U_MENU_Wardrobe_C_LoadoutRefreshed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function _MENU_Wardrobe._MENU_Wardrobe_C.ExecuteUbergraph__MENU_Wardrobe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U_MENU_Wardrobe_C::ExecuteUbergraph__MENU_Wardrobe(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function _MENU_Wardrobe._MENU_Wardrobe_C.ExecuteUbergraph__MENU_Wardrobe");
		
		U_MENU_Wardrobe_C_ExecuteUbergraph__MENU_Wardrobe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction U_MENU_Wardrobe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* U_MENU_Wardrobe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass _MENU_Wardrobe._MENU_Wardrobe_C");
		return ptr;
	}

}


