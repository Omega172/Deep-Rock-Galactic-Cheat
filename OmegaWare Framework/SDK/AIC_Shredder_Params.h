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
	 * Function AIC_Shredder.AIC_Shredder_C.FindNewMother
	 */
	struct AAIC_Shredder_C_FindNewMother_Params
	{
	public:
		class AENE_Jelly_Passive_Mother_C*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Shredder.AIC_Shredder_C.ReceiveBeginPlay
	 */
	struct AAIC_Shredder_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function AIC_Shredder.AIC_Shredder_C.OnDeath
	 */
	struct AAIC_Shredder_C_OnDeath_Params
	{
	public:
		class UHealthComponentBase*                                HealthComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Shredder.AIC_Shredder_C.ReceivePossess
	 */
	struct AAIC_Shredder_C_ReceivePossess_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Shredder.AIC_Shredder_C.Speed Changer
	 */
	struct AAIC_Shredder_C_SpeedChanger_Params
	{	};

	/**
	 * Function AIC_Shredder.AIC_Shredder_C.StartSpeedModifier
	 */
	struct AAIC_Shredder_C_StartSpeedModifier_Params
	{	};

	/**
	 * Function AIC_Shredder.AIC_Shredder_C.ExecuteUbergraph_AIC_Shredder
	 */
	struct AAIC_Shredder_C_ExecuteUbergraph_AIC_Shredder_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
