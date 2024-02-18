#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
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
	 * Function HUD_MinersManualNotification.HUD_MinersManualNotification_C.PreConstruct
	 */
	struct UHUD_MinersManualNotification_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_MinersManualNotification.HUD_MinersManualNotification_C.Show
	 */
	struct UHUD_MinersManualNotification_C_Show_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      TimeOnScreen;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_MinersManualNotification.HUD_MinersManualNotification_C.OnFinished
	 */
	struct UHUD_MinersManualNotification_C_OnFinished_Params
	{	};

	/**
	 * Function HUD_MinersManualNotification.HUD_MinersManualNotification_C.ExecuteUbergraph_HUD_MinersManualNotification
	 */
	struct UHUD_MinersManualNotification_C_ExecuteUbergraph_HUD_MinersManualNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
