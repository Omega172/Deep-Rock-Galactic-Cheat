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
	 * Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.SetValue
	 */
	struct UBasic_BoolUserSetting_C_SetValue_Params
	{
	public:
		bool                                                       InValue;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.GetValue
	 */
	struct UBasic_BoolUserSetting_C_GetValue_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.SetBoolUserSetting
	 */
	struct UBasic_BoolUserSetting_C_SetBoolUserSetting_Params
	{
	public:
		class UBoolUserSettingAsset*                               InSetting;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.PreConstruct
	 */
	struct UBasic_BoolUserSetting_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.Construct
	 */
	struct UBasic_BoolUserSetting_C_Construct_Params
	{	};

	/**
	 * Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.OnClicked
	 */
	struct UBasic_BoolUserSetting_C_OnClicked_Params
	{
	public:
		bool                                                       InChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.Refresh
	 */
	struct UBasic_BoolUserSetting_C_Refresh_Params
	{	};

	/**
	 * Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.ExecuteUbergraph_Basic_BoolUserSetting
	 */
	struct UBasic_BoolUserSetting_C_ExecuteUbergraph_Basic_BoolUserSetting_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
