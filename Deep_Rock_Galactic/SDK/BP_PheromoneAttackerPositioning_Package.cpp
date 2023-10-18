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
	 * 		Name   -> Function BP_PheromoneAttackerPositioning.BP_PheromoneAttackerPositioning_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBP_PheromoneAttackerPositioning_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PheromoneAttackerPositioning.BP_PheromoneAttackerPositioning_C.ReceiveBeginPlay");
		
		UBP_PheromoneAttackerPositioning_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PheromoneAttackerPositioning.BP_PheromoneAttackerPositioning_C.OnHit_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageData                                 DamageData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               anyHealthLost                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PheromoneAttackerPositioning_C::OnHit_Event_1(float Damage, const struct FDamageData& DamageData, bool anyHealthLost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PheromoneAttackerPositioning.BP_PheromoneAttackerPositioning_C.OnHit_Event_1");
		
		UBP_PheromoneAttackerPositioning_C_OnHit_Event_1_Params params {};
		params.Damage = Damage;
		params.DamageData = DamageData;
		params.anyHealthLost = anyHealthLost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PheromoneAttackerPositioning.BP_PheromoneAttackerPositioning_C.ExecuteUbergraph_BP_PheromoneAttackerPositioning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PheromoneAttackerPositioning_C::ExecuteUbergraph_BP_PheromoneAttackerPositioning(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PheromoneAttackerPositioning.BP_PheromoneAttackerPositioning_C.ExecuteUbergraph_BP_PheromoneAttackerPositioning");
		
		UBP_PheromoneAttackerPositioning_C_ExecuteUbergraph_BP_PheromoneAttackerPositioning_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PheromoneAttackerPositioning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PheromoneAttackerPositioning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PheromoneAttackerPositioning.BP_PheromoneAttackerPositioning_C");
		return ptr;
	}

}


