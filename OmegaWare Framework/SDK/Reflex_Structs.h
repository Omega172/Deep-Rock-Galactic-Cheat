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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Reflex.EReflexMode
	 */
	enum class EReflexMode : uint8_t
	{
		Disabled         = 0,
		Enabled          = 1,
		EnabledPlusBoost = 2,
		MAX              = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
