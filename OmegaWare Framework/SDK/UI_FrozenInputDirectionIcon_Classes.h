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
	 * WidgetBlueprintGeneratedClass UI_FrozenInputDirectionIcon.UI_FrozenInputDirectionIcon_C
	 * Size -> 0x00A8 (FullSize[0x0308] - InheritedSize[0x0260])
	 */
	class UUI_FrozenInputDirectionIcon_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    failed;                                                  // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Pressed;                                                 // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Active;                                                  // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Image_93;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UTexture2D*>                                  Textures;                                                // 0x0288(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FWidgetTransform                                    EForward;                                                // 0x0298(0x001C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FWidgetTransform                                    ERight;                                                  // 0x02B4(0x001C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FWidgetTransform                                    EBack;                                                   // 0x02D0(0x001C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FWidgetTransform                                    ELeft;                                                   // 0x02EC(0x001C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void Finished_CD1267A8441EB6B05873859D8163D918();
		void SetDirection(EThawInputDirection Direction);
		void SetActive(bool Active);
		void OnPressed();
		void OnFailed();
		void ExecuteUbergraph_UI_FrozenInputDirectionIcon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
