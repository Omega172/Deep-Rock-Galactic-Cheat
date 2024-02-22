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
	 * Function HUD_Resources_Team.HUD_Resources_Team_C.IsObjectiveResource
	 */
	struct UHUD_Resources_Team_C_IsObjectiveResource_Params
	{
	public:
		class UCappedResource*                                     InResource;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsObjective;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8G94[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCappedResource*                                     OutResource;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Resources_Team.HUD_Resources_Team_C.Construct
	 */
	struct UHUD_Resources_Team_C_Construct_Params
	{	};

	/**
	 * Function HUD_Resources_Team.HUD_Resources_Team_C.PreConstruct
	 */
	struct UHUD_Resources_Team_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Resources_Team.HUD_Resources_Team_C.Add Resource
	 */
	struct UHUD_Resources_Team_C_AddResource_Params
	{
	public:
		class UCappedResource*                                     Resource;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Resources_Team.HUD_Resources_Team_C.Show Widget
	 */
	struct UHUD_Resources_Team_C_ShowWidget_Params
	{	};

	/**
	 * Function HUD_Resources_Team.HUD_Resources_Team_C.Hide Widget
	 */
	struct UHUD_Resources_Team_C_HideWidget_Params
	{	};

	/**
	 * Function HUD_Resources_Team.HUD_Resources_Team_C.Ping Widget
	 */
	struct UHUD_Resources_Team_C_PingWidget_Params
	{	};

	/**
	 * Function HUD_Resources_Team.HUD_Resources_Team_C.OnTransitionFinished
	 */
	struct UHUD_Resources_Team_C_OnTransitionFinished_Params
	{	};

	/**
	 * Function HUD_Resources_Team.HUD_Resources_Team_C.OnDepositingEnd_Event
	 */
	struct UHUD_Resources_Team_C_OnDepositingEnd_Event_Params
	{
	public:
		class UResourceBank*                                       ResourceBank;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Resources_Team.HUD_Resources_Team_C.OnDepositingBegin_Event
	 */
	struct UHUD_Resources_Team_C_OnDepositingBegin_Event_Params
	{
	public:
		class UResourceBank*                                       ResourceBank;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Resources_Team.HUD_Resources_Team_C.OnResourceChanged_Event
	 */
	struct UHUD_Resources_Team_C_OnResourceChanged_Event_Params
	{
	public:
		class UCappedResource*                                     Resource;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Resources_Team.HUD_Resources_Team_C.OnResourceAdded
	 */
	struct UHUD_Resources_Team_C_OnResourceAdded_Params
	{
	public:
		class UCappedResource*                                     Resource;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Resources_Team.HUD_Resources_Team_C.OnToggleNameplatesEvent_Event_1
	 */
	struct UHUD_Resources_Team_C_OnToggleNameplatesEvent_Event_1_Params
	{
	public:
		bool                                                       boolValue;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Resources_Team.HUD_Resources_Team_C.ExecuteUbergraph_HUD_Resources_Team
	 */
	struct UHUD_Resources_Team_C_ExecuteUbergraph_HUD_Resources_Team_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
