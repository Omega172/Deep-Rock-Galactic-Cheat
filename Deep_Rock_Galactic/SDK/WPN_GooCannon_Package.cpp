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
	 * 		Name   -> Function WPN_GooCannon.WPN_GooCannon_C.ApplyUpgradeModifiers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgrade*                                ItemUpgrade                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_GooCannon_C::ApplyUpgradeModifiers(class UItemUpgrade* ItemUpgrade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GooCannon.WPN_GooCannon_C.ApplyUpgradeModifiers");
		
		AWPN_GooCannon_C_ApplyUpgradeModifiers_Params params {};
		params.ItemUpgrade = ItemUpgrade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GooCannon.WPN_GooCannon_C.GetNearbyPuddles
	 * 		Flags  -> ()
	 */
	void AWPN_GooCannon_C::GetNearbyPuddles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GooCannon.WPN_GooCannon_C.GetNearbyPuddles");
		
		AWPN_GooCannon_C_GetNearbyPuddles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GooCannon.WPN_GooCannon_C.FadeOutIfValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAudioComponent*                             AC                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_GooCannon_C::FadeOutIfValid(class UAudioComponent** AC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GooCannon.WPN_GooCannon_C.FadeOutIfValid");
		
		AWPN_GooCannon_C_FadeOutIfValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AC != nullptr)
			*AC = params.AC;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GooCannon.WPN_GooCannon_C.Handle Charge Audio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              charge                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_GooCannon_C::HandleChargeAudio(float charge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GooCannon.WPN_GooCannon_C.Handle Charge Audio");
		
		AWPN_GooCannon_C_HandleChargeAudio_Params params {};
		params.charge = charge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GooCannon.WPN_GooCannon_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_GooCannon_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GooCannon.WPN_GooCannon_C.GetGearStatEntry");
		
		AWPN_GooCannon_C_GetGearStatEntry_Params params {};
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
	 * 		Name   -> Function WPN_GooCannon.WPN_GooCannon_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWPN_GooCannon_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GooCannon.WPN_GooCannon_C.UserConstructionScript");
		
		AWPN_GooCannon_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GooCannon.WPN_GooCannon_C.RecieveUnequipped
	 * 		Flags  -> ()
	 */
	void AWPN_GooCannon_C::RecieveUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GooCannon.WPN_GooCannon_C.RecieveUnequipped");
		
		AWPN_GooCannon_C_RecieveUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GooCannon.WPN_GooCannon_C.AddedToInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            ItemOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_GooCannon_C::AddedToInventory(class APlayerCharacter* ItemOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GooCannon.WPN_GooCannon_C.AddedToInventory");
		
		AWPN_GooCannon_C_AddedToInventory_Params params {};
		params.ItemOwner = ItemOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GooCannon.WPN_GooCannon_C.OnChargeChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              charge                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_GooCannon_C::OnChargeChanged_Event_1(float charge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GooCannon.WPN_GooCannon_C.OnChargeChanged_Event_1");
		
		AWPN_GooCannon_C_OnChargeChanged_Event_1_Params params {};
		params.charge = charge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GooCannon.WPN_GooCannon_C.CustomEvent1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgrade*                                Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_GooCannon_C::CustomEvent1(class UItemUpgrade* Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GooCannon.WPN_GooCannon_C.CustomEvent1");
		
		AWPN_GooCannon_C_CustomEvent1_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GooCannon.WPN_GooCannon_C.ReloadEvent
	 * 		Flags  -> ()
	 */
	void AWPN_GooCannon_C::ReloadEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GooCannon.WPN_GooCannon_C.ReloadEvent");
		
		AWPN_GooCannon_C_ReloadEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GooCannon.WPN_GooCannon_C.SuckInPuddle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GooCannon_GooPuddle_C*                   puddle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_GooCannon_C::SuckInPuddle(class ABP_GooCannon_GooPuddle_C* puddle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GooCannon.WPN_GooCannon_C.SuckInPuddle");
		
		AWPN_GooCannon_C_SuckInPuddle_Params params {};
		params.puddle = puddle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GooCannon.WPN_GooCannon_C.ServerSuckInPuddle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GooCannon_GooPuddle_C*                   puddle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_GooCannon_C::ServerSuckInPuddle(class ABP_GooCannon_GooPuddle_C* puddle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GooCannon.WPN_GooCannon_C.ServerSuckInPuddle");
		
		AWPN_GooCannon_C_ServerSuckInPuddle_Params params {};
		params.puddle = puddle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GooCannon.WPN_GooCannon_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWPN_GooCannon_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GooCannon.WPN_GooCannon_C.ReceiveBeginPlay");
		
		AWPN_GooCannon_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GooCannon.WPN_GooCannon_C.OnPuddleSuckedIn
	 * 		Flags  -> ()
	 */
	void AWPN_GooCannon_C::OnPuddleSuckedIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GooCannon.WPN_GooCannon_C.OnPuddleSuckedIn");
		
		AWPN_GooCannon_C_OnPuddleSuckedIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GooCannon.WPN_GooCannon_C.ExecuteUbergraph_WPN_GooCannon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_GooCannon_C::ExecuteUbergraph_WPN_GooCannon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GooCannon.WPN_GooCannon_C.ExecuteUbergraph_WPN_GooCannon");
		
		AWPN_GooCannon_C_ExecuteUbergraph_WPN_GooCannon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_GooCannon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_GooCannon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_GooCannon.WPN_GooCannon_C");
		return ptr;
	}

}


