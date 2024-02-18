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
	 * 		Name   -> Function HUD_SentryGunManager.HUD_SentryGunManager_C.ItemEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEquipped                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_SentryGunManager_C::ItemEquipped(bool* IsEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.ItemEquipped");
		
		UHUD_SentryGunManager_C_ItemEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEquipped != nullptr)
			*IsEquipped = params.IsEquipped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunManager.HUD_SentryGunManager_C.OutOfAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutOfAmmo                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_SentryGunManager_C::OutOfAmmo(bool* OutOfAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.OutOfAmmo");
		
		UHUD_SentryGunManager_C_OutOfAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOfAmmo != nullptr)
			*OutOfAmmo = params.OutOfAmmo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunManager.HUD_SentryGunManager_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_SentryGunManager_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.PreConstruct");
		
		UHUD_SentryGunManager_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunManager.HUD_SentryGunManager_C.AddSentry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryGunManager_C::AddSentry(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.AddSentry");
		
		UHUD_SentryGunManager_C_AddSentry_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunManager.HUD_SentryGunManager_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_SentryGunManager_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.Construct");
		
		UHUD_SentryGunManager_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnItemsLoaded
	 * 		Flags  -> ()
	 */
	void UHUD_SentryGunManager_C::OnItemsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnItemsLoaded");
		
		UHUD_SentryGunManager_C_OnItemsLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnActiveItemsChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARecallableSentryGunItem*                    Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryGunManager_C::OnActiveItemsChanged(class ARecallableSentryGunItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnActiveItemsChanged");
		
		UHUD_SentryGunManager_C_OnActiveItemsChanged_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnItemCurrentAmountChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryGunManager_C::OnItemCurrentAmountChanged(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnItemCurrentAmountChanged");
		
		UHUD_SentryGunManager_C_OnItemCurrentAmountChanged_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunManager.HUD_SentryGunManager_C.Update Dynamic Visibility
	 * 		Flags  -> ()
	 */
	void UHUD_SentryGunManager_C::UpdateDynamicVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.Update Dynamic Visibility");
		
		UHUD_SentryGunManager_C_UpdateDynamicVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnSentryStateChanged_Event
	 * 		Flags  -> ()
	 */
	void UHUD_SentryGunManager_C::OnSentryStateChanged_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnSentryStateChanged_Event");
		
		UHUD_SentryGunManager_C_OnSentryStateChanged_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunManager.HUD_SentryGunManager_C.Setup Dynamic Visibility
	 * 		Flags  -> ()
	 */
	void UHUD_SentryGunManager_C::SetupDynamicVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.Setup Dynamic Visibility");
		
		UHUD_SentryGunManager_C_SetupDynamicVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnLaserPointerPressed_Event
	 * 		Flags  -> ()
	 */
	void UHUD_SentryGunManager_C::OnLaserPointerPressed_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnLaserPointerPressed_Event");
		
		UHUD_SentryGunManager_C_OnLaserPointerPressed_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnLaserPointerReleased_Event
	 * 		Flags  -> ()
	 */
	void UHUD_SentryGunManager_C::OnLaserPointerReleased_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnLaserPointerReleased_Event");
		
		UHUD_SentryGunManager_C_OnLaserPointerReleased_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunManager.HUD_SentryGunManager_C.ExecuteUbergraph_HUD_SentryGunManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryGunManager_C::ExecuteUbergraph_HUD_SentryGunManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.ExecuteUbergraph_HUD_SentryGunManager");
		
		UHUD_SentryGunManager_C_ExecuteUbergraph_HUD_SentryGunManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_SentryGunManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_SentryGunManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_SentryGunManager.HUD_SentryGunManager_C");
		return ptr;
	}

}


