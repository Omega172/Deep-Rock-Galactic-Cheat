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
	 * Function HUD_Frozen.HUD_Frozen_C.PreConstruct
	 */
	struct UHUD_Frozen_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Frozen.HUD_Frozen_C.Construct
	 */
	struct UHUD_Frozen_C_Construct_Params
	{	};

	/**
	 * Function HUD_Frozen.HUD_Frozen_C.OnCharacterStateChanged_Event
	 */
	struct UHUD_Frozen_C_OnCharacterStateChanged_Event_Params
	{
	public:
		ECharacterState                                            NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Frozen.HUD_Frozen_C.Tick
	 */
	struct UHUD_Frozen_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Frozen.HUD_Frozen_C.SetProgress
	 */
	struct UHUD_Frozen_C_SetProgress_Params
	{
	public:
		float                                                      CurrentProgress;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Frozen.HUD_Frozen_C.ThawInputUpdated
	 */
	struct UHUD_Frozen_C_ThawInputUpdated_Params
	{
	public:
		TArray<EThawInputDirection>                                Inputs;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Initial;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Frozen.HUD_Frozen_C.OnBreakOutInputSuccess_Event_1
	 */
	struct UHUD_Frozen_C_OnBreakOutInputSuccess_Event_1_Params
	{
	public:
		EThawInputDirection                                        Direction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Frozen.HUD_Frozen_C.CustomEvent_1
	 */
	struct UHUD_Frozen_C_CustomEvent_1_Params
	{
	public:
		EThawInputDirection                                        Direction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Frozen.HUD_Frozen_C.ExecuteUbergraph_HUD_Frozen
	 */
	struct UHUD_Frozen_C_ExecuteUbergraph_HUD_Frozen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
