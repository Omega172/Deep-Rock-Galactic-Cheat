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
	 * Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.PreConstruct
	 */
	struct ULore_Content_Weaknesses_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.ClearChildren
	 */
	struct ULore_Content_Weaknesses_C_ClearChildren_Params
	{	};

	/**
	 * Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.AddIcon
	 */
	struct ULore_Content_Weaknesses_C_AddIcon_Params
	{
	public:
		struct FDamageTypeDescription                              Icon;                                                    // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.PlayFade
	 */
	struct ULore_Content_Weaknesses_C_PlayFade_Params
	{
	public:
		bool                                                       Forward;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Lore_Content_Weaknesses.Lore_Content_Weaknesses_C.ExecuteUbergraph_Lore_Content_Weaknesses
	 */
	struct ULore_Content_Weaknesses_C_ExecuteUbergraph_Lore_Content_Weaknesses_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
