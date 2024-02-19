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
	 * Function BP_ForgeConsole.BP_ForgeConsole_C.OnWindowCreated
	 */
	struct ABP_ForgeConsole_C_OnWindowCreated_Params
	{
	public:
		class UWindowWidget*                                       WindowWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ForgeConsole.BP_ForgeConsole_C.UpdateNotificationBanner
	 */
	struct ABP_ForgeConsole_C_UpdateNotificationBanner_Params
	{	};

	/**
	 * Function BP_ForgeConsole.BP_ForgeConsole_C.ExecuteUbergraph_BP_ForgeConsole
	 */
	struct ABP_ForgeConsole_C_ExecuteUbergraph_BP_ForgeConsole_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2BOK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
