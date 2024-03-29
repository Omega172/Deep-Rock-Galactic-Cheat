﻿#pragma once

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
	 * Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.OnSpawnRelease_Attached
	 */
	struct AMAG_Flamethrower_BottleTP_C_OnSpawnRelease_Attached_Params
	{
	public:
		class AActor*                                              Parent;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7IR6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.OnSpawnRelease_Released
	 */
	struct AMAG_Flamethrower_BottleTP_C_OnSpawnRelease_Released_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.DoRelease
	 */
	struct AMAG_Flamethrower_BottleTP_C_DoRelease_Params
	{	};

	/**
	 * Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.OnItemSkinned
	 */
	struct AMAG_Flamethrower_BottleTP_C_OnItemSkinned_Params
	{
	public:
		class USkinEffect*                                         Skin;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.ExecuteUbergraph_MAG_Flamethrower_BottleTP
	 */
	struct AMAG_Flamethrower_BottleTP_C_ExecuteUbergraph_MAG_Flamethrower_BottleTP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ASJ2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
