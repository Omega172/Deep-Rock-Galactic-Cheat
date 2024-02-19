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
	 * Function BTTask_SetEnemyOffsetPositionForTrackingMovement.BTTask_SetEnemyOffsetPositionForTrackingMovement_C.ReceiveExecuteAI
	 */
	struct UBTTask_SetEnemyOffsetPositionForTrackingMovement_C_ReceiveExecuteAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTTask_SetEnemyOffsetPositionForTrackingMovement.BTTask_SetEnemyOffsetPositionForTrackingMovement_C.ExecuteUbergraph_BTTask_SetEnemyOffsetPositionForTrackingMovement
	 */
	struct UBTTask_SetEnemyOffsetPositionForTrackingMovement_C_ExecuteUbergraph_BTTask_SetEnemyOffsetPositionForTrackingMovement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
