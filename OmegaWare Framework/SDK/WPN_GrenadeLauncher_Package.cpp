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
	 * 		Name   -> Function WPN_GrenadeLauncher.WPN_GrenadeLauncher_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_GrenadeLauncher_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GrenadeLauncher.WPN_GrenadeLauncher_C.GetGearStatEntry");
		
		AWPN_GrenadeLauncher_C_GetGearStatEntry_Params params {};
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
	 * 		Name   -> Function WPN_GrenadeLauncher.WPN_GrenadeLauncher_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWPN_GrenadeLauncher_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GrenadeLauncher.WPN_GrenadeLauncher_C.ReceiveBeginPlay");
		
		AWPN_GrenadeLauncher_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GrenadeLauncher.WPN_GrenadeLauncher_C.CustomEvent1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgrade*                                Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_GrenadeLauncher_C::CustomEvent1(class UItemUpgrade* Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GrenadeLauncher.WPN_GrenadeLauncher_C.CustomEvent1");
		
		AWPN_GrenadeLauncher_C_CustomEvent1_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_GrenadeLauncher.WPN_GrenadeLauncher_C.ExecuteUbergraph_WPN_GrenadeLauncher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_GrenadeLauncher_C::ExecuteUbergraph_WPN_GrenadeLauncher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_GrenadeLauncher.WPN_GrenadeLauncher_C.ExecuteUbergraph_WPN_GrenadeLauncher");
		
		AWPN_GrenadeLauncher_C_ExecuteUbergraph_WPN_GrenadeLauncher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_GrenadeLauncher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_GrenadeLauncher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_GrenadeLauncher.WPN_GrenadeLauncher_C");
		return ptr;
	}

}


