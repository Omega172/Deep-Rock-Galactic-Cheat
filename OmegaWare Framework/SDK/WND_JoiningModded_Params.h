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
	 * Function WND_JoiningModded.WND_JoiningModded_C.GetJoinButtonTooltip
	 */
	struct UWND_JoiningModded_C_GetJoinButtonTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.UpdateHasModsInstalled
	 */
	struct UWND_JoiningModded_C_UpdateHasModsInstalled_Params
	{	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.OnGottonModDependencies
	 */
	struct UWND_JoiningModded_C_OnGottonModDependencies_Params
	{
	public:
		TArray<class FString>                                      ModIds;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              ParentMod;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.UnbindEvents
	 */
	struct UWND_JoiningModded_C_UnbindEvents_Params
	{	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.OnFetchedTermsOfUse
	 */
	struct UWND_JoiningModded_C_OnFetchedTermsOfUse_Params
	{
	public:
		class UModioTermsWrapper*                                  Terms;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.StartJoinSession
	 */
	struct UWND_JoiningModded_C_StartJoinSession_Params
	{	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.OnDownloadFinished
	 */
	struct UWND_JoiningModded_C_OnDownloadFinished_Params
	{
	public:
		class FString                                              ModName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ModId;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.SubscribeToMods
	 */
	struct UWND_JoiningModded_C_SubscribeToMods_Params
	{	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.SetDefaultModDescription
	 */
	struct UWND_JoiningModded_C_SetDefaultModDescription_Params
	{	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.SetColors
	 */
	struct UWND_JoiningModded_C_SetColors_Params
	{	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.SetModNames
	 */
	struct UWND_JoiningModded_C_SetModNames_Params
	{	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.SetSession
	 */
	struct UWND_JoiningModded_C_SetSession_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWND_JoiningModded_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWND_JoiningModded_C_BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.PreConstruct
	 */
	struct UWND_JoiningModded_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.ReceiveCloseCommand
	 */
	struct UWND_JoiningModded_C_ReceiveCloseCommand_Params
	{	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.ReceiveOkCommand
	 */
	struct UWND_JoiningModded_C_ReceiveOkCommand_Params
	{	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.AnsweredTerms
	 */
	struct UWND_JoiningModded_C_AnsweredTerms_Params
	{
	public:
		bool                                                       Agree;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.ReloadWorldAndJoin
	 */
	struct UWND_JoiningModded_C_ReloadWorldAndJoin_Params
	{	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.OnModioUserAuthenticated
	 */
	struct UWND_JoiningModded_C_OnModioUserAuthenticated_Params
	{
	public:
		bool                                                       Authenticated;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.Construct
	 */
	struct UWND_JoiningModded_C_Construct_Params
	{	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.Cancel
	 */
	struct UWND_JoiningModded_C_Cancel_Params
	{	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.RequestDependenciesOfDependencies
	 */
	struct UWND_JoiningModded_C_RequestDependenciesOfDependencies_Params
	{	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.OnErrorInstallingMod
	 */
	struct UWND_JoiningModded_C_OnErrorInstallingMod_Params
	{
	public:
		class FString                                              ModName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		EUGCPackageError                                           ErrorType;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.SetHasHiddenMods
	 */
	struct UWND_JoiningModded_C_SetHasHiddenMods_Params
	{	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.OnRequiredModsFetched
	 */
	struct UWND_JoiningModded_C_OnRequiredModsFetched_Params
	{
	public:
		TArray<class FString>                                      ModsToEnable;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FString>                                      ModsToInstall;                                           // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.OnOptionalModsFetched
	 */
	struct UWND_JoiningModded_C_OnOptionalModsFetched_Params
	{
	public:
		TArray<class FString>                                      ModsToEnable;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FString>                                      ModsToInstall;                                           // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.SetupOptionalMods
	 */
	struct UWND_JoiningModded_C_SetupOptionalMods_Params
	{
	public:
		TArray<class FString>                                      OptionalModsToSetup;                                     // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FString>                                      OptionalModsToEnable;                                    // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.OnSwitchedDownloadStatus
	 */
	struct UWND_JoiningModded_C_OnSwitchedDownloadStatus_Params
	{
	public:
		bool                                                       ShouldDownload;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TXXC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ModId;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.ModdedSaveChosen
	 */
	struct UWND_JoiningModded_C_ModdedSaveChosen_Params
	{	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.RequestTermsOfUse
	 */
	struct UWND_JoiningModded_C_RequestTermsOfUse_Params
	{	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.OnHideDenpendencyLoader
	 */
	struct UWND_JoiningModded_C_OnHideDenpendencyLoader_Params
	{	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.ExecuteUbergraph_WND_JoiningModded
	 */
	struct UWND_JoiningModded_C_ExecuteUbergraph_WND_JoiningModded_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UZYT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.OnCancel__DelegateSignature
	 */
	struct UWND_JoiningModded_C_OnCancel__DelegateSignature_Params
	{	};

	/**
	 * Function WND_JoiningModded.WND_JoiningModded_C.JoinModdedServer__DelegateSignature
	 */
	struct UWND_JoiningModded_C_JoinModdedServer__DelegateSignature_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              Password;                                                // 0x0108(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
