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
	 * Function ITM_SkinItem.ITM_SkinItem_C.SetIsDefaultItem
	 */
	struct UITM_SkinItem_C_SetIsDefaultItem_Params
	{
	public:
		bool                                                       InDefault;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_SkinItem.ITM_SkinItem_C.ClearEventHandlers
	 */
	struct UITM_SkinItem_C_ClearEventHandlers_Params
	{	};

	/**
	 * Function ITM_SkinItem.ITM_SkinItem_C.SetState
	 */
	struct UITM_SkinItem_C_SetState_Params
	{
	public:
		class UItemSkin*                                           InSkin;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InLocked;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InHovered;                                               // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InEquipped;                                              // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_SkinItem.ITM_SkinItem_C.IsUnlocked
	 */
	struct UITM_SkinItem_C_IsUnlocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_SkinItem.ITM_SkinItem_C.Refresh
	 */
	struct UITM_SkinItem_C_Refresh_Params
	{	};

	/**
	 * Function ITM_SkinItem.ITM_SkinItem_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_SkinItem_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_SkinItem.ITM_SkinItem_C.Construct
	 */
	struct UITM_SkinItem_C_Construct_Params
	{	};

	/**
	 * Function ITM_SkinItem.ITM_SkinItem_C.Play Intro
	 */
	struct UITM_SkinItem_C_PlayIntro_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaxColumns;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_SkinItem.ITM_SkinItem_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_SkinItem_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_SkinItem.ITM_SkinItem_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct UITM_SkinItem_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_SkinItem.ITM_SkinItem_C.Ping Skin
	 */
	struct UITM_SkinItem_C_PingSkin_Params
	{	};

	/**
	 * Function ITM_SkinItem.ITM_SkinItem_C.PreConstruct
	 */
	struct UITM_SkinItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_SkinItem.ITM_SkinItem_C.OnAnimUnlockedFinished
	 */
	struct UITM_SkinItem_C_OnAnimUnlockedFinished_Params
	{	};

	/**
	 * Function ITM_SkinItem.ITM_SkinItem_C.RefreshNotificationIcon
	 */
	struct UITM_SkinItem_C_RefreshNotificationIcon_Params
	{
	public:
		float                                                      DelayBeforeRefresh;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_SkinItem.ITM_SkinItem_C.ExecuteUbergraph_ITM_SkinItem
	 */
	struct UITM_SkinItem_C_ExecuteUbergraph_ITM_SkinItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZNW2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_SkinItem.ITM_SkinItem_C.OnNotificationRemoved__DelegateSignature
	 */
	struct UITM_SkinItem_C_OnNotificationRemoved__DelegateSignature_Params
	{
	public:
		class UITM_SkinItem_C*                                     Skin;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_SkinItem.ITM_SkinItem_C.OnUnhovering__DelegateSignature
	 */
	struct UITM_SkinItem_C_OnUnhovering__DelegateSignature_Params
	{
	public:
		class UITM_SkinItem_C*                                     SkinItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_SkinItem.ITM_SkinItem_C.OnHovering__DelegateSignature
	 */
	struct UITM_SkinItem_C_OnHovering__DelegateSignature_Params
	{
	public:
		class UITM_SkinItem_C*                                     SkinItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_SkinItem.ITM_SkinItem_C.OnSkinClicked__DelegateSignature
	 */
	struct UITM_SkinItem_C_OnSkinClicked__DelegateSignature_Params
	{
	public:
		class UITM_SkinItem_C*                                     Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
