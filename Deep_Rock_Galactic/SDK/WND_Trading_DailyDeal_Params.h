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
	 * Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.FormatDailyDealResources
	 */
	struct UWND_Trading_DailyDeal_C_FormatDailyDealResources_Params
	{
	public:
		TMap<class UResourceData*, int32_t>                        Resources;                                               // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.No_D21FAC5A44FF696C3525F18876AC316A
	 */
	struct UWND_Trading_DailyDeal_C_No_D21FAC5A44FF696C3525F18876AC316A_Params
	{	};

	/**
	 * Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.Yes_D21FAC5A44FF696C3525F18876AC316A
	 */
	struct UWND_Trading_DailyDeal_C_Yes_D21FAC5A44FF696C3525F18876AC316A_Params
	{	};

	/**
	 * Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.PreConstruct
	 */
	struct UWND_Trading_DailyDeal_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.Refresh
	 */
	struct UWND_Trading_DailyDeal_C_Refresh_Params
	{	};

	/**
	 * Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.UpdateTime
	 */
	struct UWND_Trading_DailyDeal_C_UpdateTime_Params
	{	};

	/**
	 * Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.BndEvt__B_Trade_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWND_Trading_DailyDeal_C_BndEvt__B_Trade_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UBasic_ButtonCutCorner_C*                            Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.Construct
	 */
	struct UWND_Trading_DailyDeal_C_Construct_Params
	{	};

	/**
	 * Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.OnResourceAmountChanged
	 */
	struct UWND_Trading_DailyDeal_C_OnResourceAmountChanged_Params
	{
	public:
		class UResourceData*                                       Resource;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      currentAmount;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.OnCreditsChanged
	 */
	struct UWND_Trading_DailyDeal_C_OnCreditsChanged_Params
	{
	public:
		int32_t                                                    Credits;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.ExecuteUbergraph_WND_Trading_DailyDeal
	 */
	struct UWND_Trading_DailyDeal_C_ExecuteUbergraph_WND_Trading_DailyDeal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W8WE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WND_Trading_DailyDeal.WND_Trading_DailyDeal_C.OnDealBought__DelegateSignature
	 */
	struct UWND_Trading_DailyDeal_C_OnDealBought__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
