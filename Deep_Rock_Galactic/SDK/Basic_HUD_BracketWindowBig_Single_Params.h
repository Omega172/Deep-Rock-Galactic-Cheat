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
	 * Function Basic_HUD_BracketWindowBig_Single.Basic_HUD_BracketWindowBig_Single_C.PreConstruct
	 */
	struct UBasic_HUD_BracketWindowBig_Single_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_HUD_BracketWindowBig_Single.Basic_HUD_BracketWindowBig_Single_C.Set Edge Color
	 */
	struct UBasic_HUD_BracketWindowBig_Single_C_SetEdgeColor_Params
	{
	public:
		struct FLinearColor                                        Edge_Tint;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_HUD_BracketWindowBig_Single.Basic_HUD_BracketWindowBig_Single_C.Set Background Opacity
	 */
	struct UBasic_HUD_BracketWindowBig_Single_C_SetBackgroundOpacity_Params
	{
	public:
		float                                                      BG_Opacity;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_HUD_BracketWindowBig_Single.Basic_HUD_BracketWindowBig_Single_C.ExecuteUbergraph_Basic_HUD_BracketWindowBig_Single
	 */
	struct UBasic_HUD_BracketWindowBig_Single_C_ExecuteUbergraph_Basic_HUD_BracketWindowBig_Single_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
