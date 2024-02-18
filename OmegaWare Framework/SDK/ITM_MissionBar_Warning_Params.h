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
	 * Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.Update
	 */
	struct UITM_MissionBar_Warning_C_Update_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture2D*                                          Icon;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENUM_MenuColors                                            Color;                                                   // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.PreConstruct
	 */
	struct UITM_MissionBar_Warning_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.SetWarning
	 */
	struct UITM_MissionBar_Warning_C_SetWarning_Params
	{
	public:
		class UMissionWarning*                                     Warning;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.SetMutator
	 */
	struct UITM_MissionBar_Warning_C_SetMutator_Params
	{
	public:
		class UMissionMutator*                                     Mutator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.ExecuteUbergraph_ITM_MissionBar_Warning
	 */
	struct UITM_MissionBar_Warning_C_ExecuteUbergraph_ITM_MissionBar_Warning_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
