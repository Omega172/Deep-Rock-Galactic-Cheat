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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
	 * Size -> 0x0270 (FullSize[0x0DC0] - InheritedSize[0x0B50])
	 */
	class UBP_GameInstance_C : public UFSDGameInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             OnAvailableCraftingItems;                                // 0x0B58(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       EligibleForRetirementAssignment;                         // 0x0B68(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0HDP[0x7];                                   // 0x0B69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnEligibleForRetirementAssignment;                       // 0x0B70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UWND_JoiningPassword_C*                              JoinFriendInvitePasswordWidget;                          // 0x0B80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWND_JoiningModded_C*                                JoinFriendInviteModdedWidget;                            // 0x0B88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBlueprintSessionResult                             CurrentModdedSession;                                    // 0x0B90(0x0108) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              CurrentModdedPassword;                                   // 0x0C98(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UWND_Joining_C*                                      JoiningFriendInviteWidget;                               // 0x0CA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             JoinFriendInviteProgressionDisabling;                    // 0x0CB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBlueprintSessionResult                             tmpSetupModdedSession;                                   // 0x0CB8(0x0108) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void ResetTempSessions();
		void CreateAndOpenModdedWidget();
		void SetModdedSession();
		void SetupJoinVanillaDisableProgressionMods(const struct FBlueprintSessionResult& Session);
		void PromptSandboxUser(const struct FBlueprintSessionResult& Session);
		void ShouldPromptSandboxUser(const struct FBlueprintSessionResult& Session, bool* Yes);
		void SetupJoinModded(const struct FBlueprintSessionResult& Session);
		void SetupJoinwithPassword(const struct FBlueprintSessionResult& Session);
		void IsEligibleForRetirementAassignment(bool* EligibleForRetirementAssignment);
		void OnFailure_7B3ECFCE46627790F0C9B89A0D72085C();
		void OnSuccess_7B3ECFCE46627790F0C9B89A0D72085C();
		void OnFailure_7B3ECFCE46627790F0C9B89A6B449207();
		void OnSuccess_7B3ECFCE46627790F0C9B89A6B449207();
		void OnFailure_7B3ECFCE46627790F0C9B89A89B12120();
		void OnSuccess_7B3ECFCE46627790F0C9B89A89B12120();
		void OnFailure_D72617F2470A6492F0633884F8A94A97();
		void OnSuccess_D72617F2470A6492F0633884F8A94A97();
		void OnFailure_E6A52403462766A65D96D581DEE58F2A();
		void OnSuccess_E6A52403462766A65D96D581DEE58F2A();
		void OnFailure_3F92037B4548E12D6DF3A4A0C91F55FB();
		void OnSuccess_3F92037B4548E12D6DF3A4A0C91F55FB();
		void ReceiveInit();
		void JoinFriendInvite(const struct FBlueprintSessionResult& Session);
		void OnLoadComplete(const class FString& MapName);
		void SetEligableForRetirementAssignment(bool eligable);
		void JoinFriendInviteWithPassword(const struct FBlueprintSessionResult& Session, const class FString& Password);
		void OnCancelJoin();
		void OnJoiningModded(const struct FBlueprintSessionResult& Session, const class FString& Password);
		void ModdedSaveLoaded();
		void OnSandboxAnswer(bool Yes);
		void OnSaveLoaded();
		void ApplyGameUserSettings(class UFSDGameUserSettings* Settings);
		void ExecuteUbergraph_BP_GameInstance(int32_t EntryPoint);
		void OnEligibleForRetirementAssignment__DelegateSignature(class UBP_GameInstance_C* GameInstance);
		void OnAvailableCraftingItems__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
