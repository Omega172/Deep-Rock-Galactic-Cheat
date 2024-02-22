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
	 * Function Options_GameServerName.Options_GameServerName_C.UINeedsUpdate
	 */
	struct UOptions_GameServerName_C_UINeedsUpdate_Params
	{	};

	/**
	 * Function Options_GameServerName.Options_GameServerName_C.ShowOptions
	 */
	struct UOptions_GameServerName_C_ShowOptions_Params
	{	};

	/**
	 * Function Options_GameServerName.Options_GameServerName_C.Construct
	 */
	struct UOptions_GameServerName_C_Construct_Params
	{	};

	/**
	 * Function Options_GameServerName.Options_GameServerName_C.BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature
	 */
	struct UOptions_GameServerName_C_BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		unsigned char                                              CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_GameServerName.Options_GameServerName_C.UpdateName
	 */
	struct UOptions_GameServerName_C_UpdateName_Params
	{
	public:
		class FString                                              NewValue;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_GameServerName.Options_GameServerName_C.ExecuteUbergraph_Options_GameServerName
	 */
	struct UOptions_GameServerName_C_ExecuteUbergraph_Options_GameServerName_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PWHN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
