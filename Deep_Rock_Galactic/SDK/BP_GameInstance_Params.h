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
	 * Function BP_GameInstance.BP_GameInstance_C.ResetTempSessions
	 */
	struct UBP_GameInstance_C_ResetTempSessions_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.CreateAndOpenModdedWidget
	 */
	struct UBP_GameInstance_C_CreateAndOpenModdedWidget_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.SetModdedSession
	 */
	struct UBP_GameInstance_C_SetModdedSession_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.SetupJoinVanillaDisableProgressionMods
	 */
	struct UBP_GameInstance_C_SetupJoinVanillaDisableProgressionMods_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.PromptSandboxUser
	 */
	struct UBP_GameInstance_C_PromptSandboxUser_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.ShouldPromptSandboxUser
	 */
	struct UBP_GameInstance_C_ShouldPromptSandboxUser_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Yes;                                                     // 0x0108(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.SetupJoinModded
	 */
	struct UBP_GameInstance_C_SetupJoinModded_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.Setup Join with Password
	 */
	struct UBP_GameInstance_C_SetupJoinwithPassword_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.IsEligibleForRetirementAassignment
	 */
	struct UBP_GameInstance_C_IsEligibleForRetirementAassignment_Params
	{
	public:
		bool                                                       EligibleForRetirementAssignment;                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.OnFailure_7B3ECFCE46627790F0C9B89A0D72085C
	 */
	struct UBP_GameInstance_C_OnFailure_7B3ECFCE46627790F0C9B89A0D72085C_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.OnSuccess_7B3ECFCE46627790F0C9B89A0D72085C
	 */
	struct UBP_GameInstance_C_OnSuccess_7B3ECFCE46627790F0C9B89A0D72085C_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.OnFailure_7B3ECFCE46627790F0C9B89A6B449207
	 */
	struct UBP_GameInstance_C_OnFailure_7B3ECFCE46627790F0C9B89A6B449207_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.OnSuccess_7B3ECFCE46627790F0C9B89A6B449207
	 */
	struct UBP_GameInstance_C_OnSuccess_7B3ECFCE46627790F0C9B89A6B449207_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.OnFailure_7B3ECFCE46627790F0C9B89A89B12120
	 */
	struct UBP_GameInstance_C_OnFailure_7B3ECFCE46627790F0C9B89A89B12120_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.OnSuccess_7B3ECFCE46627790F0C9B89A89B12120
	 */
	struct UBP_GameInstance_C_OnSuccess_7B3ECFCE46627790F0C9B89A89B12120_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.OnFailure_D72617F2470A6492F0633884F8A94A97
	 */
	struct UBP_GameInstance_C_OnFailure_D72617F2470A6492F0633884F8A94A97_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.OnSuccess_D72617F2470A6492F0633884F8A94A97
	 */
	struct UBP_GameInstance_C_OnSuccess_D72617F2470A6492F0633884F8A94A97_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.OnFailure_E6A52403462766A65D96D581DEE58F2A
	 */
	struct UBP_GameInstance_C_OnFailure_E6A52403462766A65D96D581DEE58F2A_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.OnSuccess_E6A52403462766A65D96D581DEE58F2A
	 */
	struct UBP_GameInstance_C_OnSuccess_E6A52403462766A65D96D581DEE58F2A_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.OnFailure_3F92037B4548E12D6DF3A4A0C91F55FB
	 */
	struct UBP_GameInstance_C_OnFailure_3F92037B4548E12D6DF3A4A0C91F55FB_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.OnSuccess_3F92037B4548E12D6DF3A4A0C91F55FB
	 */
	struct UBP_GameInstance_C_OnSuccess_3F92037B4548E12D6DF3A4A0C91F55FB_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.ReceiveInit
	 */
	struct UBP_GameInstance_C_ReceiveInit_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.JoinFriendInvite
	 */
	struct UBP_GameInstance_C_JoinFriendInvite_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.OnLoadComplete
	 */
	struct UBP_GameInstance_C_OnLoadComplete_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.SetEligableForRetirementAssignment
	 */
	struct UBP_GameInstance_C_SetEligableForRetirementAssignment_Params
	{
	public:
		bool                                                       eligable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.JoinFriendInviteWithPassword
	 */
	struct UBP_GameInstance_C_JoinFriendInviteWithPassword_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              Password;                                                // 0x0108(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.OnCancelJoin
	 */
	struct UBP_GameInstance_C_OnCancelJoin_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.OnJoiningModded
	 */
	struct UBP_GameInstance_C_OnJoiningModded_Params
	{
	public:
		struct FBlueprintSessionResult                             Session;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              Password;                                                // 0x0108(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.ModdedSaveLoaded
	 */
	struct UBP_GameInstance_C_ModdedSaveLoaded_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.OnSandboxAnswer
	 */
	struct UBP_GameInstance_C_OnSandboxAnswer_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.OnSaveLoaded
	 */
	struct UBP_GameInstance_C_OnSaveLoaded_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.ApplyGameUserSettings
	 */
	struct UBP_GameInstance_C_ApplyGameUserSettings_Params
	{
	public:
		class UFSDGameUserSettings*                                Settings;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance
	 */
	struct UBP_GameInstance_C_ExecuteUbergraph_BP_GameInstance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.OnEligibleForRetirementAssignment__DelegateSignature
	 */
	struct UBP_GameInstance_C_OnEligibleForRetirementAssignment__DelegateSignature_Params
	{
	public:
		class UBP_GameInstance_C*                                  GameInstance;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.OnAvailableCraftingItems__DelegateSignature
	 */
	struct UBP_GameInstance_C_OnAvailableCraftingItems__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
