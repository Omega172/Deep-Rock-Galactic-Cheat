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
	 * Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.UpdatePoints
	 */
	struct UHUD_Directional_Damage_IndicatorV2_C_UpdatePoints_Params
	{	};

	/**
	 * Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.CalcFadeStrength
	 */
	struct UHUD_Directional_Damage_IndicatorV2_C_CalcFadeStrength_Params
	{
	public:
		float                                                      TimeLeft;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HitSize;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.OnHit
	 */
	struct UHUD_Directional_Damage_IndicatorV2_C_OnHit_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KFIA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageData                                         DamageData;                                              // 0x0008(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       anyHealthLost;                                           // 0x0058(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6CL9[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.Tick
	 */
	struct UHUD_Directional_Damage_IndicatorV2_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.Construct
	 */
	struct UHUD_Directional_Damage_IndicatorV2_C_Construct_Params
	{	};

	/**
	 * Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.ExecuteUbergraph_HUD_Directional_Damage_IndicatorV2
	 */
	struct UHUD_Directional_Damage_IndicatorV2_C_ExecuteUbergraph_HUD_Directional_Damage_IndicatorV2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
