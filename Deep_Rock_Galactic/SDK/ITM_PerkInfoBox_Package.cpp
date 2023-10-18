/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
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
	 * 		Name   -> Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.GetEquippedPerkAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Idx                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UPerkAsset*>                          perks                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UPerkAsset*                                  Perk                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_PerkInfoBox_C::GetEquippedPerkAt(int32_t Idx, TArray<class UPerkAsset*>* perks, class UPerkAsset** Perk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.GetEquippedPerkAt");
		
		UITM_PerkInfoBox_C_GetEquippedPerkAt_Params params {};
		params.Idx = Idx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (perks != nullptr)
			*perks = params.perks;
		if (Perk != nullptr)
			*Perk = params.Perk;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.CreateSlots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPanelWidget*                                InSlotsBox                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPerkUsageType                                     InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_PerkInfoBox_C::CreateSlots(class UPanelWidget* InSlotsBox, EPerkUsageType InType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.CreateSlots");
		
		UITM_PerkInfoBox_C_CreateSlots_Params params {};
		params.InSlotsBox = InSlotsBox;
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.GetEquippedPerksByType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerCharacterID*                          InCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPerkUsageType                                     InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UPerkAsset*>                          perks                                                      (Parm, OutParm)
	 */
	void UITM_PerkInfoBox_C::GetEquippedPerksByType(class UPlayerCharacterID* InCharacter, EPerkUsageType InType, TArray<class UPerkAsset*>* perks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.GetEquippedPerksByType");
		
		UITM_PerkInfoBox_C_GetEquippedPerksByType_Params params {};
		params.InCharacter = InCharacter;
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (perks != nullptr)
			*perks = params.perks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_PerkInfoBox_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.Construct");
		
		UITM_PerkInfoBox_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_PerkInfoBox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.PreConstruct");
		
		UITM_PerkInfoBox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.Update
	 * 		Flags  -> ()
	 */
	void UITM_PerkInfoBox_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.Update");
		
		UITM_PerkInfoBox_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.ExecuteUbergraph_ITM_PerkInfoBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_PerkInfoBox_C::ExecuteUbergraph_ITM_PerkInfoBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.ExecuteUbergraph_ITM_PerkInfoBox");
		
		UITM_PerkInfoBox_C_ExecuteUbergraph_ITM_PerkInfoBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_PerkInfoBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_PerkInfoBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_PerkInfoBox.ITM_PerkInfoBox_C");
		return ptr;
	}

}


