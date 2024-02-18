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
	 * Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.FormatTime
	 */
	struct UHUD_Countdown_Extraction_C_FormatTime_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_62NK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.CountdownStarted
	 */
	struct UHUD_Countdown_Extraction_C_CountdownStarted_Params
	{
	public:
		class FText                                                countdownText;                                           // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.OnCountdownTimeChanged
	 */
	struct UHUD_Countdown_Extraction_C_OnCountdownTimeChanged_Params
	{
	public:
		int32_t                                                    SecondsLeft;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.OnCountdownFinished
	 */
	struct UHUD_Countdown_Extraction_C_OnCountdownFinished_Params
	{	};

	/**
	 * Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.Construct
	 */
	struct UHUD_Countdown_Extraction_C_Construct_Params
	{	};

	/**
	 * Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.PreConstruct
	 */
	struct UHUD_Countdown_Extraction_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Countdown_Extraction.HUD_Countdown_Extraction_C.ExecuteUbergraph_HUD_Countdown_Extraction
	 */
	struct UHUD_Countdown_Extraction_C_ExecuteUbergraph_HUD_Countdown_Extraction_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
