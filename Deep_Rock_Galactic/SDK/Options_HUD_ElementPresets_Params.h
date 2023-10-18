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
	 * Function Options_HUD_ElementPresets.Options_HUD_ElementPresets_C.AddPreset
	 */
	struct UOptions_HUD_ElementPresets_C_AddPreset_Params
	{
	public:
		EHUDVisibilityPresets                                      PresetID;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZUOU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Options_HUD_ElementPresets.Options_HUD_ElementPresets_C.PreConstruct
	 */
	struct UOptions_HUD_ElementPresets_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_HUD_ElementPresets.Options_HUD_ElementPresets_C.ExecuteUbergraph_Options_HUD_ElementPresets
	 */
	struct UOptions_HUD_ElementPresets_C_ExecuteUbergraph_Options_HUD_ElementPresets_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
