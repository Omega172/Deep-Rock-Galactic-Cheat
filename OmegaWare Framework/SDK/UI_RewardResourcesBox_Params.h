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
	 * Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.HasResources
	 */
	struct UUI_RewardResourcesBox_C_HasResources_Params
	{
	public:
		bool                                                       HasResources;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ECX3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.PreConstruct
	 */
	struct UUI_RewardResourcesBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.PlayReceiveAnim
	 */
	struct UUI_RewardResourcesBox_C_PlayReceiveAnim_Params
	{	};

	/**
	 * Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.AddResource
	 */
	struct UUI_RewardResourcesBox_C_AddResource_Params
	{
	public:
		class URewardWidget*                                       RewardWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.Clear
	 */
	struct UUI_RewardResourcesBox_C_Clear_Params
	{	};

	/**
	 * Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.ExecuteUbergraph_UI_RewardResourcesBox
	 */
	struct UUI_RewardResourcesBox_C_ExecuteUbergraph_UI_RewardResourcesBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
