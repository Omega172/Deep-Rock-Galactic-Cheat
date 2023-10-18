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
	 * Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.UpdateBackBar
	 */
	struct UITM_UpgGear_TierRow_C_UpdateBackBar_Params
	{	};

	/**
	 * Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.SetPurchasedShout
	 */
	struct UITM_UpgGear_TierRow_C_SetPurchasedShout_Params
	{
	public:
		class UDialogDataAsset*                                    InShout;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.GetIsRowLocked
	 */
	struct UITM_UpgGear_TierRow_C_GetIsRowLocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M9ZD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.PreConstruct
	 */
	struct UITM_UpgGear_TierRow_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Construct
	 */
	struct UITM_UpgGear_TierRow_C_Construct_Params
	{	};

	/**
	 * Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Initialize Upgrade Widget
	 */
	struct UITM_UpgGear_TierRow_C_InitializeUpgradeWidget_Params
	{
	public:
		class UITM_UpgGear_UpgIconSingle_C*                        Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Refresh
	 */
	struct UITM_UpgGear_TierRow_C_Refresh_Params
	{	};

	/**
	 * Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.EquipUpgrade
	 */
	struct UITM_UpgGear_TierRow_C_EquipUpgrade_Params
	{
	public:
		class UITM_UpgGear_UpgIconSingle_C*                        UpgradeWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.PurchaseUpgrade
	 */
	struct UITM_UpgGear_TierRow_C_PurchaseUpgrade_Params
	{
	public:
		class UITM_UpgGear_UpgIconSingle_C*                        UpgradeWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnPurchaseConfirmation
	 */
	struct UITM_UpgGear_TierRow_C_OnPurchaseConfirmation_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Refresh Tier Icon
	 */
	struct UITM_UpgGear_TierRow_C_RefreshTierIcon_Params
	{	};

	/**
	 * Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.Unequip Upgrade
	 */
	struct UITM_UpgGear_TierRow_C_UnequipUpgrade_Params
	{
	public:
		class UITM_UpgGear_UpgIconSingle_C*                        Upgrade;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgradeHovered
	 */
	struct UITM_UpgGear_TierRow_C_OnUpgradeHovered_Params
	{
	public:
		class UITM_UpgGear_UpgIconSingle_C*                        Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgradeUnhovered
	 */
	struct UITM_UpgGear_TierRow_C_OnUpgradeUnhovered_Params
	{
	public:
		class UITM_UpgGear_UpgIconSingle_C*                        Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.OnUpgrade Clicked
	 */
	struct UITM_UpgGear_TierRow_C_OnUpgradeClicked_Params
	{
	public:
		class UITM_UpgGear_UpgIconSingle_C*                        Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_TierRow.ITM_UpgGear_TierRow_C.ExecuteUbergraph_ITM_UpgGear_TierRow
	 */
	struct UITM_UpgGear_TierRow_C_ExecuteUbergraph_ITM_UpgGear_TierRow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7NKW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
