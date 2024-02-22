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
	 * WidgetBlueprintGeneratedClass ITM_Wardrobe_ItemSlot_ArmorVanity.ITM_Wardrobe_ItemSlot_ArmorVanity_C
	 * Size -> 0x0000 (FullSize[0x03C0] - InheritedSize[0x03C0])
	 */
	class UITM_Wardrobe_ItemSlot_ArmorVanity_C : public UITM_Wardrobe_ItemSlot_Vanity_C
	{
	public:
		void SetSelectedItem(class UVanityItem* Item, bool Equip);
		void ReceiveToggleType(bool* success);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
