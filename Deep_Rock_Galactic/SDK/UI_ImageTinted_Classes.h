#pragma once

/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
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
	 * WidgetBlueprintGeneratedClass UI_ImageTinted.UI_ImageTinted_C
	 * Size -> 0x00A0 (FullSize[0x0300] - InheritedSize[0x0260])
	 */
	class UUI_ImageTinted_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              ImageWidget;                                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateBrush                                         Brush;                                                   // 0x0270(0x0088) Edit, BlueprintVisible, ExposeOnSpawn
		ENUM_MenuColors                                            Tint;                                                    // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_ESAH[0x3];                                   // 0x02F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TintOpacity;                                             // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void SetBrushSize(const struct FVector2D& BrushImageSize);
		void SelectTint(ENUM_MenuColors _FALSE_, ENUM_MenuColors _TRUE__, bool Condition);
		void GetBrush(struct FSlateBrush* Brush);
		void SetBrushFromTexture(class UTexture2D* Texture, bool MatchSize);
		void SetTint(ENUM_MenuColors InTint, float InOpacity);
		void SetBrush(const struct FSlateBrush& InBrush);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_ImageTinted(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
