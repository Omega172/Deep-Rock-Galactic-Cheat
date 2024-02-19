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
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.TryToggleSelection
	 */
	struct UITM_Overclocks_Equip_C_TryToggleSelection_Params
	{	};

	/**
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnRefreshItem
	 */
	struct UITM_Overclocks_Equip_C_OnRefreshItem_Params
	{
	public:
		bool                                                       WasCreated;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ET4F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUserWidget*                                         Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ActiveIndex;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetMenuLocked
	 */
	struct UITM_Overclocks_Equip_C_SetMenuLocked_Params
	{
	public:
		bool                                                       InLocked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InRequirementMet;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OverclockEquipped;                                       // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetMenuActive
	 */
	struct UITM_Overclocks_Equip_C_SetMenuActive_Params
	{
	public:
		bool                                                       Inactive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ActiveChanged;                                           // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.ShowOverclock
	 */
	struct UITM_Overclocks_Equip_C_ShowOverclock_Params
	{
	public:
		class UItemUpgrade*                                        Overclock;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetSelectionVisible
	 */
	struct UITM_Overclocks_Equip_C_SetSelectionVisible_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemUnhovered
	 */
	struct UITM_Overclocks_Equip_C_OnItemUnhovered_Params
	{
	public:
		class UITM_Overclocks_Equip_Item_C*                        Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemHovered
	 */
	struct UITM_Overclocks_Equip_C_OnItemHovered_Params
	{
	public:
		class UITM_Overclocks_Equip_Item_C*                        Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemClicked
	 */
	struct UITM_Overclocks_Equip_C_OnItemClicked_Params
	{
	public:
		class UITM_Overclocks_Equip_Item_C*                        Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.Refresh
	 */
	struct UITM_Overclocks_Equip_C_Refresh_Params
	{	};

	/**
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetData
	 */
	struct UITM_Overclocks_Equip_C_SetData_Params
	{
	public:
		class UClass*                                              InCharacterClass;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              InItemClass;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetBackgroundTint
	 */
	struct UITM_Overclocks_Equip_C_SetBackgroundTint_Params
	{
	public:
		struct FLinearColor                                        Tint;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemUpgradeCrafted_Event
	 */
	struct UITM_Overclocks_Equip_C_OnItemUpgradeCrafted_Event_Params
	{
	public:
		class UItemUpgrade*                                        Upgrade;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnPopupStarted
	 */
	struct UITM_Overclocks_Equip_C_OnPopupStarted_Params
	{	};

	/**
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnPopUpFinished
	 */
	struct UITM_Overclocks_Equip_C_OnPopUpFinished_Params
	{	};

	/**
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnMouseLeave
	 */
	struct UITM_Overclocks_Equip_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnMouseEnter
	 */
	struct UITM_Overclocks_Equip_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.Construct
	 */
	struct UITM_Overclocks_Equip_C_Construct_Params
	{	};

	/**
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.CloseMenuNicely
	 */
	struct UITM_Overclocks_Equip_C_CloseMenuNicely_Params
	{	};

	/**
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.PreConstruct
	 */
	struct UITM_Overclocks_Equip_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Overclocks_Equip_C_BndEvt__EquipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Overclocks_Equip_C_BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_Overclocks_Equip_C_BndEvt__EquipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.ExecuteUbergraph_ITM_Overclocks_Equip
	 */
	struct UITM_Overclocks_Equip_C_ExecuteUbergraph_ITM_Overclocks_Equip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
