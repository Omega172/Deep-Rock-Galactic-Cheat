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
	 * WidgetBlueprintGeneratedClass Basic_BoolUserSetting.Basic_BoolUserSetting_C
	 * Size -> 0x0014 (FullSize[0x0310] - InheritedSize[0x02FC])
	 */
	class UBasic_BoolUserSetting_C : public UBasic_CheckBox_C
	{
	public:
		unsigned char                                              UnknownData_X76Y[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoolUserSettingAsset*                               Setting;                                                 // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetValue(bool InValue);
		bool GetValue();
		void SetBoolUserSetting(class UBoolUserSettingAsset* InSetting);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void OnClicked(bool InChecked);
		void Refresh();
		void ExecuteUbergraph_Basic_BoolUserSetting(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
