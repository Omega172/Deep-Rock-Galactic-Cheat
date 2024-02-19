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
	 * Function HUD_PlayerDown.HUD_PlayerDown_C.GetCycleCameraVisibility
	 */
	struct UHUD_PlayerDown_C_GetCycleCameraVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerDown.HUD_PlayerDown_C.Construct
	 */
	struct UHUD_PlayerDown_C_Construct_Params
	{	};

	/**
	 * Function HUD_PlayerDown.HUD_PlayerDown_C.OnDownCameraTargetChanged
	 */
	struct UHUD_PlayerDown_C_OnDownCameraTargetChanged_Params
	{
	public:
		class APlayerCharacter*                                    Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerDown.HUD_PlayerDown_C.PreConstruct
	 */
	struct UHUD_PlayerDown_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_PlayerDown.HUD_PlayerDown_C.End Player Down
	 */
	struct UHUD_PlayerDown_C_EndPlayerDown_Params
	{	};

	/**
	 * Function HUD_PlayerDown.HUD_PlayerDown_C.ReceiveNewVisibility
	 */
	struct UHUD_PlayerDown_C_ReceiveNewVisibility_Params
	{
	public:
		ESlateVisibility                                           NewVisibility;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerDown.HUD_PlayerDown_C.Start Player Down
	 */
	struct UHUD_PlayerDown_C_StartPlayerDown_Params
	{	};

	/**
	 * Function HUD_PlayerDown.HUD_PlayerDown_C.ExecuteUbergraph_HUD_PlayerDown
	 */
	struct UHUD_PlayerDown_C_ExecuteUbergraph_HUD_PlayerDown_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9VC6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
