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
	 * Function UI_DLC_Indicator.UI_DLC_Indicator_C.SetFromDLC
	 */
	struct UUI_DLC_Indicator_C_SetFromDLC_Params
	{
	public:
		class UDLCBase*                                            InFromDLC;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DLC_Indicator.UI_DLC_Indicator_C.SetFromSkin
	 */
	struct UUI_DLC_Indicator_C_SetFromSkin_Params
	{
	public:
		class UItemSkin*                                           InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_DLC_Indicator.UI_DLC_Indicator_C.PreConstruct
	 */
	struct UUI_DLC_Indicator_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_DLC_Indicator.UI_DLC_Indicator_C.Construct
	 */
	struct UUI_DLC_Indicator_C_Construct_Params
	{	};

	/**
	 * Function UI_DLC_Indicator.UI_DLC_Indicator_C.ExecuteUbergraph_UI_DLC_Indicator
	 */
	struct UUI_DLC_Indicator_C_ExecuteUbergraph_UI_DLC_Indicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
