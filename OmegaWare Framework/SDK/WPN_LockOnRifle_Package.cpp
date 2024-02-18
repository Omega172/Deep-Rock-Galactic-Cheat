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
	 * 		Name   -> Function WPN_LockOnRifle.WPN_LockOnRifle_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_LockOnRifle_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LockOnRifle.WPN_LockOnRifle_C.GetGearStatEntry");
		
		AWPN_LockOnRifle_C_GetGearStatEntry_Params params {};
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
	 * 		Name   -> Function WPN_LockOnRifle.WPN_LockOnRifle_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWPN_LockOnRifle_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LockOnRifle.WPN_LockOnRifle_C.ReceiveBeginPlay");
		
		AWPN_LockOnRifle_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LockOnRifle.WPN_LockOnRifle_C.LockingStarted_Event
	 * 		Flags  -> ()
	 */
	void AWPN_LockOnRifle_C::LockingStarted_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LockOnRifle.WPN_LockOnRifle_C.LockingStarted_Event");
		
		AWPN_LockOnRifle_C_LockingStarted_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LockOnRifle.WPN_LockOnRifle_C.LockingStopped_Event
	 * 		Flags  -> ()
	 */
	void AWPN_LockOnRifle_C::LockingStopped_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LockOnRifle.WPN_LockOnRifle_C.LockingStopped_Event");
		
		AWPN_LockOnRifle_C_LockingStopped_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LockOnRifle.WPN_LockOnRifle_C.CustomEvent1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgrade*                                Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_LockOnRifle_C::CustomEvent1(class UItemUpgrade* Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LockOnRifle.WPN_LockOnRifle_C.CustomEvent1");
		
		AWPN_LockOnRifle_C_CustomEvent1_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LockOnRifle.WPN_LockOnRifle_C.Recieve_UpdateMeshses
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFirstPerson                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_LockOnRifle_C::Recieve_UpdateMeshses(bool IsFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LockOnRifle.WPN_LockOnRifle_C.Recieve_UpdateMeshses");
		
		AWPN_LockOnRifle_C_Recieve_UpdateMeshses_Params params {};
		params.IsFirstPerson = IsFirstPerson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LockOnRifle.WPN_LockOnRifle_C.RecieveEquipped
	 * 		Flags  -> ()
	 */
	void AWPN_LockOnRifle_C::RecieveEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LockOnRifle.WPN_LockOnRifle_C.RecieveEquipped");
		
		AWPN_LockOnRifle_C_RecieveEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LockOnRifle.WPN_LockOnRifle_C.OnSkinChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkinEffect*                                 Skin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_LockOnRifle_C::OnSkinChanged(class USkinEffect* Skin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LockOnRifle.WPN_LockOnRifle_C.OnSkinChanged");
		
		AWPN_LockOnRifle_C_OnSkinChanged_Params params {};
		params.Skin = Skin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LockOnRifle.WPN_LockOnRifle_C.Receive_ReloadBegin
	 * 		Flags  -> ()
	 */
	void AWPN_LockOnRifle_C::Receive_ReloadBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LockOnRifle.WPN_LockOnRifle_C.Receive_ReloadBegin");
		
		AWPN_LockOnRifle_C_Receive_ReloadBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LockOnRifle.WPN_LockOnRifle_C.Receive_ReloadEnd
	 * 		Flags  -> ()
	 */
	void AWPN_LockOnRifle_C::Receive_ReloadEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LockOnRifle.WPN_LockOnRifle_C.Receive_ReloadEnd");
		
		AWPN_LockOnRifle_C_Receive_ReloadEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_LockOnRifle.WPN_LockOnRifle_C.ExecuteUbergraph_WPN_LockOnRifle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_LockOnRifle_C::ExecuteUbergraph_WPN_LockOnRifle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_LockOnRifle.WPN_LockOnRifle_C.ExecuteUbergraph_WPN_LockOnRifle");
		
		AWPN_LockOnRifle_C_ExecuteUbergraph_WPN_LockOnRifle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_LockOnRifle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_LockOnRifle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_LockOnRifle.WPN_LockOnRifle_C");
		return ptr;
	}

}


