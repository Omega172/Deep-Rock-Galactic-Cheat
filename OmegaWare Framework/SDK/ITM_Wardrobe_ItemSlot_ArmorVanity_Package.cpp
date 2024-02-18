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
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_ArmorVanity.ITM_Wardrobe_ItemSlot_ArmorVanity_C.ReceivePreviewItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OutSuccess                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSlot_ArmorVanity_C::ReceivePreviewItem(int32_t Index, bool Show, bool* OutSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_ArmorVanity.ITM_Wardrobe_ItemSlot_ArmorVanity_C.ReceivePreviewItem");
		
		UITM_Wardrobe_ItemSlot_ArmorVanity_C_ReceivePreviewItem_Params params {};
		params.Index = Index;
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSuccess != nullptr)
			*OutSuccess = params.OutSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_ArmorVanity.ITM_Wardrobe_ItemSlot_ArmorVanity_C.SetSelectedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVanityItem*                                 Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Equip                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSlot_ArmorVanity_C::SetSelectedItem(class UVanityItem* Item, bool Equip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_ArmorVanity.ITM_Wardrobe_ItemSlot_ArmorVanity_C.SetSelectedItem");
		
		UITM_Wardrobe_ItemSlot_ArmorVanity_C_SetSelectedItem_Params params {};
		params.Item = Item;
		params.Equip = Equip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Wardrobe_ItemSlot_ArmorVanity.ITM_Wardrobe_ItemSlot_ArmorVanity_C.ReceiveToggleType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Wardrobe_ItemSlot_ArmorVanity_C::ReceiveToggleType(bool* success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Wardrobe_ItemSlot_ArmorVanity.ITM_Wardrobe_ItemSlot_ArmorVanity_C.ReceiveToggleType");
		
		UITM_Wardrobe_ItemSlot_ArmorVanity_C_ReceiveToggleType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Wardrobe_ItemSlot_ArmorVanity_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Wardrobe_ItemSlot_ArmorVanity_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Wardrobe_ItemSlot_ArmorVanity.ITM_Wardrobe_ItemSlot_ArmorVanity_C");
		return ptr;
	}

}


