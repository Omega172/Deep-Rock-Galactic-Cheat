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
	 * Function HUD_Warning_Manager.HUD_Warning_Manager_C.PreConstruct
	 */
	struct UHUD_Warning_Manager_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Warning_Manager.HUD_Warning_Manager_C.Construct
	 */
	struct UHUD_Warning_Manager_C_Construct_Params
	{	};

	/**
	 * Function HUD_Warning_Manager.HUD_Warning_Manager_C.OnNewHUDWarning_Event
	 */
	struct UHUD_Warning_Manager_C_OnNewHUDWarning_Event_Params
	{
	public:
		class UHUDWarningWidget*                                   newWidget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Warning_Manager.HUD_Warning_Manager_C.ExecuteUbergraph_HUD_Warning_Manager
	 */
	struct UHUD_Warning_Manager_C_ExecuteUbergraph_HUD_Warning_Manager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
