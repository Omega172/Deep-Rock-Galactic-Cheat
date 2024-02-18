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
	 * 		Name   -> Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.OverrideMaterialByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         InMesh                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UMaterialInterface*>                  InDefaultMaterials                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInterface*                          InMaterial                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FuelLine_Segment_C::OverrideMaterialByIndex(class UPrimitiveComponent** InMesh, TArray<class UMaterialInterface*>* InDefaultMaterials, int32_t InIndex, class UMaterialInterface* InMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.OverrideMaterialByIndex");
		
		ABP_FuelLine_Segment_C_OverrideMaterialByIndex_Params params {};
		params.InIndex = InIndex;
		params.InMaterial = InMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InMesh != nullptr)
			*InMesh = params.InMesh;
		if (InDefaultMaterials != nullptr)
			*InDefaultMaterials = params.InDefaultMaterials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.OverrideMaterialByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMeshComponent*                              InMesh                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UMaterialInterface*>                  InDefaultMaterials                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        InMaterialSlotName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInterface*                          InMaterial                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FuelLine_Segment_C::OverrideMaterialByName(class UMeshComponent* InMesh, TArray<class UMaterialInterface*>* InDefaultMaterials, const class FName& InMaterialSlotName, class UMaterialInterface* InMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.OverrideMaterialByName");
		
		ABP_FuelLine_Segment_C_OverrideMaterialByName_Params params {};
		params.InMesh = InMesh;
		params.InMaterialSlotName = InMaterialSlotName;
		params.InMaterial = InMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InDefaultMaterials != nullptr)
			*InDefaultMaterials = params.InDefaultMaterials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.UpdateVisualState
	 * 		Flags  -> ()
	 */
	void ABP_FuelLine_Segment_C::UpdateVisualState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.UpdateVisualState");
		
		ABP_FuelLine_Segment_C_UpdateVisualState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.ReceiveCanPlaceAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  InCandidateTransform                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class UTrackBuilderConnectPoint*                   InConnectPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_FuelLine_Segment_C::ReceiveCanPlaceAt(const struct FTransform& InCandidateTransform, class UTrackBuilderConnectPoint* InConnectPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.ReceiveCanPlaceAt");
		
		ABP_FuelLine_Segment_C_ReceiveCanPlaceAt_Params params {};
		params.InCandidateTransform = InCandidateTransform;
		params.InConnectPoint = InConnectPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_FuelLine_Segment_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.UserConstructionScript");
		
		ABP_FuelLine_Segment_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.ReceivePlacementStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETrackBuildPlacementState                          NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FuelLine_Segment_C::ReceivePlacementStateChanged(ETrackBuildPlacementState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.ReceivePlacementStateChanged");
		
		ABP_FuelLine_Segment_C_ReceivePlacementStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.BndEvt__NextSegmentUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanUse                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FuelLine_Segment_C::BndEvt__NextSegmentUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.BndEvt__NextSegmentUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature");
		
		ABP_FuelLine_Segment_C_BndEvt__NextSegmentUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature_Params params {};
		params.CanUse = CanUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_FuelLine_Segment_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.ReceiveBeginPlay");
		
		ABP_FuelLine_Segment_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.ReceivPlacementValidChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsValid                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FuelLine_Segment_C::ReceivPlacementValidChanged(bool InIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.ReceivPlacementValidChanged");
		
		ABP_FuelLine_Segment_C_ReceivPlacementValidChanged_Params params {};
		params.InIsValid = InIsValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Health                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FuelLine_Segment_C::BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature(float Health)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature");
		
		ABP_FuelLine_Segment_C_BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature_Params params {};
		params.Health = Health;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHealthComponentBase*                        HealthComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FuelLine_Segment_C::BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature");
		
		ABP_FuelLine_Segment_C_BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature_Params params {};
		params.HealthComponent = HealthComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.ExecuteUbergraph_BP_FuelLine_Segment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FuelLine_Segment_C::ExecuteUbergraph_BP_FuelLine_Segment(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.ExecuteUbergraph_BP_FuelLine_Segment");
		
		ABP_FuelLine_Segment_C_ExecuteUbergraph_BP_FuelLine_Segment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FuelLine_Segment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FuelLine_Segment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FuelLine_Segment.BP_FuelLine_Segment_C");
		return ptr;
	}

}


