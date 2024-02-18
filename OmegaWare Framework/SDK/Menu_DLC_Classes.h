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
	 * WidgetBlueprintGeneratedClass Menu_DLC.Menu_DLC_C
	 * Size -> 0x0030 (FullSize[0x02D0] - InheritedSize[0x02A0])
	 */
	class UMenu_DLC_C : public UWindowWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUniformGridPanel*                                   Entries_Panel;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameDLCSettings*                                    Settings;                                                // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_DLC_Audio_C*                                     AudioActor;                                              // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EntryWidth;                                              // 0x02C0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SQHL[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMediaPlayer*                                        CurrentMediaPlayer;                                      // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AddDLC(class UGameDLC* InDLC);
		void Clear();
		void PreConstruct(bool IsDesignTime);
		void OnEntryHoverBegin(class UITM_DLC_Entry_C* InEntry);
		void OnEntryHoverEnd(class UITM_DLC_Entry_C* InEntry);
		void Construct();
		void OnVisibilityChanged_Event(ESlateVisibility InVisibility);
		void OnLastWindowClosed_Event();
		void OnEntryClicked(class UITM_DLC_Entry_C* InEntry);
		void ExecuteUbergraph_Menu_DLC(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
