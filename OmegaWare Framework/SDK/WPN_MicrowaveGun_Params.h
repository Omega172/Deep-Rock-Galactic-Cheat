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
	 * Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.GetGearStatEntry
	 */
	struct AWPN_MicrowaveGun_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.UserConstructionScript
	 */
	struct AWPN_MicrowaveGun_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.ReceiveBeginPlay
	 */
	struct AWPN_MicrowaveGun_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.AddedToInventory
	 */
	struct AWPN_MicrowaveGun_C_AddedToInventory_Params
	{
	public:
		class APlayerCharacter*                                    ItemOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.OnTemperatureChanged
	 */
	struct AWPN_MicrowaveGun_C_OnTemperatureChanged_Params
	{
	public:
		float                                                      Temperature;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       overHeated;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.CustomEvent1
	 */
	struct AWPN_MicrowaveGun_C_CustomEvent1_Params
	{
	public:
		class UItemUpgrade*                                        Event;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.Receive_IsFiringChanged
	 */
	struct AWPN_MicrowaveGun_C_Receive_IsFiringChanged_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.HeatUpdated
	 */
	struct AWPN_MicrowaveGun_C_HeatUpdated_Params
	{
	public:
		float                                                      SmoothedTemperature;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.RecieveStopUsing
	 */
	struct AWPN_MicrowaveGun_C_RecieveStopUsing_Params
	{	};

	/**
	 * Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.BndEvt__WPN_MicrowaveGun_CapsuleHitscanComp_K2Node_ComponentBoundEvent_0_OnClosestHitDelegate__DelegateSignature
	 */
	struct AWPN_MicrowaveGun_C_BndEvt__WPN_MicrowaveGun_CapsuleHitscanComp_K2Node_ComponentBoundEvent_0_OnClosestHitDelegate__DelegateSignature_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Normal;                                                  // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHitEnemy;                                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.OnStartCharacterOverheat_Event
	 */
	struct AWPN_MicrowaveGun_C_OnStartCharacterOverheat_Event_Params
	{	};

	/**
	 * Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.RecieveUnequipped
	 */
	struct AWPN_MicrowaveGun_C_RecieveUnequipped_Params
	{	};

	/**
	 * Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.ExecuteUbergraph_WPN_MicrowaveGun
	 */
	struct AWPN_MicrowaveGun_C_ExecuteUbergraph_WPN_MicrowaveGun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7UQA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
