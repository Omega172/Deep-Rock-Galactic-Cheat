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
	 * Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.CreateObjectiveWidget
	 */
	struct UHUD_ObjectivesBox_C_CreateObjectiveWidget_Params
	{
	public:
		class UObjective*                                          Objective;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.Construct
	 */
	struct UHUD_ObjectivesBox_C_Construct_Params
	{	};

	/**
	 * Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnObjectiveAdded
	 */
	struct UHUD_ObjectivesBox_C_OnObjectiveAdded_Params
	{
	public:
		class UObjective*                                          Objective;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnLaserPointerPressed
	 */
	struct UHUD_ObjectivesBox_C_OnLaserPointerPressed_Params
	{	};

	/**
	 * Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnLaserPointerReleased
	 */
	struct UHUD_ObjectivesBox_C_OnLaserPointerReleased_Params
	{	};

	/**
	 * Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.ShowDynamically
	 */
	struct UHUD_ObjectivesBox_C_ShowDynamically_Params
	{	};

	/**
	 * Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.Setup Deep Dive Label
	 */
	struct UHUD_ObjectivesBox_C_SetupDeepDiveLabel_Params
	{	};

	/**
	 * Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnGameEventCompletedEvent
	 */
	struct UHUD_ObjectivesBox_C_OnGameEventCompletedEvent_Params
	{
	public:
		class FText                                                GameEventName;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.SetVisible
	 */
	struct UHUD_ObjectivesBox_C_SetVisible_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       animate;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.AnimFinished
	 */
	struct UHUD_ObjectivesBox_C_AnimFinished_Params
	{	};

	/**
	 * Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnObjectiveWidgetUpdated
	 */
	struct UHUD_ObjectivesBox_C_OnObjectiveWidgetUpdated_Params
	{
	public:
		class UObjectiveWidget*                                    InObjectiveWidget;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnOptionalWidgetUpdated
	 */
	struct UHUD_ObjectivesBox_C_OnOptionalWidgetUpdated_Params
	{
	public:
		class UOptionalObjectiveWidget*                            InOptionalObjectiveWidget;                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.ExecuteUbergraph_HUD_ObjectivesBox
	 */
	struct UHUD_ObjectivesBox_C_ExecuteUbergraph_HUD_ObjectivesBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FAFE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
