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
	 * Function ITM_Trading_Resource.ITM_Trading_Resource_C.UpdateChangeAmount
	 */
	struct UITM_Trading_Resource_C_UpdateChangeAmount_Params
	{
	public:
		int32_t                                                    IncrementAmount;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DidUpdate;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Trading_Resource.ITM_Trading_Resource_C.PreConstruct
	 */
	struct UITM_Trading_Resource_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Trading_Resource.ITM_Trading_Resource_C.SetData
	 */
	struct UITM_Trading_Resource_C_SetData_Params
	{
	public:
		class UResourceData*                                       Resource;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UITM_Trading_BasketItem_C*                           TradeBasket;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Trading_Resource.ITM_Trading_Resource_C.UpdateNumber
	 */
	struct UITM_Trading_Resource_C_UpdateNumber_Params
	{
	public:
		bool                                                       DoClearAnim;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DoTradeAnim;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K2DX[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InitialDelay;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Trading_Resource.ITM_Trading_Resource_C.SetAvailableBalance
	 */
	struct UITM_Trading_Resource_C_SetAvailableBalance_Params
	{
	public:
		int32_t                                                    CreditsLeft;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Trading_Resource.ITM_Trading_Resource_C.ClearAmount
	 */
	struct UITM_Trading_Resource_C_ClearAmount_Params
	{	};

	/**
	 * Function ITM_Trading_Resource.ITM_Trading_Resource_C.UpdateAmountOwned
	 */
	struct UITM_Trading_Resource_C_UpdateAmountOwned_Params
	{	};

	/**
	 * Function ITM_Trading_Resource.ITM_Trading_Resource_C.FadeFinished
	 */
	struct UITM_Trading_Resource_C_FadeFinished_Params
	{	};

	/**
	 * Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__Button_Hover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Trading_Resource_C_BndEvt__Button_Hover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__Button_Hover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Trading_Resource_C_BndEvt__Button_Hover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__B_Add_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 */
	struct UITM_Trading_Resource_C_BndEvt__B_Add_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__B_Add_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UITM_Trading_Resource_C_BndEvt__B_Add_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__B_Subtract_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 */
	struct UITM_Trading_Resource_C_BndEvt__B_Subtract_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Trading_Resource.ITM_Trading_Resource_C.BndEvt__B_Subtract_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UITM_Trading_Resource_C_BndEvt__B_Subtract_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Trading_Resource.ITM_Trading_Resource_C.IncrementAmount
	 */
	struct UITM_Trading_Resource_C_IncrementAmount_Params
	{	};

	/**
	 * Function ITM_Trading_Resource.ITM_Trading_Resource_C.Construct
	 */
	struct UITM_Trading_Resource_C_Construct_Params
	{	};

	/**
	 * Function ITM_Trading_Resource.ITM_Trading_Resource_C.ResourceUpdated
	 */
	struct UITM_Trading_Resource_C_ResourceUpdated_Params
	{
	public:
		class UResourceData*                                       Resource;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      currentAmount;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Trading_Resource.ITM_Trading_Resource_C.ExecuteUbergraph_ITM_Trading_Resource
	 */
	struct UITM_Trading_Resource_C_ExecuteUbergraph_ITM_Trading_Resource_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Trading_Resource.ITM_Trading_Resource_C.AmoutUpdated__DelegateSignature
	 */
	struct UITM_Trading_Resource_C_AmoutUpdated__DelegateSignature_Params
	{
	public:
		bool                                                       DoClearAnim;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DoTradeAnim;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
