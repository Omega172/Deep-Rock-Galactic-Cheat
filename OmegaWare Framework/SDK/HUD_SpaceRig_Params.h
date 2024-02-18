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
	 * Function HUD_SpaceRig.HUD_SpaceRig_C.Construct
	 */
	struct UHUD_SpaceRig_C_Construct_Params
	{	};

	/**
	 * Function HUD_SpaceRig.HUD_SpaceRig_C.OnCountdownCompleted_Event_1
	 */
	struct UHUD_SpaceRig_C_OnCountdownCompleted_Event_1_Params
	{	};

	/**
	 * Function HUD_SpaceRig.HUD_SpaceRig_C.OnCameraModeChanged_Event
	 */
	struct UHUD_SpaceRig_C_OnCameraModeChanged_Event_Params
	{
	public:
		ECharacterCameraMode                                       NewCameraMode;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterCameraMode                                       OldCameraMode;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SpaceRig.HUD_SpaceRig_C.OnTemporaryBuffChanged
	 */
	struct UHUD_SpaceRig_C_OnTemporaryBuffChanged_Params
	{
	public:
		class UTemporaryBuff*                                      buff;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerCharacter*                                    AffectedPlayer;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SpaceRig.HUD_SpaceRig_C.ExecuteUbergraph_HUD_SpaceRig
	 */
	struct UHUD_SpaceRig_C_ExecuteUbergraph_HUD_SpaceRig_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HEH2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
