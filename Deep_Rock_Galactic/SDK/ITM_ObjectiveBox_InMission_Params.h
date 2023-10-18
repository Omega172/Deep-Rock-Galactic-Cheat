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
	 * Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.UpdateText
	 */
	struct UITM_ObjectiveBox_InMission_C_UpdateText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                InCounterText;                                           // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture2D*                                          InCounterIcon;                                           // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Completed;                                               // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.Set Objective
	 */
	struct UITM_ObjectiveBox_InMission_C_SetObjective_Params
	{
	public:
		class UObjective*                                          Objective;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsPrimary;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.OnObjectiveUpdated
	 */
	struct UITM_ObjectiveBox_InMission_C_OnObjectiveUpdated_Params
	{
	public:
		class UObjective*                                          Objective;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.SetCustom
	 */
	struct UITM_ObjectiveBox_InMission_C_SetCustom_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Completed;                                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.ExecuteUbergraph_ITM_ObjectiveBox_InMission
	 */
	struct UITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
