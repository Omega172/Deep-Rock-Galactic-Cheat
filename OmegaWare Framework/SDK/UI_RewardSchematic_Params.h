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
	 * Function UI_RewardSchematic.UI_RewardSchematic_C.PreConstruct
	 */
	struct UUI_RewardSchematic_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RewardSchematic.UI_RewardSchematic_C.Construct
	 */
	struct UUI_RewardSchematic_C_Construct_Params
	{	};

	/**
	 * Function UI_RewardSchematic.UI_RewardSchematic_C.PlayReceiveAnim
	 */
	struct UUI_RewardSchematic_C_PlayReceiveAnim_Params
	{	};

	/**
	 * Function UI_RewardSchematic.UI_RewardSchematic_C.ExecuteUbergraph_UI_RewardSchematic
	 */
	struct UUI_RewardSchematic_C_ExecuteUbergraph_UI_RewardSchematic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FYKD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
