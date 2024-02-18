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
	 * Function UI_LockOn_Counter.UI_LockOn_Counter_C.SetCurrentTargets
	 */
	struct UUI_LockOn_Counter_C_SetCurrentTargets_Params
	{
	public:
		int32_t                                                    InCount;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_LockOn_Counter.UI_LockOn_Counter_C.SetMaxTargets
	 */
	struct UUI_LockOn_Counter_C_SetMaxTargets_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_LockOn_Counter.UI_LockOn_Counter_C.SetupTargetCounter
	 */
	struct UUI_LockOn_Counter_C_SetupTargetCounter_Params
	{
	public:
		bool                                                       WasCreated;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LHB0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUserWidget*                                         Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ActiveIndex;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H9J8[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_LockOn_Counter.UI_LockOn_Counter_C.PreConstruct
	 */
	struct UUI_LockOn_Counter_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_LockOn_Counter.UI_LockOn_Counter_C.SetItem
	 */
	struct UUI_LockOn_Counter_C_SetItem_Params
	{
	public:
		class ALockOnWeapon*                                       InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_LockOn_Counter.UI_LockOn_Counter_C.OnLockOnCountChanged
	 */
	struct UUI_LockOn_Counter_C_OnLockOnCountChanged_Params
	{
	public:
		int32_t                                                    InCurrentCount;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_LockOn_Counter.UI_LockOn_Counter_C.ExecuteUbergraph_UI_LockOn_Counter
	 */
	struct UUI_LockOn_Counter_C_ExecuteUbergraph_UI_LockOn_Counter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
