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
	 * Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.HandleAssignments
	 */
	struct UWND_MisSel_MissionDescription_C_HandleAssignments_Params
	{
	public:
		class UGeneratedMission*                                   mission;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDifficultySetting*                                  optionalDifficulty;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.SetData
	 */
	struct UWND_MisSel_MissionDescription_C_SetData_Params
	{
	public:
		class UGeneratedMission*                                   mission;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDifficultySetting*                                  Difficulty;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.PreConstruct
	 */
	struct UWND_MisSel_MissionDescription_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.BndEvt__Button_MissionInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWND_MisSel_MissionDescription_C_BndEvt__Button_MissionInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.BndEvt__WND_MisSel_MissionDescription_Button_MissionInfo_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWND_MisSel_MissionDescription_C_BndEvt__WND_MisSel_MissionDescription_Button_MissionInfo_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.BndEvt__WND_MisSel_MissionDescription_Button_MissionInfo_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWND_MisSel_MissionDescription_C_BndEvt__WND_MisSel_MissionDescription_Button_MissionInfo_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.ExecuteUbergraph_WND_MisSel_MissionDescription
	 */
	struct UWND_MisSel_MissionDescription_C_ExecuteUbergraph_WND_MisSel_MissionDescription_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
