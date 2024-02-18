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
	 * 		Name   -> Function HUD_CrosshairManager.HUD_CrosshairManager_C.UnregisterEvents
	 * 		Flags  -> ()
	 */
	void UHUD_CrosshairManager_C::UnregisterEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.UnregisterEvents");
		
		UHUD_CrosshairManager_C_UnregisterEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CrosshairManager.HUD_CrosshairManager_C.UpdateVisibility
	 * 		Flags  -> ()
	 */
	void UHUD_CrosshairManager_C::UpdateVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.UpdateVisibility");
		
		UHUD_CrosshairManager_C_UpdateVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CrosshairManager.HUD_CrosshairManager_C.SetCrosshair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       InEquippedItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CrosshairManager_C::SetCrosshair(class AItem* InEquippedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.SetCrosshair");
		
		UHUD_CrosshairManager_C_SetCrosshair_Params params {};
		params.InEquippedItem = InEquippedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnToggleMapTool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_CrosshairManager_C::OnToggleMapTool(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnToggleMapTool");
		
		UHUD_CrosshairManager_C_OnToggleMapTool_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingEnd_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResourceBank*                               ResourceBank                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CrosshairManager_C::OnDepositingEnd_Event(class UResourceBank* ResourceBank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingEnd_Event");
		
		UHUD_CrosshairManager_C_OnDepositingEnd_Event_Params params {};
		params.ResourceBank = ResourceBank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingBegin_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResourceBank*                               ResourceBank                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CrosshairManager_C::OnDepositingBegin_Event(class UResourceBank* ResourceBank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingBegin_Event");
		
		UHUD_CrosshairManager_C_OnDepositingBegin_Event_Params params {};
		params.ResourceBank = ResourceBank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCameraModeChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterCameraMode                               NewCameraMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterCameraMode                               OldCameraMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CrosshairManager_C::OnCameraModeChanged_Event(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCameraModeChanged_Event");
		
		UHUD_CrosshairManager_C_OnCameraModeChanged_Event_Params params {};
		params.NewCameraMode = NewCameraMode;
		params.OldCameraMode = OldCameraMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCharacterStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterState                                    NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CrosshairManager_C::OnCharacterStateChanged(ECharacterState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCharacterStateChanged");
		
		UHUD_CrosshairManager_C_OnCharacterStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CrosshairManager.HUD_CrosshairManager_C.Destruct
	 * 		Flags  -> ()
	 */
	void UHUD_CrosshairManager_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.Destruct");
		
		UHUD_CrosshairManager_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CrosshairManager.HUD_CrosshairManager_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_CrosshairManager_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.Construct");
		
		UHUD_CrosshairManager_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CrosshairManager.HUD_CrosshairManager_C.On Inventory Ready
	 * 		Flags  -> ()
	 */
	void UHUD_CrosshairManager_C::OnInventoryReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.On Inventory Ready");
		
		UHUD_CrosshairManager_C_OnInventoryReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnItemsLoaded
	 * 		Flags  -> ()
	 */
	void UHUD_CrosshairManager_C::OnItemsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnItemsLoaded");
		
		UHUD_CrosshairManager_C_OnItemsLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_CrosshairManager.HUD_CrosshairManager_C.ExecuteUbergraph_HUD_CrosshairManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_CrosshairManager_C::ExecuteUbergraph_HUD_CrosshairManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.ExecuteUbergraph_HUD_CrosshairManager");
		
		UHUD_CrosshairManager_C_ExecuteUbergraph_HUD_CrosshairManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_CrosshairManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_CrosshairManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_CrosshairManager.HUD_CrosshairManager_C");
		return ptr;
	}

}


