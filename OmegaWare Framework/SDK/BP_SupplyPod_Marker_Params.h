#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
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
	 * Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.SetMaterials
	 */
	struct ABP_SupplyPod_Marker_C_SetMaterials_Params
	{
	public:
		class UMaterial*                                           ParentMaterial;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMeshComponent*                                      Mesh;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstanceDynamic*                            DynamicMaterial;                                         // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.UserConstructionScript
	 */
	struct ABP_SupplyPod_Marker_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.ReceiveBeginPlay
	 */
	struct ABP_SupplyPod_Marker_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.OnMarkerValidChanged
	 */
	struct ABP_SupplyPod_Marker_C_OnMarkerValidChanged_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.OnMarkerVisibilityChanged
	 */
	struct ABP_SupplyPod_Marker_C_OnMarkerVisibilityChanged_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.ExecuteUbergraph_BP_SupplyPod_Marker
	 */
	struct ABP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
