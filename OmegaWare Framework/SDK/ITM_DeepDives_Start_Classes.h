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
	 * WidgetBlueprintGeneratedClass ITM_DeepDives_Start.ITM_DeepDives_Start_C
	 * Size -> 0x0060 (FullSize[0x02C0] - InheritedSize[0x0260])
	 */
	class UITM_DeepDives_Start_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UITM_DeepDives_Launcher_C*                           Hard_Launcher;                                           // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_OnlineRestricted_C*                             ITM_OnlineRestricted;                                    // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_ServerList_Warning_C*                           ITM_ServerList_Warning;                                  // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_DeepDives_Launcher_C*                           Normal_Launcher;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_RadioButton_C*                                OptionPrivate;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_RadioButton_C*                                OptionPublic;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_RadioButton_C*                                OptionSolo;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_PasswordField_C*                              PasswordField;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnJoinMission;                                           // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FTimerHandle                                        DeepDivesServerTimeout;                                  // 0x02B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void HandleKeyDown(const struct FKeyEvent& KeyEvent, bool* OutHandled, struct FEventReply* OutReply);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void UpdateOptions();
		void OnFailure_00D4455F48B21EAE6492C6AB27B0D8F5();
		void OnSuccess_00D4455F48B21EAE6492C6AB27B0D8F5();
		void OnFailure_14795847495E51F942775B86C1C4BCCF();
		void OnSuccess_14795847495E51F942775B86C1C4BCCF();
		void BndEvt__OptionPublic_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
		void BndEvt__OptionPrivate_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool IsChecked);
		void BndEvt__OptionSolo_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature(bool IsChecked);
		void StartMission(class UDeepDive* mission);
		void BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_5_OnStartMission__DelegateSignature(class UDeepDive* DeepDive);
		void BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_6_OnStartMission__DelegateSignature(class UDeepDive* DeepDive);
		void Open();
		void BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_3_OnJoinMission__DelegateSignature(bool EliteDeepDive);
		void BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_4_OnJoinMission__DelegateSignature(bool EliteDeepDive);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_7_OnRefresh__DelegateSignature(bool success);
		void OnTimeOut();
		void RefreshTimeout(bool success);
		void BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_8_OnRefresh__DelegateSignature(bool success);
		void BndEvt__ITM_DeepDives_Start_PasswordField_K2Node_ComponentBoundEvent_9_OnTextCommitted__DelegateSignature(const class FText& Text, unsigned char CommitMethod);
		void ExecuteUbergraph_ITM_DeepDives_Start(int32_t EntryPoint);
		void OnJoinMission__DelegateSignature(bool EliteDeepDive);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
