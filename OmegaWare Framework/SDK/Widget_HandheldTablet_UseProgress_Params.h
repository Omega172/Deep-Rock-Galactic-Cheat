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
	 * Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.UpdateIcon
	 */
	struct UWidget_HandheldTablet_UseProgress_C_UpdateIcon_Params
	{	};

	/**
	 * Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.GetUsableIcon
	 */
	struct UWidget_HandheldTablet_UseProgress_C_GetUsableIcon_Params
	{
	public:
		class UTexture2D*                                          OutTexture;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.UpdateProgress
	 */
	struct UWidget_HandheldTablet_UseProgress_C_UpdateProgress_Params
	{	};

	/**
	 * Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.PreConstruct
	 */
	struct UWidget_HandheldTablet_UseProgress_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.Construct
	 */
	struct UWidget_HandheldTablet_UseProgress_C_Construct_Params
	{	};

	/**
	 * Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.Tick
	 */
	struct UWidget_HandheldTablet_UseProgress_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_HandheldTablet_UseProgress.Widget_HandheldTablet_UseProgress_C.ExecuteUbergraph_Widget_HandheldTablet_UseProgress
	 */
	struct UWidget_HandheldTablet_UseProgress_C_ExecuteUbergraph_Widget_HandheldTablet_UseProgress_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
