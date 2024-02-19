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
	 * Function Widget_DropPod_MissionType.Widget_DropPod_MissionType_C.SetMutators
	 */
	struct UWidget_DropPod_MissionType_C_SetMutators_Params
	{
	public:
		class UGeneratedMission*                                   mission;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DropPod_MissionType.Widget_DropPod_MissionType_C.SetGeneratedMission
	 */
	struct UWidget_DropPod_MissionType_C_SetGeneratedMission_Params
	{
	public:
		class UGeneratedMission*                                   InMission;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DropPod_MissionType.Widget_DropPod_MissionType_C.Construct
	 */
	struct UWidget_DropPod_MissionType_C_Construct_Params
	{	};

	/**
	 * Function Widget_DropPod_MissionType.Widget_DropPod_MissionType_C.OnGeneratedMissionChanged
	 */
	struct UWidget_DropPod_MissionType_C_OnGeneratedMissionChanged_Params
	{
	public:
		class UGeneratedMission*                                   OutGeneratedMission;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DropPod_MissionType.Widget_DropPod_MissionType_C.OnDifficultyChanged_Event_1
	 */
	struct UWidget_DropPod_MissionType_C_OnDifficultyChanged_Event_1_Params
	{
	public:
		class UDifficultySetting*                                  Setting;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DropPod_MissionType.Widget_DropPod_MissionType_C.ExecuteUbergraph_Widget_DropPod_MissionType
	 */
	struct UWidget_DropPod_MissionType_C_ExecuteUbergraph_Widget_DropPod_MissionType_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
