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
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.GetSelectedDrinkableType
	 * 		Flags  -> ()
	 */
	class UDrinkableDataAsset* UUI_Bar_OrderMenu_Item_C::GetSelectedDrinkableType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.GetSelectedDrinkableType");
		
		UUI_Bar_OrderMenu_Item_C_GetSelectedDrinkableType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.AreBeersFreee
	 * 		Flags  -> ()
	 */
	bool UUI_Bar_OrderMenu_Item_C::AreBeersFreee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.AreBeersFreee");
		
		UUI_Bar_OrderMenu_Item_C_AreBeersFreee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.HasPlayerRank
	 * 		Flags  -> ()
	 */
	bool UUI_Bar_OrderMenu_Item_C::HasPlayerRank()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.HasPlayerRank");
		
		UUI_Bar_OrderMenu_Item_C_HasPlayerRank_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.GetTemporaryBuf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTemporaryBuff*                              buff                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_OrderMenu_Item_C::GetTemporaryBuf(class UTemporaryBuff** buff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.GetTemporaryBuf");
		
		UUI_Bar_OrderMenu_Item_C_GetTemporaryBuf_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (buff != nullptr)
			*buff = params.buff;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.UpdateItem
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_Item_C::UpdateItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.UpdateItem");
		
		UUI_Bar_OrderMenu_Item_C_UpdateItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.GetBorderColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                OutputColor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_OrderMenu_Item_C::GetBorderColor(struct FLinearColor* OutputColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.GetBorderColor");
		
		UUI_Bar_OrderMenu_Item_C_GetBorderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputColor != nullptr)
			*OutputColor = params.OutputColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.IsInteractable
	 * 		Flags  -> ()
	 */
	bool UUI_Bar_OrderMenu_Item_C::IsInteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.IsInteractable");
		
		UUI_Bar_OrderMenu_Item_C_IsInteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.No_0F2CD82B4BA6006B33BED8B78B16B74B
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_Item_C::No_0F2CD82B4BA6006B33BED8B78B16B74B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.No_0F2CD82B4BA6006B33BED8B78B16B74B");
		
		UUI_Bar_OrderMenu_Item_C_No_0F2CD82B4BA6006B33BED8B78B16B74B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Yes_0F2CD82B4BA6006B33BED8B78B16B74B
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_Item_C::Yes_0F2CD82B4BA6006B33BED8B78B16B74B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Yes_0F2CD82B4BA6006B33BED8B78B16B74B");
		
		UUI_Bar_OrderMenu_Item_C_Yes_0F2CD82B4BA6006B33BED8B78B16B74B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_Item_C::BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Bar_OrderMenu_Item_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_Item_C::BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Bar_OrderMenu_Item_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_Item_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Bar_OrderMenu_Item_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnPlayerProgressChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Rank                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Stars                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_OrderMenu_Item_C::OnPlayerProgressChanged(int32_t Rank, int32_t Stars)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnPlayerProgressChanged");
		
		UUI_Bar_OrderMenu_Item_C_OnPlayerProgressChanged_Params params {};
		params.Rank = Rank;
		params.Stars = Stars;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Select
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_Item_C::Select()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Select");
		
		UUI_Bar_OrderMenu_Item_C_Select_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Unselect
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_Item_C::Unselect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Unselect");
		
		UUI_Bar_OrderMenu_Item_C_Unselect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnHoverFinished
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_Item_C::OnHoverFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnHoverFinished");
		
		UUI_Bar_OrderMenu_Item_C_OnHoverFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BuyFailed
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_Item_C::BuyFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BuyFailed");
		
		UUI_Bar_OrderMenu_Item_C_BuyFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.TryUnlock
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_Item_C::TryUnlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.TryUnlock");
		
		UUI_Bar_OrderMenu_Item_C_TryUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnUnlockAnimFinished_Event
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_Item_C::OnUnlockAnimFinished_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnUnlockAnimFinished_Event");
		
		UUI_Bar_OrderMenu_Item_C_OnUnlockAnimFinished_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnCreditsChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Credits                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_OrderMenu_Item_C::OnCreditsChanged(int32_t Credits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnCreditsChanged");
		
		UUI_Bar_OrderMenu_Item_C_OnCreditsChanged_Params params {};
		params.Credits = Credits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_Item_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Construct");
		
		UUI_Bar_OrderMenu_Item_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__UI_Bar_OrderMenu_Item_OrderSpecialEdition_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Bar_OrderMenu_Item_C::BndEvt__UI_Bar_OrderMenu_Item_OrderSpecialEdition_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.BndEvt__UI_Bar_OrderMenu_Item_OrderSpecialEdition_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUI_Bar_OrderMenu_Item_C_BndEvt__UI_Bar_OrderMenu_Item_OrderSpecialEdition_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Bar_OrderMenu_Item_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.PreConstruct");
		
		UUI_Bar_OrderMenu_Item_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Set Drinkable Visuals
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_Item_C::SetDrinkableVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.Set Drinkable Visuals");
		
		UUI_Bar_OrderMenu_Item_C_SetDrinkableVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.ExecuteUbergraph_UI_Bar_OrderMenu_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_OrderMenu_Item_C::ExecuteUbergraph_UI_Bar_OrderMenu_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.ExecuteUbergraph_UI_Bar_OrderMenu_Item");
		
		UUI_Bar_OrderMenu_Item_C_ExecuteUbergraph_UI_Bar_OrderMenu_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnDrinkableTypeChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_Item_C::OnDrinkableTypeChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnDrinkableTypeChanged__DelegateSignature");
		
		UUI_Bar_OrderMenu_Item_C_OnDrinkableTypeChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnDrinkUnlocked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDrinkableDataAsset*                         Drink                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_OrderMenu_Item_C::OnDrinkUnlocked__DelegateSignature(class UDrinkableDataAsset* Drink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnDrinkUnlocked__DelegateSignature");
		
		UUI_Bar_OrderMenu_Item_C_OnDrinkUnlocked__DelegateSignature_Params params {};
		params.Drink = Drink;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USpaceRigBarMenuItem*                        Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_OrderMenu_Item_C::OnSelected__DelegateSignature(class USpaceRigBarMenuItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnSelected__DelegateSignature");
		
		UUI_Bar_OrderMenu_Item_C_OnSelected__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnPurchaseDenied__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_Item_C::OnPurchaseDenied__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnPurchaseDenied__DelegateSignature");
		
		UUI_Bar_OrderMenu_Item_C_OnPurchaseDenied__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnUnhover__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USpaceRigBarMenuItem*                        OrderItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_OrderMenu_Item_C::OnUnhover__DelegateSignature(class USpaceRigBarMenuItem* OrderItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnUnhover__DelegateSignature");
		
		UUI_Bar_OrderMenu_Item_C_OnUnhover__DelegateSignature_Params params {};
		params.OrderItem = OrderItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnHover__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USpaceRigBarMenuItem*                        OrderItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_OrderMenu_Item_C::OnHover__DelegateSignature(class USpaceRigBarMenuItem* OrderItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnHover__DelegateSignature");
		
		UUI_Bar_OrderMenu_Item_C_OnHover__DelegateSignature_Params params {};
		params.OrderItem = OrderItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnDrinksPurchased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDrinkableDataAsset*                         Drink                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_OrderMenu_Item_C::OnDrinksPurchased__DelegateSignature(class UDrinkableDataAsset* Drink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C.OnDrinksPurchased__DelegateSignature");
		
		UUI_Bar_OrderMenu_Item_C_OnDrinksPurchased__DelegateSignature_Params params {};
		params.Drink = Drink;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Bar_OrderMenu_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Bar_OrderMenu_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Bar_OrderMenu_Item.UI_Bar_OrderMenu_Item_C");
		return ptr;
	}

}


