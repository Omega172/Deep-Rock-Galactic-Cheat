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
	 * Function UI_RichTextInput.UI_RichTextInput_C.ShowFromDisplayDetails
	 */
	struct UUI_RichTextInput_C_ShowFromDisplayDetails_Params
	{
	public:
		struct FInputDisplay                                       details;                                                 // 0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_RichTextInput.UI_RichTextInput_C.SetInteraction
	 */
	struct UUI_RichTextInput_C_SetInteraction_Params
	{
	public:
		EInputInteraction                                          InInteraction;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RichTextInput.UI_RichTextInput_C.ShowAsText
	 */
	struct UUI_RichTextInput_C_ShowAsText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        InTint;                                                  // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RichTextInput.UI_RichTextInput_C.SetSize
	 */
	struct UUI_RichTextInput_C_SetSize_Params
	{
	public:
		float                                                      InHeightOverride;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InWidthOverride;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InMinDesiredWidth;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RichTextInput.UI_RichTextInput_C.ShowAsIcon
	 */
	struct UUI_RichTextInput_C_ShowAsIcon_Params
	{
	public:
		class UTexture2D*                                          InTexture;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        InTint;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RichTextInput.UI_RichTextInput_C.ReceiveInputDetails
	 */
	struct UUI_RichTextInput_C_ReceiveInputDetails_Params
	{
	public:
		struct FInputDisplay                                       InDisplay;                                               // 0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_RichTextInput.UI_RichTextInput_C.ReceiveInputUnknown
	 */
	struct UUI_RichTextInput_C_ReceiveInputUnknown_Params
	{	};

	/**
	 * Function UI_RichTextInput.UI_RichTextInput_C.ExecuteUbergraph_UI_RichTextInput
	 */
	struct UUI_RichTextInput_C_ExecuteUbergraph_UI_RichTextInput_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_74RI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
