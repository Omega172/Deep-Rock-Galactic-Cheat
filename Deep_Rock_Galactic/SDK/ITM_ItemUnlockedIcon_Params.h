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
	 * Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.Refresh
	 */
	struct UITM_ItemUnlockedIcon_C_Refresh_Params
	{	};

	/**
	 * Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ClearChildren
	 */
	struct UITM_ItemUnlockedIcon_C_ClearChildren_Params
	{	};

	/**
	 * Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ChildNotificationChanged
	 */
	struct UITM_ItemUnlockedIcon_C_ChildNotificationChanged_Params
	{	};

	/**
	 * Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.AddChildNotification
	 */
	struct UITM_ItemUnlockedIcon_C_AddChildNotification_Params
	{
	public:
		class UITM_ItemUnlockedIcon_C*                             ChildIcon;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.RemoveNotification
	 */
	struct UITM_ItemUnlockedIcon_C_RemoveNotification_Params
	{	};

	/**
	 * Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.SetItemIDArray
	 */
	struct UITM_ItemUnlockedIcon_C_SetItemIDArray_Params
	{
	public:
		TArray<class UObject*>                                     ObjectsWithID;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       MatchChildNotifications;                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.SetVisible
	 */
	struct UITM_ItemUnlockedIcon_C_SetVisible_Params
	{	};

	/**
	 * Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.HideIcon
	 */
	struct UITM_ItemUnlockedIcon_C_HideIcon_Params
	{	};

	/**
	 * Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnAnimFinished
	 */
	struct UITM_ItemUnlockedIcon_C_OnAnimFinished_Params
	{	};

	/**
	 * Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ExecuteUbergraph_ITM_ItemUnlockedIcon
	 */
	struct UITM_ItemUnlockedIcon_C_ExecuteUbergraph_ITM_ItemUnlockedIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnChanged__DelegateSignature
	 */
	struct UITM_ItemUnlockedIcon_C_OnChanged__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnNotificationRemoved__DelegateSignature
	 */
	struct UITM_ItemUnlockedIcon_C_OnNotificationRemoved__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
