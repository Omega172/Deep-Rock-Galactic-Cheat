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
	 * Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.GetNearestPointOnLine
	 */
	struct APRJ_ZipLineGun_C_GetNearestPointOnLine_Params
	{
	public:
		struct FVector                                             WorldPosition;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             LineStart;                                               // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             LineEnd;                                                 // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NearestLinePosition;                                     // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.Finish Zip Line
	 */
	struct APRJ_ZipLineGun_C_FinishZipLine_Params
	{	};

	/**
	 * Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.UserConstructionScript
	 */
	struct APRJ_ZipLineGun_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.On Hit
	 */
	struct APRJ_ZipLineGun_C_OnHit_Params
	{	};

	/**
	 * Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.OnShoot
	 */
	struct APRJ_ZipLineGun_C_OnShoot_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EndLocation;                                             // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.SetCollider
	 */
	struct APRJ_ZipLineGun_C_SetCollider_Params
	{	};

	/**
	 * Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ReceiveTick
	 */
	struct APRJ_ZipLineGun_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ReceiveBeginPlay
	 */
	struct APRJ_ZipLineGun_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.All_ConnectWithZipLine
	 */
	struct APRJ_ZipLineGun_C_All_ConnectWithZipLine_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      VerticalSpeed;                                           // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.BndEvt__PRJ_ZipLineGun_ZipLineUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	 */
	struct APRJ_ZipLineGun_C_BndEvt__PRJ_ZipLineGun_ZipLineUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
	{
	public:
		class APlayerCharacter*                                    User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputKeys                                                 Key;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ExecuteUbergraph_PRJ_ZipLineGun
	 */
	struct APRJ_ZipLineGun_C_ExecuteUbergraph_PRJ_ZipLineGun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
