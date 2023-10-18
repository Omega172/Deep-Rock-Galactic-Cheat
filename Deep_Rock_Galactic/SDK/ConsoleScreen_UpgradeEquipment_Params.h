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
	 * Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.Construct
	 */
	struct UConsoleScreen_UpgradeEquipment_C_Construct_Params
	{	};

	/**
	 * Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.PreConstruct
	 */
	struct UConsoleScreen_UpgradeEquipment_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.OnItemUnlocked_Event
	 */
	struct UConsoleScreen_UpgradeEquipment_C_OnItemUnlocked_Event_Params
	{	};

	/**
	 * Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.UpdateNotification
	 */
	struct UConsoleScreen_UpgradeEquipment_C_UpdateNotification_Params
	{	};

	/**
	 * Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.OnSkinUnlocked
	 */
	struct UConsoleScreen_UpgradeEquipment_C_OnSkinUnlocked_Params
	{
	public:
		class UItemSkin*                                           Skin;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UItemID*                                             ItemID;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.ExecuteUbergraph_ConsoleScreen_UpgradeEquipment
	 */
	struct UConsoleScreen_UpgradeEquipment_C_ExecuteUbergraph_ConsoleScreen_UpgradeEquipment_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
