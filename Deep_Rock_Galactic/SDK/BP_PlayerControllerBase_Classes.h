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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_PlayerControllerBase.BP_PlayerControllerBase_C
	 * Size -> 0x0078 (FullSize[0x0750] - InheritedSize[0x06D8])
	 */
	class ABP_PlayerControllerBase_C : public AFSDPlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             ReplyToInviteRequest;                                    // 0x06E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UBP_Invitation_C*                                    InviteRequest;                                           // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InviteTimeElapsed;                                       // 0x06F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9VCZ[0x4];                                   // 0x06FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           InviteWaitTime;                                          // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AnselStatus;                                             // 0x0708(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AnselCameraTries;                                        // 0x070C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_FSDCameraManager_C*                              CameraManager;                                           // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        AnselTimerHandle;                                        // 0x0718(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UWindowWidget*                                       RetirementPopup;                                         // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              hudClass[0x28];                                          // 0x0728(0x0028) UNKNOWN PROPERTY: SoftClassProperty

	public:
		void GetEditorCharacterClass(class UPlayerCharacterID** CharacterClass);
		void SetIsEscapeMenuEnabled(bool IsEscapeMenuEnabled);
		void SetHasShownCharacterSelector(bool HasShown);
		void ItemFilter(class UClass* itemClass, bool* Result);
		void SetClassAnalytics();
		void SetUnlockAnalytics(TArray<class UClass*>* Primary, TArray<class UClass*>* Secundary);
		void GetUnlockedItems(EItemCategory Category, TArray<class UClass*>* UnlockedItems);
		void ReStartAnsel();
		void StartAnsel();
		void StopAnsel();
		void CreateInviteRequestIfNotCreated();
		void InpActEvt_AcceptInvite_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_RejectInvite_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_IgnoreInvite_K2Node_InputActionEvent_1(const struct FKey& Key);
		void InpActEvt_Ctrl_O_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void ReceiveBeginPlay();
		void SetPhotographyMode(bool Active);
		void ReturnClientCamera();
		void SetupInviteHandling();
		void SetupRetirementNotification();
		void OnCharacterCanRetire_Event(class UClass* CharacterClass);
		void UpdateAnalytics();
		void AdjustCamera();
		void SetupChangeUser();
		void ChangeUser();
		void ChangeUserReply(bool Yes);
		void ResetPlayerLocation();
		void CustomEvent_2();
		void SpawnHUDAsync();
		void OnJoinRequest(const struct FDiscordUserDataSDK& joinRequest);
		void EventOnJoinRequestReply(int32_t Reply);
		void ExecuteUbergraph_BP_PlayerControllerBase(int32_t EntryPoint);
		void ReplyToInviteRequest__DelegateSignature(int32_t Reply);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
