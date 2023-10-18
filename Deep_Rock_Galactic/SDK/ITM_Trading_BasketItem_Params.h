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
	 * Function ITM_Trading_BasketItem.ITM_Trading_BasketItem_C.PreConstruct
	 */
	struct UITM_Trading_BasketItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Trading_BasketItem.ITM_Trading_BasketItem_C.SetResource
	 */
	struct UITM_Trading_BasketItem_C_SetResource_Params
	{
	public:
		class UResourceData*                                       Resource;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Trading_BasketItem.ITM_Trading_BasketItem_C.UpdateNumber
	 */
	struct UITM_Trading_BasketItem_C_UpdateNumber_Params
	{
	public:
		int32_t                                                    ChangeAmount;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DoAnim;                                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DoTadeAnim;                                              // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Trading_BasketItem.ITM_Trading_BasketItem_C.Construct
	 */
	struct UITM_Trading_BasketItem_C_Construct_Params
	{	};

	/**
	 * Function ITM_Trading_BasketItem.ITM_Trading_BasketItem_C.OnIntroFinished
	 */
	struct UITM_Trading_BasketItem_C_OnIntroFinished_Params
	{	};

	/**
	 * Function ITM_Trading_BasketItem.ITM_Trading_BasketItem_C.ExecuteUbergraph_ITM_Trading_BasketItem
	 */
	struct UITM_Trading_BasketItem_C_ExecuteUbergraph_ITM_Trading_BasketItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
