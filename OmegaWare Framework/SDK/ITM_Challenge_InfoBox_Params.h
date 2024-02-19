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
	 * Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.OnNewChallenge
	 */
	struct UITM_Challenge_InfoBox_C_OnNewChallenge_Params
	{	};

	/**
	 * Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.AddChallengeToGrid
	 */
	struct UITM_Challenge_InfoBox_C_AddChallengeToGrid_Params
	{
	public:
		struct FChallengeInfo                                      ChallengeInfo;                                           // 0x0000(0x00A0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Column;                                                  // 0x00A0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2U8S[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UItm_SeasonChallenge_Small_C*                        W_Challenge;                                             // 0x00A8(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.SetOpen
	 */
	struct UITM_Challenge_InfoBox_C_SetOpen_Params
	{
	public:
		bool                                                       InIsOpen;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_Challenge_InfoBox_C_BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.PreConstruct
	 */
	struct UITM_Challenge_InfoBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.RefreshChallenges
	 */
	struct UITM_Challenge_InfoBox_C_RefreshChallenges_Params
	{	};

	/**
	 * Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Challenge_InfoBox_C_BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Challenge_InfoBox_C_BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.BndEvt__Button_Arrow_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_Challenge_InfoBox_C_BndEvt__Button_Arrow_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.OnChallengeHover
	 */
	struct UITM_Challenge_InfoBox_C_OnChallengeHover_Params
	{
	public:
		bool                                                       IsHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OPZJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.Construct
	 */
	struct UITM_Challenge_InfoBox_C_Construct_Params
	{	};

	/**
	 * Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.Click
	 */
	struct UITM_Challenge_InfoBox_C_Click_Params
	{	};

	/**
	 * Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.ExecuteUbergraph_ITM_Challenge_InfoBox
	 */
	struct UITM_Challenge_InfoBox_C_ExecuteUbergraph_ITM_Challenge_InfoBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_77LD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_Challenge_InfoBox.ITM_Challenge_InfoBox_C.OnChallengeHovered__DelegateSignature
	 */
	struct UITM_Challenge_InfoBox_C_OnChallengeHovered__DelegateSignature_Params
	{
	public:
		TArray<class UObject*>                                     AssetReferences;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       InHovered;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZQIW[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USeasonChallenge*                                    Challenge;                                               // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
