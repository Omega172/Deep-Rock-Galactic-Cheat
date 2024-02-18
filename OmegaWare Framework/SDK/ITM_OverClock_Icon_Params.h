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
	 * Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetOverclockTooltip
	 */
	struct UITM_Overclock_Icon_C_SetOverclockTooltip_Params
	{
	public:
		class UItemUpgrade*                                        Overclock;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.GetOverclockTooltip
	 */
	struct UITM_Overclock_Icon_C_GetOverclockTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.GetFrameLinearColor
	 */
	struct UITM_Overclock_Icon_C_GetFrameLinearColor_Params
	{
	public:
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromSchematicType
	 */
	struct UITM_Overclock_Icon_C_FromSchematicType_Params
	{
	public:
		ESchematicType                                             InType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SAQU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetCategory
	 */
	struct UITM_Overclock_Icon_C_SetCategory_Params
	{
	public:
		class USchematicCategory*                                  InCategory;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrameLinearColor
	 */
	struct UITM_Overclock_Icon_C_SetFrameLinearColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromUpgrade
	 */
	struct UITM_Overclock_Icon_C_FromUpgrade_Params
	{
	public:
		class UItemUpgrade*                                        InUpgrade;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USchematicCategory*                                  OutSchematicCategory;                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromSchematic
	 */
	struct UITM_Overclock_Icon_C_FromSchematic_Params
	{
	public:
		class USchematic*                                          InSchematic;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShowState;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIconColor
	 */
	struct UITM_Overclock_Icon_C_SetIconColor_Params
	{
	public:
		ENUM_MenuColors                                            Color;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0844[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIcon
	 */
	struct UITM_Overclock_Icon_C_SetIcon_Params
	{
	public:
		class UTexture2D*                                          Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrame
	 */
	struct UITM_Overclock_Icon_C_SetFrame_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrameColor
	 */
	struct UITM_Overclock_Icon_C_SetFrameColor_Params
	{
	public:
		ENUM_MenuColors                                            ColorSelector;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IWQY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIconSize
	 */
	struct UITM_Overclock_Icon_C_SetIconSize_Params
	{
	public:
		int32_t                                                    InSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.PreConstruct
	 */
	struct UITM_Overclock_Icon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.ExecuteUbergraph_ITM_Overclock_Icon
	 */
	struct UITM_Overclock_Icon_C_ExecuteUbergraph_ITM_Overclock_Icon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
