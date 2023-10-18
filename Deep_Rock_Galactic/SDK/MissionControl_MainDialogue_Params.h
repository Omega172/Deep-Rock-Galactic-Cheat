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
	 * Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SetPreview
	 */
	struct UMissionControl_MainDialogue_C_SetPreview_Params
	{
	public:
		class UDialogDataAsset*                                    PreviewShout;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Reset
	 */
	struct UMissionControl_MainDialogue_C_Reset_Params
	{	};

	/**
	 * Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SetProgress
	 */
	struct UMissionControl_MainDialogue_C_SetProgress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Finished;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HJR3[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.TickRunningText
	 */
	struct UMissionControl_MainDialogue_C_TickRunningText_Params
	{	};

	/**
	 * Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.StopRunningText
	 */
	struct UMissionControl_MainDialogue_C_StopRunningText_Params
	{	};

	/**
	 * Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SpeakEntryManually
	 */
	struct UMissionControl_MainDialogue_C_SpeakEntryManually_Params
	{
	public:
		struct FDialogStruct                                       Entry;                                                   // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      Duration;                                                // 0x0058(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MWRO[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAudioComponent*                                     AudioComponent;                                          // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SpeakManually
	 */
	struct UMissionControl_MainDialogue_C_SpeakManually_Params
	{
	public:
		class UDialogDataAsset*                                    MissionShout;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_371D[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAudioComponent*                                     AudioComponent;                                          // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Start Running Text
	 */
	struct UMissionControl_MainDialogue_C_StartRunningText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      Duration;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.OnMissionShout
	 */
	struct UMissionControl_MainDialogue_C_OnMissionShout_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      Duration;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Construct
	 */
	struct UMissionControl_MainDialogue_C_Construct_Params
	{	};

	/**
	 * Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.PreConstruct
	 */
	struct UMissionControl_MainDialogue_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.OnMissionShoutEnd
	 */
	struct UMissionControl_MainDialogue_C_OnMissionShoutEnd_Params
	{	};

	/**
	 * Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.HideMissionShout
	 */
	struct UMissionControl_MainDialogue_C_HideMissionShout_Params
	{	};

	/**
	 * Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.ExecuteUbergraph_MissionControl_MainDialogue
	 */
	struct UMissionControl_MainDialogue_C_ExecuteUbergraph_MissionControl_MainDialogue_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
