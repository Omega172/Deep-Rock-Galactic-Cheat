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
	 * Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_GetTPAnimationEventMesh
	 */
	struct AWPN_SMG_OneHand_C_Receive_GetTPAnimationEventMesh_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_GetFPAnimationEventMesh
	 */
	struct AWPN_SMG_OneHand_C_Receive_GetFPAnimationEventMesh_Params
	{
	public:
		class UFirstPersonStaticMeshComponent*                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.GetElectrutionChance
	 */
	struct AWPN_SMG_OneHand_C_GetElectrutionChance_Params
	{
	public:
		float                                                      Chance;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.GetGearStatEntry
	 */
	struct AWPN_SMG_OneHand_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.UserConstructionScript
	 */
	struct AWPN_SMG_OneHand_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Recieve_UpdateMeshses
	 */
	struct AWPN_SMG_OneHand_C_Recieve_UpdateMeshses_Params
	{
	public:
		bool                                                       IsFirstPerson;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.ReceiveBeginPlay
	 */
	struct AWPN_SMG_OneHand_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_ReloadBegin
	 */
	struct AWPN_SMG_OneHand_C_Receive_ReloadBegin_Params
	{	};

	/**
	 * Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_ReloadEnd
	 */
	struct AWPN_SMG_OneHand_C_Receive_ReloadEnd_Params
	{	};

	/**
	 * Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.CustomEvent1
	 */
	struct AWPN_SMG_OneHand_C_CustomEvent1_Params
	{
	public:
		class UItemUpgrade*                                        Event;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.ElectriyPlatform
	 */
	struct AWPN_SMG_OneHand_C_ElectriyPlatform_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       alwaysPenetrate;                                         // 0x0088(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Server_OnHit
	 */
	struct AWPN_SMG_OneHand_C_Server_OnHit_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.OnSkinChanged
	 */
	struct AWPN_SMG_OneHand_C_OnSkinChanged_Params
	{
	public:
		class USkinEffect*                                         Skin;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.RecieveUnequipped
	 */
	struct AWPN_SMG_OneHand_C_RecieveUnequipped_Params
	{	};

	/**
	 * Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.StopEMDischargeCheck
	 */
	struct AWPN_SMG_OneHand_C_StopEMDischargeCheck_Params
	{	};

	/**
	 * Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.ExecuteUbergraph_WPN_SMG_OneHand
	 */
	struct AWPN_SMG_OneHand_C_ExecuteUbergraph_WPN_SMG_OneHand_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
