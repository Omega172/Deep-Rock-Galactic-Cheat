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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ModioEx.ModioSubmissionExtensionLibrary.K2_SubmitNewModFileForModFromMemory
	 */
	struct UModioSubmissionExtensionLibrary_K2_SubmitNewModFileForModFromMemory_Params
	{
	public:
		class UModioSubsystem*                                     Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioModID                                         Mod;                                                     // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioCreateModFileMemoryParams                     Params;                                                  // 0x0010(0x0060)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModioEx.ModioSubmissionExtensionLibrary.K2_LoadModFileToMemory
	 */
	struct UModioSubmissionExtensionLibrary_K2_LoadModFileToMemory_Params
	{
	public:
		class UModioSubsystem*                                     Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModioModID                                         ModId;                                                   // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      ModData;                                                 // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
