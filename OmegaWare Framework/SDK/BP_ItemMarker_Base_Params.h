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
	 * Function BP_ItemMarker_Base.BP_ItemMarker_Base_C.SetMaterials
	 */
	struct ABP_ItemMarker_Base_C_SetMaterials_Params
	{
	public:
		class UMeshComponent*                                      Mesh;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInterface*                                  ParentMaterial;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstanceDynamic*                            DynamicMaterial;                                         // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ItemMarker_Base.BP_ItemMarker_Base_C.UserConstructionScript
	 */
	struct ABP_ItemMarker_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ItemMarker_Base.BP_ItemMarker_Base_C.OnMarkerValidChanged
	 */
	struct ABP_ItemMarker_Base_C_OnMarkerValidChanged_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ItemMarker_Base.BP_ItemMarker_Base_C.ExecuteUbergraph_BP_ItemMarker_Base
	 */
	struct ABP_ItemMarker_Base_C_ExecuteUbergraph_BP_ItemMarker_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
