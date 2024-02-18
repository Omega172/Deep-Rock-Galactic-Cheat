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
	 * Function Widget_DropPod_BiomeRadar.Widget_DropPod_BiomeRadar_C.SetGeneratedMission
	 */
	struct UWidget_DropPod_BiomeRadar_C_SetGeneratedMission_Params
	{
	public:
		class UGeneratedMission*                                   InMission;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DropPod_BiomeRadar.Widget_DropPod_BiomeRadar_C.Construct
	 */
	struct UWidget_DropPod_BiomeRadar_C_Construct_Params
	{	};

	/**
	 * Function Widget_DropPod_BiomeRadar.Widget_DropPod_BiomeRadar_C.OnGeneratedMissionChanged
	 */
	struct UWidget_DropPod_BiomeRadar_C_OnGeneratedMissionChanged_Params
	{
	public:
		class UGeneratedMission*                                   OutGeneratedMission;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DropPod_BiomeRadar.Widget_DropPod_BiomeRadar_C.ExecuteUbergraph_Widget_DropPod_BiomeRadar
	 */
	struct UWidget_DropPod_BiomeRadar_C_ExecuteUbergraph_Widget_DropPod_BiomeRadar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QRHE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
