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
	 * Function WPN_Autocannon.WPN_Autocannon_C.RoundStatValue
	 */
	struct AWPN_Autocannon_C_RoundStatValue_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              Suffix;                                                  // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       KeepSign;                                                // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P37J[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0030(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WPN_Autocannon.WPN_Autocannon_C.GetGearStatEntry
	 */
	struct AWPN_Autocannon_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_Autocannon.WPN_Autocannon_C.UserConstructionScript
	 */
	struct AWPN_Autocannon_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WPN_Autocannon.WPN_Autocannon_C.ShowCurentFireTime
	 */
	struct AWPN_Autocannon_C_ShowCurentFireTime_Params
	{	};

	/**
	 * Function WPN_Autocannon.WPN_Autocannon_C.ReceiveBeginPlay
	 */
	struct AWPN_Autocannon_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_Autocannon.WPN_Autocannon_C.RecieveUnequipped
	 */
	struct AWPN_Autocannon_C_RecieveUnequipped_Params
	{	};

	/**
	 * Function WPN_Autocannon.WPN_Autocannon_C.RecieveEquipped
	 */
	struct AWPN_Autocannon_C_RecieveEquipped_Params
	{	};

	/**
	 * Function WPN_Autocannon.WPN_Autocannon_C.Receive_IsFiringChanged
	 */
	struct AWPN_Autocannon_C_Receive_IsFiringChanged_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_Autocannon.WPN_Autocannon_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature
	 */
	struct AWPN_Autocannon_C_BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature_Params
	{	};

	/**
	 * Function WPN_Autocannon.WPN_Autocannon_C.RecieveFiredWeapon
	 */
	struct AWPN_Autocannon_C_RecieveFiredWeapon_Params
	{	};

	/**
	 * Function WPN_Autocannon.WPN_Autocannon_C.ExecuteUbergraph_WPN_Autocannon
	 */
	struct AWPN_Autocannon_C_ExecuteUbergraph_WPN_Autocannon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
