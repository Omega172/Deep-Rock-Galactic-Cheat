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
	 * Function UI_LockOn_Crosshair.UI_LockOn_Crosshair_C.SetCircleVisible
	 */
	struct UUI_LockOn_Crosshair_C_SetCircleVisible_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_LockOn_Crosshair.UI_LockOn_Crosshair_C.SetAngle
	 */
	struct UUI_LockOn_Crosshair_C_SetAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_LockOn_Crosshair.UI_LockOn_Crosshair_C.PreConstruct
	 */
	struct UUI_LockOn_Crosshair_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_LockOn_Crosshair.UI_LockOn_Crosshair_C.Ping
	 */
	struct UUI_LockOn_Crosshair_C_Ping_Params
	{
	public:
		float                                                      PlaybackSpeed;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_LockOn_Crosshair.UI_LockOn_Crosshair_C.ExecuteUbergraph_UI_LockOn_Crosshair
	 */
	struct UUI_LockOn_Crosshair_C_ExecuteUbergraph_UI_LockOn_Crosshair_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
