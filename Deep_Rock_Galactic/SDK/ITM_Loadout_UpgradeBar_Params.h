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
	 * Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.ShowItemUpgrades
	 */
	struct UITM_Loadout_UpgradeBar_C_ShowItemUpgrades_Params
	{
	public:
		class UPlayerCharacterID*                                  inCharacterID;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              InItemClass;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AFSDPlayerState*                                     InPlayerState;                                           // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       EnableHoverTooltip;                                      // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E3PZ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.GetUpgradeFromList
	 */
	struct UITM_Loadout_UpgradeBar_C_GetUpgradeFromList_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GH71[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UItemUpgrade*>                                upgrades;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UItemUpgrade*                                        Output;                                                  // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.Construct
	 */
	struct UITM_Loadout_UpgradeBar_C_Construct_Params
	{	};

	/**
	 * Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.PreConstruct
	 */
	struct UITM_Loadout_UpgradeBar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.ExecuteUbergraph_ITM_Loadout_UpgradeBar
	 */
	struct UITM_Loadout_UpgradeBar_C_ExecuteUbergraph_ITM_Loadout_UpgradeBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
