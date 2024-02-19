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
	 * Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.PreConstruct
	 */
	struct UHUD_ObjectiveBox_Item_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.ReceiveObjectiveInitialized
	 */
	struct UHUD_ObjectiveBox_Item_C_ReceiveObjectiveInitialized_Params
	{	};

	/**
	 * Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.ReceiveObjectiveUpdated
	 */
	struct UHUD_ObjectiveBox_Item_C_ReceiveObjectiveUpdated_Params
	{	};

	/**
	 * Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.ExecuteUbergraph_HUD_ObjectiveBox_Item
	 */
	struct UHUD_ObjectiveBox_Item_C_ExecuteUbergraph_HUD_ObjectiveBox_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
