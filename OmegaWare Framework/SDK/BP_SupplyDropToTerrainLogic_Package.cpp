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
	 * 		Name   -> Function BP_SupplyDropToTerrainLogic.BP_SupplyDropToTerrainLogic_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBP_SupplyDropToTerrainLogic_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyDropToTerrainLogic.BP_SupplyDropToTerrainLogic_C.ReceiveBeginPlay");
		
		UBP_SupplyDropToTerrainLogic_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyDropToTerrainLogic.BP_SupplyDropToTerrainLogic_C.FallStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFalling                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SupplyDropToTerrainLogic_C::FallStateChanged(bool IsFalling)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyDropToTerrainLogic.BP_SupplyDropToTerrainLogic_C.FallStateChanged");
		
		UBP_SupplyDropToTerrainLogic_C_FallStateChanged_Params params {};
		params.IsFalling = IsFalling;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyDropToTerrainLogic.BP_SupplyDropToTerrainLogic_C.OnComponentActivated_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActorComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bReset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SupplyDropToTerrainLogic_C::OnComponentActivated_Event_1(class UActorComponent* Component, bool bReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyDropToTerrainLogic.BP_SupplyDropToTerrainLogic_C.OnComponentActivated_Event_1");
		
		UBP_SupplyDropToTerrainLogic_C_OnComponentActivated_Event_1_Params params {};
		params.Component = Component;
		params.bReset = bReset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyDropToTerrainLogic.BP_SupplyDropToTerrainLogic_C.ExecuteUbergraph_BP_SupplyDropToTerrainLogic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SupplyDropToTerrainLogic_C::ExecuteUbergraph_BP_SupplyDropToTerrainLogic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyDropToTerrainLogic.BP_SupplyDropToTerrainLogic_C.ExecuteUbergraph_BP_SupplyDropToTerrainLogic");
		
		UBP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SupplyDropToTerrainLogic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SupplyDropToTerrainLogic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SupplyDropToTerrainLogic.BP_SupplyDropToTerrainLogic_C");
		return ptr;
	}

}


