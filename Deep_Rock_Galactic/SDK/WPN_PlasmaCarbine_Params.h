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
	 * Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.GetAmmoWidget
	 */
	struct AWPN_PlasmaCarbine_C_GetAmmoWidget_Params
	{
	public:
		class UWeaponDisplay_PlasmaCarbine_AmmoCounter_C*          AsWeaponDisplayPlasmaCarbineAmmoCounter;                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.SetUpgradesAndOverclocks
	 */
	struct AWPN_PlasmaCarbine_C_SetUpgradesAndOverclocks_Params
	{
	public:
		class UItemUpgrade*                                        ItemUpgrade;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.GetGearStatEntry
	 */
	struct AWPN_PlasmaCarbine_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.UserConstructionScript
	 */
	struct AWPN_PlasmaCarbine_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.Overheat Ammo Regen__FinishedFunc
	 */
	struct AWPN_PlasmaCarbine_C_OverheatAmmoRegen__FinishedFunc_Params
	{	};

	/**
	 * Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.Overheat Ammo Regen__UpdateFunc
	 */
	struct AWPN_PlasmaCarbine_C_OverheatAmmoRegen__UpdateFunc_Params
	{	};

	/**
	 * Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.ReceiveBeginPlay
	 */
	struct AWPN_PlasmaCarbine_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.CustomEvent1
	 */
	struct AWPN_PlasmaCarbine_C_CustomEvent1_Params
	{
	public:
		class UItemUpgrade*                                        Event;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.OnTemperatureChanged
	 */
	struct AWPN_PlasmaCarbine_C_OnTemperatureChanged_Params
	{
	public:
		float                                                      Temperature;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       overHeated;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.Receive_IsFiringChanged
	 */
	struct AWPN_PlasmaCarbine_C_Receive_IsFiringChanged_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.Receive_Overheated
	 */
	struct AWPN_PlasmaCarbine_C_Receive_Overheated_Params
	{	};

	/**
	 * Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.RecieveStartUsing
	 */
	struct AWPN_PlasmaCarbine_C_RecieveStartUsing_Params
	{	};

	/**
	 * Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.Server Trigger Aoe
	 */
	struct AWPN_PlasmaCarbine_C_ServerTriggerAoe_Params
	{	};

	/**
	 * Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.Trigger Aoe Effects
	 */
	struct AWPN_PlasmaCarbine_C_TriggerAoeEffects_Params
	{	};

	/**
	 * Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.ServerPushSpeedBoost
	 */
	struct AWPN_PlasmaCarbine_C_ServerPushSpeedBoost_Params
	{	};

	/**
	 * Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.OnSkinChanged
	 */
	struct AWPN_PlasmaCarbine_C_OnSkinChanged_Params
	{
	public:
		class USkinEffect*                                         Skin;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.ExecuteUbergraph_WPN_PlasmaCarbine
	 */
	struct AWPN_PlasmaCarbine_C_ExecuteUbergraph_WPN_PlasmaCarbine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
