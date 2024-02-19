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
	 * 		Name   -> Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnRep_SimulateAxePhysics
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_Axe_Stuck_C::OnRep_SimulateAxePhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnRep_SimulateAxePhysics");
		
		ABP_Grenade_Axe_Stuck_C_OnRep_SimulateAxePhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnRep_StandOnMe
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_Axe_Stuck_C::OnRep_StandOnMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnRep_StandOnMe");
		
		ABP_Grenade_Axe_Stuck_C_OnRep_StandOnMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnRep_AxeGrenadeItem
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_Axe_Stuck_C::OnRep_AxeGrenadeItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnRep_AxeGrenadeItem");
		
		ABP_Grenade_Axe_Stuck_C_OnRep_AxeGrenadeItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_Axe_Stuck_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.UserConstructionScript");
		
		ABP_Grenade_Axe_Stuck_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.PickUpAxe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AThrownGrenadeItem*                          ThrownGrenadeItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Grenade_Axe_Stuck_C::PickUpAxe(class AThrownGrenadeItem* ThrownGrenadeItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.PickUpAxe");
		
		ABP_Grenade_Axe_Stuck_C_PickUpAxe_Params params {};
		params.ThrownGrenadeItem = ThrownGrenadeItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.Detach Axe
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_Axe_Stuck_C::DetachAxe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.Detach Axe");
		
		ABP_Grenade_Axe_Stuck_C_DetachAxe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.Attach
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ParentActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             ParentComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ParentSocketName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanRetrieve                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Grenade_Axe_Stuck_C::Attach(class AActor* ParentActor, class USceneComponent* ParentComponent, const class FName& ParentSocketName, bool CanRetrieve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.Attach");
		
		ABP_Grenade_Axe_Stuck_C_Attach_Params params {};
		params.ParentActor = ParentActor;
		params.ParentComponent = ParentComponent;
		params.ParentSocketName = ParentSocketName;
		params.CanRetrieve = CanRetrieve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnDestroyed_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Grenade_Axe_Stuck_C::OnDestroyed_Event(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnDestroyed_Event");
		
		ABP_Grenade_Axe_Stuck_C_OnDestroyed_Event_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnDeath_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHealthComponentBase*                        HealthComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Grenade_Axe_Stuck_C::OnDeath_Event(class UHealthComponentBase* HealthComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnDeath_Event");
		
		ABP_Grenade_Axe_Stuck_C_OnDeath_Event_Params params {};
		params.HealthComponent = HealthComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.GoPhysical
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PassThrough                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanRetrieve                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Grenade_Axe_Stuck_C::GoPhysical(bool PassThrough, bool CanRetrieve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.GoPhysical");
		
		ABP_Grenade_Axe_Stuck_C_GoPhysical_Params params {};
		params.PassThrough = PassThrough;
		params.CanRetrieve = CanRetrieve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.MakeStandable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanRetrieve                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Grenade_Axe_Stuck_C::MakeStandable(bool CanRetrieve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.MakeStandable");
		
		ABP_Grenade_Axe_Stuck_C_MakeStandable_Params params {};
		params.CanRetrieve = CanRetrieve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.SetRetrieval
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanRetrieve                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Grenade_Axe_Stuck_C::SetRetrieval(bool CanRetrieve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.SetRetrieval");
		
		ABP_Grenade_Axe_Stuck_C_SetRetrieval_Params params {};
		params.CanRetrieve = CanRetrieve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputKeys                                         Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Grenade_Axe_Stuck_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature");
		
		ABP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature_Params params {};
		params.User = User;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanUse                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Grenade_Axe_Stuck_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature");
		
		ABP_Grenade_Axe_Stuck_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature_Params params {};
		params.CanUse = CanUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.ExecuteUbergraph_BP_Grenade_Axe_Stuck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Grenade_Axe_Stuck_C::ExecuteUbergraph_BP_Grenade_Axe_Stuck(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.ExecuteUbergraph_BP_Grenade_Axe_Stuck");
		
		ABP_Grenade_Axe_Stuck_C_ExecuteUbergraph_BP_Grenade_Axe_Stuck_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Grenade_Axe_Stuck_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Grenade_Axe_Stuck_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C");
		return ptr;
	}

}


