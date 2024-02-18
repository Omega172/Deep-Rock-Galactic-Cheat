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
	 * Function ITM_MisSel_ObjectivePrimary.ITM_MisSel_ObjectivePrimary_C.SetData
	 */
	struct UITM_MisSel_ObjectivePrimary_C_SetData_Params
	{
	public:
		class UClass*                                              Objective;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MissionScale;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HazardBonus;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_MisSel_ObjectivePrimary.ITM_MisSel_ObjectivePrimary_C.PreConstruct
	 */
	struct UITM_MisSel_ObjectivePrimary_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_MisSel_ObjectivePrimary.ITM_MisSel_ObjectivePrimary_C.ExecuteUbergraph_ITM_MisSel_ObjectivePrimary
	 */
	struct UITM_MisSel_ObjectivePrimary_C_ExecuteUbergraph_ITM_MisSel_ObjectivePrimary_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
