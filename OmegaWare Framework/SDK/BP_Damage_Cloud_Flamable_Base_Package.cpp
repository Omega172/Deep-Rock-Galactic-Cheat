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
	 * 		Name   -> Function BP_Damage_Cloud_Flamable_Base.BP_Damage_Cloud_Flamable_Base_C.BndEvt__ObjectTemperature_K2Node_ComponentBoundEvent_0_OnStartBurning__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_Damage_Cloud_Flamable_Base_C::BndEvt__ObjectTemperature_K2Node_ComponentBoundEvent_0_OnStartBurning__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Damage_Cloud_Flamable_Base.BP_Damage_Cloud_Flamable_Base_C.BndEvt__ObjectTemperature_K2Node_ComponentBoundEvent_0_OnStartBurning__DelegateSignature");
		
		ABP_Damage_Cloud_Flamable_Base_C_BndEvt__ObjectTemperature_K2Node_ComponentBoundEvent_0_OnStartBurning__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Damage_Cloud_Flamable_Base.BP_Damage_Cloud_Flamable_Base_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHealthComponentBase*                        HealthComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Damage_Cloud_Flamable_Base_C::BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Damage_Cloud_Flamable_Base.BP_Damage_Cloud_Flamable_Base_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature");
		
		ABP_Damage_Cloud_Flamable_Base_C_BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature_Params params {};
		params.HealthComponent = HealthComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Damage_Cloud_Flamable_Base.BP_Damage_Cloud_Flamable_Base_C.ExecuteUbergraph_BP_Damage_Cloud_Flamable_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Damage_Cloud_Flamable_Base_C::ExecuteUbergraph_BP_Damage_Cloud_Flamable_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Damage_Cloud_Flamable_Base.BP_Damage_Cloud_Flamable_Base_C.ExecuteUbergraph_BP_Damage_Cloud_Flamable_Base");
		
		ABP_Damage_Cloud_Flamable_Base_C_ExecuteUbergraph_BP_Damage_Cloud_Flamable_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Damage_Cloud_Flamable_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Damage_Cloud_Flamable_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Damage_Cloud_Flamable_Base.BP_Damage_Cloud_Flamable_Base_C");
		return ptr;
	}

}


