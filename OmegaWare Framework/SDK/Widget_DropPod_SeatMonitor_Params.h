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
	 * Function Widget_DropPod_SeatMonitor.Widget_DropPod_SeatMonitor_C.Construct
	 */
	struct UWidget_DropPod_SeatMonitor_C_Construct_Params
	{	};

	/**
	 * Function Widget_DropPod_SeatMonitor.Widget_DropPod_SeatMonitor_C.OnGeneratedMissionChanged
	 */
	struct UWidget_DropPod_SeatMonitor_C_OnGeneratedMissionChanged_Params
	{
	public:
		class UGeneratedMission*                                   OutGeneratedMission;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DropPod_SeatMonitor.Widget_DropPod_SeatMonitor_C.ExecuteUbergraph_Widget_DropPod_SeatMonitor
	 */
	struct UWidget_DropPod_SeatMonitor_C_ExecuteUbergraph_Widget_DropPod_SeatMonitor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5IKY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
