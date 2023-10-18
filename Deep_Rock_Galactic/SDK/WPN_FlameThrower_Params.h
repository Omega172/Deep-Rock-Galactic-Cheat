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
	 * Function WPN_FlameThrower.WPN_FlameThrower_C.SetTorchTimeoutHack
	 */
	struct AWPN_FlameThrower_C_SetTorchTimeoutHack_Params
	{	};

	/**
	 * Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_GetTPAnimationEventMesh
	 */
	struct AWPN_FlameThrower_C_Receive_GetTPAnimationEventMesh_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_GetFPAnimationEventMesh
	 */
	struct AWPN_FlameThrower_C_Receive_GetFPAnimationEventMesh_Params
	{
	public:
		class UFirstPersonStaticMeshComponent*                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_FlameThrower.WPN_FlameThrower_C.GetGearStatEntry
	 */
	struct AWPN_FlameThrower_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_FlameThrower.WPN_FlameThrower_C.UserConstructionScript
	 */
	struct AWPN_FlameThrower_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WPN_FlameThrower.WPN_FlameThrower_C.ReceiveBeginPlay
	 */
	struct AWPN_FlameThrower_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_FlameThrower.WPN_FlameThrower_C.RecieveEquipped
	 */
	struct AWPN_FlameThrower_C_RecieveEquipped_Params
	{	};

	/**
	 * Function WPN_FlameThrower.WPN_FlameThrower_C.RecieveUnequipped
	 */
	struct AWPN_FlameThrower_C_RecieveUnequipped_Params
	{	};

	/**
	 * Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_ReloadBegin
	 */
	struct AWPN_FlameThrower_C_Receive_ReloadBegin_Params
	{	};

	/**
	 * Function WPN_FlameThrower.WPN_FlameThrower_C.Receive_ReloadEnd
	 */
	struct AWPN_FlameThrower_C_Receive_ReloadEnd_Params
	{	};

	/**
	 * Function WPN_FlameThrower.WPN_FlameThrower_C.Recieve_UpdateMeshses
	 */
	struct AWPN_FlameThrower_C_Recieve_UpdateMeshses_Params
	{
	public:
		bool                                                       IsFirstPerson;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_FlameThrower.WPN_FlameThrower_C.AddedToInventory
	 */
	struct AWPN_FlameThrower_C_AddedToInventory_Params
	{
	public:
		class APlayerCharacter*                                    ItemOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_FlameThrower.WPN_FlameThrower_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature
	 */
	struct AWPN_FlameThrower_C_BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature_Params
	{	};

	/**
	 * Function WPN_FlameThrower.WPN_FlameThrower_C.OnSkinChanged
	 */
	struct AWPN_FlameThrower_C_OnSkinChanged_Params
	{
	public:
		class USkinEffect*                                         Skin;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_FlameThrower.WPN_FlameThrower_C.ExecuteUbergraph_WPN_FlameThrower
	 */
	struct AWPN_FlameThrower_C_ExecuteUbergraph_WPN_FlameThrower_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BOGE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
