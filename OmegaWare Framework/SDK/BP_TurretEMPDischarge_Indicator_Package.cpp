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
	 * 		Name   -> Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.UpdateState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               animate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TurretEMPDischarge_Indicator_C::UpdateState(bool animate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.UpdateState");
		
		ABP_TurretEMPDischarge_Indicator_C_UpdateState_Params params {};
		params.animate = animate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.AnimIntro__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_TurretEMPDischarge_Indicator_C::AnimIntro__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.AnimIntro__FinishedFunc");
		
		ABP_TurretEMPDischarge_Indicator_C_AnimIntro__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.AnimIntro__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_TurretEMPDischarge_Indicator_C::AnimIntro__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.AnimIntro__UpdateFunc");
		
		ABP_TurretEMPDischarge_Indicator_C_AnimIntro__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_TurretEMPDischarge_Indicator_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.ReceiveBeginPlay");
		
		ABP_TurretEMPDischarge_Indicator_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.OnItemEquipped_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TurretEMPDischarge_Indicator_C::OnItemEquipped_Event(class AItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.OnItemEquipped_Event");
		
		ABP_TurretEMPDischarge_Indicator_C_OnItemEquipped_Event_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.OnItemUnequipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TurretEMPDischarge_Indicator_C::OnItemUnequipped(class AItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.OnItemUnequipped");
		
		ABP_TurretEMPDischarge_Indicator_C_OnItemUnequipped_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.OnStateChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARedeployableSentryGun*                      Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERedeployableSentryGunState                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TurretEMPDischarge_Indicator_C::OnStateChanged_Event(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.OnStateChanged_Event");
		
		ABP_TurretEMPDischarge_Indicator_C_OnStateChanged_Event_Params params {};
		params.Sender = Sender;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.ExecuteUbergraph_BP_TurretEMPDischarge_Indicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TurretEMPDischarge_Indicator_C::ExecuteUbergraph_BP_TurretEMPDischarge_Indicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C.ExecuteUbergraph_BP_TurretEMPDischarge_Indicator");
		
		ABP_TurretEMPDischarge_Indicator_C_ExecuteUbergraph_BP_TurretEMPDischarge_Indicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TurretEMPDischarge_Indicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TurretEMPDischarge_Indicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TurretEMPDischarge_Indicator.BP_TurretEMPDischarge_Indicator_C");
		return ptr;
	}

}


