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
	 * Function HUD_RadarPoint_Player.HUD_RadarPoint_Player_C.InitPoint
	 */
	struct UHUD_RadarPoint_Player_C_InitPoint_Params
	{
	public:
		class URadarPointComponent*                                RadarComponent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YSEN[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_RadarPoint_Player.HUD_RadarPoint_Player_C.Get3dPosition
	 */
	struct UHUD_RadarPoint_Player_C_Get3dPosition_Params
	{
	public:
		struct FVector                                             Pos;                                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_RadarPoint_Player.HUD_RadarPoint_Player_C.UpdatePoint
	 */
	struct UHUD_RadarPoint_Player_C_UpdatePoint_Params
	{
	public:
		float                                                      alpha;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      verticalDist;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       destroy;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_RadarPoint_Player.HUD_RadarPoint_Player_C.Deactivate
	 */
	struct UHUD_RadarPoint_Player_C_Deactivate_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
