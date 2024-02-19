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
	 * Function LoreScreen_Master.LoreScreen_Master_C.OnShown
	 */
	struct ULoreScreen_Master_C_OnShown_Params
	{	};

	/**
	 * Function LoreScreen_Master.LoreScreen_Master_C.RefreshContent
	 */
	struct ULoreScreen_Master_C_RefreshContent_Params
	{	};

	/**
	 * Function LoreScreen_Master.LoreScreen_Master_C.PlayIntroAnim
	 */
	struct ULoreScreen_Master_C_PlayIntroAnim_Params
	{	};

	/**
	 * Function LoreScreen_Master.LoreScreen_Master_C.ExecuteUbergraph_LoreScreen_Master
	 */
	struct ULoreScreen_Master_C_ExecuteUbergraph_LoreScreen_Master_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V7PE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
