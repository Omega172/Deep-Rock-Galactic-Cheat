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
	 * Function BP_Drop_CamShake.BP_Drop_CamShake_C.SetStandingDown
	 */
	struct ABP_Drop_CamShake_C_SetStandingDown_Params
	{
	public:
		bool                                                       IsStandingDown;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JTPN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Drop_CamShake.BP_Drop_CamShake_C.TriggerShakeSequence
	 */
	struct ABP_Drop_CamShake_C_TriggerShakeSequence_Params
	{	};

	/**
	 * Function BP_Drop_CamShake.BP_Drop_CamShake_C.ExecuteUbergraph_BP_Drop_CamShake
	 */
	struct ABP_Drop_CamShake_C_ExecuteUbergraph_BP_Drop_CamShake_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
