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
	 * Function BP_GooCannon_GooPuddle_ImprovedSlow.BP_GooCannon_GooPuddle_ImprovedSlow_C.ReceiveBeginPlay
	 */
	struct ABP_GooCannon_GooPuddle_ImprovedSlow_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_GooCannon_GooPuddle_ImprovedSlow.BP_GooCannon_GooPuddle_ImprovedSlow_C.ReceiveActorBeginOverlap
	 */
	struct ABP_GooCannon_GooPuddle_ImprovedSlow_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GooCannon_GooPuddle_ImprovedSlow.BP_GooCannon_GooPuddle_ImprovedSlow_C.ReceiveTick
	 */
	struct ABP_GooCannon_GooPuddle_ImprovedSlow_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GooCannon_GooPuddle_ImprovedSlow.BP_GooCannon_GooPuddle_ImprovedSlow_C.ExecuteUbergraph_BP_GooCannon_GooPuddle_ImprovedSlow
	 */
	struct ABP_GooCannon_GooPuddle_ImprovedSlow_C_ExecuteUbergraph_BP_GooCannon_GooPuddle_ImprovedSlow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1WK6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
