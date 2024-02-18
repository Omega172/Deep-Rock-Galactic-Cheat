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
	 * Function ITM_Mod.ITM_Mod_C.GetDownloadVersionToolTip
	 */
	struct UITM_Mod_C_GetDownloadVersionToolTip_Params
	{
	public:
		EUGCDownloadVersion                                        InStatus;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P16S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                OutStatus;                                               // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.GetDownloadVersionText
	 */
	struct UITM_Mod_C_GetDownloadVersionText_Params
	{
	public:
		EUGCDownloadVersion                                        InDownloadVersion;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7XKO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                OutStatus;                                               // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.CheckIfSavedInSlot
	 */
	struct UITM_Mod_C_CheckIfSavedInSlot_Params
	{	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.SetFromPackage
	 */
	struct UITM_Mod_C_SetFromPackage_Params
	{
	public:
		class UUGCPackage*                                         InPackage;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.GetDependencyCheckboxTooltip
	 */
	struct UITM_Mod_C_GetDependencyCheckboxTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.FindParentsInArray
	 */
	struct UITM_Mod_C_FindParentsInArray_Params
	{
	public:
		TArray<class UWidget*>                                     PotentialParents;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.CreateversionTooltip
	 */
	struct UITM_Mod_C_CreateversionTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.CheckGameVersionBeforeEnable
	 */
	struct UITM_Mod_C_CheckGameVersionBeforeEnable_Params
	{
	public:
		bool                                                       InEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3WY8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.OnModStateDependencyChanged
	 */
	struct UITM_Mod_C_OnModStateDependencyChanged_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldDisableCheckmark;                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HasChanged;                                              // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.ResetModEnabled
	 */
	struct UITM_Mod_C_ResetModEnabled_Params
	{	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.SetModEnabled
	 */
	struct UITM_Mod_C_SetModEnabled_Params
	{
	public:
		bool                                                       InEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.OnOverlayClosed
	 */
	struct UITM_Mod_C_OnOverlayClosed_Params
	{
	public:
		class FString                                              LastURL;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.HasCrashed
	 */
	struct UITM_Mod_C_HasCrashed_Params
	{
	public:
		bool                                                       OutHasCrashed;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WPD5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.SetCompactMode
	 */
	struct UITM_Mod_C_SetCompactMode_Params
	{
	public:
		bool                                                       SimpleMode;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.GetStatusToolTip
	 */
	struct UITM_Mod_C_GetStatusToolTip_Params
	{
	public:
		bool                                                       InShowStatus;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EUGCApprovalStatus                                         InStatus;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GRJS[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                OutStatus;                                               // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.OnThumbnailFetched
	 */
	struct UITM_Mod_C_OnThumbnailFetched_Params
	{
	public:
		class UTexture2DDynamic*                                   ModioModThumbnail;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.GetStringOrDefault
	 */
	struct UITM_Mod_C_GetStringOrDefault_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                InDefault;                                               // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              OutValue;                                                // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.GetTruncatedString
	 */
	struct UITM_Mod_C_GetTruncatedString_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InMaxLength;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_40WQ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutResult;                                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.GetStatusText
	 */
	struct UITM_Mod_C_GetStatusText_Params
	{
	public:
		bool                                                       InShowStatus;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EUGCApprovalStatus                                         InStatus;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F54A[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                OutStatus;                                               // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.SetColors
	 */
	struct UITM_Mod_C_SetColors_Params
	{	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.SetData
	 */
	struct UITM_Mod_C_SetData_Params
	{
	public:
		class FString                                              InModName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InModVersion;                                            // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InModURL;                                                // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InModCategory;                                           // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		EUGCApprovalStatus                                         InModStatus;                                             // 0x0040(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EUGCDownloadVersion                                        InModDownloadVersion;                                    // 0x0041(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XXVO[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InModDescription;                                        // 0x0048(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InModAuthor;                                             // 0x0058(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InModAuthorURL;                                          // 0x0068(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InModIsMounted;                                          // 0x0078(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InModPendingMounted;                                     // 0x0079(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InModIsDeprecated;                                       // 0x007A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InDependencyRemoved;                                     // 0x007B(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InShowStatus;                                            // 0x007C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InCrashed;                                               // 0x007D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InWrongVersion;                                          // 0x007E(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MAIA[0x1];                                   // 0x007F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 */
	struct UITM_Mod_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.PreConstruct
	 */
	struct UITM_Mod_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.Construct
	 */
	struct UITM_Mod_C_Construct_Params
	{	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.UpdateModifed
	 */
	struct UITM_Mod_C_UpdateModifed_Params
	{	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_Mod_C_BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.BndEvt__ButtonAuthorURL_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_Mod_C_BndEvt__ButtonAuthorURL_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Mod_C_BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Mod_C_BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.BndEvt__ButtonImage_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_Mod_C_BndEvt__ButtonImage_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.BndEvt__ButtonImage_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Mod_C_BndEvt__ButtonImage_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.BndEvt__ButtonImage_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Mod_C_BndEvt__ButtonImage_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.Refresh
	 */
	struct UITM_Mod_C_Refresh_Params
	{	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.SetModActivationChanged
	 */
	struct UITM_Mod_C_SetModActivationChanged_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.SetModActivationChangedForceParents
	 */
	struct UITM_Mod_C_SetModActivationChangedForceParents_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.RequestDependencyNames
	 */
	struct UITM_Mod_C_RequestDependencyNames_Params
	{	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.ExecuteUbergraph_ITM_Mod
	 */
	struct UITM_Mod_C_ExecuteUbergraph_ITM_Mod_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Mod.ITM_Mod_C.OnActivationChanged__DelegateSignature
	 */
	struct UITM_Mod_C_OnActivationChanged__DelegateSignature_Params
	{
	public:
		class UITM_Mod_C*                                          ManipulatedModItem;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
