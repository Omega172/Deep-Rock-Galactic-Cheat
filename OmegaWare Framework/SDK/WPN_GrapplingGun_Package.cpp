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
	 * 		Name   -> Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_GrapplingGun_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetGearStatEntry");
		
		AWPN_GrapplingGun_C_GetGearStatEntry_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Stats != nullptr)
			*Stats = params.Stats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetCableTransform
	 * 		Flags  -> ()
	 */
	struct FTransform AWPN_GrapplingGun_C::GetCableTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetCableTransform");
		
		AWPN_GrapplingGun_C_GetCableTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GrapplingGun.WPN_GrapplingGun_C.SetCableEndPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_GrapplingGun_C::SetCableEndPoint(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.SetCableEndPoint");
		
		AWPN_GrapplingGun_C_SetCableEndPoint_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetCableParent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Muzzle                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_GrapplingGun_C::GetCableParent(class USceneComponent** Muzzle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetCableParent");
		
		AWPN_GrapplingGun_C_GetCableParent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Muzzle != nullptr)
			*Muzzle = params.Muzzle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GrapplingGun.WPN_GrapplingGun_C.ToggleCable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewVisibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_GrapplingGun_C::ToggleCable(bool bNewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.ToggleCable");
		
		AWPN_GrapplingGun_C_ToggleCable_Params params {};
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetAimView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Forward                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_GrapplingGun_C::GetAimView(struct FVector* Location, struct FVector* Forward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetAimView");
		
		AWPN_GrapplingGun_C_GetAimView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (Forward != nullptr)
			*Forward = params.Forward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GrapplingGun.WPN_GrapplingGun_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWPN_GrapplingGun_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.UserConstructionScript");
		
		AWPN_GrapplingGun_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GrapplingGun.WPN_GrapplingGun_C.ProjectileMovement__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AWPN_GrapplingGun_C::ProjectileMovement__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.ProjectileMovement__FinishedFunc");
		
		AWPN_GrapplingGun_C_ProjectileMovement__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GrapplingGun.WPN_GrapplingGun_C.ProjectileMovement__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AWPN_GrapplingGun_C::ProjectileMovement__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.ProjectileMovement__UpdateFunc");
		
		AWPN_GrapplingGun_C_ProjectileMovement__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GrapplingGun.WPN_GrapplingGun_C.AddedToInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            ItemOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_GrapplingGun_C::AddedToInventory(class APlayerCharacter* ItemOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.AddedToInventory");
		
		AWPN_GrapplingGun_C_AddedToInventory_Params params {};
		params.ItemOwner = ItemOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GrapplingGun.WPN_GrapplingGun_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWPN_GrapplingGun_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.ReceiveBeginPlay");
		
		AWPN_GrapplingGun_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveCycledItem
	 * 		Flags  -> ()
	 */
	void AWPN_GrapplingGun_C::RecieveCycledItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveCycledItem");
		
		AWPN_GrapplingGun_C_RecieveCycledItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GrapplingGun.WPN_GrapplingGun_C.Gunsling
	 * 		Flags  -> ()
	 */
	void AWPN_GrapplingGun_C::Gunsling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.Gunsling");
		
		AWPN_GrapplingGun_C_Gunsling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnGrappleUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_GrapplingGun_C::OnGrappleUpdate(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnGrappleUpdate");
		
		AWPN_GrapplingGun_C_OnGrappleUpdate_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnGrappleStart
	 * 		Flags  -> ()
	 */
	void AWPN_GrapplingGun_C::OnGrappleStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnGrappleStart");
		
		AWPN_GrapplingGun_C_OnGrappleStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnGrappleEnd
	 * 		Flags  -> ()
	 */
	void AWPN_GrapplingGun_C::OnGrappleEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnGrappleEnd");
		
		AWPN_GrapplingGun_C_OnGrappleEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnGrappleFailed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TooFar                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_GrapplingGun_C::OnGrappleFailed(bool TooFar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnGrappleFailed");
		
		AWPN_GrapplingGun_C_OnGrappleFailed_Params params {};
		params.TooFar = TooFar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GrapplingGun.WPN_GrapplingGun_C.ExecuteUbergraph_WPN_GrapplingGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_GrapplingGun_C::ExecuteUbergraph_WPN_GrapplingGun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GrapplingGun.WPN_GrapplingGun_C.ExecuteUbergraph_WPN_GrapplingGun");
		
		AWPN_GrapplingGun_C_ExecuteUbergraph_WPN_GrapplingGun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_GrapplingGun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_GrapplingGun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_GrapplingGun.WPN_GrapplingGun_C");
		return ptr;
	}

}


