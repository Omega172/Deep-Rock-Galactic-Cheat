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
	 * Function Announcement_PickaxePart.Announcement_PickaxePart_C.Construct
	 */
	struct UAnnouncement_PickaxePart_C_Construct_Params
	{	};

	/**
	 * Function Announcement_PickaxePart.Announcement_PickaxePart_C.PreConstruct
	 */
	struct UAnnouncement_PickaxePart_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Announcement_PickaxePart.Announcement_PickaxePart_C.OnAnnounceAnimFinished
	 */
	struct UAnnouncement_PickaxePart_C_OnAnnounceAnimFinished_Params
	{	};

	/**
	 * Function Announcement_PickaxePart.Announcement_PickaxePart_C.ExecuteUbergraph_Announcement_PickaxePart
	 */
	struct UAnnouncement_PickaxePart_C_ExecuteUbergraph_Announcement_PickaxePart_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3JWZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
