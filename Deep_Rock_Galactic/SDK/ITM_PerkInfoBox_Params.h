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
	 * Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.GetEquippedPerkAt
	 */
	struct UITM_PerkInfoBox_C_GetEquippedPerkAt_Params
	{
	public:
		int32_t                                                    Idx;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IR8K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UPerkAsset*>                                  perks;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UPerkAsset*                                          Perk;                                                    // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.CreateSlots
	 */
	struct UITM_PerkInfoBox_C_CreateSlots_Params
	{
	public:
		class UPanelWidget*                                        InSlotsBox;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPerkUsageType                                             InType;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_55OI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.GetEquippedPerksByType
	 */
	struct UITM_PerkInfoBox_C_GetEquippedPerksByType_Params
	{
	public:
		class UPlayerCharacterID*                                  InCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPerkUsageType                                             InType;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8EX1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UPerkAsset*>                                  perks;                                                   // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.Construct
	 */
	struct UITM_PerkInfoBox_C_Construct_Params
	{	};

	/**
	 * Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.PreConstruct
	 */
	struct UITM_PerkInfoBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.Update
	 */
	struct UITM_PerkInfoBox_C_Update_Params
	{	};

	/**
	 * Function ITM_PerkInfoBox.ITM_PerkInfoBox_C.ExecuteUbergraph_ITM_PerkInfoBox
	 */
	struct UITM_PerkInfoBox_C_ExecuteUbergraph_ITM_PerkInfoBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
