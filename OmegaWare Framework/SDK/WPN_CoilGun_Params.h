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
	 * Function WPN_CoilGun.WPN_CoilGun_C.FadeOutIfValid
	 */
	struct AWPN_CoilGun_C_FadeOutIfValid_Params
	{
	public:
		class UAudioComponent*                                     AC;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_CoilGun.WPN_CoilGun_C.HandleHeatAudio
	 */
	struct AWPN_CoilGun_C_HandleHeatAudio_Params
	{	};

	/**
	 * Function WPN_CoilGun.WPN_CoilGun_C.HandleChargeAudio
	 */
	struct AWPN_CoilGun_C_HandleChargeAudio_Params
	{
	public:
		float                                                      charge;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_CoilGun.WPN_CoilGun_C.GetGearStatEntry
	 */
	struct AWPN_CoilGun_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_CoilGun.WPN_CoilGun_C.UserConstructionScript
	 */
	struct AWPN_CoilGun_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WPN_CoilGun.WPN_CoilGun_C.FadeTimeline__FinishedFunc
	 */
	struct AWPN_CoilGun_C_FadeTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function WPN_CoilGun.WPN_CoilGun_C.FadeTimeline__UpdateFunc
	 */
	struct AWPN_CoilGun_C_FadeTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function WPN_CoilGun.WPN_CoilGun_C.RecieveUnequipped
	 */
	struct AWPN_CoilGun_C_RecieveUnequipped_Params
	{	};

	/**
	 * Function WPN_CoilGun.WPN_CoilGun_C.ReceiveOverheatedChanged
	 */
	struct AWPN_CoilGun_C_ReceiveOverheatedChanged_Params
	{
	public:
		bool                                                       isOverheated;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_CoilGun.WPN_CoilGun_C.OnSkinChanged
	 */
	struct AWPN_CoilGun_C_OnSkinChanged_Params
	{
	public:
		class USkinEffect*                                         Skin;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_CoilGun.WPN_CoilGun_C.AddedToInventory
	 */
	struct AWPN_CoilGun_C_AddedToInventory_Params
	{
	public:
		class APlayerCharacter*                                    ItemOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_CoilGun.WPN_CoilGun_C.OnFireKill
	 */
	struct AWPN_CoilGun_C_OnFireKill_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_CoilGun.WPN_CoilGun_C.RecieveStartedCharging
	 */
	struct AWPN_CoilGun_C_RecieveStartedCharging_Params
	{	};

	/**
	 * Function WPN_CoilGun.WPN_CoilGun_C.RecieveStoppedCharging
	 */
	struct AWPN_CoilGun_C_RecieveStoppedCharging_Params
	{
	public:
		float                                                      ChargeProgress;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_CoilGun.WPN_CoilGun_C.ReceiveBeginPlay
	 */
	struct AWPN_CoilGun_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_CoilGun.WPN_CoilGun_C.OnChargeChanged_Event_1
	 */
	struct AWPN_CoilGun_C_OnChargeChanged_Event_1_Params
	{
	public:
		float                                                      charge;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_CoilGun.WPN_CoilGun_C.OnShieldBrokeBoostStopped
	 */
	struct AWPN_CoilGun_C_OnShieldBrokeBoostStopped_Params
	{	};

	/**
	 * Function WPN_CoilGun.WPN_CoilGun_C.OnShieldBrokenBoost
	 */
	struct AWPN_CoilGun_C_OnShieldBrokenBoost_Params
	{	};

	/**
	 * Function WPN_CoilGun.WPN_CoilGun_C.Receive_Overheated
	 */
	struct AWPN_CoilGun_C_Receive_Overheated_Params
	{	};

	/**
	 * Function WPN_CoilGun.WPN_CoilGun_C.ExecuteUbergraph_WPN_CoilGun
	 */
	struct AWPN_CoilGun_C_ExecuteUbergraph_WPN_CoilGun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
