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
	 * Function LoreScreen_Creatures.LoreScreen_Creatures_C.Construct
	 */
	struct ULoreScreen_Creatures_C_Construct_Params
	{	};

	/**
	 * Function LoreScreen_Creatures.LoreScreen_Creatures_C.RefreshContent
	 */
	struct ULoreScreen_Creatures_C_RefreshContent_Params
	{	};

	/**
	 * Function LoreScreen_Creatures.LoreScreen_Creatures_C.RefreshCreature
	 */
	struct ULoreScreen_Creatures_C_RefreshCreature_Params
	{	};

	/**
	 * Function LoreScreen_Creatures.LoreScreen_Creatures_C.FadeOutFinished
	 */
	struct ULoreScreen_Creatures_C_FadeOutFinished_Params
	{	};

	/**
	 * Function LoreScreen_Creatures.LoreScreen_Creatures_C.ShowCreature
	 */
	struct ULoreScreen_Creatures_C_ShowCreature_Params
	{	};

	/**
	 * Function LoreScreen_Creatures.LoreScreen_Creatures_C.Tick
	 */
	struct ULoreScreen_Creatures_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LoreScreen_Creatures.LoreScreen_Creatures_C.ExecuteUbergraph_LoreScreen_Creatures
	 */
	struct ULoreScreen_Creatures_C_ExecuteUbergraph_LoreScreen_Creatures_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_45EG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
