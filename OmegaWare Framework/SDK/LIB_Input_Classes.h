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
	 * BlueprintGeneratedClass LIB_Input.LIB_Input_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULIB_Input_C : public UBlueprintFunctionLibrary
	{
	public:
		bool IsMenuAction2(const struct FKeyEvent& Input, class UObject* __WorldContext);
		bool IsMenuAction1(const struct FKeyEvent& Input, class UObject* __WorldContext);
		bool IsSelectNext(const struct FKeyEvent& KeyEvent, class UObject* __WorldContext);
		bool IsSelectPrevious(const struct FKeyEvent& KeyEvent, class UObject* __WorldContext);
		bool IsBackMenuMouse(const struct FPointerEvent& PointerEvent, class UObject* __WorldContext);
		bool IsUseButton(const struct FKeyEvent& Input, class UObject* __WorldContext);
		bool IsOkMenu(const struct FKeyEvent& Input, class UObject* __WorldContext);
		bool IsCloseOrBackMenu(struct FKeyEvent* Input, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
