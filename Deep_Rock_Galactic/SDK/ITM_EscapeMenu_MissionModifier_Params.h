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
	 * Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.GetToolTipWidget
	 */
	struct UITM_EscapeMenu_MissionModifier_C_GetToolTipWidget_Params
	{
	public:
		class UWidget*                                             returnvalue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.PreConstruct
	 */
	struct UITM_EscapeMenu_MissionModifier_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.SetWarning
	 */
	struct UITM_EscapeMenu_MissionModifier_C_SetWarning_Params
	{
	public:
		class UMissionWarning*                                     Warning;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.SetMutator
	 */
	struct UITM_EscapeMenu_MissionModifier_C_SetMutator_Params
	{
	public:
		class UMissionMutator*                                     Mutator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.Hide
	 */
	struct UITM_EscapeMenu_MissionModifier_C_Hide_Params
	{	};

	/**
	 * Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.BndEvt__Button_Warning_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_EscapeMenu_MissionModifier_C_BndEvt__Button_Warning_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.SetVisuals
	 */
	struct UITM_EscapeMenu_MissionModifier_C_SetVisuals_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture2D*                                          Icon;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENUM_MenuColors                                            Color;                                                   // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.ExecuteUbergraph_ITM_EscapeMenu_MissionModifier
	 */
	struct UITM_EscapeMenu_MissionModifier_C_ExecuteUbergraph_ITM_EscapeMenu_MissionModifier_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2FGC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_EscapeMenu_MissionModifier.ITM_EscapeMenu_MissionModifier_C.OnClicked__DelegateSignature
	 */
	struct UITM_EscapeMenu_MissionModifier_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
