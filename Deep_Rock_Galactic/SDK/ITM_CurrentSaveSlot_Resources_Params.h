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
	 * Function ITM_CurrentSaveSlot_Resources.ITM_CurrentSaveSlot_Resources_C.UpdateResourceAmount
	 */
	struct UITM_CurrentSaveSlot_Resources_C_UpdateResourceAmount_Params
	{
	public:
		class UFSDSaveGame*                                        SaveSlot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CurrentSaveSlot_Resources.ITM_CurrentSaveSlot_Resources_C.AddResource
	 */
	struct UITM_CurrentSaveSlot_Resources_C_AddResource_Params
	{
	public:
		class UResourceData*                                       InResource;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InHideWhenZero;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H6BA[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_CurrentSaveSlot_Resources.ITM_CurrentSaveSlot_Resources_C.SetResources
	 */
	struct UITM_CurrentSaveSlot_Resources_C_SetResources_Params
	{
	public:
		TArray<class UResourceData*>                               InResources;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ITM_CurrentSaveSlot_Resources.ITM_CurrentSaveSlot_Resources_C.PreConstruct
	 */
	struct UITM_CurrentSaveSlot_Resources_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_CurrentSaveSlot_Resources.ITM_CurrentSaveSlot_Resources_C.ExecuteUbergraph_ITM_CurrentSaveSlot_Resources
	 */
	struct UITM_CurrentSaveSlot_Resources_C_ExecuteUbergraph_ITM_CurrentSaveSlot_Resources_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
