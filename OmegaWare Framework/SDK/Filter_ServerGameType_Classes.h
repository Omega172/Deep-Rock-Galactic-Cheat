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
	 * WidgetBlueprintGeneratedClass Filter_ServerGameType.Filter_ServerGameType_C
	 * Size -> 0x0051 (FullSize[0x02B1] - InheritedSize[0x0260])
	 */
	class UFilter_ServerGameType_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCheck_ServerGameType_C*                             Check_Approved;                                          // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheck_ServerGameType_C*                             Check_Sandbox;                                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_ExpandableMenu_C*                             MenuGameType;                                            // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBasic_BoolUserSetting_C*                            Option_OnlyModdedServers;                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        RootCanvas;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UCheck_ServerGameType_C*>                     Entries;                                                 // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       Sandbox;                                                 // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void VerifyOnlyModded(EGameType LastClicked);
		void VerifyRules();
		void IsSandBoxMode(bool* SandboxMode);
		void CreateEntries();
		void Reset();
		void GetSelectedGameTypes(TArray<EGameType>* GameTypes);
		void OpenMenu(bool Open);
		void UpdateSubheader();
		void PreConstruct(bool IsDesignTime);
		void OnGameTypeChanged(bool IsChecked, EGameType Gametype);
		void Construct();
		void BndEvt__Basic_BoolUserSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
		void ExecuteUbergraph_Filter_ServerGameType(int32_t EntryPoint);
		void OnSelectionChanged__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
