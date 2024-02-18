#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
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
	 * Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.SetStaticMesh
	 */
	struct ABP_PickaxeRandomizer_C_SetStaticMesh_Params
	{
	public:
		class UStaticMeshComponent*                                MeshComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GA9M[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.SelectRandomMesh
	 */
	struct ABP_PickaxeRandomizer_C_SelectRandomMesh_Params
	{
	public:
		unsigned char                                              UnknownData_U5DX[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.ReceiveBeginPlay
	 */
	struct ABP_PickaxeRandomizer_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.Loaded
	 */
	struct ABP_PickaxeRandomizer_C_Loaded_Params
	{	};

	/**
	 * Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.LoadedMaterial
	 */
	struct ABP_PickaxeRandomizer_C_LoadedMaterial_Params
	{	};

	/**
	 * Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.ExecuteUbergraph_BP_PickaxeRandomizer
	 */
	struct ABP_PickaxeRandomizer_C_ExecuteUbergraph_BP_PickaxeRandomizer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LSTQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
