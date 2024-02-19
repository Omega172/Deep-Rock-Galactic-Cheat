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
	 * Function W_TutorialContent_Base.W_TutorialContent_Base_C.CompleteWithAnim
	 */
	struct UW_TutorialContent_Base_C_CompleteWithAnim_Params
	{	};

	/**
	 * Function W_TutorialContent_Base.W_TutorialContent_Base_C.OnShown
	 */
	struct UW_TutorialContent_Base_C_OnShown_Params
	{	};

	/**
	 * Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetText
	 */
	struct UW_TutorialContent_Base_C_SetText_Params
	{
	public:
		class FText                                                TaskHeader;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                TaskText;                                                // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                CheckBoxText;                                            // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetImage
	 */
	struct UW_TutorialContent_Base_C_SetImage_Params
	{
	public:
		class UTexture2D*                                          Image;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_TutorialContent_Base.W_TutorialContent_Base_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_CompleteAnimationFinished__DelegateSignature
	 */
	struct UW_TutorialContent_Base_C_BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_CompleteAnimationFinished__DelegateSignature_Params
	{	};

	/**
	 * Function W_TutorialContent_Base.W_TutorialContent_Base_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_RemoveAnimationFinished__DelegateSignature
	 */
	struct UW_TutorialContent_Base_C_BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_RemoveAnimationFinished__DelegateSignature_Params
	{	};

	/**
	 * Function W_TutorialContent_Base.W_TutorialContent_Base_C.PlayTaskProgress
	 */
	struct UW_TutorialContent_Base_C_PlayTaskProgress_Params
	{	};

	/**
	 * Function W_TutorialContent_Base.W_TutorialContent_Base_C.OnRemoveWidget
	 */
	struct UW_TutorialContent_Base_C_OnRemoveWidget_Params
	{	};

	/**
	 * Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetTaskCounter
	 */
	struct UW_TutorialContent_Base_C_SetTaskCounter_Params
	{
	public:
		int32_t                                                    Counter;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Denominator;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_TutorialContent_Base.W_TutorialContent_Base_C.ExecuteUbergraph_W_TutorialContent_Base
	 */
	struct UW_TutorialContent_Base_C_ExecuteUbergraph_W_TutorialContent_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
