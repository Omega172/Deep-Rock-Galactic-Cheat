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
	 * 		Name   -> Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.SetUpgradeModifiers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgrade*                                ItemUpgrade                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_MicroMissileLauncher_C::SetUpgradeModifiers(class UItemUpgrade* ItemUpgrade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.SetUpgradeModifiers");
		
		AWPN_MicroMissileLauncher_C_SetUpgradeModifiers_Params params {};
		params.ItemUpgrade = ItemUpgrade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_MicroMissileLauncher_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.GetGearStatEntry");
		
		AWPN_MicroMissileLauncher_C_GetGearStatEntry_Params params {};
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
	 * 		Name   -> Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWPN_MicroMissileLauncher_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.ReceiveBeginPlay");
		
		AWPN_MicroMissileLauncher_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.CustomEvent1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgrade*                                Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_MicroMissileLauncher_C::CustomEvent1(class UItemUpgrade* Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.CustomEvent1");
		
		AWPN_MicroMissileLauncher_C_CustomEvent1_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.SetHomingTarget
	 * 		Flags  -> ()
	 */
	void AWPN_MicroMissileLauncher_C::SetHomingTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.SetHomingTarget");
		
		AWPN_MicroMissileLauncher_C_SetHomingTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.OnProjectileSpawned_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProjectileBase*                             Projectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_MicroMissileLauncher_C::OnProjectileSpawned_Event_1(class AProjectileBase* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.OnProjectileSpawned_Event_1");
		
		AWPN_MicroMissileLauncher_C_OnProjectileSpawned_Event_1_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_MicroMissileLauncher_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.ReceiveTick");
		
		AWPN_MicroMissileLauncher_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.Server_SetHomingLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector_NetQuantize                         HomingLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_MicroMissileLauncher_C::Server_SetHomingLocation(const struct FVector_NetQuantize& HomingLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.Server_SetHomingLocation");
		
		AWPN_MicroMissileLauncher_C_Server_SetHomingLocation_Params params {};
		params.HomingLocation = HomingLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.All_SetHomingLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector_NetQuantize                         HomingLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_MicroMissileLauncher_C::All_SetHomingLocation(const struct FVector_NetQuantize& HomingLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.All_SetHomingLocation");
		
		AWPN_MicroMissileLauncher_C_All_SetHomingLocation_Params params {};
		params.HomingLocation = HomingLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.ExecuteUbergraph_WPN_MicroMissileLauncher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_MicroMissileLauncher_C::ExecuteUbergraph_WPN_MicroMissileLauncher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C.ExecuteUbergraph_WPN_MicroMissileLauncher");
		
		AWPN_MicroMissileLauncher_C_ExecuteUbergraph_WPN_MicroMissileLauncher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_MicroMissileLauncher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_MicroMissileLauncher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_MicroMissileLauncher.WPN_MicroMissileLauncher_C");
		return ptr;
	}

}


