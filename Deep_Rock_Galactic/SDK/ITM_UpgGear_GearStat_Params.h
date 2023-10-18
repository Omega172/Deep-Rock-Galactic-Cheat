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
	 * Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.SetGearStat
	 */
	struct UITM_UpgGear_GearStat_C_SetGearStat_Params
	{
	public:
		struct FGearStatEntry                                      InStat;                                                  // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.SetData
	 */
	struct UITM_UpgGear_GearStat_C_SetData_Params
	{
	public:
		class FText                                                InStatName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InStatValue;                                             // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InStatBaseValue;                                         // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InStatUpgradeValue;                                      // 0x0048(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EItemPreviewStatus                                         InItemPreviewStatus;                                     // 0x0060(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.PreConstruct
	 */
	struct UITM_UpgGear_GearStat_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.ExecuteUbergraph_ITM_UpgGear_GearStat
	 */
	struct UITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
