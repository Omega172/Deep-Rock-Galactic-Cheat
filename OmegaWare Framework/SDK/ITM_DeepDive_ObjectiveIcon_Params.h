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
	 * Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.SetTemplateIcon
	 */
	struct UITM_DeepDive_ObjectiveIcon_C_SetTemplateIcon_Params
	{
	public:
		class UITM_MisSel_MissionIcon_C*                           Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMissionTemplate*                                    InMissionTemplate;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.SetObjectiveIcon
	 */
	struct UITM_DeepDive_ObjectiveIcon_C_SetObjectiveIcon_Params
	{
	public:
		class UUI_MaskedImage_C*                                   Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Objective;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.SetData
	 */
	struct UITM_DeepDive_ObjectiveIcon_C_SetData_Params
	{
	public:
		class UGeneratedMission*                                   InMission;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.PreConstruct
	 */
	struct UITM_DeepDive_ObjectiveIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.ExecuteUbergraph_ITM_DeepDive_ObjectiveIcon
	 */
	struct UITM_DeepDive_ObjectiveIcon_C_ExecuteUbergraph_ITM_DeepDive_ObjectiveIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
