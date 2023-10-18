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
	 * Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.SetMaterial
	 */
	struct ABP_FuelLine_StartPoint_C_SetMaterial_Params
	{
	public:
		class FName                                                InSlotName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInterface*                                  InMaterial;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.UpdateState
	 */
	struct ABP_FuelLine_StartPoint_C_UpdateState_Params
	{	};

	/**
	 * Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.UserConstructionScript
	 */
	struct ABP_FuelLine_StartPoint_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
	 */
	struct ABP_FuelLine_StartPoint_C_BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature_Params
	{
	public:
		bool                                                       CanUse;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.ReceiveBeginPlay
	 */
	struct ABP_FuelLine_StartPoint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.FuelPodLanded
	 */
	struct ABP_FuelLine_StartPoint_C_FuelPodLanded_Params
	{	};

	/**
	 * Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_1_SegmentDelegate__DelegateSignature
	 */
	struct ABP_FuelLine_StartPoint_C_BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_1_SegmentDelegate__DelegateSignature_Params
	{
	public:
		class UTrackBuilderUsable*                                 InUsable;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ATrackBuilderSegment*                                InSegment;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.ExecuteUbergraph_BP_FuelLine_StartPoint
	 */
	struct ABP_FuelLine_StartPoint_C_ExecuteUbergraph_BP_FuelLine_StartPoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
