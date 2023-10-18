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
	 * Function HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C.Construct
	 */
	struct UHUD_MinersManualNotification_Manager_C_Construct_Params
	{	};

	/**
	 * Function HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C.OnMinersManualNotification
	 */
	struct UHUD_MinersManualNotification_Manager_C_OnMinersManualNotification_Params
	{
	public:
		EMinersManualSection                                       Section;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ATL7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGuid                                               ObjectID;                                                // 0x0004(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZQU3[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C.ExecuteUbergraph_HUD_MinersManualNotification_Manager
	 */
	struct UHUD_MinersManualNotification_Manager_C_ExecuteUbergraph_HUD_MinersManualNotification_Manager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
