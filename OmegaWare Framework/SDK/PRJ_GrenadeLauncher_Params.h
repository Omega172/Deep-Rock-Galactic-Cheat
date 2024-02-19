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
	 * Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.LaunchPlayer
	 */
	struct APRJ_GrenadeLauncher_C_LaunchPlayer_Params
	{
	public:
		class APlayerCharacter*                                    Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.OnRep_Lit
	 */
	struct APRJ_GrenadeLauncher_C_OnRep_Lit_Params
	{	};

	/**
	 * Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.UserConstructionScript
	 */
	struct APRJ_GrenadeLauncher_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.OnImpacted
	 */
	struct APRJ_GrenadeLauncher_C_OnImpacted_Params
	{
	public:
		bool                                                       PredictedImpact;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R6MJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0004(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct APRJ_GrenadeLauncher_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4HXB[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.MakeBouncy
	 */
	struct APRJ_GrenadeLauncher_C_MakeBouncy_Params
	{	};

	/**
	 * Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.Trigger
	 */
	struct APRJ_GrenadeLauncher_C_Trigger_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.DoOnSpawn
	 */
	struct APRJ_GrenadeLauncher_C_DoOnSpawn_Params
	{	};

	/**
	 * Function PRJ_GrenadeLauncher.PRJ_GrenadeLauncher_C.ExecuteUbergraph_PRJ_GrenadeLauncher
	 */
	struct APRJ_GrenadeLauncher_C_ExecuteUbergraph_PRJ_GrenadeLauncher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D3QN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
