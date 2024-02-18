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
	 * Enum SteamVR.ESteamVRTrackedDeviceType
	 */
	enum class ESteamVRTrackedDeviceType : uint8_t
	{
		Controller        = 0,
		TrackingReference = 1,
		Other             = 2,
		Invalid           = 3,
		MAX               = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
