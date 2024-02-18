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
	 * Function ITM_PendingMod.ITM_PendingMod_C.OnDownloadExtractProgress
	 */
	struct UITM_PendingMod_C_OnDownloadExtractProgress_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<class FString>                                      ModsPendingDownload;                                     // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Downloading;                                             // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TQG5[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Progress;                                                // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Total;                                                   // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_PendingMod.ITM_PendingMod_C.SetColors
	 */
	struct UITM_PendingMod_C_SetColors_Params
	{	};

	/**
	 * Function ITM_PendingMod.ITM_PendingMod_C.SetData
	 */
	struct UITM_PendingMod_C_SetData_Params
	{
	public:
		class FString                                              InModName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ENUM_ModPendingStatus                                      InPendingStatus;                                         // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_PendingMod.ITM_PendingMod_C.PreConstruct
	 */
	struct UITM_PendingMod_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ITM_PendingMod.ITM_PendingMod_C.Destruct
	 */
	struct UITM_PendingMod_C_Destruct_Params
	{	};

	/**
	 * Function ITM_PendingMod.ITM_PendingMod_C.ExecuteUbergraph_ITM_PendingMod
	 */
	struct UITM_PendingMod_C_ExecuteUbergraph_ITM_PendingMod_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ITM_PendingMod.ITM_PendingMod_C.OnActivationChanged__DelegateSignature
	 */
	struct UITM_PendingMod_C_OnActivationChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
