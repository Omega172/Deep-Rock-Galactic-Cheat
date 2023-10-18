#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.OverrideMaterialByIndex
	 */
	struct ABP_FuelLine_Segment_C_OverrideMaterialByIndex_Params
	{
	public:
		class UPrimitiveComponent*                                 InMesh;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UMaterialInterface*>                          InDefaultMaterials;                                      // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    InIndex;                                                 // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6T0Q[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInterface*                                  InMaterial;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.OverrideMaterialByName
	 */
	struct ABP_FuelLine_Segment_C_OverrideMaterialByName_Params
	{
	public:
		class UMeshComponent*                                      InMesh;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UMaterialInterface*>                          InDefaultMaterials;                                      // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FName                                                InMaterialSlotName;                                      // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInterface*                                  InMaterial;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.UpdateVisualState
	 */
	struct ABP_FuelLine_Segment_C_UpdateVisualState_Params
	{	};

	/**
	 * Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.ReceiveCanPlaceAt
	 */
	struct ABP_FuelLine_Segment_C_ReceiveCanPlaceAt_Params
	{
	public:
		struct FTransform                                          InCandidateTransform;                                    // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		class UTrackBuilderConnectPoint*                           InConnectPoint;                                          // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6SSJ[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.UserConstructionScript
	 */
	struct ABP_FuelLine_Segment_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.ReceivePlacementStateChanged
	 */
	struct ABP_FuelLine_Segment_C_ReceivePlacementStateChanged_Params
	{
	public:
		ETrackBuildPlacementState                                  NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.BndEvt__NextSegmentUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
	 */
	struct ABP_FuelLine_Segment_C_BndEvt__NextSegmentUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature_Params
	{
	public:
		bool                                                       CanUse;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.ReceiveBeginPlay
	 */
	struct ABP_FuelLine_Segment_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.ReceivPlacementValidChanged
	 */
	struct ABP_FuelLine_Segment_C_ReceivPlacementValidChanged_Params
	{
	public:
		bool                                                       InIsValid;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature
	 */
	struct ABP_FuelLine_Segment_C_BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature
	 */
	struct ABP_FuelLine_Segment_C_BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature_Params
	{
	public:
		class UHealthComponentBase*                                HealthComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.ExecuteUbergraph_BP_FuelLine_Segment
	 */
	struct ABP_FuelLine_Segment_C_ExecuteUbergraph_BP_FuelLine_Segment_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
