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
	 * Function UI_Milestone_Item.UI_Milestone_Item_C.UpdateRewardStar
	 */
	struct UUI_Milestone_Item_C_UpdateRewardStar_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Milestone_Item.UI_Milestone_Item_C.GetIsClaimable
	 */
	struct UUI_Milestone_Item_C_GetIsClaimable_Params
	{
	public:
		bool                                                       ItemClaimable;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Milestone_Item.UI_Milestone_Item_C.GetIcon
	 */
	struct UUI_Milestone_Item_C_GetIcon_Params
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Milestone_Item.UI_Milestone_Item_C.SetCategoryFilter
	 */
	struct UUI_Milestone_Item_C_SetCategoryFilter_Params
	{
	public:
		TArray<class UTexture2D*>                                  Filter;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseButtonUp
	 */
	struct UUI_Milestone_Item_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseButtonDown
	 */
	struct UUI_Milestone_Item_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Milestone_Item.UI_Milestone_Item_C.SetHovered
	 */
	struct UUI_Milestone_Item_C_SetHovered_Params
	{
	public:
		bool                                                       Hovered;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Milestone_Item.UI_Milestone_Item_C.SetProgress
	 */
	struct UUI_Milestone_Item_C_SetProgress_Params
	{
	public:
		int32_t                                                    Tier;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Progress;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CurrentCount;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TargetCount;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsClaimable;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Milestone_Item.UI_Milestone_Item_C.PreConstruct
	 */
	struct UUI_Milestone_Item_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Milestone_Item.UI_Milestone_Item_C.Construct
	 */
	struct UUI_Milestone_Item_C_Construct_Params
	{	};

	/**
	 * Function UI_Milestone_Item.UI_Milestone_Item_C.UpdateItem
	 */
	struct UUI_Milestone_Item_C_UpdateItem_Params
	{	};

	/**
	 * Function UI_Milestone_Item.UI_Milestone_Item_C.OnCountChanged_Event
	 */
	struct UUI_Milestone_Item_C_OnCountChanged_Event_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMissionStat*                                        MissionStat;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseEnter
	 */
	struct UUI_Milestone_Item_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseLeave
	 */
	struct UUI_Milestone_Item_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Milestone_Item.UI_Milestone_Item_C.Claim KPI
	 */
	struct UUI_Milestone_Item_C_ClaimKPI_Params
	{	};

	/**
	 * Function UI_Milestone_Item.UI_Milestone_Item_C.CreateRewardStars
	 */
	struct UUI_Milestone_Item_C_CreateRewardStars_Params
	{
	public:
		int32_t                                                    StarCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Milestone_Item.UI_Milestone_Item_C.SetAnimClaimProgress
	 */
	struct UUI_Milestone_Item_C_SetAnimClaimProgress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Milestone_Item.UI_Milestone_Item_C.OnClaimAnimFinished
	 */
	struct UUI_Milestone_Item_C_OnClaimAnimFinished_Params
	{	};

	/**
	 * Function UI_Milestone_Item.UI_Milestone_Item_C.OnCompletedAnimFinished
	 */
	struct UUI_Milestone_Item_C_OnCompletedAnimFinished_Params
	{	};

	/**
	 * Function UI_Milestone_Item.UI_Milestone_Item_C.OnCompletedAnimStarted
	 */
	struct UUI_Milestone_Item_C_OnCompletedAnimStarted_Params
	{	};

	/**
	 * Function UI_Milestone_Item.UI_Milestone_Item_C.ExecuteUbergraph_UI_Milestone_Item
	 */
	struct UUI_Milestone_Item_C_ExecuteUbergraph_UI_Milestone_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2SMS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Milestone_Item.UI_Milestone_Item_C.OnItemClaimableChanged__DelegateSignature
	 */
	struct UUI_Milestone_Item_C_OnItemClaimableChanged__DelegateSignature_Params
	{
	public:
		class UUI_Milestone_Item_C*                                MilestoneItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
