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
	 * 		Name   -> Function UI_Perks_Buy.UI_Perks_Buy_C.CanBuyPerk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanBuy                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Perks_Buy_C::CanBuyPerk(bool* CanBuy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.CanBuyPerk");
		
		UUI_Perks_Buy_C_CanBuyPerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanBuy != nullptr)
			*CanBuy = params.CanBuy;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perks_Buy.UI_Perks_Buy_C.SetPerk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkAsset*                                  InPerk                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InTier                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Perks_Buy_C::SetPerk(class UPerkAsset* InPerk, int32_t InTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.SetPerk");
		
		UUI_Perks_Buy_C_SetPerk_Params params {};
		params.InPerk = InPerk;
		params.InTier = InTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perks_Buy.UI_Perks_Buy_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Perks_Buy_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.PreConstruct");
		
		UUI_Perks_Buy_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perks_Buy.UI_Perks_Buy_C.BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBasic_FlatButton_C*                         Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Perks_Buy_C::BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_FlatButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UUI_Perks_Buy_C_BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perks_Buy.UI_Perks_Buy_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Perks_Buy_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.Construct");
		
		UUI_Perks_Buy_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perks_Buy.UI_Perks_Buy_C.OnPerkPointsChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PerkPoints                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Change                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Perks_Buy_C::OnPerkPointsChanged(int32_t PerkPoints, int32_t Change)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.OnPerkPointsChanged");
		
		UUI_Perks_Buy_C_OnPerkPointsChanged_Params params {};
		params.PerkPoints = PerkPoints;
		params.Change = Change;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perks_Buy.UI_Perks_Buy_C.Buy Selected Perk
	 * 		Flags  -> ()
	 */
	void UUI_Perks_Buy_C::BuySelectedPerk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.Buy Selected Perk");
		
		UUI_Perks_Buy_C_BuySelectedPerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perks_Buy.UI_Perks_Buy_C.ExecuteUbergraph_UI_Perks_Buy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Perks_Buy_C::ExecuteUbergraph_UI_Perks_Buy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.ExecuteUbergraph_UI_Perks_Buy");
		
		UUI_Perks_Buy_C_ExecuteUbergraph_UI_Perks_Buy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perks_Buy.UI_Perks_Buy_C.OnPerkClaimed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Perks_Buy_C::OnPerkClaimed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Buy.UI_Perks_Buy_C.OnPerkClaimed__DelegateSignature");
		
		UUI_Perks_Buy_C_OnPerkClaimed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Perks_Buy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Perks_Buy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Perks_Buy.UI_Perks_Buy_C");
		return ptr;
	}

}


