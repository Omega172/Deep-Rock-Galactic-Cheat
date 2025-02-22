﻿#pragma once

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
	 * Enum FSDAnsel.EUIControlEffectTarget
	 */
	enum class EUIControlEffectTarget : uint8_t
	{
		Bloom               = 0,
		DepthOfField        = 1,
		ChromaticAberration = 2,
		MotionBlur          = 3,
		MAX                 = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
