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
	 * Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetProgress
	 */
	struct UITM_SupplyBarItem_C_SetProgress_Params
	{
	public:
		float                                                      InProgress;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetColors
	 */
	struct UITM_SupplyBarItem_C_SetColors_Params
	{
	public:
		ENUM_MenuColors                                            InBorderColor;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENUM_MenuColors                                            InInnerColor;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENUM_MenuColors                                            InLowColorColor;                                         // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetOn
	 */
	struct UITM_SupplyBarItem_C_SetOn_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.PreConstruct
	 */
	struct UITM_SupplyBarItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.Construct
	 */
	struct UITM_SupplyBarItem_C_Construct_Params
	{	};

	/**
	 * Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.OnBlinkingFinished
	 */
	struct UITM_SupplyBarItem_C_OnBlinkingFinished_Params
	{	};

	/**
	 * Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.ExecuteUbergraph_ITM_SupplyBarItem
	 */
	struct UITM_SupplyBarItem_C_ExecuteUbergraph_ITM_SupplyBarItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
