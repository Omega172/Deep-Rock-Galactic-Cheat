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
	 * 		Name   -> Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_DetPack_Detonator_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.GetGearStatEntry");
		
		AWPN_DetPack_Detonator_C_GetGearStatEntry_Params params {};
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
	 * 		Name   -> Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWPN_DetPack_Detonator_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.UserConstructionScript");
		
		AWPN_DetPack_Detonator_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.RecieveStartUsing
	 * 		Flags  -> ()
	 */
	void AWPN_DetPack_Detonator_C::RecieveStartUsing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.RecieveStartUsing");
		
		AWPN_DetPack_Detonator_C_RecieveStartUsing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.RecieveEquipped
	 * 		Flags  -> ()
	 */
	void AWPN_DetPack_Detonator_C::RecieveEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.RecieveEquipped");
		
		AWPN_DetPack_Detonator_C_RecieveEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.ReceiveResupply
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              percentage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_DetPack_Detonator_C::ReceiveResupply(float percentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.ReceiveResupply");
		
		AWPN_DetPack_Detonator_C_ReceiveResupply_Params params {};
		params.percentage = percentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.Receive_OnRep_IsDetonatorOut
	 * 		Flags  -> ()
	 */
	void AWPN_DetPack_Detonator_C::Receive_OnRep_IsDetonatorOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.Receive_OnRep_IsDetonatorOut");
		
		AWPN_DetPack_Detonator_C_Receive_OnRep_IsDetonatorOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.ExecuteUbergraph_WPN_DetPack_Detonator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_DetPack_Detonator_C::ExecuteUbergraph_WPN_DetPack_Detonator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.ExecuteUbergraph_WPN_DetPack_Detonator");
		
		AWPN_DetPack_Detonator_C_ExecuteUbergraph_WPN_DetPack_Detonator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_DetPack_Detonator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_DetPack_Detonator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_DetPack_Detonator.WPN_DetPack_Detonator_C");
		return ptr;
	}

}


