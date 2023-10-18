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
	 * Function AIC_FriendlyShredder.AIC_FriendlyShredder_C.FindNewMother
	 */
	struct AAIC_FriendlyShredder_C_FindNewMother_Params
	{
	public:
		class AENE_Jelly_Passive_Mother_C*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_FriendlyShredder.AIC_FriendlyShredder_C.ReceiveBeginPlay
	 */
	struct AAIC_FriendlyShredder_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function AIC_FriendlyShredder.AIC_FriendlyShredder_C.OnDeath
	 */
	struct AAIC_FriendlyShredder_C_OnDeath_Params
	{
	public:
		class UHealthComponentBase*                                HealthComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_FriendlyShredder.AIC_FriendlyShredder_C.ReceivePossess
	 */
	struct AAIC_FriendlyShredder_C_ReceivePossess_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_FriendlyShredder.AIC_FriendlyShredder_C.Speed Changer
	 */
	struct AAIC_FriendlyShredder_C_SpeedChanger_Params
	{	};

	/**
	 * Function AIC_FriendlyShredder.AIC_FriendlyShredder_C.StartSpeedModifier
	 */
	struct AAIC_FriendlyShredder_C_StartSpeedModifier_Params
	{	};

	/**
	 * Function AIC_FriendlyShredder.AIC_FriendlyShredder_C.ExecuteUbergraph_AIC_FriendlyShredder
	 */
	struct AAIC_FriendlyShredder_C_ExecuteUbergraph_AIC_FriendlyShredder_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
