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
	 * Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.Refresh
	 */
	struct UITM_Craft_ResourceSmall_C_Refresh_Params
	{	};

	/**
	 * Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.SetAmount
	 */
	struct UITM_Craft_ResourceSmall_C_SetAmount_Params
	{
	public:
		float                                                      InAmount;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.PreConstruct
	 */
	struct UITM_Craft_ResourceSmall_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.ExecuteUbergraph_ITM_Craft_ResourceSmall
	 */
	struct UITM_Craft_ResourceSmall_C_ExecuteUbergraph_ITM_Craft_ResourceSmall_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
