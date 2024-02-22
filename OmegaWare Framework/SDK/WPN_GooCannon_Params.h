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
	 * Function WPN_GooCannon.WPN_GooCannon_C.ApplyUpgradeModifiers
	 */
	struct AWPN_GooCannon_C_ApplyUpgradeModifiers_Params
	{
	public:
		class UItemUpgrade*                                        ItemUpgrade;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_GooCannon.WPN_GooCannon_C.GetNearbyPuddles
	 */
	struct AWPN_GooCannon_C_GetNearbyPuddles_Params
	{	};

	/**
	 * Function WPN_GooCannon.WPN_GooCannon_C.FadeOutIfValid
	 */
	struct AWPN_GooCannon_C_FadeOutIfValid_Params
	{
	public:
		class UAudioComponent*                                     AC;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_GooCannon.WPN_GooCannon_C.Handle Charge Audio
	 */
	struct AWPN_GooCannon_C_HandleChargeAudio_Params
	{
	public:
		float                                                      charge;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_GooCannon.WPN_GooCannon_C.GetGearStatEntry
	 */
	struct AWPN_GooCannon_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_GooCannon.WPN_GooCannon_C.UserConstructionScript
	 */
	struct AWPN_GooCannon_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WPN_GooCannon.WPN_GooCannon_C.RecieveUnequipped
	 */
	struct AWPN_GooCannon_C_RecieveUnequipped_Params
	{	};

	/**
	 * Function WPN_GooCannon.WPN_GooCannon_C.AddedToInventory
	 */
	struct AWPN_GooCannon_C_AddedToInventory_Params
	{
	public:
		class APlayerCharacter*                                    ItemOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_GooCannon.WPN_GooCannon_C.OnChargeChanged_Event_1
	 */
	struct AWPN_GooCannon_C_OnChargeChanged_Event_1_Params
	{
	public:
		float                                                      charge;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_GooCannon.WPN_GooCannon_C.CustomEvent1
	 */
	struct AWPN_GooCannon_C_CustomEvent1_Params
	{
	public:
		class UItemUpgrade*                                        Event;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_GooCannon.WPN_GooCannon_C.ReloadEvent
	 */
	struct AWPN_GooCannon_C_ReloadEvent_Params
	{	};

	/**
	 * Function WPN_GooCannon.WPN_GooCannon_C.SuckInPuddle
	 */
	struct AWPN_GooCannon_C_SuckInPuddle_Params
	{
	public:
		class ABP_GooCannon_GooPuddle_C*                           puddle;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_GooCannon.WPN_GooCannon_C.ServerSuckInPuddle
	 */
	struct AWPN_GooCannon_C_ServerSuckInPuddle_Params
	{
	public:
		class ABP_GooCannon_GooPuddle_C*                           puddle;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_GooCannon.WPN_GooCannon_C.ReceiveBeginPlay
	 */
	struct AWPN_GooCannon_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_GooCannon.WPN_GooCannon_C.OnPuddleSuckedIn
	 */
	struct AWPN_GooCannon_C_OnPuddleSuckedIn_Params
	{	};

	/**
	 * Function WPN_GooCannon.WPN_GooCannon_C.ExecuteUbergraph_WPN_GooCannon
	 */
	struct AWPN_GooCannon_C_ExecuteUbergraph_WPN_GooCannon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X62H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
