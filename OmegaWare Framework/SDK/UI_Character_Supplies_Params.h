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
	 * Function UI_Character_Supplies.UI_Character_Supplies_C.HandleVisiblity
	 */
	struct UUI_Character_Supplies_C_HandleVisiblity_Params
	{	};

	/**
	 * Function UI_Character_Supplies.UI_Character_Supplies_C.SetData
	 */
	struct UUI_Character_Supplies_C_SetData_Params
	{
	public:
		class AFSDPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Character_Supplies.UI_Character_Supplies_C.OnSupplyStatusChangedEvent
	 */
	struct UUI_Character_Supplies_C_OnSupplyStatusChangedEvent_Params
	{
	public:
		float                                                      ammoStatus01;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      healthStatus01;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Character_Supplies.UI_Character_Supplies_C.PreConstruct
	 */
	struct UUI_Character_Supplies_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Character_Supplies.UI_Character_Supplies_C.ExecuteUbergraph_UI_Character_Supplies
	 */
	struct UUI_Character_Supplies_C_ExecuteUbergraph_UI_Character_Supplies_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_731L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
