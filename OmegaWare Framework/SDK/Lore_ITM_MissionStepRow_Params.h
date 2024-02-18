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
	 * Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.AddStep
	 */
	struct ULore_ITM_MissionStepRow_C_AddStep_Params
	{
	public:
		struct FMissionStepDescription                             step;                                                    // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    StepNumber;                                              // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StepsInRow;                                              // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ULore_ITM_MissionStep_C*                             StepWidget;                                              // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.ClearRow
	 */
	struct ULore_ITM_MissionStepRow_C_ClearRow_Params
	{	};

	/**
	 * Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.PreConstruct
	 */
	struct ULore_ITM_MissionStepRow_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.ExecuteUbergraph_Lore_ITM_MissionStepRow
	 */
	struct ULore_ITM_MissionStepRow_C_ExecuteUbergraph_Lore_ITM_MissionStepRow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.OnStepUnhovered__DelegateSignature
	 */
	struct ULore_ITM_MissionStepRow_C_OnStepUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function Lore_ITM_MissionStepRow.Lore_ITM_MissionStepRow_C.OnStepHovered__DelegateSignature
	 */
	struct ULore_ITM_MissionStepRow_C_OnStepHovered__DelegateSignature_Params
	{
	public:
		struct FMissionStepDescription                             step;                                                    // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
