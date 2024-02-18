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
	 * Function UI_Milestone_View.UI_Milestone_View_C.AddMilestone
	 */
	struct UUI_Milestone_View_C_AddMilestone_Params
	{
	public:
		class UMilestoneAsset*                                     InMilestone;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Milestone_View.UI_Milestone_View_C.Clear
	 */
	struct UUI_Milestone_View_C_Clear_Params
	{	};

	/**
	 * Function UI_Milestone_View.UI_Milestone_View_C.BuildList
	 */
	struct UUI_Milestone_View_C_BuildList_Params
	{	};

	/**
	 * Function UI_Milestone_View.UI_Milestone_View_C.Update Has Claimable State
	 */
	struct UUI_Milestone_View_C_UpdateHasClaimableState_Params
	{	};

	/**
	 * Function UI_Milestone_View.UI_Milestone_View_C.Construct
	 */
	struct UUI_Milestone_View_C_Construct_Params
	{	};

	/**
	 * Function UI_Milestone_View.UI_Milestone_View_C.BndEvt__UI_MissionStats_Categories_K2Node_ComponentBoundEvent_14_OnSelectedChanged__DelegateSignature
	 */
	struct UUI_Milestone_View_C_BndEvt__UI_MissionStats_Categories_K2Node_ComponentBoundEvent_14_OnSelectedChanged__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Milestone_View.UI_Milestone_View_C.Init Milestone Widget
	 */
	struct UUI_Milestone_View_C_InitMilestoneWidget_Params
	{
	public:
		class UUI_Milestone_Item_C*                                Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Milestone_View.UI_Milestone_View_C.OnItemClaimableChanged_Event
	 */
	struct UUI_Milestone_View_C_OnItemClaimableChanged_Event_Params
	{
	public:
		class UUI_Milestone_Item_C*                                MilestoneItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Milestone_View.UI_Milestone_View_C.Refresh
	 */
	struct UUI_Milestone_View_C_Refresh_Params
	{	};

	/**
	 * Function UI_Milestone_View.UI_Milestone_View_C.PreConstruct
	 */
	struct UUI_Milestone_View_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Milestone_View.UI_Milestone_View_C.ExecuteUbergraph_UI_Milestone_View
	 */
	struct UUI_Milestone_View_C_ExecuteUbergraph_UI_Milestone_View_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PJCC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Milestone_View.UI_Milestone_View_C.OnHasClaimableChanged__DelegateSignature
	 */
	struct UUI_Milestone_View_C_OnHasClaimableChanged__DelegateSignature_Params
	{
	public:
		bool                                                       HasClaimable;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
