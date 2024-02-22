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
	 * Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetFont
	 */
	struct UUI_AdvancedLabel_C_SetFont_Params
	{
	public:
		struct FSlateFontInfo                                      InFont;                                                  // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       InKeepFontSize;                                          // 0x0058(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetIconSize
	 */
	struct UUI_AdvancedLabel_C_SetIconSize_Params
	{
	public:
		int32_t                                                    IconSize;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    IconSize_ControllerOverride;                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetFontSize
	 */
	struct UUI_AdvancedLabel_C_SetFontSize_Params
	{
	public:
		int32_t                                                    FontSize;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WPK4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetPreviewAs
	 */
	struct UUI_AdvancedLabel_C_SetPreviewAs_Params
	{
	public:
		unsigned char                                              PreviewAs;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetTints
	 */
	struct UUI_AdvancedLabel_C_SetTints_Params
	{
	public:
		struct FLinearColor                                        TextTint;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        KeyNameTint;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        PCIconTint;                                              // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        ControllerIconTint;                                      // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetKeyNameTint
	 */
	struct UUI_AdvancedLabel_C_SetKeyNameTint_Params
	{
	public:
		struct FLinearColor                                        KeyNameTint;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetIconTint
	 */
	struct UUI_AdvancedLabel_C_SetIconTint_Params
	{
	public:
		struct FLinearColor                                        PCIconTint;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        ControllerIconTint;                                      // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetTextTint
	 */
	struct UUI_AdvancedLabel_C_SetTextTint_Params
	{
	public:
		struct FLinearColor                                        TextTint;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnNewLine
	 */
	struct UUI_AdvancedLabel_C_OnNewLine_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddIcon
	 */
	struct UUI_AdvancedLabel_C_OnAddIcon_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FActionIconMapping                                  Icon;                                                    // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddKeyName
	 */
	struct UUI_AdvancedLabel_C_OnAddKeyName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddString
	 */
	struct UUI_AdvancedLabel_C_OnAddString_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnReset
	 */
	struct UUI_AdvancedLabel_C_OnReset_Params
	{	};

	/**
	 * Function UI_AdvancedLabel.UI_AdvancedLabel_C.ExecuteUbergraph_UI_AdvancedLabel
	 */
	struct UUI_AdvancedLabel_C_ExecuteUbergraph_UI_AdvancedLabel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
