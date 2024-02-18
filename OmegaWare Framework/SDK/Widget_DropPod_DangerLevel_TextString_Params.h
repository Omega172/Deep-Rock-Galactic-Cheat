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
	 * Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.SetColor
	 */
	struct UWidget_DropPod_DangerLevel_TextString_C_SetColor_Params
	{
	public:
		struct FSlateColor                                         InColorAndOpacity;                                       // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.SetText
	 */
	struct UWidget_DropPod_DangerLevel_TextString_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.Tick
	 */
	struct UWidget_DropPod_DangerLevel_TextString_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.PreConstruct
	 */
	struct UWidget_DropPod_DangerLevel_TextString_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.ExecuteUbergraph_Widget_DropPod_DangerLevel_TextString
	 */
	struct UWidget_DropPod_DangerLevel_TextString_C_ExecuteUbergraph_Widget_DropPod_DangerLevel_TextString_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
