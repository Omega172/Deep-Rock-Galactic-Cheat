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
	 * Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.SetData
	 */
	struct ULore_InfoBoxAttack_C_SetData_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FDamageTypeDescription                              Icon;                                                    // 0x0018(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                GrayText;                                                // 0x0090(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.PreConstruct
	 */
	struct ULore_InfoBoxAttack_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.SetColor
	 */
	struct ULore_InfoBoxAttack_C_SetColor_Params
	{
	public:
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lore_InfoBoxAttack.Lore_InfoBoxAttack_C.ExecuteUbergraph_Lore_InfoBoxAttack
	 */
	struct ULore_InfoBoxAttack_C_ExecuteUbergraph_Lore_InfoBoxAttack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
