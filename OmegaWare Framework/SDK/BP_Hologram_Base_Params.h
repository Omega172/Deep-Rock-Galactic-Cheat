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
	 * Function BP_Hologram_Base.BP_Hologram_Base_C.SetHologramMaterials
	 */
	struct ABP_Hologram_Base_C_SetHologramMaterials_Params
	{
	public:
		TArray<class UMaterialInterface*>                          InMaterials;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Hologram_Base.BP_Hologram_Base_C.UserConstructionScript
	 */
	struct ABP_Hologram_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Hologram_Base.BP_Hologram_Base_C.ReceiveBeginPlay
	 */
	struct ABP_Hologram_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Hologram_Base.BP_Hologram_Base_C.ExecuteUbergraph_BP_Hologram_Base
	 */
	struct ABP_Hologram_Base_C_ExecuteUbergraph_BP_Hologram_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
