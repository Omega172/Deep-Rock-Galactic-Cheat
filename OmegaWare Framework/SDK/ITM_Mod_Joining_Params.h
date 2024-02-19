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
	 * Function ITM_Mod_Joining.ITM_Mod_Joining_C.GetModName
	 */
	struct UITM_Mod_Joining_C_GetModName_Params
	{
	public:
		class FString                                              ModName;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Mod_Joining.ITM_Mod_Joining_C.Update
	 */
	struct UITM_Mod_Joining_C_Update_Params
	{	};

	/**
	 * Function ITM_Mod_Joining.ITM_Mod_Joining_C.SetMetaData
	 */
	struct UITM_Mod_Joining_C_SetMetaData_Params
	{
	public:
		class UModioModInfoWrapper*                                InModMetaData;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Mod_Joining.ITM_Mod_Joining_C.Get_LinkButton_ToolTip
	 */
	struct UITM_Mod_Joining_C_Get_LinkButton_ToolTip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Mod_Joining.ITM_Mod_Joining_C.OnDownloadExtractModFinished
	 */
	struct UITM_Mod_Joining_C_OnDownloadExtractModFinished_Params
	{
	public:
		class FString                                              ModName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ModId;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Mod_Joining.ITM_Mod_Joining_C.OnDownloadExtractMod
	 */
	struct UITM_Mod_Joining_C_OnDownloadExtractMod_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<class FString>                                      ModsPendingDownload;                                     // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Downloading;                                             // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DYA1[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Progress;                                                // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Total;                                                   // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_31QR[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_Mod_Joining.ITM_Mod_Joining_C.Construct
	 */
	struct UITM_Mod_Joining_C_Construct_Params
	{	};

	/**
	 * Function ITM_Mod_Joining.ITM_Mod_Joining_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_Mod_Joining_C_BndEvt__LinkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Mod_Joining.ITM_Mod_Joining_C.OnOverlayClosed
	 */
	struct UITM_Mod_Joining_C_OnOverlayClosed_Params
	{
	public:
		class FString                                              LastURL;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Mod_Joining.ITM_Mod_Joining_C.Destruct
	 */
	struct UITM_Mod_Joining_C_Destruct_Params
	{	};

	/**
	 * Function ITM_Mod_Joining.ITM_Mod_Joining_C.PreConstruct
	 */
	struct UITM_Mod_Joining_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_Mod_Joining.ITM_Mod_Joining_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Mod_Joining_C_BndEvt__LinkButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Mod_Joining.ITM_Mod_Joining_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UITM_Mod_Joining_C_BndEvt__LinkButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Mod_Joining.ITM_Mod_Joining_C.BndEvt__OptionalRequiredButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UITM_Mod_Joining_C_BndEvt__OptionalRequiredButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ITM_Mod_Joining.ITM_Mod_Joining_C.ExecuteUbergraph_ITM_Mod_Joining
	 */
	struct UITM_Mod_Joining_C_ExecuteUbergraph_ITM_Mod_Joining_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M75R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ITM_Mod_Joining.ITM_Mod_Joining_C.SwitchedDownload__DelegateSignature
	 */
	struct UITM_Mod_Joining_C_SwitchedDownload__DelegateSignature_Params
	{
	public:
		bool                                                       ShouldDownload;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5RTV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ModId;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_Mod_Joining.ITM_Mod_Joining_C.OnMetaDataLoaded__DelegateSignature
	 */
	struct UITM_Mod_Joining_C_OnMetaDataLoaded__DelegateSignature_Params
	{
	public:
		class FString                                              ModId;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		EUGCApprovalStatus                                         ModStatus;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9JCG[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UITM_Mod_Joining_C*                                  ModWidget;                                               // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
