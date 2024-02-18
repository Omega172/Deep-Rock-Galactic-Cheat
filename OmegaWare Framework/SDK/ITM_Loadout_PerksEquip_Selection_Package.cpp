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
	 * 		Name   -> Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Loadout_PerksEquip_Selection_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.PreConstruct");
		
		UITM_Loadout_PerksEquip_Selection_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.Refresh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          characterID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPerkUsageType                                     PerkType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Loadout_PerksEquip_Selection_C::Refresh(class UPlayerCharacterID* characterID, EPerkUsageType PerkType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.Refresh");
		
		UITM_Loadout_PerksEquip_Selection_C_Refresh_Params params {};
		params.characterID = characterID;
		params.PerkType = PerkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.Add Perk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkAsset*                                  Perk                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Loadout_PerksEquip_Selection_C::AddPerk(class UPerkAsset* Perk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.Add Perk");
		
		UITM_Loadout_PerksEquip_Selection_C_AddPerk_Params params {};
		params.Perk = Perk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.OnClicked_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_LoadOut_PerksEquip_Item_C*              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Loadout_PerksEquip_Selection_C::OnClicked_Event(class UITM_LoadOut_PerksEquip_Item_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.OnClicked_Event");
		
		UITM_Loadout_PerksEquip_Selection_C_OnClicked_Event_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.Add None
	 * 		Flags  -> ()
	 */
	void UITM_Loadout_PerksEquip_Selection_C::AddNone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.Add None");
		
		UITM_Loadout_PerksEquip_Selection_C_AddNone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.OnNoneClicked_Event
	 * 		Flags  -> ()
	 */
	void UITM_Loadout_PerksEquip_Selection_C::OnNoneClicked_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.OnNoneClicked_Event");
		
		UITM_Loadout_PerksEquip_Selection_C_OnNoneClicked_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.AddWidgetToBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Loadout_PerksEquip_Selection_C::AddWidgetToBox(class UUserWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.AddWidgetToBox");
		
		UITM_Loadout_PerksEquip_Selection_C_AddWidgetToBox_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.ClearWidgetBox
	 * 		Flags  -> ()
	 */
	void UITM_Loadout_PerksEquip_Selection_C::ClearWidgetBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.ClearWidgetBox");
		
		UITM_Loadout_PerksEquip_Selection_C_ClearWidgetBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.ExecuteUbergraph_ITM_Loadout_PerksEquip_Selection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Loadout_PerksEquip_Selection_C::ExecuteUbergraph_ITM_Loadout_PerksEquip_Selection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.ExecuteUbergraph_ITM_Loadout_PerksEquip_Selection");
		
		UITM_Loadout_PerksEquip_Selection_C_ExecuteUbergraph_ITM_Loadout_PerksEquip_Selection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.OnPerkClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkAsset*                                  PerkAsset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Loadout_PerksEquip_Selection_C::OnPerkClicked__DelegateSignature(class UPerkAsset* PerkAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C.OnPerkClicked__DelegateSignature");
		
		UITM_Loadout_PerksEquip_Selection_C_OnPerkClicked__DelegateSignature_Params params {};
		params.PerkAsset = PerkAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Loadout_PerksEquip_Selection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Loadout_PerksEquip_Selection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Loadout_PerksEquip_Selection.ITM_Loadout_PerksEquip_Selection_C");
		return ptr;
	}

}


