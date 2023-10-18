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
	 * Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.Fade Out if Valid
	 */
	struct AWPN_ChargeBlaster_C_FadeOutifValid_Params
	{
	public:
		class UAudioComponent*                                     AC;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.HandleHeatAudio
	 */
	struct AWPN_ChargeBlaster_C_HandleHeatAudio_Params
	{	};

	/**
	 * Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.HandleChargeAudio
	 */
	struct AWPN_ChargeBlaster_C_HandleChargeAudio_Params
	{
	public:
		float                                                      charge;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.GetGearStatEntry
	 */
	struct AWPN_ChargeBlaster_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.UserConstructionScript
	 */
	struct AWPN_ChargeBlaster_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.OnHeatChanged_Event_1
	 */
	struct AWPN_ChargeBlaster_C_OnHeatChanged_Event_1_Params
	{
	public:
		float                                                      charge;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ChargeChanged
	 */
	struct AWPN_ChargeBlaster_C_ChargeChanged_Params
	{
	public:
		float                                                      charge;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.RecieveUnequipped
	 */
	struct AWPN_ChargeBlaster_C_RecieveUnequipped_Params
	{	};

	/**
	 * Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ReceiveOverheatedChanged
	 */
	struct AWPN_ChargeBlaster_C_ReceiveOverheatedChanged_Params
	{
	public:
		bool                                                       isOverheated;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.OnSkinChanged
	 */
	struct AWPN_ChargeBlaster_C_OnSkinChanged_Params
	{
	public:
		class USkinEffect*                                         Skin;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.AddedToInventory
	 */
	struct AWPN_ChargeBlaster_C_AddedToInventory_Params
	{
	public:
		class APlayerCharacter*                                    ItemOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.RecieveFiredWeapon
	 */
	struct AWPN_ChargeBlaster_C_RecieveFiredWeapon_Params
	{	};

	/**
	 * Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ExecuteUbergraph_WPN_ChargeBlaster
	 */
	struct AWPN_ChargeBlaster_C_ExecuteUbergraph_WPN_ChargeBlaster_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
