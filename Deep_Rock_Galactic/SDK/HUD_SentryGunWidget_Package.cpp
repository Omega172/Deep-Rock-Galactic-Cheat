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
	 * 		Name   -> Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.IsOutOfAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutOfAmmo                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_SentryGunWidget_C::IsOutOfAmmo(bool* OutOfAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.IsOutOfAmmo");
		
		UHUD_SentryGunWidget_C_IsOutOfAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOfAmmo != nullptr)
			*OutOfAmmo = params.OutOfAmmo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.GetMovementState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERecallableActorState                              State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryGunWidget_C::GetMovementState(ERecallableActorState* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.GetMovementState");
		
		UHUD_SentryGunWidget_C_GetMovementState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Sentry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARecallableSentryGun*                        SentryGun                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryGunWidget_C::SetSentry(class ARecallableSentryGun* SentryGun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Sentry");
		
		UHUD_SentryGunWidget_C_SetSentry_Params params {};
		params.SentryGun = SentryGun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Sentry Home
	 * 		Flags  -> ()
	 */
	void UHUD_SentryGunWidget_C::SetSentryHome()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Sentry Home");
		
		UHUD_SentryGunWidget_C_SetSentryHome_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.On Ammo Count Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmmoCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Change                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryGunWidget_C::OnAmmoCountChanged(int32_t AmmoCount, int32_t Change)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.On Ammo Count Changed");
		
		UHUD_SentryGunWidget_C_OnAmmoCountChanged_Params params {};
		params.AmmoCount = AmmoCount;
		params.Change = Change;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         Inventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ARecallableSentryGunItem*                    Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryGunWidget_C::Init(class UInventoryComponent* Inventory, class ARecallableSentryGunItem* Item, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Init");
		
		UHUD_SentryGunWidget_C_Init_Params params {};
		params.Inventory = Inventory;
		params.Item = Item;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnActiveItemsChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARecallableSentryGunItem*                    Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryGunWidget_C::OnActiveItemsChanged(class ARecallableSentryGunItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnActiveItemsChanged");
		
		UHUD_SentryGunWidget_C_OnActiveItemsChanged_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARecallableActor*                            Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERecallableActorState                              State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryGunWidget_C::OnStateChanged(class ARecallableActor* Sender, ERecallableActorState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnStateChanged");
		
		UHUD_SentryGunWidget_C_OnStateChanged_Params params {};
		params.Sender = Sender;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Update State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryGunWidget_C::UpdateState(const class FString& reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Update State");
		
		UHUD_SentryGunWidget_C_UpdateState_Params params {};
		params.reason = reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_SentryGunWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.PreConstruct");
		
		UHUD_SentryGunWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnSelectedItemChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARecallableSentryGun*                        SentryGun                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryGunWidget_C::OnSelectedItemChanged(class ARecallableSentryGun* SentryGun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnSelectedItemChanged");
		
		UHUD_SentryGunWidget_C_OnSelectedItemChanged_Params params {};
		params.SentryGun = SentryGun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Selected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_SentryGunWidget_C::SetSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Set Selected");
		
		UHUD_SentryGunWidget_C_SetSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnItemEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryGunWidget_C::OnItemEquipped(class AItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnItemEquipped");
		
		UHUD_SentryGunWidget_C_OnItemEquipped_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnGunStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARedeployableSentryGun*                      Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERedeployableSentryGunState                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryGunWidget_C::OnGunStateChanged(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnGunStateChanged");
		
		UHUD_SentryGunWidget_C_OnGunStateChanged_Params params {};
		params.Sender = Sender;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Check For Ammo Depletion
	 * 		Flags  -> ()
	 */
	void UHUD_SentryGunWidget_C::CheckForAmmoDepletion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Check For Ammo Depletion");
		
		UHUD_SentryGunWidget_C_CheckForAmmoDepletion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnDeployProgress_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryGunWidget_C::OnDeployProgress_Event(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnDeployProgress_Event");
		
		UHUD_SentryGunWidget_C_OnDeployProgress_Event_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_SentryGunWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.Construct");
		
		UHUD_SentryGunWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnAmmoDepletedFinished
	 * 		Flags  -> ()
	 */
	void UHUD_SentryGunWidget_C::OnAmmoDepletedFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnAmmoDepletedFinished");
		
		UHUD_SentryGunWidget_C_OnAmmoDepletedFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnItemUnequipped_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryGunWidget_C::OnItemUnequipped_Event(class AItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnItemUnequipped_Event");
		
		UHUD_SentryGunWidget_C_OnItemUnequipped_Event_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.ExecuteUbergraph_HUD_SentryGunWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SentryGunWidget_C::ExecuteUbergraph_HUD_SentryGunWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.ExecuteUbergraph_HUD_SentryGunWidget");
		
		UHUD_SentryGunWidget_C_ExecuteUbergraph_HUD_SentryGunWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnSentryStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_SentryGunWidget_C::OnSentryStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SentryGunWidget.HUD_SentryGunWidget_C.OnSentryStateChanged__DelegateSignature");
		
		UHUD_SentryGunWidget_C_OnSentryStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_SentryGunWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_SentryGunWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_SentryGunWidget.HUD_SentryGunWidget_C");
		return ptr;
	}

}


