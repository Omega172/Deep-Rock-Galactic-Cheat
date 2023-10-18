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
	 * 		Name   -> Function WPN_Crossbow.WPN_Crossbow_C.Get Reload Stat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGearStatEntry                              GearStatEntry                                              (Parm, OutParm)
	 */
	void AWPN_Crossbow_C::GetReloadStat(class AFSDPlayerState* PlayerState, struct FGearStatEntry* GearStatEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Crossbow.WPN_Crossbow_C.Get Reload Stat");
		
		AWPN_Crossbow_C_GetReloadStat_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearStatEntry != nullptr)
			*GearStatEntry = params.GearStatEntry;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Crossbow.WPN_Crossbow_C.GetEquippedSpecialArrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Projectile                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_Crossbow_C::GetEquippedSpecialArrow(class AFSDPlayerState* Player, class UClass** Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Crossbow.WPN_Crossbow_C.GetEquippedSpecialArrow");
		
		AWPN_Crossbow_C_GetEquippedSpecialArrow_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Projectile != nullptr)
			*Projectile = params.Projectile;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Crossbow.WPN_Crossbow_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_Crossbow_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Crossbow.WPN_Crossbow_C.GetGearStatEntry");
		
		AWPN_Crossbow_C_GetGearStatEntry_Params params {};
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
	 * 		Name   -> Function WPN_Crossbow.WPN_Crossbow_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWPN_Crossbow_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Crossbow.WPN_Crossbow_C.ReceiveBeginPlay");
		
		AWPN_Crossbow_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Crossbow.WPN_Crossbow_C.UpdateRecallProgress
	 * 		Flags  -> ()
	 */
	void AWPN_Crossbow_C::UpdateRecallProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Crossbow.WPN_Crossbow_C.UpdateRecallProgress");
		
		AWPN_Crossbow_C_UpdateRecallProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Crossbow.WPN_Crossbow_C.SetAnimatedFPMeshComponentFromBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      animatedArrow                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_Crossbow_C::SetAnimatedFPMeshComponentFromBP(class AActor* animatedArrow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Crossbow.WPN_Crossbow_C.SetAnimatedFPMeshComponentFromBP");
		
		AWPN_Crossbow_C_SetAnimatedFPMeshComponentFromBP_Params params {};
		params.animatedArrow = animatedArrow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Crossbow.WPN_Crossbow_C.SetAnimatedTPMeshComponentFromBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      animatedArrow                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_Crossbow_C::SetAnimatedTPMeshComponentFromBP(class AActor* animatedArrow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Crossbow.WPN_Crossbow_C.SetAnimatedTPMeshComponentFromBP");
		
		AWPN_Crossbow_C_SetAnimatedTPMeshComponentFromBP_Params params {};
		params.animatedArrow = animatedArrow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Crossbow.WPN_Crossbow_C.ExecuteUbergraph_WPN_Crossbow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_Crossbow_C::ExecuteUbergraph_WPN_Crossbow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Crossbow.WPN_Crossbow_C.ExecuteUbergraph_WPN_Crossbow");
		
		AWPN_Crossbow_C_ExecuteUbergraph_WPN_Crossbow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_Crossbow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_Crossbow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_Crossbow.WPN_Crossbow_C");
		return ptr;
	}

}


