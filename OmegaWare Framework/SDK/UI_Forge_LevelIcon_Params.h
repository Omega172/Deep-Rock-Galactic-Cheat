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
	 * Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.GetLevel
	 */
	struct UUI_Forge_LevelIcon_C_GetLevel_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetLevelFromSchematic
	 */
	struct UUI_Forge_LevelIcon_C_SetLevelFromSchematic_Params
	{
	public:
		class USchematic*                                          Schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetLevel
	 */
	struct UUI_Forge_LevelIcon_C_SetLevel_Params
	{
	public:
		int32_t                                                    InLevel;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JU0Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetIconColor
	 */
	struct UUI_Forge_LevelIcon_C_SetIconColor_Params
	{
	public:
		ENUM_MenuColors                                            InColor;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.SetSize
	 */
	struct UUI_Forge_LevelIcon_C_SetSize_Params
	{
	public:
		float                                                      InSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.PreConstruct
	 */
	struct UUI_Forge_LevelIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Forge_LevelIcon.UI_Forge_LevelIcon_C.ExecuteUbergraph_UI_Forge_LevelIcon
	 */
	struct UUI_Forge_LevelIcon_C_ExecuteUbergraph_UI_Forge_LevelIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
