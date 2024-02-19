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
	 * Function UI_ProgressBar.UI_ProgressBar_C.SetFillColorAndOpacity
	 */
	struct UUI_ProgressBar_C_SetFillColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ProgressBar.UI_ProgressBar_C.SetStyle
	 */
	struct UUI_ProgressBar_C_SetStyle_Params
	{
	public:
		struct FProgressBarStyle                                   InStyle;                                                 // 0x0000(0x01A0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_ProgressBar.UI_ProgressBar_C.GetPercent
	 */
	struct UUI_ProgressBar_C_GetPercent_Params
	{
	public:
		float                                                      OutPercent;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ProgressBar.UI_ProgressBar_C.SetPercent
	 */
	struct UUI_ProgressBar_C_SetPercent_Params
	{
	public:
		float                                                      InPercent;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InEaseDuration;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ProgressBar.UI_ProgressBar_C.SetAnimationProgress
	 */
	struct UUI_ProgressBar_C_SetAnimationProgress_Params
	{
	public:
		float                                                      AnimationProgress;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ProgressBar.UI_ProgressBar_C.PreConstruct
	 */
	struct UUI_ProgressBar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ProgressBar.UI_ProgressBar_C.ExecuteUbergraph_UI_ProgressBar
	 */
	struct UUI_ProgressBar_C_ExecuteUbergraph_UI_ProgressBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
