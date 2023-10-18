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
	 * Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Timeline_0__FinishedFunc
	 */
	struct APRJ_PlatformMaker_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Timeline_0__UpdateFunc
	 */
	struct APRJ_PlatformMaker_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.OnImpacted
	 */
	struct APRJ_PlatformMaker_C_OnImpacted_Params
	{
	public:
		bool                                                       PredictedImpact;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9LG6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0004(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.ReceiveBeginPlay
	 */
	struct APRJ_PlatformMaker_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Set Carver mesh
	 */
	struct APRJ_PlatformMaker_C_SetCarvermesh_Params
	{
	public:
		class UStaticMesh*                                         Meshtouse;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.SetCarverMeshScale
	 */
	struct APRJ_PlatformMaker_C_SetCarverMeshScale_Params
	{
	public:
		struct FVector                                             Scale;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseLessFallDamageMaterial
	 */
	struct APRJ_PlatformMaker_C_UseLessFallDamageMaterial_Params
	{	};

	/**
	 * Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseBugRepellantMaterial
	 */
	struct APRJ_PlatformMaker_C_UseBugRepellantMaterial_Params
	{	};

	/**
	 * Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseFallDmgAndBugRepellant
	 */
	struct APRJ_PlatformMaker_C_UseFallDmgAndBugRepellant_Params
	{	};

	/**
	 * Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.ExecuteUbergraph_PRJ_PlatformMaker
	 */
	struct APRJ_PlatformMaker_C_ExecuteUbergraph_PRJ_PlatformMaker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SUF4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
