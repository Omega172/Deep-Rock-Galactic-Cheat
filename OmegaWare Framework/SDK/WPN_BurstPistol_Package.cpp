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
	 * 		Name   -> Function WPN_BurstPistol.WPN_BurstPistol_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_BurstPistol_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_BurstPistol.WPN_BurstPistol_C.GetGearStatEntry");
		
		AWPN_BurstPistol_C_GetGearStatEntry_Params params {};
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
	 * 		Name   -> Function WPN_BurstPistol.WPN_BurstPistol_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWPN_BurstPistol_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_BurstPistol.WPN_BurstPistol_C.UserConstructionScript");
		
		AWPN_BurstPistol_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_BurstPistol.WPN_BurstPistol_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWPN_BurstPistol_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_BurstPistol.WPN_BurstPistol_C.ReceiveBeginPlay");
		
		AWPN_BurstPistol_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_BurstPistol.WPN_BurstPistol_C.Receive_ReloadBegin
	 * 		Flags  -> ()
	 */
	void AWPN_BurstPistol_C::Receive_ReloadBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_BurstPistol.WPN_BurstPistol_C.Receive_ReloadBegin");
		
		AWPN_BurstPistol_C_Receive_ReloadBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_BurstPistol.WPN_BurstPistol_C.Receive_ReloadEnd
	 * 		Flags  -> ()
	 */
	void AWPN_BurstPistol_C::Receive_ReloadEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_BurstPistol.WPN_BurstPistol_C.Receive_ReloadEnd");
		
		AWPN_BurstPistol_C_Receive_ReloadEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_BurstPistol.WPN_BurstPistol_C.ExecuteUbergraph_WPN_BurstPistol
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_BurstPistol_C::ExecuteUbergraph_WPN_BurstPistol(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_BurstPistol.WPN_BurstPistol_C.ExecuteUbergraph_WPN_BurstPistol");
		
		AWPN_BurstPistol_C_ExecuteUbergraph_WPN_BurstPistol_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_BurstPistol_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_BurstPistol_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_BurstPistol.WPN_BurstPistol_C");
		return ptr;
	}

}


