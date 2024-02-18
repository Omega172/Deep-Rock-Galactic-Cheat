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
	 * Function ConsoleScreen_Bosco.ConsoleScreen_Bosco_C.Construct
	 */
	struct UConsoleScreen_Bosco_C_Construct_Params
	{	};

	/**
	 * Function ConsoleScreen_Bosco.ConsoleScreen_Bosco_C.PreConstruct
	 */
	struct UConsoleScreen_Bosco_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConsoleScreen_Bosco.ConsoleScreen_Bosco_C.UpdateUINotification
	 */
	struct UConsoleScreen_Bosco_C_UpdateUINotification_Params
	{	};

	/**
	 * Function ConsoleScreen_Bosco.ConsoleScreen_Bosco_C.OnSkinUnlocked
	 */
	struct UConsoleScreen_Bosco_C_OnSkinUnlocked_Params
	{
	public:
		class UItemSkin*                                           Skin;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UItemID*                                             ItemID;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConsoleScreen_Bosco.ConsoleScreen_Bosco_C.ExecuteUbergraph_ConsoleScreen_Bosco
	 */
	struct UConsoleScreen_Bosco_C_ExecuteUbergraph_ConsoleScreen_Bosco_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
