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
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetPerkToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UITM_LoadOut_PerksEquip_Slot_C::GetPerkToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetPerkToolTip");
		
		UITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetIsSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_LoadOut_PerksEquip_Slot_C::GetIsSelected(bool* IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetIsSelected");
		
		UITM_LoadOut_PerksEquip_Slot_C_GetIsSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSelected != nullptr)
			*IsSelected = params.IsSelected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.UpdateSelectionBorder
	 * 		Flags  -> ()
	 */
	void UITM_LoadOut_PerksEquip_Slot_C::UpdateSelectionBorder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.UpdateSelectionBorder");
		
		UITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_LoadOut_PerksEquip_Slot_C::SetSelected(bool InSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetSelected");
		
		UITM_LoadOut_PerksEquip_Slot_C_SetSelected_Params params {};
		params.InSelected = InSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hovered                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_LoadOut_PerksEquip_Slot_C::SetHovered(bool Hovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetHovered");
		
		UITM_LoadOut_PerksEquip_Slot_C_SetHovered_Params params {};
		params.Hovered = Hovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetIsLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLocked                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_LoadOut_PerksEquip_Slot_C::GetIsLocked(bool* IsLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetIsLocked");
		
		UITM_LoadOut_PerksEquip_Slot_C_GetIsLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsLocked != nullptr)
			*IsLocked = params.IsLocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetSlotType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPerkUsageType                                     SlotType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadOut_PerksEquip_Slot_C::GetSlotType(EPerkUsageType* SlotType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetSlotType");
		
		UITM_LoadOut_PerksEquip_Slot_C_GetSlotType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SlotType != nullptr)
			*SlotType = params.SlotType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetPerkAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkAsset*                                  PerkAsset                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadOut_PerksEquip_Slot_C::GetPerkAsset(class UPerkAsset** PerkAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetPerkAsset");
		
		UITM_LoadOut_PerksEquip_Slot_C_GetPerkAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PerkAsset != nullptr)
			*PerkAsset = params.PerkAsset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetPerkAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkAsset*                                  PerkAsset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadOut_PerksEquip_Slot_C::SetPerkAsset(class UPerkAsset* PerkAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetPerkAsset");
		
		UITM_LoadOut_PerksEquip_Slot_C_SetPerkAsset_Params params {};
		params.PerkAsset = PerkAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLocked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_LoadOut_PerksEquip_Slot_C::SetLocked(bool IsLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetLocked");
		
		UITM_LoadOut_PerksEquip_Slot_C_SetLocked_Params params {};
		params.IsLocked = IsLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetLockedIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadOut_PerksEquip_Slot_C::SetLockedIcon(class UTexture2D* InTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetLockedIcon");
		
		UITM_LoadOut_PerksEquip_Slot_C_SetLockedIcon_Params params {};
		params.InTexture = InTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.UpdateIconAndBackground
	 * 		Flags  -> ()
	 */
	void UITM_LoadOut_PerksEquip_Slot_C::UpdateIconAndBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.UpdateIconAndBackground");
		
		UITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_LoadOut_PerksEquip_Slot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.PreConstruct");
		
		UITM_LoadOut_PerksEquip_Slot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_LoadOut_PerksEquip_Slot_C::BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UITM_LoadOut_PerksEquip_Slot_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_LoadOut_PerksEquip_Slot_C::BndEvt__SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UITM_LoadOut_PerksEquip_Slot_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_LoadOut_PerksEquip_Slot_C::BndEvt__SlotButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UITM_LoadOut_PerksEquip_Slot_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadOut_PerksEquip_Slot_C::ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot");
		
		UITM_LoadOut_PerksEquip_Slot_C_ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_LoadOut_PerksEquip_Slot_C*              SlotWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_LoadOut_PerksEquip_Slot_C::OnClicked__DelegateSignature(class UITM_LoadOut_PerksEquip_Slot_C* SlotWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.OnClicked__DelegateSignature");
		
		UITM_LoadOut_PerksEquip_Slot_C_OnClicked__DelegateSignature_Params params {};
		params.SlotWidget = SlotWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_LoadOut_PerksEquip_Slot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_LoadOut_PerksEquip_Slot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C");
		return ptr;
	}

}


