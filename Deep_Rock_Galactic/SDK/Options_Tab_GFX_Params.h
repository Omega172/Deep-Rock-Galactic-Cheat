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
	 * Function Options_Tab_GFX.Options_Tab_GFX_C.SetPlatform
	 */
	struct UOptions_Tab_GFX_C_SetPlatform_Params
	{
	public:
		EFSDTargetPlatform                                         Platform;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Tab_GFX.Options_Tab_GFX_C.Construct
	 */
	struct UOptions_Tab_GFX_C_Construct_Params
	{	};

	/**
	 * Function Options_Tab_GFX.Options_Tab_GFX_C.PreConstruct
	 */
	struct UOptions_Tab_GFX_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_Tab_GFX.Options_Tab_GFX_C.ExecuteUbergraph_Options_Tab_GFX
	 */
	struct UOptions_Tab_GFX_C_ExecuteUbergraph_Options_Tab_GFX_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
