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
	 * Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.TwinsCustomAttack
	 */
	struct ULore_Container_CreatureInfo_C_TwinsCustomAttack_Params
	{
	public:
		class UEnemyMinersManualData*                              enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.GetTypeText
	 */
	struct ULore_Container_CreatureInfo_C_GetTypeText_Params
	{
	public:
		EEnemyType                                                 InType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TCIE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                DisplayText;                                             // 0x0008(0x0018)  (Parm, OutParm)
		class UTexture2D*                                          Icon;                                                    // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.SetData
	 */
	struct ULore_Container_CreatureInfo_C_SetData_Params
	{
	public:
		class UEnemyMinersManualData*                              Creature;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMinersManual*                                       MinersManual;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.FillInAttacks
	 */
	struct ULore_Container_CreatureInfo_C_FillInAttacks_Params
	{
	public:
		class UWrapBox*                                            Container;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FEnemyAttackDescription>                     Attacks;                                                 // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.ExecuteUbergraph_Lore_Container_CreatureInfo
	 */
	struct ULore_Container_CreatureInfo_C_ExecuteUbergraph_Lore_Container_CreatureInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
