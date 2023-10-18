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
	 * Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.BndEvt__Button_Image_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULore_ITM_MissionStep_C_BndEvt__Button_Image_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.BndEvt__Button_Image_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULore_ITM_MissionStep_C_BndEvt__Button_Image_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.SetData
	 */
	struct ULore_ITM_MissionStep_C_SetData_Params
	{
	public:
		struct FMissionStepDescription                             step;                                                    // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    StepNumber;                                              // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StepsInRow;                                              // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.PreConstruct
	 */
	struct ULore_ITM_MissionStep_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.ExecuteUbergraph_Lore_ITM_MissionStep
	 */
	struct ULore_ITM_MissionStep_C_ExecuteUbergraph_Lore_ITM_MissionStep_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZCJ2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.OnUnhovered__DelegateSignature
	 */
	struct ULore_ITM_MissionStep_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.OnHovered__DelegateSignature
	 */
	struct ULore_ITM_MissionStep_C_OnHovered__DelegateSignature_Params
	{
	public:
		struct FMissionStepDescription                             step;                                                    // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    StepIndex;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StepsInRow;                                              // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
