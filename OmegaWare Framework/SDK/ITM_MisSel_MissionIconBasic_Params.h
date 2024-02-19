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
	 * Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetTemplate
	 */
	struct UITM_MisSel_MissionIconBasic_C_SetTemplate_Params
	{
	public:
		class UMissionTemplate*                                    Template;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UseSimpleIcon;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetSelected
	 */
	struct UITM_MisSel_MissionIconBasic_C_SetSelected_Params
	{
	public:
		bool                                                       InSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetMission
	 */
	struct UITM_MisSel_MissionIconBasic_C_SetMission_Params
	{
	public:
		class UGeneratedMission*                                   InMission;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.PreConstruct
	 */
	struct UITM_MisSel_MissionIconBasic_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetData
	 */
	struct UITM_MisSel_MissionIconBasic_C_SetData_Params
	{
	public:
		struct FObjectiveMissionIcon                               MissionIcon;                                             // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.ExecuteUbergraph_ITM_MisSel_MissionIconBasic
	 */
	struct UITM_MisSel_MissionIconBasic_C_ExecuteUbergraph_ITM_MisSel_MissionIconBasic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
