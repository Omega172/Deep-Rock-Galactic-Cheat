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
	 * Function WPN_Gatling.WPN_Gatling_C.GetGearStatEntry
	 */
	struct AWPN_Gatling_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_Gatling.WPN_Gatling_C.UserConstructionScript
	 */
	struct AWPN_Gatling_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WPN_Gatling.WPN_Gatling_C.Receive_Overheated
	 */
	struct AWPN_Gatling_C_Receive_Overheated_Params
	{	};

	/**
	 * Function WPN_Gatling.WPN_Gatling_C.Receive_IsFiringChanged
	 */
	struct AWPN_Gatling_C_Receive_IsFiringChanged_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_Gatling.WPN_Gatling_C.RecieveEquipped
	 */
	struct AWPN_Gatling_C_RecieveEquipped_Params
	{	};

	/**
	 * Function WPN_Gatling.WPN_Gatling_C.RecieveUnequipped
	 */
	struct AWPN_Gatling_C_RecieveUnequipped_Params
	{	};

	/**
	 * Function WPN_Gatling.WPN_Gatling_C.All_SpawnHeatBurst
	 */
	struct AWPN_Gatling_C_All_SpawnHeatBurst_Params
	{	};

	/**
	 * Function WPN_Gatling.WPN_Gatling_C.TriggerCriticalOverheat
	 */
	struct AWPN_Gatling_C_TriggerCriticalOverheat_Params
	{	};

	/**
	 * Function WPN_Gatling.WPN_Gatling_C.OnTemperatureChanged
	 */
	struct AWPN_Gatling_C_OnTemperatureChanged_Params
	{
	public:
		float                                                      Temperature;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       overHeated;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_Gatling.WPN_Gatling_C.ReceiveBeginPlay
	 */
	struct AWPN_Gatling_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_Gatling.WPN_Gatling_C.OnSkinChanged
	 */
	struct AWPN_Gatling_C_OnSkinChanged_Params
	{
	public:
		class USkinEffect*                                         Skin;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_Gatling.WPN_Gatling_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature
	 */
	struct AWPN_Gatling_C_BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature_Params
	{	};

	/**
	 * Function WPN_Gatling.WPN_Gatling_C.CustomEvent1
	 */
	struct AWPN_Gatling_C_CustomEvent1_Params
	{
	public:
		class UItemUpgrade*                                        Event;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_Gatling.WPN_Gatling_C.ExecuteUbergraph_WPN_Gatling
	 */
	struct AWPN_Gatling_C_ExecuteUbergraph_WPN_Gatling_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WDKH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
