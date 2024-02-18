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
	 * Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.TriggerCountdown
	 */
	struct ABP_Widget_DropPod_AltitudeMeter_C_TriggerCountdown_Params
	{	};

	/**
	 * Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.ReceiveTick
	 */
	struct ABP_Widget_DropPod_AltitudeMeter_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.ReceiveBeginPlay
	 */
	struct ABP_Widget_DropPod_AltitudeMeter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.OnMissionChanged
	 */
	struct ABP_Widget_DropPod_AltitudeMeter_C_OnMissionChanged_Params
	{
	public:
		class UGeneratedMission*                                   OutGeneratedMission;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.ExecuteUbergraph_BP_Widget_DropPod_AltitudeMeter
	 */
	struct ABP_Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_BP_Widget_DropPod_AltitudeMeter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0WLB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
