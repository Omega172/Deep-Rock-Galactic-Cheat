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
	 * Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.FadeIn
	 */
	struct UShowProfile_ToolTip_C_FadeIn_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.SetPostionAndAlignment
	 */
	struct UShowProfile_ToolTip_C_SetPostionAndAlignment_Params
	{
	public:
		struct FVector2D                                           InPosition;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InAlignment;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.SetText
	 */
	struct UShowProfile_ToolTip_C_SetText_Params
	{
	public:
		class FText                                                ToolTip;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Region;                                                  // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Name;                                                    // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.SetTarget
	 */
	struct UShowProfile_ToolTip_C_SetTarget_Params
	{
	public:
		class UWidget*                                             TargetWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.PreConstruct
	 */
	struct UShowProfile_ToolTip_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.Set Tool Tip Owner
	 */
	struct UShowProfile_ToolTip_C_SetToolTipOwner_Params
	{
	public:
		class UWidget*                                             Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShowProfile_ToolTip.ShowProfile_ToolTip_C.ExecuteUbergraph_ShowProfile_ToolTip
	 */
	struct UShowProfile_ToolTip_C_ExecuteUbergraph_ShowProfile_ToolTip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
