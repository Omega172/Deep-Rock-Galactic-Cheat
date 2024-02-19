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
	 * Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.Update
	 */
	struct UITM_WeaponAndPerkInfo_C_Update_Params
	{	};

	/**
	 * Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.PlayEnter
	 */
	struct UITM_WeaponAndPerkInfo_C_PlayEnter_Params
	{	};

	/**
	 * Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.PlayLeave
	 */
	struct UITM_WeaponAndPerkInfo_C_PlayLeave_Params
	{	};

	/**
	 * Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.EnterFinished
	 */
	struct UITM_WeaponAndPerkInfo_C_EnterFinished_Params
	{	};

	/**
	 * Function ITM_WeaponAndPerkInfo.ITM_WeaponAndPerkInfo_C.ExecuteUbergraph_ITM_WeaponAndPerkInfo
	 */
	struct UITM_WeaponAndPerkInfo_C_ExecuteUbergraph_ITM_WeaponAndPerkInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EHIU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
