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
	 * Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetTextColor
	 */
	struct UHUD_DefaultLabel_C_SetTextColor_Params
	{
	public:
		ENUM_MenuColors                                            ColorSelector;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5HTZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetOutlineSettings
	 */
	struct UHUD_DefaultLabel_C_SetOutlineSettings_Params
	{
	public:
		struct FFontOutlineSettings                                InFontInfo_OutlineSettings;                              // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetJustification
	 */
	struct UHUD_DefaultLabel_C_SetJustification_Params
	{
	public:
		ETextJustify                                               InJustification;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetTypeFace
	 */
	struct UHUD_DefaultLabel_C_SetTypeFace_Params
	{
	public:
		ENUM_AcuminCondensedTypeface                               Typeface;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4DKB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetFontSize
	 */
	struct UHUD_DefaultLabel_C_SetFontSize_Params
	{
	public:
		int32_t                                                    inFontSize;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SOVM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetText
	 */
	struct UHUD_DefaultLabel_C_SetText_Params
	{
	public:
		class FText                                                NewText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HUD_DefaultLabel.HUD_DefaultLabel_C.PreConstruct
	 */
	struct UHUD_DefaultLabel_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_DefaultLabel.HUD_DefaultLabel_C.ExecuteUbergraph_HUD_DefaultLabel
	 */
	struct UHUD_DefaultLabel_C_ExecuteUbergraph_HUD_DefaultLabel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
