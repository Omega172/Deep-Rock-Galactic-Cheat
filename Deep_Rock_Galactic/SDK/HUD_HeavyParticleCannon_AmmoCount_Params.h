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
	 * Function HUD_HeavyParticleCannon_AmmoCount.HUD_HeavyParticleCannon_AmmoCount_C.ReceiveItemSet
	 */
	struct UHUD_HeavyParticleCannon_AmmoCount_C_ReceiveItemSet_Params
	{	};

	/**
	 * Function HUD_HeavyParticleCannon_AmmoCount.HUD_HeavyParticleCannon_AmmoCount_C.SetData
	 */
	struct UHUD_HeavyParticleCannon_AmmoCount_C_SetData_Params
	{
	public:
		int32_t                                                    ClipSize;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReloadDuration;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_HeavyParticleCannon_AmmoCount.HUD_HeavyParticleCannon_AmmoCount_C.ExecuteUbergraph_HUD_HeavyParticleCannon_AmmoCount
	 */
	struct UHUD_HeavyParticleCannon_AmmoCount_C_ExecuteUbergraph_HUD_HeavyParticleCannon_AmmoCount_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
