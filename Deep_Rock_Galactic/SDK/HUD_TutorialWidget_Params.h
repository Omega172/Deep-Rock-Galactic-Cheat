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
	 * Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnShow
	 */
	struct UHUD_TutorialWidget_C_OnShow_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                Title;                                                   // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                TaskText;                                                // 0x0030(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UTexture2D*                                          Image;                                                   // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TutorialWidget.HUD_TutorialWidget_C.Construct
	 */
	struct UHUD_TutorialWidget_C_Construct_Params
	{	};

	/**
	 * Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnHide
	 */
	struct UHUD_TutorialWidget_C_OnHide_Params
	{
	public:
		bool                                                       watched;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_TutorialWidget.HUD_TutorialWidget_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_RemoveAnimationFinished__DelegateSignature
	 */
	struct UHUD_TutorialWidget_C_BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_RemoveAnimationFinished__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_TutorialWidget.HUD_TutorialWidget_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_CompleteAnimationFinished__DelegateSignature
	 */
	struct UHUD_TutorialWidget_C_BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_CompleteAnimationFinished__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_TutorialWidget.HUD_TutorialWidget_C.ContinueChange
	 */
	struct UHUD_TutorialWidget_C_ContinueChange_Params
	{	};

	/**
	 * Function HUD_TutorialWidget.HUD_TutorialWidget_C.ExecuteUbergraph_HUD_TutorialWidget
	 */
	struct UHUD_TutorialWidget_C_ExecuteUbergraph_HUD_TutorialWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
