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
	 * Function Options_Tab_UI.Options_Tab_UI_C.Construct
	 */
	struct UOptions_Tab_UI_C_Construct_Params
	{	};

	/**
	 * Function Options_Tab_UI.Options_Tab_UI_C.PreConstruct
	 */
	struct UOptions_Tab_UI_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_Tab_UI.Options_Tab_UI_C.OnIsUserGeneratedContentAllowed
	 */
	struct UOptions_Tab_UI_C_OnIsUserGeneratedContentAllowed_Params
	{
	public:
		class APlayerState*                                        CheckedPlayerState;                                      // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EBlueprintableUserPrivileges                               CheckedPrivilege;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EBlueprintablePrivilegeResults                             PrivilegeResult;                                         // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Tab_UI.Options_Tab_UI_C.ExecuteUbergraph_Options_Tab_UI
	 */
	struct UOptions_Tab_UI_C_ExecuteUbergraph_Options_Tab_UI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Tab_UI.Options_Tab_UI_C.SettingsChanged__DelegateSignature
	 */
	struct UOptions_Tab_UI_C_SettingsChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
