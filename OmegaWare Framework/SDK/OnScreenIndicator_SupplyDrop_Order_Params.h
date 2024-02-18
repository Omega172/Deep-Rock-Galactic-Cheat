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
	 * Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.SetDetails
	 */
	struct UOnScreenIndicator_SupplyDrop_Order_C_SetDetails_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Cost;                                                    // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TDSS[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UResourceData*                                       ResourceRequired;                                        // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.PreConstruct
	 */
	struct UOnScreenIndicator_SupplyDrop_Order_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order
	 */
	struct UOnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
