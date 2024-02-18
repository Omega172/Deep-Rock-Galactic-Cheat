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
	 * Function WPN_LineCutter.WPN_LineCutter_C.Get Homing Target Location
	 */
	struct AWPN_LineCutter_C_GetHomingTargetLocation_Params
	{
	public:
		struct FVector                                             OutLocation;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_LineCutter.WPN_LineCutter_C.GetHomingIgnoreList
	 */
	struct AWPN_LineCutter_C_GetHomingIgnoreList_Params
	{
	public:
		TArray<class AActor*>                                      OutTargets;                                              // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function WPN_LineCutter.WPN_LineCutter_C.GetGearStatEntry
	 */
	struct AWPN_LineCutter_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_LineCutter.WPN_LineCutter_C.UserConstructionScript
	 */
	struct AWPN_LineCutter_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WPN_LineCutter.WPN_LineCutter_C.Flicker Brightness__FinishedFunc
	 */
	struct AWPN_LineCutter_C_FlickerBrightness__FinishedFunc_Params
	{	};

	/**
	 * Function WPN_LineCutter.WPN_LineCutter_C.Flicker Brightness__UpdateFunc
	 */
	struct AWPN_LineCutter_C_FlickerBrightness__UpdateFunc_Params
	{	};

	/**
	 * Function WPN_LineCutter.WPN_LineCutter_C.OnFireWhileLastProjectileAlive
	 */
	struct AWPN_LineCutter_C_OnFireWhileLastProjectileAlive_Params
	{
	public:
		class ALineCutterProjectile*                               Projectile;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_LineCutter.WPN_LineCutter_C.BndEvt__WPN_LineCutter_ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature
	 */
	struct AWPN_LineCutter_C_BndEvt__WPN_LineCutter_ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature_Params
	{
	public:
		class AProjectileBase*                                     Projectile;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_LineCutter.WPN_LineCutter_C.UpdateHomingTarget
	 */
	struct AWPN_LineCutter_C_UpdateHomingTarget_Params
	{	};

	/**
	 * Function WPN_LineCutter.WPN_LineCutter_C.StopHoming
	 */
	struct AWPN_LineCutter_C_StopHoming_Params
	{	};

	/**
	 * Function WPN_LineCutter.WPN_LineCutter_C.Server_SetHomingLocation
	 */
	struct AWPN_LineCutter_C_Server_SetHomingLocation_Params
	{
	public:
		struct FVector_NetQuantize                                 HomingLocation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_LineCutter.WPN_LineCutter_C.OnHomingHit
	 */
	struct AWPN_LineCutter_C_OnHomingHit_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function WPN_LineCutter.WPN_LineCutter_C.RecieveStopUsing
	 */
	struct AWPN_LineCutter_C_RecieveStopUsing_Params
	{	};

	/**
	 * Function WPN_LineCutter.WPN_LineCutter_C.ReceiveBeginPlay
	 */
	struct AWPN_LineCutter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_LineCutter.WPN_LineCutter_C.Server_StopHoming
	 */
	struct AWPN_LineCutter_C_Server_StopHoming_Params
	{
	public:
		class AProjectile*                                         InProjectile;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_LineCutter.WPN_LineCutter_C.All_SetHomingLocation
	 */
	struct AWPN_LineCutter_C_All_SetHomingLocation_Params
	{
	public:
		struct FVector_NetQuantize                                 InLocation;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_LineCutter.WPN_LineCutter_C.All_StopHoming
	 */
	struct AWPN_LineCutter_C_All_StopHoming_Params
	{
	public:
		class AProjectile*                                         InProjectile;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_LineCutter.WPN_LineCutter_C.ExecuteUbergraph_WPN_LineCutter
	 */
	struct AWPN_LineCutter_C_ExecuteUbergraph_WPN_LineCutter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
