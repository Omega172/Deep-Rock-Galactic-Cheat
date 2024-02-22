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
	 * 		Name   -> Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_HeavyParticleCannon_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.GetGearStatEntry");
		
		AWPN_HeavyParticleCannon_C_GetGearStatEntry_Params params {};
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
	 * 		Name   -> Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWPN_HeavyParticleCannon_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.UserConstructionScript");
		
		AWPN_HeavyParticleCannon_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWPN_HeavyParticleCannon_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.ReceiveBeginPlay");
		
		AWPN_HeavyParticleCannon_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.RecieveEquipped
	 * 		Flags  -> ()
	 */
	void AWPN_HeavyParticleCannon_C::RecieveEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.RecieveEquipped");
		
		AWPN_HeavyParticleCannon_C_RecieveEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.RecieveUnequipped
	 * 		Flags  -> ()
	 */
	void AWPN_HeavyParticleCannon_C::RecieveUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.RecieveUnequipped");
		
		AWPN_HeavyParticleCannon_C_RecieveUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AWPN_HeavyParticleCannon_C::BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature");
		
		AWPN_HeavyParticleCannon_C_BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.UpdateBeamsVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isBeamVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_HeavyParticleCannon_C::UpdateBeamsVisibility(bool isBeamVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.UpdateBeamsVisibility");
		
		AWPN_HeavyParticleCannon_C_UpdateBeamsVisibility_Params params {};
		params.isBeamVisible = isBeamVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.Upgraded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UItemUpgrade*>                        upgrades                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_HeavyParticleCannon_C::Upgraded(TArray<class UItemUpgrade*> upgrades)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.Upgraded");
		
		AWPN_HeavyParticleCannon_C_Upgraded_Params params {};
		params.upgrades = upgrades;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.UpdateReload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_HeavyParticleCannon_C::UpdateReload(float alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.UpdateReload");
		
		AWPN_HeavyParticleCannon_C_UpdateReload_Params params {};
		params.alpha = alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.IsHittngEnemyChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isHittingEnemy                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_HeavyParticleCannon_C::IsHittngEnemyChanged(bool isHittingEnemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.IsHittngEnemyChanged");
		
		AWPN_HeavyParticleCannon_C_IsHittngEnemyChanged_Params params {};
		params.isHittingEnemy = isHittingEnemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.ChargeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isCharging                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_HeavyParticleCannon_C::ChargeChanged(bool isCharging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.ChargeChanged");
		
		AWPN_HeavyParticleCannon_C_ChargeChanged_Params params {};
		params.isCharging = isCharging;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.Server_ExplodePlatform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_HeavyParticleCannon_C::Server_ExplodePlatform(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.Server_ExplodePlatform");
		
		AWPN_HeavyParticleCannon_C_Server_ExplodePlatform_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.All_ExplodePlatform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_HeavyParticleCannon_C::All_ExplodePlatform(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.All_ExplodePlatform");
		
		AWPN_HeavyParticleCannon_C_All_ExplodePlatform_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.ExecuteUbergraph_WPN_HeavyParticleCannon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_HeavyParticleCannon_C::ExecuteUbergraph_WPN_HeavyParticleCannon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.ExecuteUbergraph_WPN_HeavyParticleCannon");
		
		AWPN_HeavyParticleCannon_C_ExecuteUbergraph_WPN_HeavyParticleCannon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_HeavyParticleCannon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_HeavyParticleCannon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C");
		return ptr;
	}

}


