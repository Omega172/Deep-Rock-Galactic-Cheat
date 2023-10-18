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
	 * Function UI_RunningMultiText.UI_RunningMultiText_C.PlayCue
	 */
	struct UUI_RunningMultiText_C_PlayCue_Params
	{
	public:
		class USoundCue*                                           InSound;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RunningMultiText.UI_RunningMultiText_C.InitRun
	 */
	struct UUI_RunningMultiText_C_InitRun_Params
	{	};

	/**
	 * Function UI_RunningMultiText.UI_RunningMultiText_C.SetNextLine
	 */
	struct UUI_RunningMultiText_C_SetNextLine_Params
	{	};

	/**
	 * Function UI_RunningMultiText.UI_RunningMultiText_C.SetRunnerProgress
	 */
	struct UUI_RunningMultiText_C_SetRunnerProgress_Params
	{
	public:
		float                                                      InProgress;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Finished;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UDBG[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_RunningMultiText.UI_RunningMultiText_C.SetTextRunnerActive
	 */
	struct UUI_RunningMultiText_C_SetTextRunnerActive_Params
	{
	public:
		bool                                                       Inactive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RunningMultiText.UI_RunningMultiText_C.SetTexts
	 */
	struct UUI_RunningMultiText_C_SetTexts_Params
	{
	public:
		TArray<class FText>                                        InTexts;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_RunningMultiText.UI_RunningMultiText_C.OnTick_B06C42A944ABEA2C4BF8E7AF24421023
	 */
	struct UUI_RunningMultiText_C_OnTick_B06C42A944ABEA2C4BF8E7AF24421023_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NormalizedTime;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RunningMultiText.UI_RunningMultiText_C.Completed_B06C42A944ABEA2C4BF8E7AF24421023
	 */
	struct UUI_RunningMultiText_C_Completed_B06C42A944ABEA2C4BF8E7AF24421023_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NormalizedTime;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RunningMultiText.UI_RunningMultiText_C.PreConstruct
	 */
	struct UUI_RunningMultiText_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RunningMultiText.UI_RunningMultiText_C.DoRun
	 */
	struct UUI_RunningMultiText_C_DoRun_Params
	{	};

	/**
	 * Function UI_RunningMultiText.UI_RunningMultiText_C.Destruct
	 */
	struct UUI_RunningMultiText_C_Destruct_Params
	{	};

	/**
	 * Function UI_RunningMultiText.UI_RunningMultiText_C.ExecuteUbergraph_UI_RunningMultiText
	 */
	struct UUI_RunningMultiText_C_ExecuteUbergraph_UI_RunningMultiText_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
