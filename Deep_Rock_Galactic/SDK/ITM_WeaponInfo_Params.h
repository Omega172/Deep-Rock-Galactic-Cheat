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
	 * Function ITM_WeaponInfo.ITM_WeaponInfo_C.Construct
	 */
	struct UITM_WeaponInfo_C_Construct_Params
	{	};

	/**
	 * Function ITM_WeaponInfo.ITM_WeaponInfo_C.PreConstruct
	 */
	struct UITM_WeaponInfo_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_WeaponInfo.ITM_WeaponInfo_C.Update
	 */
	struct UITM_WeaponInfo_C_Update_Params
	{	};

	/**
	 * Function ITM_WeaponInfo.ITM_WeaponInfo_C.ExecuteUbergraph_ITM_WeaponInfo
	 */
	struct UITM_WeaponInfo_C_ExecuteUbergraph_ITM_WeaponInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
