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
	 * Function TextField_SeeThrough.TextField_SeeThrough_C.SetShowBG
	 */
	struct UTextField_SeeThrough_C_SetShowBG_Params
	{
	public:
		bool                                                       ShowBG;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TextField_SeeThrough.TextField_SeeThrough_C.SetTextSize
	 */
	struct UTextField_SeeThrough_C_SetTextSize_Params
	{
	public:
		int32_t                                                    TextSize;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TextField_SeeThrough.TextField_SeeThrough_C.SetText
	 */
	struct UTextField_SeeThrough_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TextField_SeeThrough.TextField_SeeThrough_C.PreConstruct
	 */
	struct UTextField_SeeThrough_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TextField_SeeThrough.TextField_SeeThrough_C.ExecuteUbergraph_TextField_SeeThrough
	 */
	struct UTextField_SeeThrough_C_ExecuteUbergraph_TextField_SeeThrough_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
