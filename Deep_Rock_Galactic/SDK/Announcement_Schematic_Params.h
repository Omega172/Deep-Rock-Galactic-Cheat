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
	 * Function Announcement_Schematic.Announcement_Schematic_C.SetTitleProgress
	 */
	struct UAnnouncement_Schematic_C_SetTitleProgress_Params
	{
	public:
		float                                                      InProgress;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Announcement_Schematic.Announcement_Schematic_C.PreConstruct
	 */
	struct UAnnouncement_Schematic_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Announcement_Schematic.Announcement_Schematic_C.Construct
	 */
	struct UAnnouncement_Schematic_C_Construct_Params
	{	};

	/**
	 * Function Announcement_Schematic.Announcement_Schematic_C.OnAnnounceAnimFinished
	 */
	struct UAnnouncement_Schematic_C_OnAnnounceAnimFinished_Params
	{	};

	/**
	 * Function Announcement_Schematic.Announcement_Schematic_C.ExecuteUbergraph_Announcement_Schematic
	 */
	struct UAnnouncement_Schematic_C_ExecuteUbergraph_Announcement_Schematic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
