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
	 * Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.Recharging
	 */
	struct UHUD_CroNew_GrapplingGun_C_Recharging_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.ClearMessages
	 */
	struct UHUD_CroNew_GrapplingGun_C_ClearMessages_Params
	{	};

	/**
	 * Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.DistanceMessage
	 */
	struct UHUD_CroNew_GrapplingGun_C_DistanceMessage_Params
	{
	public:
		float                                                      Dist;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TooFar;                                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.FailMessage
	 */
	struct UHUD_CroNew_GrapplingGun_C_FailMessage_Params
	{
	public:
		class FText                                                Msg;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
