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
	 * WidgetBlueprintGeneratedClass UI_KPI_Tab.UI_KPI_Tab_C
	 * Size -> 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
	 */
	class UUI_KPI_Tab_C : public UUserWidget
	{
	public:
		void HandleMouseEvent(const struct FPointerEvent& InMouseEvent, bool InUp, bool* OutHandled);
		void HandleKeyEvent(const struct FKeyEvent& InKeyEvent, bool InUp, bool* OutHandled);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
