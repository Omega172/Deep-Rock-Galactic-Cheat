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
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.GetCallingShout
	 * 		Flags  -> ()
	 */
	class UDialogDataAsset* ABP_Donkey_C::GetCallingShout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.GetCallingShout");
		
		ABP_Donkey_C_GetCallingShout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.UpdateStopCallRequests
	 * 		Flags  -> ()
	 */
	void ABP_Donkey_C::UpdateStopCallRequests()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.UpdateStopCallRequests");
		
		ABP_Donkey_C_UpdateStopCallRequests_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.HandlePhotosensitivity
	 * 		Flags  -> ()
	 */
	void ABP_Donkey_C::HandlePhotosensitivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.HandlePhotosensitivity");
		
		ABP_Donkey_C_HandlePhotosensitivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.OnRep_IsTrayOpen
	 * 		Flags  -> ()
	 */
	void ABP_Donkey_C::OnRep_IsTrayOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.OnRep_IsTrayOpen");
		
		ABP_Donkey_C_OnRep_IsTrayOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.GotoDropship
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Pos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Donkey_C::GotoDropship(const struct FVector& Pos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.GotoDropship");
		
		ABP_Donkey_C_GotoDropship_Params params {};
		params.Pos = Pos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.Set Controlled by Drop Ship
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Control                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Donkey_C::SetControlledbyDropShip(bool Control)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.Set Controlled by Drop Ship");
		
		ABP_Donkey_C_SetControlledbyDropShip_Params params {};
		params.Control = Control;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.SetDestination
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Destination                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerCharacter*                            InCalledBy                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Donkey_C::SetDestination(const struct FVector& Destination, class APlayerCharacter* InCalledBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.SetDestination");
		
		ABP_Donkey_C_SetDestination_Params params {};
		params.Destination = Destination;
		params.InCalledBy = InCalledBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Donkey_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.UserConstructionScript");
		
		ABP_Donkey_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Donkey_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.ReceiveBeginPlay");
		
		ABP_Donkey_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.OnDonkeyCalled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerCharacter*                            requester                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Donkey_C::OnDonkeyCalled(const struct FVector& Position, class APlayerCharacter* requester)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.OnDonkeyCalled");
		
		ABP_Donkey_C_OnDonkeyCalled_Params params {};
		params.Position = Position;
		params.requester = requester;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.SetDonkeyPos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Pos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Donkey_C::SetDonkeyPos(const struct FVector& Pos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.SetDonkeyPos");
		
		ABP_Donkey_C_SetDonkeyPos_Params params {};
		params.Pos = Pos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.On Goto Dropship
	 * 		Flags  -> ()
	 */
	void ABP_Donkey_C::OnGotoDropship()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.On Goto Dropship");
		
		ABP_Donkey_C_OnGotoDropship_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Donkey_C::BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_Donkey_C_BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Donkey_C::BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		ABP_Donkey_C_BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputKeys                                         Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Donkey_C::BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature");
		
		ABP_Donkey_C_BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature_Params params {};
		params.User = User;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanUse                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Donkey_C::BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature");
		
		ABP_Donkey_C_BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature_Params params {};
		params.CanUse = CanUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.SpawnBreadCrumb
	 * 		Flags  -> ()
	 */
	void ABP_Donkey_C::SpawnBreadCrumb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.SpawnBreadCrumb");
		
		ABP_Donkey_C_SpawnBreadCrumb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Donkey_C::BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(class APlayerCharacter* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature");
		
		ABP_Donkey_C_BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Donkey_C::BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature(class APlayerCharacter* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature");
		
		ABP_Donkey_C_BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Donkey_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_Donkey_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Donkey_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature");
		
		ABP_Donkey_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.Update Button State
	 * 		Flags  -> ()
	 */
	void ABP_Donkey_C::UpdateButtonState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.Update Button State");
		
		ABP_Donkey_C_UpdateButtonState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Donkey_C::BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature");
		
		ABP_Donkey_C_BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.EnableButton
	 * 		Flags  -> ()
	 */
	void ABP_Donkey_C::EnableButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.EnableButton");
		
		ABP_Donkey_C_EnableButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.OnRep_IsDown
	 * 		Flags  -> ()
	 */
	void ABP_Donkey_C::OnRep_IsDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.OnRep_IsDown");
		
		ABP_Donkey_C_OnRep_IsDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.SetControlledByDropShip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Control                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Donkey_C::SetControlledByDropShip(bool Control)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.SetControlledByDropShip");
		
		ABP_Donkey_C_SetControlledByDropShip_Params params {};
		params.Control = Control;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.OnPlayerLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Donkey_C::OnPlayerLeft(class AFSDPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.OnPlayerLeft");
		
		ABP_Donkey_C_OnPlayerLeft_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.SetGotoDropShip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Donkey_C::SetGotoDropShip(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.SetGotoDropShip");
		
		ABP_Donkey_C_SetGotoDropShip_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_8_PathFinished__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Donkey_C::BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_8_PathFinished__DelegateSignature(bool success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_8_PathFinished__DelegateSignature");
		
		ABP_Donkey_C_BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_8_PathFinished__DelegateSignature_Params params {};
		params.success = success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.AddTrayEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraSystem*                              Effect                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            numberOfTraysAffected                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Donkey_C::AddTrayEffect(class UNiagaraSystem* Effect, int32_t numberOfTraysAffected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.AddTrayEffect");
		
		ABP_Donkey_C_AddTrayEffect_Params params {};
		params.Effect = Effect;
		params.numberOfTraysAffected = numberOfTraysAffected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.ExecuteUbergraph_BP_Donkey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Donkey_C::ExecuteUbergraph_BP_Donkey(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.ExecuteUbergraph_BP_Donkey");
		
		ABP_Donkey_C_ExecuteUbergraph_BP_Donkey_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Donkey.BP_Donkey_C.PlayerOverlapsChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OverlapCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Donkey_C::PlayerOverlapsChanged__DelegateSignature(int32_t OverlapCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.PlayerOverlapsChanged__DelegateSignature");
		
		ABP_Donkey_C_PlayerOverlapsChanged__DelegateSignature_Params params {};
		params.OverlapCount = OverlapCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Donkey_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Donkey_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Donkey.BP_Donkey_C");
		return ptr;
	}

}


