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
	 * 		Name   -> Function ENE_Shredder_Base.ENE_Shredder_Base_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHealthComponentBase*                        HealthComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AENE_Shredder_Base_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ENE_Shredder_Base.ENE_Shredder_Base_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature");
		
		AENE_Shredder_Base_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature_Params params {};
		params.HealthComponent = HealthComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ENE_Shredder_Base.ENE_Shredder_Base_C.OnFrozen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AENE_Shredder_Base_C::OnFrozen(class AActor* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ENE_Shredder_Base.ENE_Shredder_Base_C.OnFrozen");
		
		AENE_Shredder_Base_C_OnFrozen_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ENE_Shredder_Base.ENE_Shredder_Base_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AENE_Shredder_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ENE_Shredder_Base.ENE_Shredder_Base_C.ReceiveBeginPlay");
		
		AENE_Shredder_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ENE_Shredder_Base.ENE_Shredder_Base_C.ExecuteUbergraph_ENE_Shredder_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AENE_Shredder_Base_C::ExecuteUbergraph_ENE_Shredder_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ENE_Shredder_Base.ENE_Shredder_Base_C.ExecuteUbergraph_ENE_Shredder_Base");
		
		AENE_Shredder_Base_C_ExecuteUbergraph_ENE_Shredder_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AENE_Shredder_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AENE_Shredder_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ENE_Shredder_Base.ENE_Shredder_Base_C");
		return ptr;
	}

}


