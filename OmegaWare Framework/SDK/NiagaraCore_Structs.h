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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct NiagaraCore.NiagaraCompileHash
	 * Size -> 0x0010
	 */
	struct FNiagaraCompileHash
	{
	public:
		TArray<unsigned char>                                      DataHash;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
