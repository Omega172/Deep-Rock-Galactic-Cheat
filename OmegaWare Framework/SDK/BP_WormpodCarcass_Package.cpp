/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
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
	 * 		Name   -> Function BP_WormpodCarcass.BP_WormpodCarcass_C.BndEvt__BP_WormpodCarcas_DropToTerrain_K2Node_ComponentBoundEvent_0_OnIsFallingToTerrainChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFalling                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_WormpodCarcass_C::BndEvt__BP_WormpodCarcas_DropToTerrain_K2Node_ComponentBoundEvent_0_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormpodCarcass.BP_WormpodCarcass_C.BndEvt__BP_WormpodCarcas_DropToTerrain_K2Node_ComponentBoundEvent_0_OnIsFallingToTerrainChanged__DelegateSignature");
		
		ABP_WormpodCarcass_C_BndEvt__BP_WormpodCarcas_DropToTerrain_K2Node_ComponentBoundEvent_0_OnIsFallingToTerrainChanged__DelegateSignature_Params params {};
		params.IsFalling = IsFalling;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormpodCarcass.BP_WormpodCarcass_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_WormpodCarcass_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormpodCarcass.BP_WormpodCarcass_C.ReceiveBeginPlay");
		
		ABP_WormpodCarcass_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WormpodCarcass.BP_WormpodCarcass_C.ExecuteUbergraph_BP_WormpodCarcass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WormpodCarcass_C::ExecuteUbergraph_BP_WormpodCarcass(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WormpodCarcass.BP_WormpodCarcass_C.ExecuteUbergraph_BP_WormpodCarcass");
		
		ABP_WormpodCarcass_C_ExecuteUbergraph_BP_WormpodCarcass_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_WormpodCarcass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WormpodCarcass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WormpodCarcass.BP_WormpodCarcass_C");
		return ptr;
	}

}


