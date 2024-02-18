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
	 * 		Name   -> Function WPN_AssaultRifle.WPN_AssaultRifle_C.Receive_GetTPAnimationEventMesh
	 * 		Flags  -> ()
	 */
	class UStaticMeshComponent* AWPN_AssaultRifle_C::Receive_GetTPAnimationEventMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_AssaultRifle.WPN_AssaultRifle_C.Receive_GetTPAnimationEventMesh");
		
		AWPN_AssaultRifle_C_Receive_GetTPAnimationEventMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_AssaultRifle.WPN_AssaultRifle_C.Receive_GetFPAnimationEventMesh
	 * 		Flags  -> ()
	 */
	class UFirstPersonStaticMeshComponent* AWPN_AssaultRifle_C::Receive_GetFPAnimationEventMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_AssaultRifle.WPN_AssaultRifle_C.Receive_GetFPAnimationEventMesh");
		
		AWPN_AssaultRifle_C_Receive_GetFPAnimationEventMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_AssaultRifle.WPN_AssaultRifle_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_AssaultRifle_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_AssaultRifle.WPN_AssaultRifle_C.GetGearStatEntry");
		
		AWPN_AssaultRifle_C_GetGearStatEntry_Params params {};
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
	 * 		Name   -> Function WPN_AssaultRifle.WPN_AssaultRifle_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWPN_AssaultRifle_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_AssaultRifle.WPN_AssaultRifle_C.UserConstructionScript");
		
		AWPN_AssaultRifle_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_AssaultRifle.WPN_AssaultRifle_C.RecieveEquipped
	 * 		Flags  -> ()
	 */
	void AWPN_AssaultRifle_C::RecieveEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_AssaultRifle.WPN_AssaultRifle_C.RecieveEquipped");
		
		AWPN_AssaultRifle_C_RecieveEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_AssaultRifle.WPN_AssaultRifle_C.Recieve_UpdateMeshses
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFirstPerson                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_AssaultRifle_C::Recieve_UpdateMeshses(bool IsFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_AssaultRifle.WPN_AssaultRifle_C.Recieve_UpdateMeshses");
		
		AWPN_AssaultRifle_C_Recieve_UpdateMeshses_Params params {};
		params.IsFirstPerson = IsFirstPerson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_AssaultRifle.WPN_AssaultRifle_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWPN_AssaultRifle_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_AssaultRifle.WPN_AssaultRifle_C.ReceiveBeginPlay");
		
		AWPN_AssaultRifle_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_AssaultRifle.WPN_AssaultRifle_C.Receive_ReloadBegin
	 * 		Flags  -> ()
	 */
	void AWPN_AssaultRifle_C::Receive_ReloadBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_AssaultRifle.WPN_AssaultRifle_C.Receive_ReloadBegin");
		
		AWPN_AssaultRifle_C_Receive_ReloadBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_AssaultRifle.WPN_AssaultRifle_C.Receive_ReloadEnd
	 * 		Flags  -> ()
	 */
	void AWPN_AssaultRifle_C::Receive_ReloadEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_AssaultRifle.WPN_AssaultRifle_C.Receive_ReloadEnd");
		
		AWPN_AssaultRifle_C_Receive_ReloadEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_AssaultRifle.WPN_AssaultRifle_C.OnSkinChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkinEffect*                                 Skin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_AssaultRifle_C::OnSkinChanged(class USkinEffect* Skin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_AssaultRifle.WPN_AssaultRifle_C.OnSkinChanged");
		
		AWPN_AssaultRifle_C_OnSkinChanged_Params params {};
		params.Skin = Skin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_AssaultRifle.WPN_AssaultRifle_C.ExecuteUbergraph_WPN_AssaultRifle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_AssaultRifle_C::ExecuteUbergraph_WPN_AssaultRifle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_AssaultRifle.WPN_AssaultRifle_C.ExecuteUbergraph_WPN_AssaultRifle");
		
		AWPN_AssaultRifle_C_ExecuteUbergraph_WPN_AssaultRifle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_AssaultRifle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_AssaultRifle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_AssaultRifle.WPN_AssaultRifle_C");
		return ptr;
	}

}


