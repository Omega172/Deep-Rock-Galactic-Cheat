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
	 * Function Options_Language.Options_Language_C.UpdateWorkInProgressLabel
	 */
	struct UOptions_Language_C_UpdateWorkInProgressLabel_Params
	{
	public:
		class FString                                              languageCode;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Language.Options_Language_C.GetFilteredLanguages
	 */
	struct UOptions_Language_C_GetFilteredLanguages_Params
	{
	public:
		TArray<struct FLocalizedLanguageInfo>                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Options_Language.Options_Language_C.GetLanguageName
	 */
	struct UOptions_Language_C_GetLanguageName_Params
	{
	public:
		class FString                                              InName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InCode;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                ReturnValue;                                             // 0x0020(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Options_Language.Options_Language_C.Construct
	 */
	struct UOptions_Language_C_Construct_Params
	{	};

	/**
	 * Function Options_Language.Options_Language_C.UINeedsUpdate
	 */
	struct UOptions_Language_C_UINeedsUpdate_Params
	{	};

	/**
	 * Function Options_Language.Options_Language_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	 */
	struct UOptions_Language_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Language.Options_Language_C.PreConstruct
	 */
	struct UOptions_Language_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_Language.Options_Language_C.ExecuteUbergraph_Options_Language
	 */
	struct UOptions_Language_C_ExecuteUbergraph_Options_Language_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Language.Options_Language_C.OnLanguageChanged__DelegateSignature
	 */
	struct UOptions_Language_C_OnLanguageChanged__DelegateSignature_Params
	{
	public:
		struct FLocalizedLanguageInfo                              SelectedLanguage;                                        // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
