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
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnMouseButtonDown
	 */
	struct UITM_UpgGear_UpgIconSingle_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Get_UpgradeIcon_ToolTip
	 */
	struct UITM_UpgGear_UpgIconSingle_C_Get_UpgradeIcon_ToolTip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnKeyDown
	 */
	struct UITM_UpgGear_UpgIconSingle_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ToggleStatPreview
	 */
	struct UITM_UpgGear_UpgIconSingle_C_ToggleStatPreview_Params
	{
	public:
		bool                                                       Preview;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KKKL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetTierLock
	 */
	struct UITM_UpgGear_UpgIconSingle_C_GetTierLock_Params
	{
	public:
		class AFSDPlayerState*                                     InPlayerState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FUpgradeTier                                        InTierUpgrades;                                          // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    LockLevel;                                               // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N3AY[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          LockIcon;                                                // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENUM_MenuColors                                            LockBackgroundTint;                                      // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryUnequipUpgrade
	 */
	struct UITM_UpgGear_UpgIconSingle_C_TryUnequipUpgrade_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D9IH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeCategory
	 */
	struct UITM_UpgGear_UpgIconSingle_C_GetUpgradeCategory_Params
	{
	public:
		class UItemUpgradeCategory*                                Category;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeIcon
	 */
	struct UITM_UpgGear_UpgIconSingle_C_GetUpgradeIcon_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetGoogleAnalytics
	 */
	struct UITM_UpgGear_UpgIconSingle_C_GetGoogleAnalytics_Params
	{
	public:
		class UItemUpgrade*                                        Upgrade;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.IsInteractable
	 */
	struct UITM_UpgGear_UpgIconSingle_C_IsInteractable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetTierStatus
	 */
	struct UITM_UpgGear_UpgIconSingle_C_GetTierStatus_Params
	{
	public:
		struct FUpgradeTier                                        InTier;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    InTierIndex;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RD76[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPlayerCharacterID*                                  InCharacterID;                                           // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              InItem;                                                  // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AFSDPlayerState*                                     InPlayer;                                                // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemUpgradeStatus                                         DefaultStatus;                                           // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.IsTierIsAffordable
	 */
	struct UITM_UpgGear_UpgIconSingle_C_IsTierIsAffordable_Params
	{
	public:
		struct FUpgradeTier                                        TierUpgrades;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UClass*                                              InItemClass;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AFSDPlayerState*                                     InPlayer;                                                // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              InCharacter;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsAffordable;                                            // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LVN1[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ShowTier
	 */
	struct UITM_UpgGear_UpgIconSingle_C_ShowTier_Params
	{
	public:
		class UClass*                                              InItemClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPlayerCharacterID*                                  InCharacterID;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTierIndex;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G997[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUpgradeTier                                        InTier;                                                  // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class AFSDPlayerState*                                     InPlayerState;                                           // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InShowLockRequirement;                                   // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShowToolTip;                                             // 0x0039(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QA17[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetPlayerState
	 */
	struct UITM_UpgGear_UpgIconSingle_C_GetPlayerState_Params
	{
	public:
		class AFSDPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetItemClass
	 */
	struct UITM_UpgGear_UpgIconSingle_C_GetItemClass_Params
	{
	public:
		class UClass*                                              itemClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetItemUpgrade
	 */
	struct UITM_UpgGear_UpgIconSingle_C_GetItemUpgrade_Params
	{
	public:
		class UItemUpgrade*                                        Upgrade;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryEquipUpgrade
	 */
	struct UITM_UpgGear_UpgIconSingle_C_TryEquipUpgrade_Params
	{
	public:
		bool                                                       Equipped;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QLAA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.TryPurchaseUpgrade
	 */
	struct UITM_UpgGear_UpgIconSingle_C_TryPurchaseUpgrade_Params
	{
	public:
		bool                                                       Purchased;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CU2P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.GetUpgradeStatus
	 */
	struct UITM_UpgGear_UpgIconSingle_C_GetUpgradeStatus_Params
	{
	public:
		EItemUpgradeStatus                                         Status;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Show
	 */
	struct UITM_UpgGear_UpgIconSingle_C_Show_Params
	{
	public:
		class UItemUpgrade*                                        InUpgrade;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              InItemClass;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPlayerCharacterID*                                  PlayerCharacterID;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AFSDPlayerState*                                     InPlayerState;                                           // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShowEquipAsBorder;                                       // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InTierLocked;                                            // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Refresh
	 */
	struct UITM_UpgGear_UpgIconSingle_C_Refresh_Params
	{	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature
	 */
	struct UITM_UpgGear_UpgIconSingle_C_BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_122_OnHoverBegin__DelegateSignature_Params
	{
	public:
		class UITM_BaseUpgradeIcon_C*                              Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature
	 */
	struct UITM_UpgGear_UpgIconSingle_C_BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_129_OnHoverEnd__DelegateSignature_Params
	{
	public:
		class UITM_BaseUpgradeIcon_C*                              Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature
	 */
	struct UITM_UpgGear_UpgIconSingle_C_BndEvt__UpgradeIcon_K2Node_ComponentBoundEvent_137_OnClicked__DelegateSignature_Params
	{
	public:
		class UITM_BaseUpgradeIcon_C*                              Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.Refresh Tool Tip
	 */
	struct UITM_UpgGear_UpgIconSingle_C_RefreshToolTip_Params
	{	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.PlayPurchasedAnim
	 */
	struct UITM_UpgGear_UpgIconSingle_C_PlayPurchasedAnim_Params
	{	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.ExecuteUbergraph_ITM_UpgGear_UpgIconSingle
	 */
	struct UITM_UpgGear_UpgIconSingle_C_ExecuteUbergraph_ITM_UpgGear_UpgIconSingle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeClicked__DelegateSignature
	 */
	struct UITM_UpgGear_UpgIconSingle_C_OnUpgradeClicked__DelegateSignature_Params
	{
	public:
		class UITM_UpgGear_UpgIconSingle_C*                        Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeUnhovered__DelegateSignature
	 */
	struct UITM_UpgGear_UpgIconSingle_C_OnUpgradeUnhovered__DelegateSignature_Params
	{
	public:
		class UITM_UpgGear_UpgIconSingle_C*                        Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_UpgGear_UpgIconSingle.ITM_UpgGear_UpgIconSingle_C.OnUpgradeHovered__DelegateSignature
	 */
	struct UITM_UpgGear_UpgIconSingle_C_OnUpgradeHovered__DelegateSignature_Params
	{
	public:
		class UITM_UpgGear_UpgIconSingle_C*                        Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
