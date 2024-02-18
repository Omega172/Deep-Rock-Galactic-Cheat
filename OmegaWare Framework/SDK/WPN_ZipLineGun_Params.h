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
	 * Function WPN_ZipLineGun.WPN_ZipLineGun_C.GetGrounded
	 */
	struct AWPN_ZipLineGun_C_GetGrounded_Params
	{
	public:
		bool                                                       OutGrounded;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_ZipLineGun.WPN_ZipLineGun_C.CalcFirstPersonMuzzleLocation
	 */
	struct AWPN_ZipLineGun_C_CalcFirstPersonMuzzleLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LP10[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WPN_ZipLineGun.WPN_ZipLineGun_C.CanFireWeapon
	 */
	struct AWPN_ZipLineGun_C_CanFireWeapon_Params
	{
	public:
		class FText                                                FailMsg;                                                 // 0x0000(0x0018)  (Parm, OutParm)
		class UDialogDataAsset*                                    FailShout;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_ZipLineGun.WPN_ZipLineGun_C.GetGearStatEntry
	 */
	struct AWPN_ZipLineGun_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPN_ZipLineGun.WPN_ZipLineGun_C.GetCrosshair
	 */
	struct AWPN_ZipLineGun_C_GetCrosshair_Params
	{
	public:
		class UHUD_Crosshair_ZiplineGun_C*                         Result;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_ZipLineGun.WPN_ZipLineGun_C.Update Line Of Sight
	 */
	struct AWPN_ZipLineGun_C_UpdateLineOfSight_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DidHit;                                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A5DE[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WPN_ZipLineGun.WPN_ZipLineGun_C.Negate
	 */
	struct AWPN_ZipLineGun_C_Negate_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Result;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_ZipLineGun.WPN_ZipLineGun_C.Between
	 */
	struct AWPN_ZipLineGun_C_Between_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Min;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Max;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsBetween;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_ZipLineGun.WPN_ZipLineGun_C.Can Fire
	 */
	struct AWPN_ZipLineGun_C_CanFire_Params
	{
	public:
		class FText                                                FailMsg;                                                 // 0x0000(0x0018)  (Parm, OutParm)
		class UDialogDataAsset*                                    FailShout;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanShoot;                                                // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WPN_ZipLineGun.WPN_ZipLineGun_C.GetStartLocation
	 */
	struct AWPN_ZipLineGun_C_GetStartLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_ZipLineGun.WPN_ZipLineGun_C.LineTrace
	 */
	struct AWPN_ZipLineGun_C_LineTrace_Params
	{
	public:
		struct FHitResult                                          OutHit;                                                  // 0x0000(0x0088)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             Direction;                                               // 0x0088(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Distance;                                                // 0x0094(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HitAny;                                                  // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S0VB[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WPN_ZipLineGun.WPN_ZipLineGun_C.ReceiveTick
	 */
	struct AWPN_ZipLineGun_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_ZipLineGun.WPN_ZipLineGun_C.RecieveStopUsing
	 */
	struct AWPN_ZipLineGun_C_RecieveStopUsing_Params
	{	};

	/**
	 * Function WPN_ZipLineGun.WPN_ZipLineGun_C.RecieveEquipped
	 */
	struct AWPN_ZipLineGun_C_RecieveEquipped_Params
	{	};

	/**
	 * Function WPN_ZipLineGun.WPN_ZipLineGun_C.AddedToInventory
	 */
	struct AWPN_ZipLineGun_C_AddedToInventory_Params
	{
	public:
		class APlayerCharacter*                                    ItemOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_ZipLineGun.WPN_ZipLineGun_C.ReceiveBeginPlay
	 */
	struct AWPN_ZipLineGun_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WPN_ZipLineGun.WPN_ZipLineGun_C.BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature
	 */
	struct AWPN_ZipLineGun_C_BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         Crosshair;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_ZipLineGun.WPN_ZipLineGun_C.RecieveUnequipped
	 */
	struct AWPN_ZipLineGun_C_RecieveUnequipped_Params
	{	};

	/**
	 * Function WPN_ZipLineGun.WPN_ZipLineGun_C.BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature
	 */
	struct AWPN_ZipLineGun_C_BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WPN_ZipLineGun.WPN_ZipLineGun_C.ExecuteUbergraph_WPN_ZipLineGun
	 */
	struct AWPN_ZipLineGun_C_ExecuteUbergraph_WPN_ZipLineGun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
