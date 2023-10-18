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
	 * Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.SetText
	 */
	struct UITM_BasicTutorialWindow_C_SetText_Params
	{
	public:
		class FText                                                Header;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                MainText;                                                // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                TaskText;                                                // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayRemove
	 */
	struct UITM_BasicTutorialWindow_C_PlayRemove_Params
	{	};

	/**
	 * Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayShow
	 */
	struct UITM_BasicTutorialWindow_C_PlayShow_Params
	{	};

	/**
	 * Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayComplete
	 */
	struct UITM_BasicTutorialWindow_C_PlayComplete_Params
	{	};

	/**
	 * Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.CompleteAnimFinished
	 */
	struct UITM_BasicTutorialWindow_C_CompleteAnimFinished_Params
	{	};

	/**
	 * Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.SetImage
	 */
	struct UITM_BasicTutorialWindow_C_SetImage_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayTaskProgress
	 */
	struct UITM_BasicTutorialWindow_C_PlayTaskProgress_Params
	{	};

	/**
	 * Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.SetTaskCounter
	 */
	struct UITM_BasicTutorialWindow_C_SetTaskCounter_Params
	{
	public:
		int32_t                                                    Counter;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Denominator;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.Construct
	 */
	struct UITM_BasicTutorialWindow_C_Construct_Params
	{	};

	/**
	 * Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.ExecuteUbergraph_ITM_BasicTutorialWindow
	 */
	struct UITM_BasicTutorialWindow_C_ExecuteUbergraph_ITM_BasicTutorialWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.RemoveAnimationFinished__DelegateSignature
	 */
	struct UITM_BasicTutorialWindow_C_RemoveAnimationFinished__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.CompleteAnimationFinished__DelegateSignature
	 */
	struct UITM_BasicTutorialWindow_C_CompleteAnimationFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
