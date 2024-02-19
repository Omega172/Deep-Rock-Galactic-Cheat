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
	 * Function Announcement_CollectedEverything.Announcement_CollectedEverything_C.SetMessage
	 */
	struct UAnnouncement_CollectedEverything_C_SetMessage_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Announcement_CollectedEverything.Announcement_CollectedEverything_C.PreConstruct
	 */
	struct UAnnouncement_CollectedEverything_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Announcement_CollectedEverything.Announcement_CollectedEverything_C.Construct
	 */
	struct UAnnouncement_CollectedEverything_C_Construct_Params
	{	};

	/**
	 * Function Announcement_CollectedEverything.Announcement_CollectedEverything_C.OnAnnounceAnimFinished
	 */
	struct UAnnouncement_CollectedEverything_C_OnAnnounceAnimFinished_Params
	{	};

	/**
	 * Function Announcement_CollectedEverything.Announcement_CollectedEverything_C.ExecuteUbergraph_Announcement_CollectedEverything
	 */
	struct UAnnouncement_CollectedEverything_C_ExecuteUbergraph_Announcement_CollectedEverything_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
