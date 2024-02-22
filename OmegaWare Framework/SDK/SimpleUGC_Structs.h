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
	 * Enum SimpleUGC.EUGCApprovalStatus
	 */
	enum class EUGCApprovalStatus : uint8_t
	{
		Fully       = 0,
		Progression = 1,
		Sandbox     = 2,
		All         = 3,
		MAX         = 4
	};

	/**
	 * Enum SimpleUGC.EPackageSortField
	 */
	enum class EPackageSortField : uint8_t
	{
		None    = 0,
		Name    = 1,
		Status  = 2,
		Author  = 3,
		Mounted = 4,
		MAX     = 5
	};

	/**
	 * Enum SimpleUGC.EModioRequestType
	 */
	enum class EModioRequestType : uint8_t
	{
		Authentication         = 0,
		K2_Authentication      = 1,
		TermsOfUse             = 2,
		FetchModUpdates        = 3,
		ModMetaData            = 4,
		Thumbnail              = 5,
		Subscribe              = 6,
		ModDependencySubscribe = 7,
		ModDependencyList      = 8,
		ModDependencyAdd       = 9,
		MAX                    = 10
	};

	/**
	 * Enum SimpleUGC.EUGCPackageError
	 */
	enum class EUGCPackageError : uint8_t
	{
		Exists  = 0,
		Invalid = 1,
		Other   = 2,
		MAX     = 3
	};

	/**
	 * Enum SimpleUGC.EUGCDownloadVersion
	 */
	enum class EUGCDownloadVersion : uint8_t
	{
		Optional = 0,
		Required = 1,
		All      = 2,
		MAX      = 3
	};

	/**
	 * Enum SimpleUGC.EUGCBlueprintSpawning
	 */
	enum class EUGCBlueprintSpawning : uint8_t
	{
		Spacerig = 0,
		Cave     = 1,
		Other    = 2,
		MAX      = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SimpleUGC.ModDefinition
	 * Size -> 0x0028
	 */
	struct FModDefinition
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Category;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N7NK[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Version;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SimpleUGC.Mods
	 * Size -> 0x0010
	 */
	struct FMods
	{
	public:
		TArray<struct FModDefinition>                              Mods;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
