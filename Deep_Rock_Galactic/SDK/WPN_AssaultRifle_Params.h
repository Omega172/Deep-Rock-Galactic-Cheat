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
	 * Function WPN_AssaultRifle.WPN_AssaultRifle_C.Receive_GetTPAnimationEventMesh
	 */
	struct AWPN_AssaultRifle_C_Receive_GetTPAnimationEventMesh_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_AssaultRifle.WPN_AssaultRifle_C.Receive_GetFPAnimationEventMesh
	 */
	struct AWPN_AssaultRifle_C_Receive_GetFPAnimationEventMesh_Params
	{
	public:
		class UFirstPersonStaticMeshComponent*                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_AssaultRifle.WPN_AssaultRifle_C.GetGearStatEntry
	 */
	struct AWPN_AssaultRifle_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_AssaultRifle.WPN_AssaultRifle_C.UserConstructionScript
	 */
	struct AWPN_AssaultRifle_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WPN_AssaultRifle.WPN_AssaultRifle_C.RecieveEquipped
	 */
	struct AWPN_AssaultRifle_C_RecieveEquipped_Params
	{	};

	/**
	 * Function WPN_AssaultRifle.WPN_AssaultRifle_C.Recieve_UpdateMeshses
	 */
	struct AWPN_AssaultRifle_C_Recieve_UpdateMeshses_Params
	{
	public:
		bool                                                       IsFirstPerson;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_AssaultRifle.WPN_AssaultRifle_C.ReceiveBeginPlay
	 */
	struct AWPN_AssaultRifle_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_AssaultRifle.WPN_AssaultRifle_C.Receive_ReloadBegin
	 */
	struct AWPN_AssaultRifle_C_Receive_ReloadBegin_Params
	{	};

	/**
	 * Function WPN_AssaultRifle.WPN_AssaultRifle_C.Receive_ReloadEnd
	 */
	struct AWPN_AssaultRifle_C_Receive_ReloadEnd_Params
	{	};

	/**
	 * Function WPN_AssaultRifle.WPN_AssaultRifle_C.OnSkinChanged
	 */
	struct AWPN_AssaultRifle_C_OnSkinChanged_Params
	{
	public:
		class USkinEffect*                                         Skin;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_AssaultRifle.WPN_AssaultRifle_C.ExecuteUbergraph_WPN_AssaultRifle
	 */
	struct AWPN_AssaultRifle_C_ExecuteUbergraph_WPN_AssaultRifle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
