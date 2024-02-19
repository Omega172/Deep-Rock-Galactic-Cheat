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
	 * Function WPN_Cryospray.WPN_Cryospray_C.GetGearStatEntry
	 */
	struct AWPN_Cryospray_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_Cryospray.WPN_Cryospray_C.UserConstructionScript
	 */
	struct AWPN_Cryospray_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WPN_Cryospray.WPN_Cryospray_C.BndEvt__Aggregator_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature
	 */
	struct AWPN_Cryospray_C_BndEvt__Aggregator_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_Cryospray.WPN_Cryospray_C.Update Ammo Display
	 */
	struct AWPN_Cryospray_C_UpdateAmmoDisplay_Params
	{	};

	/**
	 * Function WPN_Cryospray.WPN_Cryospray_C.ReceiveRepressurisingChanged
	 */
	struct AWPN_Cryospray_C_ReceiveRepressurisingChanged_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_Cryospray.WPN_Cryospray_C.RecieveEquipped
	 */
	struct AWPN_Cryospray_C_RecieveEquipped_Params
	{	};

	/**
	 * Function WPN_Cryospray.WPN_Cryospray_C.RecieveUnequipped
	 */
	struct AWPN_Cryospray_C_RecieveUnequipped_Params
	{	};

	/**
	 * Function WPN_Cryospray.WPN_Cryospray_C.Toggle RepressurerisingFX
	 */
	struct AWPN_Cryospray_C_ToggleRepressurerisingFX_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_Cryospray.WPN_Cryospray_C.OnProjectileLaunched
	 */
	struct AWPN_Cryospray_C_OnProjectileLaunched_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_Cryospray.WPN_Cryospray_C.ReceiveBeginPlay
	 */
	struct AWPN_Cryospray_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_Cryospray.WPN_Cryospray_C.OnPreProjectileLaunch
	 */
	struct AWPN_Cryospray_C_OnPreProjectileLaunch_Params
	{	};

	/**
	 * Function WPN_Cryospray.WPN_Cryospray_C.ExecuteUbergraph_WPN_Cryospray
	 */
	struct AWPN_Cryospray_C_ExecuteUbergraph_WPN_Cryospray_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1FIG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
