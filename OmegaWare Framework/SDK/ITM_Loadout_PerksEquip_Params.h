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
	 * Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.GetEquippedPerksByType
	 */
	struct UITM_Loadout_PerksEquip_C_GetEquippedPerksByType_Params
	{
	public:
		class UPlayerCharacterID*                                  InCharacterClass;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPerkUsageType                                             InType;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DGWB[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UPerkAsset*>                                  OutPerks;                                                // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.SelectSlot
	 */
	struct UITM_Loadout_PerksEquip_C_SelectSlot_Params
	{
	public:
		class UITM_LoadOut_PerksEquip_Slot_C*                      InSlot;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.CreateSlots
	 */
	struct UITM_Loadout_PerksEquip_C_CreateSlots_Params
	{
	public:
		class UVerticalBox*                                        InSlotsBox;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPlayerCharacterID*                                  InCharacter;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPerkUsageType                                             InType;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B2HG[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.UpdateSlots
	 */
	struct UITM_Loadout_PerksEquip_C_UpdateSlots_Params
	{	};

	/**
	 * Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Get_PerkStar_ToolTipWidget_1
	 */
	struct UITM_Loadout_PerksEquip_C_Get_PerkStar_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.GetEquippedPerkAt
	 */
	struct UITM_Loadout_PerksEquip_C_GetEquippedPerkAt_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9PDV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UPerkAsset*>                                  TargetArray;                                             // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UPerkAsset*                                          Perk;                                                    // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.UpdateEquippedPerks
	 */
	struct UITM_Loadout_PerksEquip_C_UpdateEquippedPerks_Params
	{	};

	/**
	 * Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Set Character Class
	 */
	struct UITM_Loadout_PerksEquip_C_SetCharacterClass_Params
	{
	public:
		class UPlayerCharacterID*                                  characterID;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature
	 */
	struct UITM_Loadout_PerksEquip_C_BndEvt__ITM_Loadout_PerksEquip_Selection_K2Node_ComponentBoundEvent_4_OnPerkClicked__DelegateSignature_Params
	{
	public:
		class UPerkAsset*                                          PerkAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.Construct
	 */
	struct UITM_Loadout_PerksEquip_C_Construct_Params
	{	};

	/**
	 * Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.PreConstruct
	 */
	struct UITM_Loadout_PerksEquip_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Loadout_PerksEquip.ITM_Loadout_PerksEquip_C.ExecuteUbergraph_ITM_Loadout_PerksEquip
	 */
	struct UITM_Loadout_PerksEquip_C_ExecuteUbergraph_ITM_Loadout_PerksEquip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
