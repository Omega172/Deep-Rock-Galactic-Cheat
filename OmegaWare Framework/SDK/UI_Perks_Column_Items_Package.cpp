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
	 * 		Name   -> Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.IsInteractable
	 * 		Flags  -> ()
	 */
	bool UUI_Perks_Column_Items_C::IsInteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.IsInteractable");
		
		UUI_Perks_Column_Items_C_IsInteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.RefreshTier
	 * 		Flags  -> ()
	 */
	void UUI_Perks_Column_Items_C::RefreshTier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.RefreshTier");
		
		UUI_Perks_Column_Items_C_RefreshTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.AddPerk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkAsset*                                  Perk                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPerkAsset*                                  OutPerk                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_Perks_Item_C*                            OutWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Perks_Column_Items_C::AddPerk(class UPerkAsset* Perk, class UPerkAsset** OutPerk, class UUI_Perks_Item_C** OutWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.AddPerk");
		
		UUI_Perks_Column_Items_C_AddPerk_Params params {};
		params.Perk = Perk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPerk != nullptr)
			*OutPerk = params.OutPerk;
		if (OutWidget != nullptr)
			*OutWidget = params.OutWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Perks_Column_Items_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.PreConstruct");
		
		UUI_Perks_Column_Items_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Perks_Column_Items_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.Construct");
		
		UUI_Perks_Column_Items_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClicked_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_Perks_Item_C*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Perks_Column_Items_C::OnPerkClicked_Event(class UUI_Perks_Item_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClicked_Event");
		
		UUI_Perks_Column_Items_C_OnPerkClicked_Event_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClaimed_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkAsset*                                  Perk                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ClaimedTier                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Perks_Column_Items_C::OnPerkClaimed_Event(class UPerkAsset* Perk, int32_t ClaimedTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClaimed_Event");
		
		UUI_Perks_Column_Items_C_OnPerkClaimed_Event_Params params {};
		params.Perk = Perk;
		params.ClaimedTier = ClaimedTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.SetPerks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UPerkAsset*>                          Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_Perks_Column_Items_C::SetPerks(TArray<class UPerkAsset*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.SetPerks");
		
		UUI_Perks_Column_Items_C_SetPerks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.ExecuteUbergraph_UI_Perks_Column_Items
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Perks_Column_Items_C::ExecuteUbergraph_UI_Perks_Column_Items(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.ExecuteUbergraph_UI_Perks_Column_Items");
		
		UUI_Perks_Column_Items_C_ExecuteUbergraph_UI_Perks_Column_Items_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_Perks_Item_C*                            PerkWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Perks_Column_Items_C::OnPerkClicked__DelegateSignature(class UUI_Perks_Item_C* PerkWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClicked__DelegateSignature");
		
		UUI_Perks_Column_Items_C_OnPerkClicked__DelegateSignature_Params params {};
		params.PerkWidget = PerkWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Perks_Column_Items_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Perks_Column_Items_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Perks_Column_Items.UI_Perks_Column_Items_C");
		return ptr;
	}

}


