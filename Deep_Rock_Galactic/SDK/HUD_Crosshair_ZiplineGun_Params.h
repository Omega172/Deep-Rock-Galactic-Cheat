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
	 * Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.SetMinMaxAngle
	 */
	struct UHUD_Crosshair_ZiplineGun_C_SetMinMaxAngle_Params
	{
	public:
		float                                                      Min;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Max;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.ClearMessage
	 */
	struct UHUD_Crosshair_ZiplineGun_C_ClearMessage_Params
	{	};

	/**
	 * Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.DistanceMessage
	 */
	struct UHUD_Crosshair_ZiplineGun_C_DistanceMessage_Params
	{
	public:
		float                                                      Dist;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InRange;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.FailMessage
	 */
	struct UHUD_Crosshair_ZiplineGun_C_FailMessage_Params
	{
	public:
		class FText                                                Msg;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.SetText
	 */
	struct UHUD_Crosshair_ZiplineGun_C_SetText_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.PreConstruct
	 */
	struct UHUD_Crosshair_ZiplineGun_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.ExecuteUbergraph_HUD_Crosshair_ZiplineGun
	 */
	struct UHUD_Crosshair_ZiplineGun_C_ExecuteUbergraph_HUD_Crosshair_ZiplineGun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
