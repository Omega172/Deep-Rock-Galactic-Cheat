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
	 * Function BP_PheromoneAttackerPositioning.BP_PheromoneAttackerPositioning_C.ReceiveBeginPlay
	 */
	struct UBP_PheromoneAttackerPositioning_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PheromoneAttackerPositioning.BP_PheromoneAttackerPositioning_C.OnHit_Event_1
	 */
	struct UBP_PheromoneAttackerPositioning_C_OnHit_Event_1_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FH1J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageData                                         DamageData;                                              // 0x0008(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       anyHealthLost;                                           // 0x0058(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PheromoneAttackerPositioning.BP_PheromoneAttackerPositioning_C.ExecuteUbergraph_BP_PheromoneAttackerPositioning
	 */
	struct UBP_PheromoneAttackerPositioning_C_ExecuteUbergraph_BP_PheromoneAttackerPositioning_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
