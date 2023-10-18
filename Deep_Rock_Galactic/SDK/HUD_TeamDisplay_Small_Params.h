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
	 * Function HUD_TeamDisplay_Small.HUD_TeamDisplay_Small_C.Construct
	 */
	struct UHUD_TeamDisplay_Small_C_Construct_Params
	{	};

	/**
	 * Function HUD_TeamDisplay_Small.HUD_TeamDisplay_Small_C.OnPlayerJoined
	 */
	struct UHUD_TeamDisplay_Small_C_OnPlayerJoined_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_TeamDisplay_Small.HUD_TeamDisplay_Small_C.PreConstruct
	 */
	struct UHUD_TeamDisplay_Small_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_TeamDisplay_Small.HUD_TeamDisplay_Small_C.ExecuteUbergraph_HUD_TeamDisplay_Small
	 */
	struct UHUD_TeamDisplay_Small_C_ExecuteUbergraph_HUD_TeamDisplay_Small_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
