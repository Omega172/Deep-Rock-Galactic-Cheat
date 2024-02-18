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
	 * 		Name   -> Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.GetDrinkables
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDrinkableDataAsset*                         SpecialEventBeer                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	TArray<class UDrinkableDataAsset*> UUI_Bar_OrderMenu_C::GetDrinkables(class UDrinkableDataAsset** SpecialEventBeer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.GetDrinkables");
		
		UUI_Bar_OrderMenu_C_GetDrinkables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpecialEventBeer != nullptr)
			*SpecialEventBeer = params.SpecialEventBeer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.SetMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDrinkableDataAsset*                         Special                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UDrinkableDataAsset*>                 Drinks                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UDrinkableDataAsset*                         SpecialEventBeer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_OrderMenu_C::SetMenu(class UDrinkableDataAsset* Special, TArray<class UDrinkableDataAsset*>* Drinks, class UDrinkableDataAsset* SpecialEventBeer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.SetMenu");
		
		UUI_Bar_OrderMenu_C_SetMenu_Params params {};
		params.Special = Special;
		params.SpecialEventBeer = SpecialEventBeer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Drinks != nullptr)
			*Drinks = params.Drinks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinkAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_Bar_OrderMenu_Item_C*                    DrinkWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_OrderMenu_C::OnDrinkAdded(class UUI_Bar_OrderMenu_Item_C* DrinkWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinkAdded");
		
		UUI_Bar_OrderMenu_C_OnDrinkAdded_Params params {};
		params.DrinkWidget = DrinkWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinksPurchased_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDrinkableDataAsset*                         Drink                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_OrderMenu_C::OnDrinksPurchased_Event(class UDrinkableDataAsset* Drink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinksPurchased_Event");
		
		UUI_Bar_OrderMenu_C_OnDrinksPurchased_Event_Params params {};
		params.Drink = Drink;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.Cancel Order
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_C::CancelOrder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.Cancel Order");
		
		UUI_Bar_OrderMenu_C_CancelOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnShown
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_C::OnShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnShown");
		
		UUI_Bar_OrderMenu_C_OnShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnHover_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USpaceRigBarMenuItem*                        OrderItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_OrderMenu_C::OnHover_Event(class USpaceRigBarMenuItem* OrderItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnHover_Event");
		
		UUI_Bar_OrderMenu_C_OnHover_Event_Params params {};
		params.OrderItem = OrderItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnPreviewItemChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USpaceRigBarMenuItem*                        PreviousItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USpaceRigBarMenuItem*                        NewItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_OrderMenu_C::BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnPreviewItemChanged__DelegateSignature(class USpaceRigBarMenuItem* PreviousItem, class USpaceRigBarMenuItem* NewItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnPreviewItemChanged__DelegateSignature");
		
		UUI_Bar_OrderMenu_C_BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnPreviewItemChanged__DelegateSignature_Params params {};
		params.PreviousItem = PreviousItem;
		params.NewItem = NewItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnPurchaseDenied_Event
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_C::OnPurchaseDenied_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnPurchaseDenied_Event");
		
		UUI_Bar_OrderMenu_C_OnPurchaseDenied_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_43_OnHover__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USpaceRigBarMenuItem*                        OrderItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_OrderMenu_C::BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_43_OnHover__DelegateSignature(class USpaceRigBarMenuItem* OrderItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_43_OnHover__DelegateSignature");
		
		UUI_Bar_OrderMenu_C_BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_43_OnHover__DelegateSignature_Params params {};
		params.OrderItem = OrderItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_0_OnPurchaseDenied__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_C::BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_0_OnPurchaseDenied__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_0_OnPurchaseDenied__DelegateSignature");
		
		UUI_Bar_OrderMenu_C_BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_0_OnPurchaseDenied__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnClosed
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_C::OnClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnClosed");
		
		UUI_Bar_OrderMenu_C_OnClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_C::BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");
		
		UUI_Bar_OrderMenu_C_BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_1_OnDrinksPurchased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDrinkableDataAsset*                         Drink                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_OrderMenu_C::BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_1_OnDrinksPurchased__DelegateSignature(class UDrinkableDataAsset* Drink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_1_OnDrinksPurchased__DelegateSignature");
		
		UUI_Bar_OrderMenu_C_BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_1_OnDrinksPurchased__DelegateSignature_Params params {};
		params.Drink = Drink;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.SetBartender
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASpaceRigBar*                                BarActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_OrderMenu_C::SetBartender(class ASpaceRigBar* BarActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.SetBartender");
		
		UUI_Bar_OrderMenu_C_SetBartender_Params params {};
		params.BarActor = BarActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnNewDrinkableSpecial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDrinkableDataAsset*                         Drinkable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_OrderMenu_C::OnNewDrinkableSpecial(class UDrinkableDataAsset* Drinkable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnNewDrinkableSpecial");
		
		UUI_Bar_OrderMenu_C_OnNewDrinkableSpecial_Params params {};
		params.Drinkable = Drinkable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.ReceiveCloseCommand
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_C::ReceiveCloseCommand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.ReceiveCloseCommand");
		
		UUI_Bar_OrderMenu_C_ReceiveCloseCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_11_OnClosedClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_C::BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_11_OnClosedClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_11_OnClosedClicked__DelegateSignature");
		
		UUI_Bar_OrderMenu_C_BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_11_OnClosedClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinkUnlocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDrinkableDataAsset*                         Drink                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_OrderMenu_C::OnDrinkUnlocked(class UDrinkableDataAsset* Drink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnDrinkUnlocked");
		
		UUI_Bar_OrderMenu_C_OnDrinkUnlocked_Params params {};
		params.Drink = Drink;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.Construct");
		
		UUI_Bar_OrderMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.Hovered Drinkable type changed
	 * 		Flags  -> ()
	 */
	void UUI_Bar_OrderMenu_C::HoveredDrinkabletypechanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.Hovered Drinkable type changed");
		
		UUI_Bar_OrderMenu_C_HoveredDrinkabletypechanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.ExecuteUbergraph_UI_Bar_OrderMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_OrderMenu_C::ExecuteUbergraph_UI_Bar_OrderMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.ExecuteUbergraph_UI_Bar_OrderMenu");
		
		UUI_Bar_OrderMenu_C_ExecuteUbergraph_UI_Bar_OrderMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnRoundSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASpaceRigBar*                                Bar                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDrinkableDataAsset*                         RequestedDrink                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Bar_OrderMenu_C::OnRoundSelected__DelegateSignature(class ASpaceRigBar* Bar, class UDrinkableDataAsset* RequestedDrink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu.UI_Bar_OrderMenu_C.OnRoundSelected__DelegateSignature");
		
		UUI_Bar_OrderMenu_C_OnRoundSelected__DelegateSignature_Params params {};
		params.Bar = Bar;
		params.RequestedDrink = RequestedDrink;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Bar_OrderMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Bar_OrderMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Bar_OrderMenu.UI_Bar_OrderMenu_C");
		return ptr;
	}

}


