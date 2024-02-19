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
	 * Function UI_VanityEventSource.UI_VanityEventSource_C.FromVanityItem
	 */
	struct UUI_VanityEventSource_C_FromVanityItem_Params
	{
	public:
		class UVanityItem*                                         InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_VanityEventSource.UI_VanityEventSource_C.SetSourceData
	 */
	struct UUI_VanityEventSource_C_SetSourceData_Params
	{
	public:
		struct FVanityEventSource                                  InData;                                                  // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_VanityEventSource.UI_VanityEventSource_C.PreConstruct
	 */
	struct UUI_VanityEventSource_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_VanityEventSource.UI_VanityEventSource_C.ExecuteUbergraph_UI_VanityEventSource
	 */
	struct UUI_VanityEventSource_C_ExecuteUbergraph_UI_VanityEventSource_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
