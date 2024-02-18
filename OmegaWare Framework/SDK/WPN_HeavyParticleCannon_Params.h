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
	 * Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.GetGearStatEntry
	 */
	struct AWPN_HeavyParticleCannon_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.UserConstructionScript
	 */
	struct AWPN_HeavyParticleCannon_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.ReceiveBeginPlay
	 */
	struct AWPN_HeavyParticleCannon_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.RecieveEquipped
	 */
	struct AWPN_HeavyParticleCannon_C_RecieveEquipped_Params
	{	};

	/**
	 * Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.RecieveUnequipped
	 */
	struct AWPN_HeavyParticleCannon_C_RecieveUnequipped_Params
	{	};

	/**
	 * Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature
	 */
	struct AWPN_HeavyParticleCannon_C_BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature_Params
	{	};

	/**
	 * Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.UpdateBeamsVisibility
	 */
	struct AWPN_HeavyParticleCannon_C_UpdateBeamsVisibility_Params
	{
	public:
		bool                                                       isBeamVisible;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.Upgraded
	 */
	struct AWPN_HeavyParticleCannon_C_Upgraded_Params
	{
	public:
		TArray<class UItemUpgrade*>                                upgrades;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.UpdateReload
	 */
	struct AWPN_HeavyParticleCannon_C_UpdateReload_Params
	{
	public:
		float                                                      alpha;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.IsHittngEnemyChanged
	 */
	struct AWPN_HeavyParticleCannon_C_IsHittngEnemyChanged_Params
	{
	public:
		bool                                                       isHittingEnemy;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.ChargeChanged
	 */
	struct AWPN_HeavyParticleCannon_C_ChargeChanged_Params
	{
	public:
		bool                                                       isCharging;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.Server_ExplodePlatform
	 */
	struct AWPN_HeavyParticleCannon_C_Server_ExplodePlatform_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.All_ExplodePlatform
	 */
	struct AWPN_HeavyParticleCannon_C_All_ExplodePlatform_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_HeavyParticleCannon.WPN_HeavyParticleCannon_C.ExecuteUbergraph_WPN_HeavyParticleCannon
	 */
	struct AWPN_HeavyParticleCannon_C_ExecuteUbergraph_WPN_HeavyParticleCannon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UYTJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
