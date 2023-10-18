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
	 * Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.SetShowShopSign
	 */
	struct UConsoleScreen_Crafting_C_SetShowShopSign_Params
	{
	public:
		bool                                                       ShowShopSign;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.Construct
	 */
	struct UConsoleScreen_Crafting_C_Construct_Params
	{	};

	/**
	 * Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.Notification Change
	 */
	struct UConsoleScreen_Crafting_C_NotificationChange_Params
	{	};

	/**
	 * Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.PreConstruct
	 */
	struct UConsoleScreen_Crafting_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.ExecuteUbergraph_ConsoleScreen_Crafting
	 */
	struct UConsoleScreen_Crafting_C_ExecuteUbergraph_ConsoleScreen_Crafting_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M584[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
