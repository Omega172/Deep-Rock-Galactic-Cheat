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
	 * Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.Hide
	 */
	struct UUI_JettyBoots_Announcement_C_Hide_Params
	{	};

	/**
	 * Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.EndFadeOut
	 */
	struct UUI_JettyBoots_Announcement_C_EndFadeOut_Params
	{	};

	/**
	 * Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.BeginFadeOut
	 */
	struct UUI_JettyBoots_Announcement_C_BeginFadeOut_Params
	{	};

	/**
	 * Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.StartAnnouncement
	 */
	struct UUI_JettyBoots_Announcement_C_StartAnnouncement_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ENUM_MenuColors                                            InTextColor;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2X0R[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InScore;                                                 // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InNewHighScore;                                          // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MAHP[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InDelayBeforeFadeOut;                                    // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.Construct
	 */
	struct UUI_JettyBoots_Announcement_C_Construct_Params
	{	};

	/**
	 * Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.Level Up
	 */
	struct UUI_JettyBoots_Announcement_C_LevelUp_Params
	{
	public:
		int32_t                                                    InNewLevel;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.PreConstruct
	 */
	struct UUI_JettyBoots_Announcement_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.Game Over
	 */
	struct UUI_JettyBoots_Announcement_C_GameOver_Params
	{
	public:
		int32_t                                                    InScore;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InNewHighScore;                                          // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_JettyBoots_Announcement.UI_JettyBoots_Announcement_C.ExecuteUbergraph_UI_JettyBoots_Announcement
	 */
	struct UUI_JettyBoots_Announcement_C_ExecuteUbergraph_UI_JettyBoots_Announcement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
