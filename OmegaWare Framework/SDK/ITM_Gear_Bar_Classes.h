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
	 * WidgetBlueprintGeneratedClass ITM_Gear_Bar.ITM_Gear_Bar_C
	 * Size -> 0x0029 (FullSize[0x0289] - InheritedSize[0x0260])
	 */
	class UITM_Gear_Bar_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      ItemBar;                                                 // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_DeepDive_StageIcon_C*                           ITM_DeepDive_StageIcon;                                  // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_DeepDive_StageIcon_C*                           ITM_DeepDive_StageIcon_C_1;                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UITM_DeepDive_StageIcon_C*                           ITM_DeepDive_StageIcon_C_2;                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       ShowClaimText;                                           // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SetStageStatus(class UITM_DeepDive_StageIcon_C* Target, bool claimed);
		void SetDeepDiveProgress(class UDeepDive* DeepDive);
		void SetActiveProgress();
		void SetCustomProgress(bool Stage1Complete, bool Stage2Complete, bool Stage3Complete);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_ITM_Gear_Bar(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
