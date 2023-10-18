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
	 * Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetGearStatEntry
	 */
	struct AWPN_GrapplingGun_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetCableTransform
	 */
	struct AWPN_GrapplingGun_C_GetCableTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_GrapplingGun.WPN_GrapplingGun_C.SetCableEndPoint
	 */
	struct AWPN_GrapplingGun_C_SetCableEndPoint_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetCableParent
	 */
	struct AWPN_GrapplingGun_C_GetCableParent_Params
	{
	public:
		class USceneComponent*                                     Muzzle;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_GrapplingGun.WPN_GrapplingGun_C.ToggleCable
	 */
	struct AWPN_GrapplingGun_C_ToggleCable_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1VB8[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WPN_GrapplingGun.WPN_GrapplingGun_C.GetAimView
	 */
	struct AWPN_GrapplingGun_C_GetAimView_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Forward;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I7RO[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WPN_GrapplingGun.WPN_GrapplingGun_C.UserConstructionScript
	 */
	struct AWPN_GrapplingGun_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WPN_GrapplingGun.WPN_GrapplingGun_C.ProjectileMovement__FinishedFunc
	 */
	struct AWPN_GrapplingGun_C_ProjectileMovement__FinishedFunc_Params
	{	};

	/**
	 * Function WPN_GrapplingGun.WPN_GrapplingGun_C.ProjectileMovement__UpdateFunc
	 */
	struct AWPN_GrapplingGun_C_ProjectileMovement__UpdateFunc_Params
	{	};

	/**
	 * Function WPN_GrapplingGun.WPN_GrapplingGun_C.AddedToInventory
	 */
	struct AWPN_GrapplingGun_C_AddedToInventory_Params
	{
	public:
		class APlayerCharacter*                                    ItemOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_GrapplingGun.WPN_GrapplingGun_C.ReceiveBeginPlay
	 */
	struct AWPN_GrapplingGun_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_GrapplingGun.WPN_GrapplingGun_C.RecieveCycledItem
	 */
	struct AWPN_GrapplingGun_C_RecieveCycledItem_Params
	{	};

	/**
	 * Function WPN_GrapplingGun.WPN_GrapplingGun_C.Gunsling
	 */
	struct AWPN_GrapplingGun_C_Gunsling_Params
	{	};

	/**
	 * Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnGrappleUpdate
	 */
	struct AWPN_GrapplingGun_C_OnGrappleUpdate_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnGrappleStart
	 */
	struct AWPN_GrapplingGun_C_OnGrappleStart_Params
	{	};

	/**
	 * Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnGrappleEnd
	 */
	struct AWPN_GrapplingGun_C_OnGrappleEnd_Params
	{	};

	/**
	 * Function WPN_GrapplingGun.WPN_GrapplingGun_C.OnGrappleFailed
	 */
	struct AWPN_GrapplingGun_C_OnGrappleFailed_Params
	{
	public:
		bool                                                       TooFar;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_GrapplingGun.WPN_GrapplingGun_C.ExecuteUbergraph_WPN_GrapplingGun
	 */
	struct AWPN_GrapplingGun_C_ExecuteUbergraph_WPN_GrapplingGun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
