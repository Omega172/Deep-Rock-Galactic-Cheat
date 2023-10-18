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
	 * Function HUD_Subtitles.HUD_Subtitles_C.OnPlayerShoutStart
	 */
	struct UHUD_Subtitles_C_OnPlayerShoutStart_Params
	{
	public:
		class APlayerCharacter*                                    InSender;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                InText;                                                  // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      InDuration;                                              // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Subtitles.HUD_Subtitles_C.OnSubtitleShoutStart
	 */
	struct UHUD_Subtitles_C_OnSubtitleShoutStart_Params
	{
	public:
		class APlayerCharacter*                                    InSender;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                InText;                                                  // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      InDuration;                                              // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Subtitles.HUD_Subtitles_C.Construct
	 */
	struct UHUD_Subtitles_C_Construct_Params
	{	};

	/**
	 * Function HUD_Subtitles.HUD_Subtitles_C.ExecuteUbergraph_HUD_Subtitles
	 */
	struct UHUD_Subtitles_C_ExecuteUbergraph_HUD_Subtitles_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
