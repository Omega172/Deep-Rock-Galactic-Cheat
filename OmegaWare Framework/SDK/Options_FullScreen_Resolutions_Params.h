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
	 * Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.AddNonPrimaryMonitorResolutions
	 */
	struct UOptions_FullScreen_Resolutions_C_AddNonPrimaryMonitorResolutions_Params
	{	};

	/**
	 * Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ShouldResolutionBeEnabled
	 */
	struct UOptions_FullScreen_Resolutions_C_ShouldResolutionBeEnabled_Params
	{
	public:
		class UFSDGameUserSettings*                                usersettings;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.StringToRes
	 */
	struct UOptions_FullScreen_Resolutions_C_StringToRes_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FIntPoint                                           IntPoint;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ResToString
	 */
	struct UOptions_FullScreen_Resolutions_C_ResToString_Params
	{
	public:
		struct FIntPoint                                           IntPoint;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              String;                                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.Construct
	 */
	struct UOptions_FullScreen_Resolutions_C_Construct_Params
	{	};

	/**
	 * Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.UINeedsUpdate
	 */
	struct UOptions_FullScreen_Resolutions_C_UINeedsUpdate_Params
	{	};

	/**
	 * Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ShowUI
	 */
	struct UOptions_FullScreen_Resolutions_C_ShowUI_Params
	{	};

	/**
	 * Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature
	 */
	struct UOptions_FullScreen_Resolutions_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ExecuteUbergraph_Options_FullScreen_Resolutions
	 */
	struct UOptions_FullScreen_Resolutions_C_ExecuteUbergraph_Options_FullScreen_Resolutions_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
