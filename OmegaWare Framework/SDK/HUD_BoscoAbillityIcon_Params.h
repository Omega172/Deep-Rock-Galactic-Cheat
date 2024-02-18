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
	 * Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.SetProgress
	 */
	struct UHUD_BoscoAbillityIcon_C_SetProgress_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DisableAnim;                                             // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.Init
	 */
	struct UHUD_BoscoAbillityIcon_C_Init_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0DJ6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBoscoAbillityComponent*                             Abillity;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.PreConstruct
	 */
	struct UHUD_BoscoAbillityIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.On Flare Production Finished
	 */
	struct UHUD_BoscoAbillityIcon_C_OnFlareProductionFinished_Params
	{	};

	/**
	 * Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.OnChargeUsed
	 */
	struct UHUD_BoscoAbillityIcon_C_OnChargeUsed_Params
	{
	public:
		int32_t                                                    aCurrentCharges;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.ExecuteUbergraph_HUD_BoscoAbillityIcon
	 */
	struct UHUD_BoscoAbillityIcon_C_ExecuteUbergraph_HUD_BoscoAbillityIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
