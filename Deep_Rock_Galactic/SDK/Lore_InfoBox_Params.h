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
	 * Function Lore_InfoBox.Lore_InfoBox_C.SetData
	 */
	struct ULore_InfoBox_C_SetData_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FObjectiveMissionIcon                               Icon;                                                    // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class FText                                                GrayText;                                                // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Lore_InfoBox.Lore_InfoBox_C.PreConstruct
	 */
	struct ULore_InfoBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Lore_InfoBox.Lore_InfoBox_C.SetColor
	 */
	struct ULore_InfoBox_C_SetColor_Params
	{
	public:
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lore_InfoBox.Lore_InfoBox_C.ExecuteUbergraph_Lore_InfoBox
	 */
	struct ULore_InfoBox_C_ExecuteUbergraph_Lore_InfoBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
