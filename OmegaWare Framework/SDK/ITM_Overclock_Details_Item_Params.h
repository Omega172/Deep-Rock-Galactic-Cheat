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
	 * Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.SetFontSize
	 */
	struct UITM_Overclock_Details_Item_C_SetFontSize_Params
	{
	public:
		int32_t                                                    NewSize;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.SetData
	 */
	struct UITM_Overclock_Details_Item_C_SetData_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       InIsAdvantagous;                                         // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.PreConstruct
	 */
	struct UITM_Overclock_Details_Item_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Overclock_Details_Item.ITM_Overclock_Details_Item_C.ExecuteUbergraph_ITM_Overclock_Details_Item
	 */
	struct UITM_Overclock_Details_Item_C_ExecuteUbergraph_ITM_Overclock_Details_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
