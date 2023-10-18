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
	 * 		Name   -> Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.AddGearStateEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AGrenade_Friendly_Shredders_C::AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.AddGearStateEntries");
		
		AGrenade_Friendly_Shredders_C_AddGearStateEntries_Params params {};
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
	 * 		Name   -> Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.OnRep_ParticleRandomSeed
	 * 		Flags  -> ()
	 */
	void AGrenade_Friendly_Shredders_C::OnRep_ParticleRandomSeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.OnRep_ParticleRandomSeed");
		
		AGrenade_Friendly_Shredders_C_OnRep_ParticleRandomSeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AGrenade_Friendly_Shredders_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.UserConstructionScript");
		
		AGrenade_Friendly_Shredders_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.OnExploded
	 * 		Flags  -> ()
	 */
	void AGrenade_Friendly_Shredders_C::OnExploded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.OnExploded");
		
		AGrenade_Friendly_Shredders_C_OnExploded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.ReceiveParticleData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBasicParticleData>                  Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UNiagaraSystem*                              NiagaraSystem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGrenade_Friendly_Shredders_C::ReceiveParticleData(TArray<struct FBasicParticleData> Data, class UNiagaraSystem* NiagaraSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.ReceiveParticleData");
		
		AGrenade_Friendly_Shredders_C_ReceiveParticleData_Params params {};
		params.Data = Data;
		params.NiagaraSystem = NiagaraSystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AGrenade_Friendly_Shredders_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.ReceiveBeginPlay");
		
		AGrenade_Friendly_Shredders_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.OnDeathShredder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHealthComponentBase*                        HealthComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGrenade_Friendly_Shredders_C::OnDeathShredder(class UHealthComponentBase* HealthComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.OnDeathShredder");
		
		AGrenade_Friendly_Shredders_C_OnDeathShredder_Params params {};
		params.HealthComponent = HealthComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.KillOtherGrenades
	 * 		Flags  -> ()
	 */
	void AGrenade_Friendly_Shredders_C::KillOtherGrenades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.KillOtherGrenades");
		
		AGrenade_Friendly_Shredders_C_KillOtherGrenades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.ExecuteUbergraph_Grenade_Friendly_Shredders
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGrenade_Friendly_Shredders_C::ExecuteUbergraph_Grenade_Friendly_Shredders(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C.ExecuteUbergraph_Grenade_Friendly_Shredders");
		
		AGrenade_Friendly_Shredders_C_ExecuteUbergraph_Grenade_Friendly_Shredders_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGrenade_Friendly_Shredders_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGrenade_Friendly_Shredders_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Grenade_Friendly_Shredders.Grenade_Friendly_Shredders_C");
		return ptr;
	}

}


