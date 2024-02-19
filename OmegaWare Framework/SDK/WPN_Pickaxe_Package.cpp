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
	 * 		Name   -> Function WPN_Pickaxe.WPN_Pickaxe_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_Pickaxe_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Pickaxe.WPN_Pickaxe_C.GetGearStatEntry");
		
		AWPN_Pickaxe_C_GetGearStatEntry_Params params {};
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
	 * 		Name   -> Function WPN_Pickaxe.WPN_Pickaxe_C.SpecialTargetDamageEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ImpactPoint                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ImpactNormal                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_Pickaxe_C::SpecialTargetDamageEffects(const struct FVector& ImpactPoint, const struct FVector& ImpactNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Pickaxe.WPN_Pickaxe_C.SpecialTargetDamageEffects");
		
		AWPN_Pickaxe_C_SpecialTargetDamageEffects_Params params {};
		params.ImpactPoint = ImpactPoint;
		params.ImpactNormal = ImpactNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Pickaxe.WPN_Pickaxe_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWPN_Pickaxe_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Pickaxe.WPN_Pickaxe_C.ReceiveBeginPlay");
		
		AWPN_Pickaxe_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Pickaxe.WPN_Pickaxe_C.ExecuteUbergraph_WPN_Pickaxe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_Pickaxe_C::ExecuteUbergraph_WPN_Pickaxe(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Pickaxe.WPN_Pickaxe_C.ExecuteUbergraph_WPN_Pickaxe");
		
		AWPN_Pickaxe_C_ExecuteUbergraph_WPN_Pickaxe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_Pickaxe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_Pickaxe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_Pickaxe.WPN_Pickaxe_C");
		return ptr;
	}

}


