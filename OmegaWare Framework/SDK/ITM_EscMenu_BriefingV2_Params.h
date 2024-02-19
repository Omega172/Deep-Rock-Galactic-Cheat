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
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.SequenceEvent__ENTRYPOINTITM_EscMenu_BriefingV2_1
	 */
	struct UITM_EscMenu_BriefingV2_C_SequenceEvent__ENTRYPOINTITM_EscMenu_BriefingV2_1_Params
	{	};

	/**
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateFromAnimation
	 */
	struct UITM_EscMenu_BriefingV2_C_UpdateFromAnimation_Params
	{	};

	/**
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateBiomeInfo
	 */
	struct UITM_EscMenu_BriefingV2_C_UpdateBiomeInfo_Params
	{
	public:
		class UBiome*                                              Biome;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Get Tool Tip Widget
	 */
	struct UITM_EscMenu_BriefingV2_C_GetToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateMissionStructure
	 */
	struct UITM_EscMenu_BriefingV2_C_UpdateMissionStructure_Params
	{
	public:
		bool                                                       IsDeepDive;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateMissionInfo
	 */
	struct UITM_EscMenu_BriefingV2_C_UpdateMissionInfo_Params
	{
	public:
		class UGeneratedMission*                                   mission;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.PreConstruct
	 */
	struct UITM_EscMenu_BriefingV2_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Update
	 */
	struct UITM_EscMenu_BriefingV2_C_Update_Params
	{	};

	/**
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateMissionTime
	 */
	struct UITM_EscMenu_BriefingV2_C_UpdateMissionTime_Params
	{	};

	/**
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Close
	 */
	struct UITM_EscMenu_BriefingV2_C_Close_Params
	{	};

	/**
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_EscMenu_BriefingV2_C_BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_Biome_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_EscMenu_BriefingV2_C_BndEvt__Button_Biome_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_EscMenu_BriefingV2_C_BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_EscMenu_BriefingV2_C_BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_Spacerig_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_EscMenu_BriefingV2_C_BndEvt__Button_Spacerig_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Construct
	 */
	struct UITM_EscMenu_BriefingV2_C_Construct_Params
	{	};

	/**
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.OnGeneratedMissionChanged
	 */
	struct UITM_EscMenu_BriefingV2_C_OnGeneratedMissionChanged_Params
	{
	public:
		class UGeneratedMission*                                   OutGeneratedMission;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.MutatorClicked_Event
	 */
	struct UITM_EscMenu_BriefingV2_C_MutatorClicked_Event_Params
	{	};

	/**
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.WarningClicked_Event
	 */
	struct UITM_EscMenu_BriefingV2_C_WarningClicked_Event_Params
	{	};

	/**
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.ExecuteUbergraph_ITM_EscMenu_BriefingV2
	 */
	struct UITM_EscMenu_BriefingV2_C_ExecuteUbergraph_ITM_EscMenu_BriefingV2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BiomeClicked__DelegateSignature
	 */
	struct UITM_EscMenu_BriefingV2_C_BiomeClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.WarningClicked__DelegateSignature
	 */
	struct UITM_EscMenu_BriefingV2_C_WarningClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.MutatorClicked__DelegateSignature
	 */
	struct UITM_EscMenu_BriefingV2_C_MutatorClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.MissionTypeClicked__DelegateSignature
	 */
	struct UITM_EscMenu_BriefingV2_C_MissionTypeClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
