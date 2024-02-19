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
	 * 		Name   -> Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetHideCounter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HideCounter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Loadout_ItemWindow_C::SetHideCounter(bool HideCounter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetHideCounter");
		
		UITM_Loadout_ItemWindow_C_SetHideCounter_Params params {};
		params.HideCounter = HideCounter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetNextItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItemID*                                     NextItem                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Loadout_ItemWindow_C::GetNextItem(int32_t Direction, class UItemID** NextItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetNextItem");
		
		UITM_Loadout_ItemWindow_C_GetNextItem_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextItem != nullptr)
			*NextItem = params.NextItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetOwnedItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          InCharacterClass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemCategory                                      InCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UItemID*>                             OwnedItems                                                 (Parm, OutParm)
	 * 		bool                                               NewWeaponNotification                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Loadout_ItemWindow_C::GetOwnedItems(class UPlayerCharacterID* InCharacterClass, EItemCategory InCategory, TArray<class UItemID*>* OwnedItems, bool* NewWeaponNotification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetOwnedItems");
		
		UITM_Loadout_ItemWindow_C_GetOwnedItems_Params params {};
		params.InCharacterClass = InCharacterClass;
		params.InCategory = InCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OwnedItems != nullptr)
			*OwnedItems = params.OwnedItems;
		if (NewWeaponNotification != nullptr)
			*NewWeaponNotification = params.NewWeaponNotification;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetSelectedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemID*                                     itemClass                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemCategory                                      ItemCategory                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Loadout_ItemWindow_C::GetSelectedItem(class UItemID** itemClass, EItemCategory* ItemCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetSelectedItem");
		
		UITM_Loadout_ItemWindow_C_GetSelectedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (itemClass != nullptr)
			*itemClass = params.itemClass;
		if (ItemCategory != nullptr)
			*ItemCategory = params.ItemCategory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetCharacterClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          InCharacterClass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Loadout_ItemWindow_C::SetCharacterClass(class UPlayerCharacterID* InCharacterClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetCharacterClass");
		
		UITM_Loadout_ItemWindow_C_SetCharacterClass_Params params {};
		params.InCharacterClass = InCharacterClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InHovered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Loadout_ItemWindow_C::SetHovered(bool InHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetHovered");
		
		UITM_Loadout_ItemWindow_C_SetHovered_Params params {};
		params.InHovered = InHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.IsHovering
	 * 		Flags  -> ()
	 */
	bool UITM_Loadout_ItemWindow_C::IsHovering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.IsHovering");
		
		UITM_Loadout_ItemWindow_C_IsHovering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_Loadout_ItemWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.Construct");
		
		UITM_Loadout_ItemWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Loadout_ItemWindow_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UITM_Loadout_ItemWindow_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Loadout_ItemWindow_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Loadout_ItemWindow_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Loadout_ItemWindow_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Loadout_ItemWindow_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SelectNext
	 * 		Flags  -> ()
	 */
	void UITM_Loadout_ItemWindow_C::SelectNext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SelectNext");
		
		UITM_Loadout_ItemWindow_C_SelectNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SelectPrevious
	 * 		Flags  -> ()
	 */
	void UITM_Loadout_ItemWindow_C::SelectPrevious()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SelectPrevious");
		
		UITM_Loadout_ItemWindow_C_SelectPrevious_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.Select Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemID*                                     InItemClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Loadout_ItemWindow_C::SelectItem(class UItemID* InItemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.Select Item");
		
		UITM_Loadout_ItemWindow_C_SelectItem_Params params {};
		params.InItemClass = InItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Loadout_ItemWindow_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.PreConstruct");
		
		UITM_Loadout_ItemWindow_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_511_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Loadout_ItemWindow_C::BndEvt__ButtonRight_K2Node_ComponentBoundEvent_511_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_511_OnButtonClickedEvent__DelegateSignature");
		
		UITM_Loadout_ItemWindow_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_511_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_528_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Loadout_ItemWindow_C::BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_528_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_528_OnButtonClickedEvent__DelegateSignature");
		
		UITM_Loadout_ItemWindow_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_528_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.OnClickAnimFinished
	 * 		Flags  -> ()
	 */
	void UITM_Loadout_ItemWindow_C::OnClickAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.OnClickAnimFinished");
		
		UITM_Loadout_ItemWindow_C_OnClickAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.PlayIntroAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLeftSide                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Loadout_ItemWindow_C::PlayIntroAnim(bool IsLeftSide, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.PlayIntroAnim");
		
		UITM_Loadout_ItemWindow_C_PlayIntroAnim_Params params {};
		params.IsLeftSide = IsLeftSide;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.ExecuteUbergraph_ITM_Loadout_ItemWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Loadout_ItemWindow_C::ExecuteUbergraph_ITM_Loadout_ItemWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.ExecuteUbergraph_ITM_Loadout_ItemWindow");
		
		UITM_Loadout_ItemWindow_C_ExecuteUbergraph_ITM_Loadout_ItemWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Unhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_Loadout_ItemWindow_C*                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Loadout_ItemWindow_C::OnUnhovered__DelegateSignature(class UITM_Loadout_ItemWindow_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Unhovered__DelegateSignature");
		
		UITM_Loadout_ItemWindow_C_OnUnhovered__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Hovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_Loadout_ItemWindow_C*                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Loadout_ItemWindow_C::OnHovered__DelegateSignature(class UITM_Loadout_ItemWindow_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Hovered__DelegateSignature");
		
		UITM_Loadout_ItemWindow_C_OnHovered__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Clicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_Loadout_ItemWindow_C*                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Loadout_ItemWindow_C::OnClicked__DelegateSignature(class UITM_Loadout_ItemWindow_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Clicked__DelegateSignature");
		
		UITM_Loadout_ItemWindow_C_OnClicked__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Loadout_ItemWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Loadout_ItemWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C");
		return ptr;
	}

}


