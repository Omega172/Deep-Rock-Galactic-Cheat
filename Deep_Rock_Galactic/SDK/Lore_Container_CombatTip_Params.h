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
	 * Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.SetText
	 */
	struct ULore_Container_CombatTip_C_SetText_Params
	{
	public:
		class FText                                                Headline;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Body;                                                    // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.PreConstruct
	 */
	struct ULore_Container_CombatTip_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.PlayIntro
	 */
	struct ULore_Container_CombatTip_C_PlayIntro_Params
	{	};

	/**
	 * Function Lore_Container_CombatTip.Lore_Container_CombatTip_C.ExecuteUbergraph_Lore_Container_CombatTip
	 */
	struct ULore_Container_CombatTip_C_ExecuteUbergraph_Lore_Container_CombatTip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M5CW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
