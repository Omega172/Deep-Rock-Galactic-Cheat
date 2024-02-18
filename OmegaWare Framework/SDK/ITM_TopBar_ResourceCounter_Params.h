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
	 * Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.SetResourceData
	 */
	struct UITM_TopBar_ResourceCounter_C_SetResourceData_Params
	{
	public:
		class UResourceData*                                       InResource;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InAmount;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InRequiredAmount;                                        // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.PreConstruct
	 */
	struct UITM_TopBar_ResourceCounter_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.UpdateAmount
	 */
	struct UITM_TopBar_ResourceCounter_C_UpdateAmount_Params
	{
	public:
		float                                                      InAmount;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.Construct
	 */
	struct UITM_TopBar_ResourceCounter_C_Construct_Params
	{	};

	/**
	 * Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.OnResourceAmountChanged_Event
	 */
	struct UITM_TopBar_ResourceCounter_C_OnResourceAmountChanged_Event_Params
	{
	public:
		class UResourceData*                                       Resource;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      currentAmount;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.UpdateFromSave
	 */
	struct UITM_TopBar_ResourceCounter_C_UpdateFromSave_Params
	{	};

	/**
	 * Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.UpdateResourceBehavior
	 */
	struct UITM_TopBar_ResourceCounter_C_UpdateResourceBehavior_Params
	{
	public:
		bool                                                       HideWhenZero;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DoCountAnim;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.ExecuteUbergraph_ITM_TopBar_ResourceCounter
	 */
	struct UITM_TopBar_ResourceCounter_C_ExecuteUbergraph_ITM_TopBar_ResourceCounter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
