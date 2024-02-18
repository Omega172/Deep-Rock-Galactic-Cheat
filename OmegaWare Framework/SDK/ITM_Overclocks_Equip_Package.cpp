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
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.TryToggleSelection
	 * 		Flags  -> ()
	 */
	void UITM_Overclocks_Equip_C::TryToggleSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.TryToggleSelection");
		
		UITM_Overclocks_Equip_C_TryToggleSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnRefreshItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasCreated                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ActiveIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclocks_Equip_C::OnRefreshItem(bool WasCreated, class UUserWidget* Widget, int32_t ActiveIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnRefreshItem");
		
		UITM_Overclocks_Equip_C_OnRefreshItem_Params params {};
		params.WasCreated = WasCreated;
		params.Widget = Widget;
		params.ActiveIndex = ActiveIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetMenuLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InLocked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InRequirementMet                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OverclockEquipped                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Overclocks_Equip_C::SetMenuLocked(bool InLocked, bool InRequirementMet, bool OverclockEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetMenuLocked");
		
		UITM_Overclocks_Equip_C_SetMenuLocked_Params params {};
		params.InLocked = InLocked;
		params.InRequirementMet = InRequirementMet;
		params.OverclockEquipped = OverclockEquipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetMenuActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Inactive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ActiveChanged                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Overclocks_Equip_C::SetMenuActive(bool Inactive, bool* ActiveChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetMenuActive");
		
		UITM_Overclocks_Equip_C_SetMenuActive_Params params {};
		params.Inactive = Inactive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActiveChanged != nullptr)
			*ActiveChanged = params.ActiveChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.ShowOverclock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgrade*                                Overclock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclocks_Equip_C::ShowOverclock(class UItemUpgrade* Overclock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.ShowOverclock");
		
		UITM_Overclocks_Equip_C_ShowOverclock_Params params {};
		params.Overclock = Overclock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetSelectionVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Overclocks_Equip_C::SetSelectionVisible(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetSelectionVisible");
		
		UITM_Overclocks_Equip_C_SetSelectionVisible_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemUnhovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_Overclocks_Equip_Item_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclocks_Equip_C::OnItemUnhovered(class UITM_Overclocks_Equip_Item_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemUnhovered");
		
		UITM_Overclocks_Equip_C_OnItemUnhovered_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_Overclocks_Equip_Item_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclocks_Equip_C::OnItemHovered(class UITM_Overclocks_Equip_Item_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemHovered");
		
		UITM_Overclocks_Equip_C_OnItemHovered_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_Overclocks_Equip_Item_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclocks_Equip_C::OnItemClicked(class UITM_Overclocks_Equip_Item_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemClicked");
		
		UITM_Overclocks_Equip_C_OnItemClicked_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.Refresh
	 * 		Flags  -> ()
	 */
	void UITM_Overclocks_Equip_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.Refresh");
		
		UITM_Overclocks_Equip_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InCharacterClass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      InItemClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclocks_Equip_C::SetData(class UClass* InCharacterClass, class UClass* InItemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetData");
		
		UITM_Overclocks_Equip_C_SetData_Params params {};
		params.InCharacterClass = InCharacterClass;
		params.InItemClass = InItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetBackgroundTint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Tint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclocks_Equip_C::SetBackgroundTint(const struct FLinearColor& Tint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetBackgroundTint");
		
		UITM_Overclocks_Equip_C_SetBackgroundTint_Params params {};
		params.Tint = Tint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemUpgradeCrafted_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgrade*                                Upgrade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclocks_Equip_C::OnItemUpgradeCrafted_Event(class UItemUpgrade* Upgrade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemUpgradeCrafted_Event");
		
		UITM_Overclocks_Equip_C_OnItemUpgradeCrafted_Event_Params params {};
		params.Upgrade = Upgrade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnPopupStarted
	 * 		Flags  -> ()
	 */
	void UITM_Overclocks_Equip_C::OnPopupStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnPopupStarted");
		
		UITM_Overclocks_Equip_C_OnPopupStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnPopUpFinished
	 * 		Flags  -> ()
	 */
	void UITM_Overclocks_Equip_C::OnPopUpFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnPopUpFinished");
		
		UITM_Overclocks_Equip_C_OnPopUpFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UITM_Overclocks_Equip_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnMouseLeave");
		
		UITM_Overclocks_Equip_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UITM_Overclocks_Equip_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnMouseEnter");
		
		UITM_Overclocks_Equip_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_Overclocks_Equip_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.Construct");
		
		UITM_Overclocks_Equip_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.CloseMenuNicely
	 * 		Flags  -> ()
	 */
	void UITM_Overclocks_Equip_C::CloseMenuNicely()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.CloseMenuNicely");
		
		UITM_Overclocks_Equip_C_CloseMenuNicely_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Overclocks_Equip_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.PreConstruct");
		
		UITM_Overclocks_Equip_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Overclocks_Equip_C::BndEvt__EquipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Overclocks_Equip_C_BndEvt__EquipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Overclocks_Equip_C::BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Overclocks_Equip_C_BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Overclocks_Equip_C::BndEvt__EquipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UITM_Overclocks_Equip_C_BndEvt__EquipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.ExecuteUbergraph_ITM_Overclocks_Equip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Overclocks_Equip_C::ExecuteUbergraph_ITM_Overclocks_Equip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.ExecuteUbergraph_ITM_Overclocks_Equip");
		
		UITM_Overclocks_Equip_C_ExecuteUbergraph_ITM_Overclocks_Equip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Overclocks_Equip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Overclocks_Equip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Overclocks_Equip.ITM_Overclocks_Equip_C");
		return ptr;
	}

}


