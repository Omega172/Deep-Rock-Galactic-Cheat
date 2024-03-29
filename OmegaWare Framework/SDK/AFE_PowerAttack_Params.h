﻿#pragma once

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
	 * Function AFE_PowerAttack.AFE_PowerAttack_C.ReceiveBeginEffect
	 */
	struct UAFE_PowerAttack_C_ReceiveBeginEffect_Params
	{
	public:
		class UPawnAfflictionComponent*                            Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AFE_PowerAttack.AFE_PowerAttack_C.ReceiveEndEffect
	 */
	struct UAFE_PowerAttack_C_ReceiveEndEffect_Params
	{
	public:
		class UPawnAfflictionComponent*                            Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AFE_PowerAttack.AFE_PowerAttack_C.ExecuteUbergraph_AFE_PowerAttack
	 */
	struct UAFE_PowerAttack_C_ExecuteUbergraph_AFE_PowerAttack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FVCD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
