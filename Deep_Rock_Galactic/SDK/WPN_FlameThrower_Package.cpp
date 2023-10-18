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
	 * 		Name   -> Function WPN_FlameThrower.WPN_FlameThrower_C.SetTorchTimeoutHack
	 * 		Flags  -> ()
	 */
	void AWPN_FlameThrower_C::SetTorchTimeoutHack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.SetTorchTimeoutHack");
		
		AWPN_FlameThrower_C_SetTorchTimeoutHack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_GetTPAnimationEventMesh
	 * 		Flags  -> ()
	 */
	class UStaticMeshComponent* AWPN_FlameThrower_C::Receive_GetTPAnimationEventMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_GetTPAnimationEventMesh");
		
		AWPN_FlameThrower_C_Receive_GetTPAnimationEventMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_GetFPAnimationEventMesh
	 * 		Flags  -> ()
	 */
	class UFirstPersonStaticMeshComponent* AWPN_FlameThrower_C::Receive_GetFPAnimationEventMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_GetFPAnimationEventMesh");
		
		AWPN_FlameThrower_C_Receive_GetFPAnimationEventMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_FlameThrower.WPN_FlameThrower_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_FlameThrower_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.GetGearStatEntry");
		
		AWPN_FlameThrower_C_GetGearStatEntry_Params params {};
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
	 * 		Name   -> Function WPN_FlameThrower.WPN_FlameThrower_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWPN_FlameThrower_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.UserConstructionScript");
		
		AWPN_FlameThrower_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_FlameThrower.WPN_FlameThrower_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWPN_FlameThrower_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.ReceiveBeginPlay");
		
		AWPN_FlameThrower_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_FlameThrower.WPN_FlameThrower_C.RecieveEquipped
	 * 		Flags  -> ()
	 */
	void AWPN_FlameThrower_C::RecieveEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.RecieveEquipped");
		
		AWPN_FlameThrower_C_RecieveEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_FlameThrower.WPN_FlameThrower_C.RecieveUnequipped
	 * 		Flags  -> ()
	 */
	void AWPN_FlameThrower_C::RecieveUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.RecieveUnequipped");
		
		AWPN_FlameThrower_C_RecieveUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_ReloadBegin
	 * 		Flags  -> ()
	 */
	void AWPN_FlameThrower_C::Receive_ReloadBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_ReloadBegin");
		
		AWPN_FlameThrower_C_Receive_ReloadBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_ReloadEnd
	 * 		Flags  -> ()
	 */
	void AWPN_FlameThrower_C::Receive_ReloadEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_ReloadEnd");
		
		AWPN_FlameThrower_C_Receive_ReloadEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_FlameThrower.WPN_FlameThrower_C.Recieve_UpdateMeshses
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFirstPerson                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_FlameThrower_C::Recieve_UpdateMeshses(bool IsFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.Recieve_UpdateMeshses");
		
		AWPN_FlameThrower_C_Recieve_UpdateMeshses_Params params {};
		params.IsFirstPerson = IsFirstPerson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_FlameThrower.WPN_FlameThrower_C.AddedToInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            ItemOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_FlameThrower_C::AddedToInventory(class APlayerCharacter* ItemOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.AddedToInventory");
		
		AWPN_FlameThrower_C_AddedToInventory_Params params {};
		params.ItemOwner = ItemOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_FlameThrower.WPN_FlameThrower_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AWPN_FlameThrower_C::BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature");
		
		AWPN_FlameThrower_C_BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_FlameThrower.WPN_FlameThrower_C.OnSkinChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkinEffect*                                 Skin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_FlameThrower_C::OnSkinChanged(class USkinEffect* Skin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.OnSkinChanged");
		
		AWPN_FlameThrower_C_OnSkinChanged_Params params {};
		params.Skin = Skin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_FlameThrower.WPN_FlameThrower_C.ExecuteUbergraph_WPN_FlameThrower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_FlameThrower_C::ExecuteUbergraph_WPN_FlameThrower(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_FlameThrower.WPN_FlameThrower_C.ExecuteUbergraph_WPN_FlameThrower");
		
		AWPN_FlameThrower_C_ExecuteUbergraph_WPN_FlameThrower_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_FlameThrower_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_FlameThrower_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_FlameThrower.WPN_FlameThrower_C");
		return ptr;
	}

}


