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
	 * Function Basic_MenuLabel.Basic_MenuLabel_C.SetJustification
	 */
	struct UBasic_MenuLabel_C_SetJustification_Params
	{
	public:
		ETextJustify                                               InJustification;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_MenuLabel.Basic_MenuLabel_C.SetTypeFace
	 */
	struct UBasic_MenuLabel_C_SetTypeFace_Params
	{
	public:
		ENUM_CarbonTypeface                                        Typeface;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6WYY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Basic_MenuLabel.Basic_MenuLabel_C.SetFontSize
	 */
	struct UBasic_MenuLabel_C_SetFontSize_Params
	{
	public:
		int32_t                                                    inFontSize;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V0SJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Basic_MenuLabel.Basic_MenuLabel_C.SetText
	 */
	struct UBasic_MenuLabel_C_SetText_Params
	{
	public:
		class FText                                                NewText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Basic_MenuLabel.Basic_MenuLabel_C.PreConstruct
	 */
	struct UBasic_MenuLabel_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_MenuLabel.Basic_MenuLabel_C.ExecuteUbergraph_Basic_MenuLabel
	 */
	struct UBasic_MenuLabel_C_ExecuteUbergraph_Basic_MenuLabel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
