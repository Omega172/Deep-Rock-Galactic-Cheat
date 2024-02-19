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
	 * Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.PreConstruct
	 */
	struct UHUD_Milestone_Manager_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.OnMilestoneReached
	 */
	struct UHUD_Milestone_Manager_C_OnMilestoneReached_Params
	{	};

	/**
	 * Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.ExecuteUbergraph_HUD_Milestone_Manager
	 */
	struct UHUD_Milestone_Manager_C_ExecuteUbergraph_HUD_Milestone_Manager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
