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
	 * Function ITM_ResetFaction.ITM_ResetFaction_C.CurrentFactionID
	 */
	struct UITM_ResetFaction_C_CurrentFactionID_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_ResetFaction.ITM_ResetFaction_C.PreConstruct
	 */
	struct UITM_ResetFaction_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_ResetFaction.ITM_ResetFaction_C.Set Faction
	 */
	struct UITM_ResetFaction_C_SetFaction_Params
	{
	public:
		class UCommunityGoalFaction*                               Faction;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_ResetFaction.ITM_ResetFaction_C.BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UITM_ResetFaction_C_BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_ResetFaction.ITM_ResetFaction_C.OnFactionSwitch
	 */
	struct UITM_ResetFaction_C_OnFactionSwitch_Params
	{
	public:
		bool                                                       Changed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_ResetFaction.ITM_ResetFaction_C.ExecuteUbergraph_ITM_ResetFaction
	 */
	struct UITM_ResetFaction_C_ExecuteUbergraph_ITM_ResetFaction_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_ResetFaction.ITM_ResetFaction_C.CheckState__DelegateSignature
	 */
	struct UITM_ResetFaction_C_CheckState__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
