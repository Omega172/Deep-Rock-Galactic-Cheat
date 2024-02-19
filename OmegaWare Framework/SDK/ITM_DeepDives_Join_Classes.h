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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass ITM_DeepDives_Join.ITM_DeepDives_Join_C
	 * Size -> 0x0298 (FullSize[0x04F8] - InheritedSize[0x0260])
	 */
	class UITM_DeepDives_Join_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UITM_DeepDiveHeader_C*                               ITM_DeepDiveHeader;                                      // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_OnlineRestricted_C*                             ITM_OnlineRestricted;                                    // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_ButtonScalable2_C*                            RefreshBtn;                                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_DeepDives_ServerFilters_C*                      ServerList_Filters;                                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_DeepDives_ServerList_C*                         ServerList_Hard;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_DeepDives_ServerList_C*                         ServerList_Regular;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWND_JoiningModded_C*                                WND_JoiningModded;                                       // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWND_JoiningPassword_C*                              WND_JoiningPassword;                                     // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ABP_GameState_SpaceRig_C*                            GameState;                                               // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBlueprintSessionResult                             JoinSession;                                             // 0x02B0(0x0108) Edit, BlueprintVisible, DisableEditOnInstance
		class UWND_Joining_C*                                      WND_JoiningWait;                                         // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    UpdateIndex;                                             // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E29H[0x4];                                   // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        UpdateTimerHandle;                                       // 0x03C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnJoining;                                               // 0x03D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FBlueprintSessionResult                             ModdedJoinSession;                                       // 0x03E0(0x0108) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              ModdedPassword;                                          // 0x04E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void HandleKeyDown(const struct FKeyEvent& KeyEvent, bool* OutHandled, struct FEventReply* OutReply);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void DisableProgressionModsandJoin(const struct FBlueprintSessionResult& Session);
		void UpdateTextSearchAndGametypeFilter();
		void PopulateServerViewsIfVisible();
		void PopulateNext();
		void ClearServerViews();
		void PopulateServerViews();
		void OnFailure_1FB10C08435EA9BCE39BD9ABFF154396();
		void OnSuccess_1FB10C08435EA9BCE39BD9ABFF154396();
		void OnFailure_0B5BC1CF422A3FBD05716A89A13443B1();
		void OnSuccess_0B5BC1CF422A3FBD05716A89A13443B1();
		void Construct();
		void Open();
		void BndEvt__ServerList_Regular_K2Node_ComponentBoundEvent_0_OnJoinServer__DelegateSignature(const struct FBlueprintSessionResult& Session);
		void BndEvt__ServerList_Hard_K2Node_ComponentBoundEvent_1_OnJoinServer__DelegateSignature(const struct FBlueprintSessionResult& Session);
		void OnJoinServerClicked(const struct FBlueprintSessionResult& InSession);
		void BndEvt__ITM_DeepDives_ServerFilters_K2Node_ComponentBoundEvent_2_OnSearchFiltersChanged__DelegateSignature();
		void BndEvt__WND_JoiningPassword_K2Node_ComponentBoundEvent_3_JoinWithPassword__DelegateSignature(const struct FBlueprintSessionResult& Session, const class FString& Password);
		void CloseWaitingWindow();
		void JoinServer(const struct FBlueprintSessionResult& Session, const class FString& Password);
		void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
		void BndEvt__WND_JoiningModded_K2Node_ComponentBoundEvent_5_JoinModdedServer__DelegateSignature(const struct FBlueprintSessionResult& Session, const class FString& Password);
		void ModdedSaveLoaded();
		void OnBlocked(bool Yes);
		void Refresh();
		void ExecuteUbergraph_ITM_DeepDives_Join(int32_t EntryPoint);
		void OnJoining__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
