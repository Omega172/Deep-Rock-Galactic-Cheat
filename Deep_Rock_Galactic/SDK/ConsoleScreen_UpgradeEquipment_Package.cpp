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
	 * 		Name   -> Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.Construct
	 * 		Flags  -> ()
	 */
	void UConsoleScreen_UpgradeEquipment_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.Construct");
		
		UConsoleScreen_UpgradeEquipment_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConsoleScreen_UpgradeEquipment_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.PreConstruct");
		
		UConsoleScreen_UpgradeEquipment_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.OnItemUnlocked_Event
	 * 		Flags  -> ()
	 */
	void UConsoleScreen_UpgradeEquipment_C::OnItemUnlocked_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.OnItemUnlocked_Event");
		
		UConsoleScreen_UpgradeEquipment_C_OnItemUnlocked_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.UpdateNotification
	 * 		Flags  -> ()
	 */
	void UConsoleScreen_UpgradeEquipment_C::UpdateNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.UpdateNotification");
		
		UConsoleScreen_UpgradeEquipment_C_UpdateNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.OnSkinUnlocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemSkin*                                   Skin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItemID*                                     ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsoleScreen_UpgradeEquipment_C::OnSkinUnlocked(class UItemSkin* Skin, class UItemID* ItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.OnSkinUnlocked");
		
		UConsoleScreen_UpgradeEquipment_C_OnSkinUnlocked_Params params {};
		params.Skin = Skin;
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.ExecuteUbergraph_ConsoleScreen_UpgradeEquipment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsoleScreen_UpgradeEquipment_C::ExecuteUbergraph_ConsoleScreen_UpgradeEquipment(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.ExecuteUbergraph_ConsoleScreen_UpgradeEquipment");
		
		UConsoleScreen_UpgradeEquipment_C_ExecuteUbergraph_ConsoleScreen_UpgradeEquipment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConsoleScreen_UpgradeEquipment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsoleScreen_UpgradeEquipment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C");
		return ptr;
	}

}


