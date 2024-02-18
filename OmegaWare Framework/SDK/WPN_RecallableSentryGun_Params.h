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
	 * Function WPN_RecallableSentryGun.WPN_RecallableSentryGun_C.GetGearStatEntry
	 */
	struct AWPN_RecallableSentryGun_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_RecallableSentryGun.WPN_RecallableSentryGun_C.SetArcIndicatorActive
	 */
	struct AWPN_RecallableSentryGun_C_SetArcIndicatorActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_RecallableSentryGun.WPN_RecallableSentryGun_C.BndEvt__WPN_RecallableSentryGun_ItemPlacer_K2Node_ComponentBoundEvent_0_MarkerDelegate__DelegateSignature
	 */
	struct AWPN_RecallableSentryGun_C_BndEvt__WPN_RecallableSentryGun_ItemPlacer_K2Node_ComponentBoundEvent_0_MarkerDelegate__DelegateSignature_Params
	{
	public:
		class AItemMarker*                                         Marker;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_RecallableSentryGun.WPN_RecallableSentryGun_C.ExecuteUbergraph_WPN_RecallableSentryGun
	 */
	struct AWPN_RecallableSentryGun_C_ExecuteUbergraph_WPN_RecallableSentryGun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YKMD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
