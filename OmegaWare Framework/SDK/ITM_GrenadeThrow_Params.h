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
	 * Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.UpdateSpline
	 */
	struct AITM_GrenadeThrow_C_UpdateSpline_Params
	{
	public:
		TArray<struct FVector>                                     Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      DeltaTime;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ReceiveTick
	 */
	struct AITM_GrenadeThrow_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.RecieveEquipped
	 */
	struct AITM_GrenadeThrow_C_RecieveEquipped_Params
	{	};

	/**
	 * Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.RecieveUnequipped
	 */
	struct AITM_GrenadeThrow_C_RecieveUnequipped_Params
	{	};

	/**
	 * Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ReceiveBeginPlay
	 */
	struct AITM_GrenadeThrow_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.Set Is Visible
	 */
	struct AITM_GrenadeThrow_C_SetIsVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.GrenadeThrown
	 */
	struct AITM_GrenadeThrow_C_GrenadeThrown_Params
	{	};

	/**
	 * Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.UpdateCookTime
	 */
	struct AITM_GrenadeThrow_C_UpdateCookTime_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ExecuteUbergraph_ITM_GrenadeThrow
	 */
	struct AITM_GrenadeThrow_C_ExecuteUbergraph_ITM_GrenadeThrow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
