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
	 * 		Name   -> Function BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C.ExplodePuddle
	 * 		Flags  -> ()
	 */
	void ABP_GooCannon_GooPuddle_C::ExplodePuddle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C.ExplodePuddle");
		
		ABP_GooCannon_GooPuddle_C_ExplodePuddle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C.OnRep_SuckToActor
	 * 		Flags  -> ()
	 */
	void ABP_GooCannon_GooPuddle_C::OnRep_SuckToActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C.OnRep_SuckToActor");
		
		ABP_GooCannon_GooPuddle_C_OnRep_SuckToActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_GooCannon_GooPuddle_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C.Timeline_0__FinishedFunc");
		
		ABP_GooCannon_GooPuddle_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_GooCannon_GooPuddle_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C.Timeline_0__UpdateFunc");
		
		ABP_GooCannon_GooPuddle_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_GooCannon_GooPuddle_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C.ReceiveBeginPlay");
		
		ABP_GooCannon_GooPuddle_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C.OnSuckToActor
	 * 		Flags  -> ()
	 */
	void ABP_GooCannon_GooPuddle_C::OnSuckToActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C.OnSuckToActor");
		
		ABP_GooCannon_GooPuddle_C_OnSuckToActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GooCannon_GooPuddle_C::BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature");
		
		ABP_GooCannon_GooPuddle_C_BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature_Params params {};
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C.RemovePuddle
	 * 		Flags  -> ()
	 */
	void ABP_GooCannon_GooPuddle_C::RemovePuddle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C.RemovePuddle");
		
		ABP_GooCannon_GooPuddle_C_RemovePuddle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C.BndEvt__ObjectTemperature_K2Node_ComponentBoundEvent_1_OnStartBurning__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_GooCannon_GooPuddle_C::BndEvt__ObjectTemperature_K2Node_ComponentBoundEvent_1_OnStartBurning__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C.BndEvt__ObjectTemperature_K2Node_ComponentBoundEvent_1_OnStartBurning__DelegateSignature");
		
		ABP_GooCannon_GooPuddle_C_BndEvt__ObjectTemperature_K2Node_ComponentBoundEvent_1_OnStartBurning__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C.OnGooIgnited
	 * 		Flags  -> ()
	 */
	void ABP_GooCannon_GooPuddle_C::OnGooIgnited()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C.OnGooIgnited");
		
		ABP_GooCannon_GooPuddle_C_OnGooIgnited_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C.ExecuteUbergraph_BP_GooCannon_GooPuddle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GooCannon_GooPuddle_C::ExecuteUbergraph_BP_GooCannon_GooPuddle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C.ExecuteUbergraph_BP_GooCannon_GooPuddle");
		
		ABP_GooCannon_GooPuddle_C_ExecuteUbergraph_BP_GooCannon_GooPuddle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GooCannon_GooPuddle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GooCannon_GooPuddle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C");
		return ptr;
	}

}


