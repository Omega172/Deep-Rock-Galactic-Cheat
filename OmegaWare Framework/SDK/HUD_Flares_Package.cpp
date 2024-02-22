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
	 * 		Name   -> Function HUD_Flares.HUD_Flares_C.SetFlareProduction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InNextIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Flares_C::SetFlareProduction(int32_t InNextIndex, float InProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.SetFlareProduction");
		
		UHUD_Flares_C_SetFlareProduction_Params params {};
		params.InNextIndex = InNextIndex;
		params.InProgress = InProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Flares.HUD_Flares_C.CreateIcons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            IconCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Flares_C::CreateIcons(int32_t IconCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.CreateIcons");
		
		UHUD_Flares_C_CreateIcons_Params params {};
		params.IconCount = IconCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Flares.HUD_Flares_C.OnItemsLoaded
	 * 		Flags  -> ()
	 */
	void UHUD_Flares_C::OnItemsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.OnItemsLoaded");
		
		UHUD_Flares_C_OnItemsLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Flares.HUD_Flares_C.OnFlareProduction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NextIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Flares_C::OnFlareProduction(int32_t NextIndex, float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.OnFlareProduction");
		
		UHUD_Flares_C_OnFlareProduction_Params params {};
		params.NextIndex = NextIndex;
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Flares.HUD_Flares_C.Setup Dynamic HUD
	 * 		Flags  -> ()
	 */
	void UHUD_Flares_C::SetupDynamicHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.Setup Dynamic HUD");
		
		UHUD_Flares_C_SetupDynamicHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Flares.HUD_Flares_C.OnFlareCountChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventoryComponent*                         Inventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Flares_C::OnFlareCountChanged(int32_t CurrentCount, class UInventoryComponent* Inventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.OnFlareCountChanged");
		
		UHUD_Flares_C_OnFlareCountChanged_Params params {};
		params.CurrentCount = CurrentCount;
		params.Inventory = Inventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Flares.HUD_Flares_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Flares_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.Construct");
		
		UHUD_Flares_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Flares.HUD_Flares_C.UpdateVisibility
	 * 		Flags  -> ()
	 */
	void UHUD_Flares_C::UpdateVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.UpdateVisibility");
		
		UHUD_Flares_C_UpdateVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Flares.HUD_Flares_C.OnLaserPointerPressed
	 * 		Flags  -> ()
	 */
	void UHUD_Flares_C::OnLaserPointerPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.OnLaserPointerPressed");
		
		UHUD_Flares_C_OnLaserPointerPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Flares.HUD_Flares_C.OnLaserPointerReleased_Event
	 * 		Flags  -> ()
	 */
	void UHUD_Flares_C::OnLaserPointerReleased_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.OnLaserPointerReleased_Event");
		
		UHUD_Flares_C_OnLaserPointerReleased_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Flares.HUD_Flares_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Flares_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.PreConstruct");
		
		UHUD_Flares_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Flares.HUD_Flares_C.OnMaxFlareCountChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventoryComponent*                         Inventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Flares_C::OnMaxFlareCountChanged_Event(int32_t CurrentCount, class UInventoryComponent* Inventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.OnMaxFlareCountChanged_Event");
		
		UHUD_Flares_C_OnMaxFlareCountChanged_Event_Params params {};
		params.CurrentCount = CurrentCount;
		params.Inventory = Inventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Flares.HUD_Flares_C.ExecuteUbergraph_HUD_Flares
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Flares_C::ExecuteUbergraph_HUD_Flares(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.ExecuteUbergraph_HUD_Flares");
		
		UHUD_Flares_C_ExecuteUbergraph_HUD_Flares_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Flares_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Flares_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Flares.HUD_Flares_C");
		return ptr;
	}

}


