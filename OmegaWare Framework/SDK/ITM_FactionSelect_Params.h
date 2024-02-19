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
	 * Function ITM_FactionSelect.ITM_FactionSelect_C.Initialize
	 */
	struct UITM_FactionSelect_C_Initialize_Params
	{
	public:
		int32_t                                                    NewFee;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AYON[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCommunityGoalFaction*                               Faction;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_FactionSelect.ITM_FactionSelect_C.SetFaction
	 */
	struct UITM_FactionSelect_C_SetFaction_Params
	{
	public:
		class UCommunityGoalFaction*                               Faction;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_FactionSelect.ITM_FactionSelect_C.SetFee
	 */
	struct UITM_FactionSelect_C_SetFee_Params
	{
	public:
		int32_t                                                    NewFee;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_FactionSelect.ITM_FactionSelect_C.PreConstruct
	 */
	struct UITM_FactionSelect_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_FactionSelect.ITM_FactionSelect_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UITM_FactionSelect_C_BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_FactionSelect.ITM_FactionSelect_C.AnswerCC
	 */
	struct UITM_FactionSelect_C_AnswerCC_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_FactionSelect.ITM_FactionSelect_C.ExecuteUbergraph_ITM_FactionSelect
	 */
	struct UITM_FactionSelect_C_ExecuteUbergraph_ITM_FactionSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_FactionSelect.ITM_FactionSelect_C.FactionSelected__DelegateSignature
	 */
	struct UITM_FactionSelect_C_FactionSelected__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
