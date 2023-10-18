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
	 * Function Tutorial_Hint_Spaceball.Tutorial_Hint_Spaceball_C.ReceiveOnHidden
	 */
	struct UTutorial_Hint_Spaceball_C_ReceiveOnHidden_Params
	{	};

	/**
	 * Function Tutorial_Hint_Spaceball.Tutorial_Hint_Spaceball_C.ReceiveOnInitialized
	 */
	struct UTutorial_Hint_Spaceball_C_ReceiveOnInitialized_Params
	{	};

	/**
	 * Function Tutorial_Hint_Spaceball.Tutorial_Hint_Spaceball_C.OnUse
	 */
	struct UTutorial_Hint_Spaceball_C_OnUse_Params
	{
	public:
		class UUsableComponentBase*                                Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tutorial_Hint_Spaceball.Tutorial_Hint_Spaceball_C.ExecuteUbergraph_Tutorial_Hint_Spaceball
	 */
	struct UTutorial_Hint_Spaceball_C_ExecuteUbergraph_Tutorial_Hint_Spaceball_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GLZL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
