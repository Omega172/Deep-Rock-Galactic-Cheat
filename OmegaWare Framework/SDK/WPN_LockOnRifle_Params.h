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
	 * Function WPN_LockOnRifle.WPN_LockOnRifle_C.GetGearStatEntry
	 */
	struct AWPN_LockOnRifle_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_LockOnRifle.WPN_LockOnRifle_C.ReceiveBeginPlay
	 */
	struct AWPN_LockOnRifle_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_LockOnRifle.WPN_LockOnRifle_C.LockingStarted_Event
	 */
	struct AWPN_LockOnRifle_C_LockingStarted_Event_Params
	{	};

	/**
	 * Function WPN_LockOnRifle.WPN_LockOnRifle_C.LockingStopped_Event
	 */
	struct AWPN_LockOnRifle_C_LockingStopped_Event_Params
	{	};

	/**
	 * Function WPN_LockOnRifle.WPN_LockOnRifle_C.CustomEvent1
	 */
	struct AWPN_LockOnRifle_C_CustomEvent1_Params
	{
	public:
		class UItemUpgrade*                                        Event;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_LockOnRifle.WPN_LockOnRifle_C.Recieve_UpdateMeshses
	 */
	struct AWPN_LockOnRifle_C_Recieve_UpdateMeshses_Params
	{
	public:
		bool                                                       IsFirstPerson;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_LockOnRifle.WPN_LockOnRifle_C.RecieveEquipped
	 */
	struct AWPN_LockOnRifle_C_RecieveEquipped_Params
	{	};

	/**
	 * Function WPN_LockOnRifle.WPN_LockOnRifle_C.OnSkinChanged
	 */
	struct AWPN_LockOnRifle_C_OnSkinChanged_Params
	{
	public:
		class USkinEffect*                                         Skin;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_LockOnRifle.WPN_LockOnRifle_C.Receive_ReloadBegin
	 */
	struct AWPN_LockOnRifle_C_Receive_ReloadBegin_Params
	{	};

	/**
	 * Function WPN_LockOnRifle.WPN_LockOnRifle_C.Receive_ReloadEnd
	 */
	struct AWPN_LockOnRifle_C_Receive_ReloadEnd_Params
	{	};

	/**
	 * Function WPN_LockOnRifle.WPN_LockOnRifle_C.ExecuteUbergraph_WPN_LockOnRifle
	 */
	struct AWPN_LockOnRifle_C_ExecuteUbergraph_WPN_LockOnRifle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
