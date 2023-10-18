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
	 * Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.CreateToolTip
	 */
	struct UITM_UpgGear_GearTab_C_CreateToolTip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.UpdateNotification
	 */
	struct UITM_UpgGear_GearTab_C_UpdateNotification_Params
	{
	public:
		bool                                                       IsItemUnlocked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C99N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.GetItemClass
	 */
	struct UITM_UpgGear_GearTab_C_GetItemClass_Params
	{
	public:
		class UClass*                                              itemClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.IsItemClass
	 */
	struct UITM_UpgGear_GearTab_C_IsItemClass_Params
	{
	public:
		class UClass*                                              InItemClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Refresh
	 */
	struct UITM_UpgGear_GearTab_C_Refresh_Params
	{	};

	/**
	 * Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.SetHovered
	 */
	struct UITM_UpgGear_GearTab_C_SetHovered_Params
	{
	public:
		bool                                                       InItemHovered;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Construct
	 */
	struct UITM_UpgGear_GearTab_C_Construct_Params
	{	};

	/**
	 * Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_UpgGear_GearTab_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_UpgGear_GearTab_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_UpgGear_GearTab_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.SetSelected
	 */
	struct UITM_UpgGear_GearTab_C_SetSelected_Params
	{
	public:
		bool                                                       ItemSelected;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.PreConstruct
	 */
	struct UITM_UpgGear_GearTab_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnItemChanged_Event
	 */
	struct UITM_UpgGear_GearTab_C_OnItemChanged_Event_Params
	{
	public:
		class UClass*                                              NewItemClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnItemUINotificationChange
	 */
	struct UITM_UpgGear_GearTab_C_OnItemUINotificationChange_Params
	{	};

	/**
	 * Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Destruct
	 */
	struct UITM_UpgGear_GearTab_C_Destruct_Params
	{	};

	/**
	 * Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.ExecuteUbergraph_ITM_UpgGear_GearTab
	 */
	struct UITM_UpgGear_GearTab_C_ExecuteUbergraph_ITM_UpgGear_GearTab_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnUnhovered__DelegateSignature
	 */
	struct UITM_UpgGear_GearTab_C_OnUnhovered__DelegateSignature_Params
	{
	public:
		class UITM_UpgGear_GearTab_C*                              Tab;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnHovered__DelegateSignature
	 */
	struct UITM_UpgGear_GearTab_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UITM_UpgGear_GearTab_C*                              Tab;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnClicked__DelegateSignature
	 */
	struct UITM_UpgGear_GearTab_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UITM_UpgGear_GearTab_C*                              Tab;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
