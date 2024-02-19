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
	 * Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.GetResourceAmount
	 */
	struct UITM_TopBar_Resources_C_GetResourceAmount_Params
	{
	public:
		class UResourceData*                                       Resource;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Amount;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3GU9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.AddResource
	 */
	struct UITM_TopBar_Resources_C_AddResource_Params
	{
	public:
		class UResourceData*                                       InResource;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InHideWhenZero;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B6AV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.SetResources
	 */
	struct UITM_TopBar_Resources_C_SetResources_Params
	{
	public:
		TArray<class UResourceData*>                               InResources;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.PreConstruct
	 */
	struct UITM_TopBar_Resources_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.UpdateResourceBehavior
	 */
	struct UITM_TopBar_Resources_C_UpdateResourceBehavior_Params
	{
	public:
		bool                                                       HideWhenZero;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DoCountAnim;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.ExecuteUbergraph_ITM_TopBar_Resources
	 */
	struct UITM_TopBar_Resources_C_ExecuteUbergraph_ITM_TopBar_Resources_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
