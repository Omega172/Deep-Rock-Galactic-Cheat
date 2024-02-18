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
	 * Function WND_ClaimableRewards.WND_ClaimableRewards_C.GetData
	 */
	struct UWND_ClaimableRewards_C_GetData_Params
	{
	public:
		struct FClaimableRewardView                                OutData;                                                 // 0x0000(0x0088)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WND_ClaimableRewards.WND_ClaimableRewards_C.OnKeyUp
	 */
	struct UWND_ClaimableRewards_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WND_ClaimableRewards.WND_ClaimableRewards_C.OnShown
	 */
	struct UWND_ClaimableRewards_C_OnShown_Params
	{	};

	/**
	 * Function WND_ClaimableRewards.WND_ClaimableRewards_C.BndEvt__RewardView_K2Node_ComponentBoundEvent_1_OnRewardsClaimed__DelegateSignature
	 */
	struct UWND_ClaimableRewards_C_BndEvt__RewardView_K2Node_ComponentBoundEvent_1_OnRewardsClaimed__DelegateSignature_Params
	{	};

	/**
	 * Function WND_ClaimableRewards.WND_ClaimableRewards_C.DoClose
	 */
	struct UWND_ClaimableRewards_C_DoClose_Params
	{	};

	/**
	 * Function WND_ClaimableRewards.WND_ClaimableRewards_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWND_ClaimableRewards_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WND_ClaimableRewards.WND_ClaimableRewards_C.PreConstruct
	 */
	struct UWND_ClaimableRewards_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_ClaimableRewards.WND_ClaimableRewards_C.ExecuteUbergraph_WND_ClaimableRewards
	 */
	struct UWND_ClaimableRewards_C_ExecuteUbergraph_WND_ClaimableRewards_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
