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
	 * Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.IsUnlocked
	 */
	struct UUI_Perks_Column_Unlocks_C_IsUnlocked_Params
	{
	public:
		bool                                                       Unlocked;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.PreConstruct
	 */
	struct UUI_Perks_Column_Unlocks_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.Set Arrow Count
	 */
	struct UUI_Perks_Column_Unlocks_C_SetArrowCount_Params
	{
	public:
		int32_t                                                    ArrowCount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UnlockedCount;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.Set Unlocked Count
	 */
	struct UUI_Perks_Column_Unlocks_C_SetUnlockedCount_Params
	{
	public:
		int32_t                                                    UnlockedCount;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.ExecuteUbergraph_UI_Perks_Column_Unlocks
	 */
	struct UUI_Perks_Column_Unlocks_C_ExecuteUbergraph_UI_Perks_Column_Unlocks_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
