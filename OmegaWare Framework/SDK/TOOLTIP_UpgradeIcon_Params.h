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
	 * Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.SetAlignment
	 */
	struct UTOOLTIP_UpgradeIcon_C_SetAlignment_Params
	{
	public:
		struct FVector2D                                           InAlignment;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.UpdateDetailVisibility
	 */
	struct UTOOLTIP_UpgradeIcon_C_UpdateDetailVisibility_Params
	{	};

	/**
	 * Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.Update
	 */
	struct UTOOLTIP_UpgradeIcon_C_Update_Params
	{
	public:
		class UItemUpgradeCategory*                                Category;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                InUpgradeName;                                           // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InUpgradeDescription;                                    // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EItemUpgradeStatus                                         InStatus;                                                // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WB2H[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FCraftingCost>                               InCost;                                                  // 0x0040(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       InCanUnequip;                                            // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShowUpgradeStatus;                                       // 0x0051(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.PreConstruct
	 */
	struct UTOOLTIP_UpgradeIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.Construct
	 */
	struct UTOOLTIP_UpgradeIcon_C_Construct_Params
	{	};

	/**
	 * Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.OnShowUpgradeExtraDetailsChanged
	 */
	struct UTOOLTIP_UpgradeIcon_C_OnShowUpgradeExtraDetailsChanged_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.ExecuteUbergraph_TOOLTIP_UpgradeIcon
	 */
	struct UTOOLTIP_UpgradeIcon_C_ExecuteUbergraph_TOOLTIP_UpgradeIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
