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
	 * 		Name   -> Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.GetEquippedPerksByType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          InCharacterClass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPerkUsageType                                     InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UPerkAsset*>                          OutPerks                                                   (Parm, OutParm)
	 */
	void UITM_Loadout_PerksEquip_C::GetEquippedPerksByType(class UPlayerCharacterID* InCharacterClass, EPerkUsageType InType, TArray<class UPerkAsset*>* OutPerks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.GetEquippedPerksByType");
		
		UITM_Loadout_PerksEquip_C_GetEquippedPerksByType_Params params {};
		params.InCharacterClass = InCharacterClass;
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPerks != nullptr)
			*OutPerks = params.OutPerks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.SelectSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UITM_LoadOut_PerksEquip_Slot_C*              InSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Loadout_PerksEquip_C::SelectSlot(class UITM_LoadOut_PerksEquip_Slot_C* InSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.SelectSlot");
		
		UITM_Loadout_PerksEquip_C_SelectSlot_Params params {};
		params.InSlot = InSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.CreateSlots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVerticalBox*                                InSlotsBox                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerCharacterID*                          InCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPerkUsageType                                     InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Loadout_PerksEquip_C::CreateSlots(class UVerticalBox* InSlotsBox, class UPlayerCharacterID* InCharacter, EPerkUsageType InType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.CreateSlots");
		
		UITM_Loadout_PerksEquip_C_CreateSlots_Params params {};
		params.InSlotsBox = InSlotsBox;
		params.InCharacter = InCharacter;
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.UpdateSlots
	 * 		Flags  -> ()
	 */
	void UITM_Loadout_PerksEquip_C::UpdateSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.UpdateSlots");
		
		UITM_Loadout_PerksEquip_C_UpdateSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Get_PerkStar_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UITM_Loadout_PerksEquip_C::Get_PerkStar_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Get_PerkStar_ToolTipWidget_1");
		
		UITM_Loadout_PerksEquip_C_Get_PerkStar_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.GetEquippedPerkAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UPerkAsset*>                          TargetArray                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UPerkAsset*                                  Perk                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Loadout_PerksEquip_C::GetEquippedPerkAt(int32_t Index, TArray<class UPerkAsset*> TargetArray, class UPerkAsset** Perk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.GetEquippedPerkAt");
		
		UITM_Loadout_PerksEquip_C_GetEquippedPerkAt_Params params {};
		params.Index = Index;
		params.TargetArray = TargetArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Perk != nullptr)
			*Perk = params.Perk;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.UpdateEquippedPerks
	 * 		Flags  -> ()
	 */
	void UITM_Loadout_PerksEquip_C::UpdateEquippedPerks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.UpdateEquippedPerks");
		
		UITM_Loadout_PerksEquip_C_UpdateEquippedPerks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Set Character Class
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          characterID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Loadout_PerksEquip_C::SetCharacterClass(class UPlayerCharacterID* characterID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Set Character Class");
		
		UITM_Loadout_PerksEquip_C_SetCharacterClass_Params params {};
		params.characterID = characterID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkAsset*                                  PerkAsset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Loadout_PerksEquip_C::BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature(class UPerkAsset* PerkAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature");
		
		UITM_Loadout_PerksEquip_C_BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature_Params params {};
		params.PerkAsset = PerkAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_Loadout_PerksEquip_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Construct");
		
		UITM_Loadout_PerksEquip_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Loadout_PerksEquip_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.PreConstruct");
		
		UITM_Loadout_PerksEquip_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.ExecuteUbergraph_ITM_Loadout_PerksEquip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Loadout_PerksEquip_C::ExecuteUbergraph_ITM_Loadout_PerksEquip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.ExecuteUbergraph_ITM_Loadout_PerksEquip");
		
		UITM_Loadout_PerksEquip_C_ExecuteUbergraph_ITM_Loadout_PerksEquip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Loadout_PerksEquip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Loadout_PerksEquip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C");
		return ptr;
	}

}


