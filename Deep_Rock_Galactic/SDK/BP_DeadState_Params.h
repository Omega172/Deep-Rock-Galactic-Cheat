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
	 * Function BP_DeadState.BP_DeadState_C.ReceiveBeginPlay
	 */
	struct UBP_DeadState_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DeadState.BP_DeadState_C.ReceiveStateExit
	 */
	struct UBP_DeadState_C_ReceiveStateExit_Params
	{	};

	/**
	 * Function BP_DeadState.BP_DeadState_C.ReceiveStateEnter
	 */
	struct UBP_DeadState_C_ReceiveStateEnter_Params
	{	};

	/**
	 * Function BP_DeadState.BP_DeadState_C.SetDeathParameters
	 */
	struct UBP_DeadState_C_SetDeathParameters_Params
	{
	public:
		float                                                      respawnDelay;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      effectDelay;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage*                                        deathMontage;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UParticleSystem*                                     deathEffect;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       useAnimationTimeAsRespawnTime;                           // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DeadState.BP_DeadState_C.ExecuteUbergraph_BP_DeadState
	 */
	struct UBP_DeadState_C_ExecuteUbergraph_BP_DeadState_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
