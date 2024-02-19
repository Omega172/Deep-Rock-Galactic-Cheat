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
	 * WidgetBlueprintGeneratedClass ITM_Mod_Joining.ITM_Mod_Joining_C
	 * Size -> 0x00B8 (FullSize[0x0318] - InheritedSize[0x0260])
	 */
	class UITM_Mod_Joining_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetSwitcher*                                     HasMetaData_Switcher;                                    // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Installed_Switcher;                                      // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             LinkButton;                                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_Label_C*                                      Mod_Approval;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_Label_C*                                      Mod_Name;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ModdingProgressBar_C*                            ModdingProgressBar;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCircularThrobber*                                   ModName_Loading;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             OptionalRequiredButton;                                  // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FString                                              ModId;                                                   // 0x02A8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       DownloadFinished;                                        // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8T6Q[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMetaDataLoaded;                                        // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              ModName;                                                 // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              ModURL;                                                  // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		EUGCApprovalStatus                                         ApprovalStatus;                                          // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ModInstalled;                                            // 0x02F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0D18[0x6];                                   // 0x02F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UModioModInfoWrapper*                                MetaData;                                                // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ENUM_MenuColors                                            NameColor;                                               // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DownloadRequired;                                        // 0x0301(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_K0GT[0x6];                                   // 0x0302(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             SwitchedDownload;                                        // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetModName(class FString* ModName);
		void Update();
		void SetMetaData(class UModioModInfoWrapper* InModMetaData);
		class UWidget* Get_LinkButton_ToolTip();
		void OnDownloadExtractModFinished(const class FString& ModName, const class FString& ModId);
		void OnDownloadExtractMod(const class FString& Name, TArray<class FString> ModsPendingDownload, bool Downloading, int32_t Progress, int32_t Total);
		void Construct();
		void BndEvt__LinkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void OnOverlayClosed(const class FString& LastURL);
		void Destruct();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__LinkButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__LinkButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__OptionalRequiredButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_ITM_Mod_Joining(int32_t EntryPoint);
		void SwitchedDownload__DelegateSignature(bool ShouldDownload, const class FString& ModId);
		void OnMetaDataLoaded__DelegateSignature(const class FString& ModId, EUGCApprovalStatus ModStatus, class UITM_Mod_Joining_C* ModWidget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
