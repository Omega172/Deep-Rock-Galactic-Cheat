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
	 * Function WND_Trading_Resources.WND_Trading_Resources_C.UpdateAmountAfterDeal
	 */
	struct UWND_Trading_Resources_C_UpdateAmountAfterDeal_Params
	{	};

	/**
	 * Function WND_Trading_Resources.WND_Trading_Resources_C.CountTradeResources
	 */
	struct UWND_Trading_Resources_C_CountTradeResources_Params
	{
	public:
		TMap<class UResourceData*, int32_t>                        Map;                                                     // 0x0000(0x0050)  (ConstParm, Parm, OutParm)
		bool                                                       IsBuyingMinerals;                                        // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CCNK[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WND_Trading_Resources.WND_Trading_Resources_C.OnAmoutUpdated
	 */
	struct UWND_Trading_Resources_C_OnAmoutUpdated_Params
	{
	public:
		bool                                                       DoClearAnim;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DoTradeAnim;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J2XJ[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WND_Trading_Resources.WND_Trading_Resources_C.No_678F03CB47E4D126FB4FF99BC3F43B71
	 */
	struct UWND_Trading_Resources_C_No_678F03CB47E4D126FB4FF99BC3F43B71_Params
	{	};

	/**
	 * Function WND_Trading_Resources.WND_Trading_Resources_C.Yes_678F03CB47E4D126FB4FF99BC3F43B71
	 */
	struct UWND_Trading_Resources_C_Yes_678F03CB47E4D126FB4FF99BC3F43B71_Params
	{	};

	/**
	 * Function WND_Trading_Resources.WND_Trading_Resources_C.Construct
	 */
	struct UWND_Trading_Resources_C_Construct_Params
	{	};

	/**
	 * Function WND_Trading_Resources.WND_Trading_Resources_C.PreConstruct
	 */
	struct UWND_Trading_Resources_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_Trading_Resources.WND_Trading_Resources_C.BndEvt__B_Clear_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWND_Trading_Resources_C_BndEvt__B_Clear_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UBasic_ButtonCutCorner_C*                            Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Trading_Resources.WND_Trading_Resources_C.BndEvt__B_Trade_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UWND_Trading_Resources_C_BndEvt__B_Trade_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class UBasic_ButtonCutCorner_C*                            Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Trading_Resources.WND_Trading_Resources_C.ClearAll
	 */
	struct UWND_Trading_Resources_C_ClearAll_Params
	{	};

	/**
	 * Function WND_Trading_Resources.WND_Trading_Resources_C.OnCreditsChanged
	 */
	struct UWND_Trading_Resources_C_OnCreditsChanged_Params
	{
	public:
		int32_t                                                    Credits;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_Trading_Resources.WND_Trading_Resources_C.ExecuteUbergraph_WND_Trading_Resources
	 */
	struct UWND_Trading_Resources_C_ExecuteUbergraph_WND_Trading_Resources_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
