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
	 * Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.SetClaimButtonEnabled
	 */
	struct UUI_Forge_MasteryBar_C_SetClaimButtonEnabled_Params
	{
	public:
		bool                                                       InEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.SetRewardFromLevel
	 */
	struct UUI_Forge_MasteryBar_C_SetRewardFromLevel_Params
	{
	public:
		int32_t                                                    InLevel;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.StartCounting
	 */
	struct UUI_Forge_MasteryBar_C_StartCounting_Params
	{
	public:
		int32_t                                                    InStartLevel;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InStartXP;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.SetLerpProgress
	 */
	struct UUI_Forge_MasteryBar_C_SetLerpProgress_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.SetFromSaveGame
	 */
	struct UUI_Forge_MasteryBar_C_SetFromSaveGame_Params
	{
	public:
		bool                                                       animate;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BBU2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.PreConstruct
	 */
	struct UUI_Forge_MasteryBar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.Construct
	 */
	struct UUI_Forge_MasteryBar_C_Construct_Params
	{	};

	/**
	 * Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.PlayRewardAnim
	 */
	struct UUI_Forge_MasteryBar_C_PlayRewardAnim_Params
	{	};

	/**
	 * Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.RewardPopUpStarted
	 */
	struct UUI_Forge_MasteryBar_C_RewardPopUpStarted_Params
	{	};

	/**
	 * Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.FinishedCounting
	 */
	struct UUI_Forge_MasteryBar_C_FinishedCounting_Params
	{	};

	/**
	 * Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.ResetReward
	 */
	struct UUI_Forge_MasteryBar_C_ResetReward_Params
	{	};

	/**
	 * Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.StartedCounting
	 */
	struct UUI_Forge_MasteryBar_C_StartedCounting_Params
	{	};

	/**
	 * Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.BndEvt__UI_Forge_MasteryBar_ClaimButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UUI_Forge_MasteryBar_C_BndEvt__UI_Forge_MasteryBar_ClaimButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.OnMouseEnter
	 */
	struct UUI_Forge_MasteryBar_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.OnMouseLeave
	 */
	struct UUI_Forge_MasteryBar_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.ExecuteUbergraph_UI_Forge_MasteryBar
	 */
	struct UUI_Forge_MasteryBar_C_ExecuteUbergraph_UI_Forge_MasteryBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.OnClaimClicked__DelegateSignature
	 */
	struct UUI_Forge_MasteryBar_C_OnClaimClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    InLevel;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSeed;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_MasteryBar.UI_Forge_MasteryBar_C.OnCountingFinished__DelegateSignature
	 */
	struct UUI_Forge_MasteryBar_C_OnCountingFinished__DelegateSignature_Params
	{
	public:
		unsigned char                                              Reward;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
