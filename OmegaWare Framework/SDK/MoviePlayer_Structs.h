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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum MoviePlayer.EMoviePlaybackType
	 */
	enum class EMoviePlaybackType : uint8_t
	{
		MT_Normal      = 0,
		MT_Looped      = 1,
		MT_LoadingLoop = 2,
		MT_MAX         = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
