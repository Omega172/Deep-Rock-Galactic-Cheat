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
	 * Function TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C.PreConstruct
	 */
	struct UTOOLTIP_Overclock_Item_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C.SetOverclock
	 */
	struct UTOOLTIP_Overclock_Item_C_SetOverclock_Params
	{
	public:
		class UItemUpgrade*                                        Overclock;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C.ExecuteUbergraph_TOOLTIP_Overclock_Item
	 */
	struct UTOOLTIP_Overclock_Item_C_ExecuteUbergraph_TOOLTIP_Overclock_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
