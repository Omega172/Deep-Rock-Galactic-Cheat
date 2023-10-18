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
	 * Function ITM_BaseFlare.ITM_BaseFlare_C.GetGearStatEntry
	 */
	struct AITM_BaseFlare_C_GetGearStatEntry_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGearStatEntry>                              Stats;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ITM_BaseFlare.ITM_BaseFlare_C.UpdateShadowRadius
	 */
	struct AITM_BaseFlare_C_UpdateShadowRadius_Params
	{	};

	/**
	 * Function ITM_BaseFlare.ITM_BaseFlare_C.StartFadeOut
	 */
	struct AITM_BaseFlare_C_StartFadeOut_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_BaseFlare.ITM_BaseFlare_C.UserConstructionScript
	 */
	struct AITM_BaseFlare_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ITM_BaseFlare.ITM_BaseFlare_C.Timeline_0__FinishedFunc
	 */
	struct AITM_BaseFlare_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function ITM_BaseFlare.ITM_BaseFlare_C.Timeline_0__UpdateFunc
	 */
	struct AITM_BaseFlare_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function ITM_BaseFlare.ITM_BaseFlare_C.OnFlareIgnite
	 */
	struct AITM_BaseFlare_C_OnFlareIgnite_Params
	{	};

	/**
	 * Function ITM_BaseFlare.ITM_BaseFlare_C.OnFlareExtinguish
	 */
	struct AITM_BaseFlare_C_OnFlareExtinguish_Params
	{	};

	/**
	 * Function ITM_BaseFlare.ITM_BaseFlare_C.ReceiveBeginPlay
	 */
	struct AITM_BaseFlare_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ITM_BaseFlare.ITM_BaseFlare_C.OnUpdateShadowRadius
	 */
	struct AITM_BaseFlare_C_OnUpdateShadowRadius_Params
	{	};

	/**
	 * Function ITM_BaseFlare.ITM_BaseFlare_C.ActivateFlare
	 */
	struct AITM_BaseFlare_C_ActivateFlare_Params
	{	};

	/**
	 * Function ITM_BaseFlare.ITM_BaseFlare_C.ExecuteUbergraph_ITM_BaseFlare
	 */
	struct AITM_BaseFlare_C_ExecuteUbergraph_ITM_BaseFlare_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
