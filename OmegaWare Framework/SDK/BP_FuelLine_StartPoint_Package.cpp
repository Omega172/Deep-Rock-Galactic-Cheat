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
	 * 		Name   -> Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.SetMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InSlotName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInterface*                          InMaterial                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FuelLine_StartPoint_C::SetMaterial(const class FName& InSlotName, class UMaterialInterface* InMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.SetMaterial");
		
		ABP_FuelLine_StartPoint_C_SetMaterial_Params params {};
		params.InSlotName = InSlotName;
		params.InMaterial = InMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.UpdateState
	 * 		Flags  -> ()
	 */
	void ABP_FuelLine_StartPoint_C::UpdateState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.UpdateState");
		
		ABP_FuelLine_StartPoint_C_UpdateState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_FuelLine_StartPoint_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.UserConstructionScript");
		
		ABP_FuelLine_StartPoint_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanUse                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FuelLine_StartPoint_C::BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature");
		
		ABP_FuelLine_StartPoint_C_BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature_Params params {};
		params.CanUse = CanUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_FuelLine_StartPoint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.ReceiveBeginPlay");
		
		ABP_FuelLine_StartPoint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.FuelPodLanded
	 * 		Flags  -> ()
	 */
	void ABP_FuelLine_StartPoint_C::FuelPodLanded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.FuelPodLanded");
		
		ABP_FuelLine_StartPoint_C_FuelPodLanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_1_SegmentDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTrackBuilderUsable*                         InUsable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATrackBuilderSegment*                        InSegment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FuelLine_StartPoint_C::BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_1_SegmentDelegate__DelegateSignature(class UTrackBuilderUsable* InUsable, class ATrackBuilderSegment* InSegment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_1_SegmentDelegate__DelegateSignature");
		
		ABP_FuelLine_StartPoint_C_BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_1_SegmentDelegate__DelegateSignature_Params params {};
		params.InUsable = InUsable;
		params.InSegment = InSegment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.ExecuteUbergraph_BP_FuelLine_StartPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FuelLine_StartPoint_C::ExecuteUbergraph_BP_FuelLine_StartPoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.ExecuteUbergraph_BP_FuelLine_StartPoint");
		
		ABP_FuelLine_StartPoint_C_ExecuteUbergraph_BP_FuelLine_StartPoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FuelLine_StartPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FuelLine_StartPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C");
		return ptr;
	}

}


