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
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HandlePhotosentitivity
	 * 		Flags  -> ()
	 */
	void ABP_SupplyPod_Ammo_C::HandlePhotosentitivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HandlePhotosentitivity");
		
		ABP_SupplyPod_Ammo_C_HandlePhotosentitivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HandleUsableChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         useCollider                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      DoorMesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanUse                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SupplyPod_Ammo_C::HandleUsableChanged(class UPrimitiveComponent* useCollider, class USkeletalMeshComponent* DoorMesh, bool CanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HandleUsableChanged");
		
		ABP_SupplyPod_Ammo_C_HandleUsableChanged_Params params {};
		params.useCollider = useCollider;
		params.DoorMesh = DoorMesh;
		params.CanUse = CanUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HealUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SupplyPod_Ammo_C::HealUser(class APlayerCharacter* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HealUser");
		
		ABP_SupplyPod_Ammo_C_HealUser_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.DisableUsable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         collider                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      DoorMesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SupplyPod_Ammo_C::DisableUsable(class UPrimitiveComponent* collider, class USkeletalMeshComponent* DoorMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.DisableUsable");
		
		ABP_SupplyPod_Ammo_C_DisableUsable_Params params {};
		params.collider = collider;
		params.DoorMesh = DoorMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ResupplyUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SupplyPod_Ammo_C::ResupplyUser(class APlayerCharacter* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ResupplyUser");
		
		ABP_SupplyPod_Ammo_C_ResupplyUser_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_SupplyPod_Ammo_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.UserConstructionScript");
		
		ABP_SupplyPod_Ammo_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnDroppodImpact
	 * 		Flags  -> ()
	 */
	void ABP_SupplyPod_Ammo_C::OnDroppodImpact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnDroppodImpact");
		
		ABP_SupplyPod_Ammo_C_OnDroppodImpact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnDropStarted
	 * 		Flags  -> ()
	 */
	void ABP_SupplyPod_Ammo_C::OnDropStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnDropStarted");
		
		ABP_SupplyPod_Ammo_C_OnDropStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SupplyPod_Ammo_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ReceiveTick");
		
		ABP_SupplyPod_Ammo_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanUse                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature");
		
		ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature_Params params {};
		params.CanUse = CanUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanUse                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature(bool CanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature");
		
		ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature_Params params {};
		params.CanUse = CanUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanUse                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool CanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature");
		
		ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature_Params params {};
		params.CanUse = CanUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanUse                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature(bool CanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature");
		
		ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature_Params params {};
		params.CanUse = CanUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputKeys                                         Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature");
		
		ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature_Params params {};
		params.User = User;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputKeys                                         Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature");
		
		ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature_Params params {};
		params.User = User;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputKeys                                         Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature");
		
		ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature_Params params {};
		params.User = User;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputKeys                                         Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature");
		
		ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature_Params params {};
		params.User = User;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnTunnelBLocked
	 * 		Flags  -> ()
	 */
	void ABP_SupplyPod_Ammo_C::OnTunnelBLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnTunnelBLocked");
		
		ABP_SupplyPod_Ammo_C_OnTunnelBLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.SupplyUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USingleUsableComponent*                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SupplyPod_Ammo_C::SupplyUsed(class APlayerCharacter* User, class USingleUsableComponent* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.SupplyUsed");
		
		ABP_SupplyPod_Ammo_C_SupplyUsed_Params params {};
		params.User = User;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.UsableChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanUse                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         useCollider                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      DoorMesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SupplyPod_Ammo_C::UsableChanged(bool CanUse, class UPrimitiveComponent* useCollider, class USkeletalMeshComponent* DoorMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.UsableChanged");
		
		ABP_SupplyPod_Ammo_C_UsableChanged_Params params {};
		params.CanUse = CanUse;
		params.useCollider = useCollider;
		params.DoorMesh = DoorMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SupplyPod_Ammo_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ReceiveBeginPlay");
		
		ABP_SupplyPod_Ammo_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            userCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature(int32_t userCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature");
		
		ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature_Params params {};
		params.userCount = userCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            userCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature(int32_t userCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature");
		
		ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature_Params params {};
		params.userCount = userCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            userCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature(int32_t userCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature");
		
		ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature_Params params {};
		params.userCount = userCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            userCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature(int32_t userCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature");
		
		ABP_SupplyPod_Ammo_C_BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature_Params params {};
		params.userCount = userCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HandleUserCountChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            userCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USingleUsableComponent*                      Usable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      Door                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SupplyPod_Ammo_C::HandleUserCountChanged(int32_t userCount, class USingleUsableComponent* Usable, class USkeletalMeshComponent* Door)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HandleUserCountChanged");
		
		ABP_SupplyPod_Ammo_C_HandleUserCountChanged_Params params {};
		params.userCount = userCount;
		params.Usable = Usable;
		params.Door = Door;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ExecuteUbergraph_BP_SupplyPod_Ammo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SupplyPod_Ammo_C::ExecuteUbergraph_BP_SupplyPod_Ammo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ExecuteUbergraph_BP_SupplyPod_Ammo");
		
		ABP_SupplyPod_Ammo_C_ExecuteUbergraph_BP_SupplyPod_Ammo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SupplyPod_Ammo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SupplyPod_Ammo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C");
		return ptr;
	}

}


