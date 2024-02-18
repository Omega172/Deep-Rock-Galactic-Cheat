#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
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
	 * Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.OnKeyUp
	 */
	struct UITM_UnlockedCelebration_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.Construct
	 */
	struct UITM_UnlockedCelebration_C_Construct_Params
	{	};

	/**
	 * Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UITM_UnlockedCelebration_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.ClickContinue
	 */
	struct UITM_UnlockedCelebration_C_ClickContinue_Params
	{	};

	/**
	 * Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.ShowRewards
	 */
	struct UITM_UnlockedCelebration_C_ShowRewards_Params
	{
	public:
		struct FMasteryItem                                        Rewards;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
		class UClass*                                              Item;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.ExecuteUbergraph_ITM_UnlockedCelebration
	 */
	struct UITM_UnlockedCelebration_C_ExecuteUbergraph_ITM_UnlockedCelebration_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UnlockedCelebration.ITM_UnlockedCelebration_C.OnFinished__DelegateSignature
	 */
	struct UITM_UnlockedCelebration_C_OnFinished__DelegateSignature_Params
	{
	public:
		TArray<class UUnlockReward*>                               Rewards;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
