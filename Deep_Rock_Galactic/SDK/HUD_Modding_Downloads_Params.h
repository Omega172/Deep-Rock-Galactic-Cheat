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
	 * Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.ShowFailedToInstall
	 */
	struct UHUD_Modding_Downloads_C_ShowFailedToInstall_Params
	{
	public:
		TMap<class FString, EUGCPackageError>                      InFailed;                                                // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.SetOpen
	 */
	struct UHUD_Modding_Downloads_C_SetOpen_Params
	{
	public:
		bool                                                       InIsOpen;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.GetEntry
	 */
	struct UHUD_Modding_Downloads_C_GetEntry_Params
	{
	public:
		class FString                                              InModName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UHUD_Modding_Downloads_Entry_C*                      OutEntry;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              OutName;                                                 // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.SetDownloadProgress
	 */
	struct UHUD_Modding_Downloads_C_SetDownloadProgress_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<class FString>                                      ModsPendingDownload;                                     // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Downloading;                                             // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H7F2[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Progress;                                                // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Total;                                                   // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2DJ4[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.Construct
	 */
	struct UHUD_Modding_Downloads_C_Construct_Params
	{	};

	/**
	 * Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.OnErrorInstalling
	 */
	struct UHUD_Modding_Downloads_C_OnErrorInstalling_Params
	{
	public:
		class FString                                              ModName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		EUGCPackageError                                           ErrorType;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.PreConstruct
	 */
	struct UHUD_Modding_Downloads_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.OnDownloadProgress
	 */
	struct UHUD_Modding_Downloads_C_OnDownloadProgress_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<class FString>                                      ModsPendingDownload;                                     // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Downloading;                                             // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_881O[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Progress;                                                // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Total;                                                   // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.OnAnimFinished
	 */
	struct UHUD_Modding_Downloads_C_OnAnimFinished_Params
	{	};

	/**
	 * Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.HideFromHUD
	 */
	struct UHUD_Modding_Downloads_C_HideFromHUD_Params
	{	};

	/**
	 * Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.Destruct
	 */
	struct UHUD_Modding_Downloads_C_Destruct_Params
	{	};

	/**
	 * Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.Simulate
	 */
	struct UHUD_Modding_Downloads_C_Simulate_Params
	{	};

	/**
	 * Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.OnDownloadFinished
	 */
	struct UHUD_Modding_Downloads_C_OnDownloadFinished_Params
	{
	public:
		class FString                                              ModName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ModId;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.ExecuteUbergraph_HUD_Modding_Downloads
	 */
	struct UHUD_Modding_Downloads_C_ExecuteUbergraph_HUD_Modding_Downloads_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KQ61[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
