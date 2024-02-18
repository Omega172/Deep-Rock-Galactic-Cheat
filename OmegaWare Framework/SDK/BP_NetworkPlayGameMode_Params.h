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
	 * Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.GetDefaultPawnClassForController
	 */
	struct ABP_NetworkPlayGameMode_C_GetDefaultPawnClassForController_Params
	{
	public:
		class AController*                                         InController;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.RecieveAllDwarvesDown
	 */
	struct ABP_NetworkPlayGameMode_C_RecieveAllDwarvesDown_Params
	{	};

	/**
	 * Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.ExecuteUbergraph_BP_NetworkPlayGameMode
	 */
	struct ABP_NetworkPlayGameMode_C_ExecuteUbergraph_BP_NetworkPlayGameMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
