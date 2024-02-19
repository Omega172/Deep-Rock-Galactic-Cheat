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
	 * Function HUD_MapTool.HUD_MapTool_C.Construct
	 */
	struct UHUD_MapTool_C_Construct_Params
	{	};

	/**
	 * Function HUD_MapTool.HUD_MapTool_C.OnToggleMapTool
	 */
	struct UHUD_MapTool_C_OnToggleMapTool_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_MapTool.HUD_MapTool_C.PreConstruct
	 */
	struct UHUD_MapTool_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_MapTool.HUD_MapTool_C.OnMainTurnOnFinished
	 */
	struct UHUD_MapTool_C_OnMainTurnOnFinished_Params
	{	};

	/**
	 * Function HUD_MapTool.HUD_MapTool_C.Tick
	 */
	struct UHUD_MapTool_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_MapTool.HUD_MapTool_C.ExecuteUbergraph_HUD_MapTool
	 */
	struct UHUD_MapTool_C_ExecuteUbergraph_HUD_MapTool_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
