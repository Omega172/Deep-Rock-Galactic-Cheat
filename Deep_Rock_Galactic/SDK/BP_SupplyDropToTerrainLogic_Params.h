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
	 * Function BP_SupplyDropToTerrainLogic.BP_SupplyDropToTerrainLogic_C.ReceiveBeginPlay
	 */
	struct UBP_SupplyDropToTerrainLogic_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SupplyDropToTerrainLogic.BP_SupplyDropToTerrainLogic_C.FallStateChanged
	 */
	struct UBP_SupplyDropToTerrainLogic_C_FallStateChanged_Params
	{
	public:
		bool                                                       IsFalling;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SupplyDropToTerrainLogic.BP_SupplyDropToTerrainLogic_C.OnComponentActivated_Event_1
	 */
	struct UBP_SupplyDropToTerrainLogic_C_OnComponentActivated_Event_1_Params
	{
	public:
		class UActorComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bReset;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SupplyDropToTerrainLogic.BP_SupplyDropToTerrainLogic_C.ExecuteUbergraph_BP_SupplyDropToTerrainLogic
	 */
	struct UBP_SupplyDropToTerrainLogic_C_ExecuteUbergraph_BP_SupplyDropToTerrainLogic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
