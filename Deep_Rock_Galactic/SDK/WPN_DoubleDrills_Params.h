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
	 * Function WPN_DoubleDrills.WPN_DoubleDrills_C.GetGearStatEntry
	 */
	struct AWPN_DoubleDrills_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_DoubleDrills.WPN_DoubleDrills_C.GetHeatingAudioSceneComponent
	 */
	struct AWPN_DoubleDrills_C_GetHeatingAudioSceneComponent_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnTemperatureChanged
	 */
	struct AWPN_DoubleDrills_C_OnTemperatureChanged_Params
	{
	public:
		float                                                      Temperature;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       overHeated;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_DoubleDrills.WPN_DoubleDrills_C.Increase FOV
	 */
	struct AWPN_DoubleDrills_C_IncreaseFOV_Params
	{	};

	/**
	 * Function WPN_DoubleDrills.WPN_DoubleDrills_C.Decrease FOV
	 */
	struct AWPN_DoubleDrills_C_DecreaseFOV_Params
	{	};

	/**
	 * Function WPN_DoubleDrills.WPN_DoubleDrills_C.AddedToInventory
	 */
	struct AWPN_DoubleDrills_C_AddedToInventory_Params
	{
	public:
		class APlayerCharacter*                                    ItemOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_DoubleDrills.WPN_DoubleDrills_C.BP_OnDrillDamage
	 */
	struct AWPN_DoubleDrills_C_BP_OnDrillDamage_Params
	{	};

	/**
	 * Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnStartDrilling
	 */
	struct AWPN_DoubleDrills_C_OnStartDrilling_Params
	{	};

	/**
	 * Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnStopDrilling
	 */
	struct AWPN_DoubleDrills_C_OnStopDrilling_Params
	{	};

	/**
	 * Function WPN_DoubleDrills.WPN_DoubleDrills_C.Receive_Overheated
	 */
	struct AWPN_DoubleDrills_C_Receive_Overheated_Params
	{	};

	/**
	 * Function WPN_DoubleDrills.WPN_DoubleDrills_C.ReceiveBeginPlay
	 */
	struct AWPN_DoubleDrills_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_DoubleDrills.WPN_DoubleDrills_C.Gunsling
	 */
	struct AWPN_DoubleDrills_C_Gunsling_Params
	{	};

	/**
	 * Function WPN_DoubleDrills.WPN_DoubleDrills_C.RecieveCycledItem
	 */
	struct AWPN_DoubleDrills_C_RecieveCycledItem_Params
	{	};

	/**
	 * Function WPN_DoubleDrills.WPN_DoubleDrills_C.ExecuteUbergraph_WPN_DoubleDrills
	 */
	struct AWPN_DoubleDrills_C_ExecuteUbergraph_WPN_DoubleDrills_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
