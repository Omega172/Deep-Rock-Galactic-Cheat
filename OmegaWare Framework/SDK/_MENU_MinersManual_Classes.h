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
	 * WidgetBlueprintGeneratedClass _MENU_MinersManual._MENU_MinersManual_C
	 * Size -> 0x01A0 (FullSize[0x0440] - InheritedSize[0x02A0])
	 */
	class U_MENU_MinersManual_C : public UWindowWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    OnMMLoaded;                                              // 0x02A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    NewSection;                                              // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class ULoreScreen_MinersManual_C*                          LoreScreen_MinersManual;                                 // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollLIst_Category_Window_C*                       LoreScrollList;                                          // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UItm_MinersManual_TabsHeader_C*                      TabsMenu;                                                // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VB_LoreContentHolder;                                    // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULoreScreen_Master_C*                                ContentScreen;                                           // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MinersManualsObject;                                     // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_02E4[0x7];                                   // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMinersManual*                                       MinersManual;                                            // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                OverviewText;                                            // 0x02F0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<EMinersManualSection, struct FMM_ButtonInfo>          MainButtons;                                             // 0x0308(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<EMinersManualSection>                               MainButtonOrder;                                         // 0x0358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		EMinersManualSection                                       SelectedSection;                                         // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_823D[0x7];                                   // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                TempName;                                                // 0x0370(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    TempButtonIndex;                                         // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4CUW[0x4];                                   // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          TempFrontImage;                                          // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          TempBackgroundImage;                                     // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectedIndex;                                           // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_32W8[0x4];                                   // 0x03A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMM_ButtonInfo                                      tempButton;                                              // 0x03A8(0x0070) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		EEnemyFamily                                               LastCreatureFamily;                                      // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5NGT[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnemyID*                                            GruntID;                                                 // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEnemyMinersManualData*                              TempEnemy;                                               // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              TempSoftRefs[0x10];                                      // 0x0430(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		void IsCreatureUnlocked(class UEnemyMinersManualData* enemy, bool* IsUnlocked);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void OpenPageInternal(EMinersManualSection Section);
		void GetButtonInfoFromSoftPage(struct FMM_ButtonInfo* OutButton);
		struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void SelectOverview();
		void LoadSinglePage();
		void SelectResourcesPage(int32_t Index);
		void SelectBiome(int32_t Index);
		void SelectCreature(int32_t Index);
		void SelectCombat(int32_t Index);
		void SelectBasics(int32_t Index);
		void SelectMissionType(int32_t Index);
		void OnLoaded_2761E01142014CAB4B0485B51F0A3566(class UObject* Loaded);
		void OnLoaded_E250F66347FD856DD4BCA4BD4C4E45E8(class UObject* Loaded);
		void OnLoaded_E250F66347FD856DD4BCA4BDAF081D51(class UObject* Loaded);
		void OnLoaded_2761E01142014CAB4B0485B52E4010C5(class UObject* Loaded);
		void OnLoaded_E250F66347FD856DD4BCA4BD7D04604B(class UObject* Loaded);
		void OnLoaded_2761E01142014CAB4B0485B5FC4C6DDF(class UObject* Loaded);
		void OnLoaded_268D15ED4E2079C066017E9C56F864BC(class UObject* Loaded);
		void OnLoaded_268D15ED4E2079C066017E9CF15F73D6(class UObject* Loaded);
		void OnLoaded_E250F66347FD856DD4BCA4BDC879A4A6(class UObject* Loaded);
		void OnLoaded_2761E01142014CAB4B0485B59B3DD428(class UObject* Loaded);
		void OnLoaded_268D15ED4E2079C066017E9CDF02186B(class UObject* Loaded);
		void OnLoaded_268D15ED4E2079C066017E9CF666E15C(class UObject* Loaded);
		void OnLoaded_268D15ED4E2079C066017E9C821EC396(class UObject* Loaded);
		void OnLoaded_268D15ED4E2079C066017E9C0BF30CCE(class UObject* Loaded);
		void SetLoreScreenContent(class ULoreScreen_Master_C* InWidget);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void ButtonClicked(int32_t Index);
		void SelectSection(EMinersManualSection Section, bool SelectFirst);
		void SelectPageFromObject(class UObject* IdentifyingObject);
		void SelectSinglePage(EMinersManualSinglePage page);
		void StepBack();
		void OpenFromSavegameID(EMinersManualSection Section, const struct FGuid& ID);
		void ExecuteUbergraph__MENU_MinersManual(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
