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
	 * WidgetBlueprintGeneratedClass ITM_RetirementBadge.ITM_RetirementBadge_C
	 * Size -> 0x0028 (FullSize[0x0288] - InheritedSize[0x0260])
	 */
	class UITM_RetirementBadge_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              ICON_Badge;                                              // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    PreviewTimesRetired;                                     // 0x0270(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5HVA[0x4];                                   // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SoftTextures[0x10];                                      // 0x0278(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		void GetTexture(int32_t Index, class UTexture2D** AsTexture2D);
		void SetTimesRetired(int32_t TimesRetired);
		void SetCharacterClass(class AFSDPlayerState* PlayerState, class UPlayerCharacterID* Character);
		void SelectIcon(int32_t RetirementLevel, class UTexture2D** Icon);
		void SetData(class AFSDPlayerState* Player);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_ITM_RetirementBadge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
