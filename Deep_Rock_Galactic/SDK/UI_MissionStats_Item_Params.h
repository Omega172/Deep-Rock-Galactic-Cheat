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
	 * Function UI_MissionStats_Item.UI_MissionStats_Item_C.IsInteractable
	 */
	struct UUI_MissionStats_Item_C_IsInteractable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MissionStats_Item.UI_MissionStats_Item_C.SetCategoryFilter
	 */
	struct UUI_MissionStats_Item_C_SetCategoryFilter_Params
	{
	public:
		TArray<class UTexture2D*>                                  Filter;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_MissionStats_Item.UI_MissionStats_Item_C.GetMissionStat
	 */
	struct UUI_MissionStats_Item_C_GetMissionStat_Params
	{
	public:
		class UMissionStat*                                        MissionStat;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MissionStats_Item.UI_MissionStats_Item_C.PreConstruct
	 */
	struct UUI_MissionStats_Item_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MissionStats_Item.UI_MissionStats_Item_C.Construct
	 */
	struct UUI_MissionStats_Item_C_Construct_Params
	{	};

	/**
	 * Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnCountChanged_Event
	 */
	struct UUI_MissionStats_Item_C_OnCountChanged_Event_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMissionStat*                                        MissionStat;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MissionStats_Item.UI_MissionStats_Item_C.Set Selected
	 */
	struct UUI_MissionStats_Item_C_SetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnMouseEnter
	 */
	struct UUI_MissionStats_Item_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnMouseLeave
	 */
	struct UUI_MissionStats_Item_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_MissionStats_Item.UI_MissionStats_Item_C.ExecuteUbergraph_UI_MissionStats_Item
	 */
	struct UUI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_253A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnHoverEnd__DelegateSignature
	 */
	struct UUI_MissionStats_Item_C_OnHoverEnd__DelegateSignature_Params
	{
	public:
		class UUI_MissionStats_Item_C*                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnHoverBegin__DelegateSignature
	 */
	struct UUI_MissionStats_Item_C_OnHoverBegin__DelegateSignature_Params
	{
	public:
		class UUI_MissionStats_Item_C*                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
