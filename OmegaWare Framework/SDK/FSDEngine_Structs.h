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
	 * Enum FSDEngine.ECSGModifiers
	 */
	enum class ECSGModifiers : uint8_t
	{
		AddMaterialLayers = 0,
		HasCachedTree     = 1,
		MAX               = 2
	};

	/**
	 * Enum FSDEngine.EGeneralComb
	 */
	enum class EGeneralComb : uint8_t
	{
		Empty    = 0,
		KeepSrc  = 1,
		KeepDest = 2,
		Replace  = 3,
		MAX      = 4
	};

	/**
	 * Enum FSDEngine.EGeneralCombEmpty
	 */
	enum class EGeneralCombEmpty : uint8_t
	{
		Empty   = 0,
		Replace = 1,
		MAX     = 2
	};

	/**
	 * Enum FSDEngine.EGeneralPattern
	 */
	enum class EGeneralPattern : uint8_t
	{
		SrcSpecific  = 0,
		DestSpecific = 1,
		MAX          = 2
	};

	/**
	 * Enum FSDEngine.EPattern
	 */
	enum class EPattern : uint8_t
	{
		Specific = 0,
		Precious = 1,
		MAX      = 2
	};

	/**
	 * Enum FSDEngine.EBinaryComb
	 */
	enum class EBinaryComb : uint8_t
	{
		Empty     = 0,
		Unchanged = 1,
		Replace   = 2,
		Burn      = 3,
		BiomeRock = 4,
		MAX       = 5
	};

	/**
	 * Enum FSDEngine.EEmptyBinaryComb
	 */
	enum class EEmptyBinaryComb : uint8_t
	{
		Unchanged = 0,
		Replace   = 1,
		BiomeRock = 2,
		MAX       = 3
	};

	/**
	 * Enum FSDEngine.EPreviewCellSize
	 */
	enum class EPreviewCellSize : uint8_t
	{
		PRV_CELL_SIZE_12  = 0,
		PRV_CELL_SIZE     = 1,
		PRV_CELL_SIZE01   = 2,
		PRV_CELL_SIZE02   = 3,
		PRV_CELL_SIZE03   = 4,
		PRV_CELL_SIZE_MAX = 5
	};

	/**
	 * Enum FSDEngine.ESplineWarpType
	 */
	enum class ESplineWarpType : uint8_t
	{
		Normal    = 0,
		ForceZUp  = 1,
		StairLike = 2,
		MAX       = 3
	};

	/**
	 * Enum FSDEngine.ESDFModulateMode
	 */
	enum class ESDFModulateMode : uint8_t
	{
		MM_Disabled = 0,
		MM_Single   = 1,
		MM_Loop     = 2,
		_MM_MAX      = 3
	};

	/**
	 * Enum FSDEngine.CarveOptionsCellSize
	 */
	enum class ECarveOptionsCellSize : uint8_t
	{
		CarveOptionsCellSizeCARVE_CELL_SIZE     = 0,
		CarveOptionsCellSizeCARVE_CELL_SIZE01   = 1,
		CarveOptionsCellSizeCARVE_CELL_SIZE02   = 2,
		CarveOptionsCellSizeCARVE_CELL_SIZE03   = 3,
		CarveOptionsCellSizeCARVE_CELL_SIZE_MAX = 4
	};

	/**
	 * Enum FSDEngine.EPreciousMaterialOptions
	 */
	enum class EPreciousMaterialOptions : uint8_t
	{
		TurnIntoGems   = 0,
		LeaveUntouched = 1,
		Ignore         = 2,
		MAX            = 3
	};

	/**
	 * Enum FSDEngine.ECarveFilterType
	 */
	enum class ECarveFilterType : uint8_t
	{
		ReplaceAll   = 0,
		ReplaceEmpty = 1,
		ReplaceSolid = 2,
		MAX          = 3
	};

	/**
	 * Enum FSDEngine.EPathfinderResult
	 */
	enum class EPathfinderResult : uint8_t
	{
		Success                      = 0,
		Failed_StartingPointNotFound = 1,
		Failed_EndPointNotFound      = 2,
		Failed_PointsNotConnected    = 3,
		Failed_UsedTooManyNodes      = 4,
		Failed_NotReady              = 5,
		Failed_UnknownError          = 6,
		MAX                          = 7
	};

	/**
	 * Enum FSDEngine.PFCollisionType
	 */
	enum class EPFCollisionType : uint8_t
	{
		PFCollisionTypeSolidWalkable       = 0,
		PFCollisionTypeBlock               = 1,
		PFCollisionTypeDanger              = 2,
		PFCollisionTypePFCollisionType_MAX = 3
	};

	/**
	 * Enum FSDEngine.DeepPathFinderPreference
	 */
	enum class EDeepPathFinderPreference : uint8_t
	{
		DeepPathFinderPreferenceNone                         = 0,
		DeepPathFinderPreferenceFloor                        = 1,
		DeepPathFinderPreferenceWalls                        = 2,
		DeepPathFinderPreferenceCeiling                      = 3,
		DeepPathFinderPreferenceDeepPathFinderPreference_MAX = 4
	};

	/**
	 * Enum FSDEngine.DeepPathFinderSize
	 */
	enum class EDeepPathFinderSize : uint8_t
	{
		DeepPathFinderSizeInvalid                = 0,
		DeepPathFinderSizeSmall                  = 1,
		DeepPathFinderSizeMedium                 = 2,
		DeepPathFinderSizeLarge                  = 3,
		DeepPathFinderSizeDeepPathFinderSize_MAX = 4
	};

	/**
	 * Enum FSDEngine.DeepPathFinderType
	 */
	enum class EDeepPathFinderType : uint8_t
	{
		DeepPathFinderTypeWalk = 0,
		DeepPathFinderTypeFly  = 1,
		DeepPathFinderTypeMAX  = 2
	};

	/**
	 * Enum FSDEngine.EFNDomainWarpType
	 */
	enum class EFNDomainWarpType : uint8_t
	{
		OPENSIMPLEX2         = 0,
		OPENSIMPLEX2_REDUCED = 1,
		BASICGRID            = 2,
		MAX                  = 3
	};

	/**
	 * Enum FSDEngine.EFNCellularReturnType
	 */
	enum class EFNCellularReturnType : uint8_t
	{
		CELLVALUE    = 0,
		DISTANCE     = 1,
		DISTANCE2    = 2,
		DISTANCE2ADD = 3,
		DISTANCE2SUB = 4,
		DISTANCE2MUL = 5,
		DISTANCE2DIV = 6,
		MAX          = 7
	};

	/**
	 * Enum FSDEngine.EFNCellularDistanceFunc
	 */
	enum class EFNCellularDistanceFunc : uint8_t
	{
		EUCLIDEAN   = 0,
		EUCLIDEANSQ = 1,
		MANHATTAN   = 2,
		HYBRID      = 3,
		MAX         = 4
	};

	/**
	 * Enum FSDEngine.EFNFractalType
	 */
	enum class EFNFractalType : uint8_t
	{
		NONE                    = 0,
		FBM                     = 1,
		RIDGED                  = 2,
		PINGPONG                = 3,
		DOMAIN_WARP_PROGRESSIVE = 4,
		DOMAIN_WARP_INDEPENDENT = 5,
		MAX                     = 6
	};

	/**
	 * Enum FSDEngine.EFNRotationType3D
	 */
	enum class EFNRotationType3D : uint8_t
	{
		NONE              = 0,
		IMPROVE_XY_PLANES = 1,
		IMPROVE_XZ_PLANES = 2,
		MAX               = 3
	};

	/**
	 * Enum FSDEngine.EFNNoiseType
	 */
	enum class EFNNoiseType : uint8_t
	{
		OPENSIMPLEX2  = 0,
		OPENSIMPLEX2S = 1,
		CELLULAR      = 2,
		PERLIN        = 3,
		VALUE_CUBIC   = 4,
		VALUE         = 5,
		MAX           = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct FSDEngine.BakeSetting
	 * Size -> 0x001C
	 */
	struct FBakeSetting
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IntValue;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             VectorValue;                                             // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.BakeSettings
	 * Size -> 0x0010
	 */
	struct FBakeSettings
	{
	public:
		TArray<struct FBakeSetting>                                Pairs;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.DeepCSGNode
	 * Size -> 0x0004
	 */
	struct FDeepCSGNode
	{
	public:
		uint32_t                                                   Val;                                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.DeepCSGFloatTreePacked
	 * Size -> 0x0018
	 */
	struct FDeepCSGFloatTreePacked
	{
	public:
		struct FDeepCSGNode                                        Root;                                                    // 0x0000(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HVPE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            encplanes;                                               // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.SmartTerrainMaterialVal
	 * Size -> 0x0028
	 */
	struct FSmartTerrainMaterialVal
	{
	public:
		uint32_t                                                   IfEmpty;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   IfSolid;                                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           OverrideKeys;                                            // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           OverrideValues;                                          // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.BakeEntry
	 * Size -> 0x0058
	 */
	struct FBakeEntry
	{
	public:
		struct FDeepCSGFloatTreePacked                             Tree;                                                    // 0x0000(0x0018) NativeAccessSpecifierPublic
		struct FCoreUObject_FBox                                   AABB;                                                    // 0x0018(0x001C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XYZ3[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTerrainMaterialCore*>                        Materials;                                               // 0x0038(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FSmartTerrainMaterialVal>                    SmartMaterials;                                          // 0x0048(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.MeshBaseProperties
	 * Size -> 0x0001
	 */
	struct FMeshBaseProperties
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.CSGBakedChildInstanceProperties
	 * Size -> 0x0010
	 */
	struct FCSGBakedChildInstanceProperties
	{
	public:
		class UCSGBake*                                            BakedCSG;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VariantIndex;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ENTU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSDEngine.DeepCSGFloatPlane
	 * Size -> 0x0020
	 */
	struct FDeepCSGFloatPlane
	{
	public:
		struct FVector4                                            Plane;                                                   // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDeepCSGNode                                        Top;                                                     // 0x0010(0x0004) NoDestructor, NativeAccessSpecifierPublic
		struct FDeepCSGNode                                        Bottom;                                                  // 0x0014(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TGPN[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSDEngine.DeepCSGFloatTree
	 * Size -> 0x0018
	 */
	struct FDeepCSGFloatTree
	{
	public:
		struct FDeepCSGNode                                        Root;                                                    // 0x0000(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0E1E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDeepCSGFloatPlane>                          planes;                                                  // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.MeshCellNoiseProperties
	 * Size -> 0x001C
	 */
	struct FMeshCellNoiseProperties
	{
	public:
		struct FVector                                             CellSize;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CellOffsetFactor;                                        // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InsideFraction;                                          // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.EmptyBinaryMatProperties
	 * Size -> 0x0010
	 */
	struct FEmptyBinaryMatProperties
	{
	public:
		EEmptyBinaryComb                                           Result;                                                  // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4BBB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTerrainMaterialCore*                                Material;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.BinaryMatProperties
	 * Size -> 0x0010
	 */
	struct FBinaryMatProperties
	{
	public:
		EBinaryComb                                                Result;                                                  // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7ZIK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTerrainMaterialCore*                                Material;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.BinaryMatPatterns
	 * Size -> 0x0020
	 */
	struct FBinaryMatPatterns
	{
	public:
		EPattern                                                   PatternType;                                             // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5IXH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTerrainMaterialCore*                                PatternMaterial;                                         // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBinaryMatProperties                                ReplaceWith;                                             // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.BinaryTerrainMaterialCombiner
	 * Size -> 0x0030
	 */
	struct FBinaryTerrainMaterialCombiner
	{
	public:
		struct FEmptyBinaryMatProperties                           IfEmpty;                                                 // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBinaryMatProperties                                IfSolid;                                                 // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FBinaryMatPatterns>                          Patterns;                                                // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.CSGChildInstanceProperties
	 * Size -> 0x0020
	 */
	struct FCSGChildInstanceProperties
	{
	public:
		class UClass*                                              Mesh;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBakeSettings                                       Settings;                                                // 0x0008(0x0010) Edit, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_61DQ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSDEngine.GeneralMatPropertiesEmpty
	 * Size -> 0x0010
	 */
	struct FGeneralMatPropertiesEmpty
	{
	public:
		EGeneralCombEmpty                                          Result;                                                  // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TN47[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTerrainMaterialCore*                                Material;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.GeneralMatProperties
	 * Size -> 0x0010
	 */
	struct FGeneralMatProperties
	{
	public:
		EGeneralComb                                               Result;                                                  // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0C4W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTerrainMaterialCore*                                Material;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.GeneralMatPatterns
	 * Size -> 0x0020
	 */
	struct FGeneralMatPatterns
	{
	public:
		EGeneralPattern                                            PatternType;                                             // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ODD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTerrainMaterialCore*                                PatternMaterial;                                         // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGeneralMatProperties                               ReplaceWith;                                             // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.GeneralTerrainMaterialCombiner
	 * Size -> 0x0050
	 */
	struct FGeneralTerrainMaterialCombiner
	{
	public:
		struct FGeneralMatPropertiesEmpty                          IfBothEmpty;                                             // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FGeneralMatPatterns>                         Patterns;                                                // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGeneralMatProperties                               IfBothSolid;                                             // 0x0020(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGeneralMatProperties                               IfSrcSolid;                                              // 0x0030(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGeneralMatProperties                               IfDestSolid;                                             // 0x0040(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.DeepCSGTree
	 * Size -> 0x0048
	 */
	struct FDeepCSGTree
	{
	public:
		unsigned char                                              UnknownData_0AL4[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSDEngine.ConvexNoiseProperties
	 * Size -> 0x000C
	 */
	struct FConvexNoiseProperties
	{
	public:
		float                                                      Amplitude;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GridSize;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.CSGConvexColliderProperties
	 * Size -> 0x0008
	 */
	struct FCSGConvexColliderProperties
	{
	public:
		class UStaticMesh*                                         collider;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.MeshLayerProperties
	 * Size -> 0x0028
	 */
	struct FMeshLayerProperties
	{
	public:
		class UTerrainMaterialCore*                                StartMaterial;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCoreUObject_FBox                                   BoundingBox;                                             // 0x0008(0x001C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MSDZ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSDEngine.CSGLayers
	 * Size -> 0x0038
	 */
	struct FCSGLayers
	{
	public:
		float                                                      Offset;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VVZX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBinaryTerrainMaterialCombiner                      Above;                                                   // 0x0008(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.CSGAddMaterialLayersProperties
	 * Size -> 0x0040
	 */
	struct FCSGAddMaterialLayersProperties
	{
	public:
		TArray<struct FCSGLayers>                                  Layers;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FBinaryTerrainMaterialCombiner                      Inner;                                                   // 0x0010(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.CSGRandomizeTransformProperties
	 * Size -> 0x0054
	 */
	struct FCSGRandomizeTransformProperties
	{
	public:
		struct FCoreUObject_FBox                                   Translation;                                             // 0x0000(0x001C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      RotationMinZ;                                            // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationMaxZ;                                            // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationMinY;                                            // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationMaxY;                                            // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationMinX;                                            // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationMaxX;                                            // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ScaleMin;                                                // 0x0034(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ScaleMax;                                                // 0x0040(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ScaleAxesIndependent;                                    // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisableRandomize;                                        // 0x004D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SNZE[0x2];                                   // 0x004E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Seed;                                                    // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.CSGRandomDisableProperties
	 * Size -> 0x0004
	 */
	struct FCSGRandomDisableProperties
	{
	public:
		float                                                      DisableProbability;                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.CSGGridDuplicatorProperties
	 * Size -> 0x0020
	 */
	struct FCSGGridDuplicatorProperties
	{
	public:
		int32_t                                                    NumA;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumB;                                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DirectionA;                                              // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DirectionB;                                              // 0x0014(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.CSGCircleDuplicatorProperties
	 * Size -> 0x0008
	 */
	struct FCSGCircleDuplicatorProperties
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.ChunkId
	 * Size -> 0x0006
	 */
	struct FChunkId
	{
	public:
		int16_t                                                    X;                                                       // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    Y;                                                       // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    Z;                                                       // 0x0004(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.MeshBoxProperties
	 * Size -> 0x0014
	 */
	struct FMeshBoxProperties
	{
	public:
		struct FVector                                             HalfSize;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BevelSegments;                                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BevelSize;                                               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.CSGCylinderProperties
	 * Size -> 0x000C
	 */
	struct FCSGCylinderProperties
	{
	public:
		float                                                      Height;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Sides;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.CSGConeProperties
	 * Size -> 0x0010
	 */
	struct FCSGConeProperties
	{
	public:
		float                                                      Height;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RadiusTop;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RadiusBottom;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Sides;                                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.CSGSphereProperties
	 * Size -> 0x0014
	 */
	struct FCSGSphereProperties
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngleTop;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngleBottom;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SidesTopBottom;                                          // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Sides;                                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.WarpNoiseProperties
	 * Size -> 0x0020
	 */
	struct FWarpNoiseProperties
	{
	public:
		float                                                      Frequency;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFNRotationType3D                                          RotationType3d;                                          // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFNFractalType                                             FractalType;                                             // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I08X[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Octaves;                                                 // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Lacunarity;                                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Gain;                                                    // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightedStrength;                                        // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFNDomainWarpType                                          DomainWarpType;                                          // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1YFL[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Amplitude;                                               // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.WarpedProperties
	 * Size -> 0x0028
	 */
	struct FWarpedProperties
	{
	public:
		EPreviewCellSize                                           CellSize;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_95KU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWarpNoiseProperties                                WarpNoise;                                               // 0x0004(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.SplineWarpProperties
	 * Size -> 0x0020
	 */
	struct FSplineWarpProperties
	{
	public:
		struct FCoreUObject_FBox                                   ElementBox;                                              // 0x0000(0x001C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ESplineWarpType                                            SplineWarpType;                                          // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LICR[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSDEngine.CSGSDFInstanceProperties
	 * Size -> 0x0028
	 */
	struct FCSGSDFInstanceProperties
	{
	public:
		class UClass*                                              SDF;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPreviewCellSize                                           CellSize;                                                // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ZCU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBakeSettings                                       Settings;                                                // 0x0010(0x0010) Edit, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_97DF[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSDEngine.SDFModulateLayer
	 * Size -> 0x0008
	 */
	struct FSDFModulateLayer
	{
	public:
		float                                                      ModulateDistance;                                        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SDFOffset;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.CSGSDFModulatedInstanceProperties
	 * Size -> 0x0050
	 */
	struct FCSGSDFModulatedInstanceProperties
	{
	public:
		class UClass*                                              SDF;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ModulateSDF;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPreviewCellSize                                           CellSize;                                                // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3EOE[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBakeSettings                                       SDFSettings;                                             // 0x0018(0x0010) Edit, NativeAccessSpecifierPublic
		struct FBakeSettings                                       ModulateSettings;                                        // 0x0028(0x0010) Edit, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESDFModulateMode                                           ModulateMode;                                            // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PNN2[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSDFModulateLayer>                           ModulateLayers;                                          // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.VoronoiProperties
	 * Size -> 0x001C
	 */
	struct FVoronoiProperties
	{
	public:
		struct FVector                                             HalfSize;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumPoints;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Inverted;                                                // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZ6F[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSDEngine.CSGSTLProperties
	 * Size -> 0x0008
	 */
	struct FCSGSTLProperties
	{
	public:
		class UStaticMeshCarver*                                   Mesh;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.HMMinMaxLevel
	 * Size -> 0x0010
	 */
	struct FHMMinMaxLevel
	{
	public:
		TArray<float>                                              Entries;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.SDFBaseProperties
	 * Size -> 0x0001
	 */
	struct FSDFBaseProperties
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.SDFHeightMaproperties
	 * Size -> 0x000C
	 */
	struct FSDFHeightMaproperties
	{
	public:
		struct FVector                                             Scale;                                                   // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.FastNoiseProperties
	 * Size -> 0x002C
	 */
	struct FFastNoiseProperties
	{
	public:
		float                                                      Frequency;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFNNoiseType                                               NoiseType;                                               // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFNRotationType3D                                          RotationType3d;                                          // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFNFractalType                                             FractalType;                                             // 0x0006(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VSP6[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Octaves;                                                 // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Lacunarity;                                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Gain;                                                    // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightedStrength;                                        // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PingPongStrength;                                        // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFNCellularDistanceFunc                                    CellularDistanceFunc;                                    // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFNCellularReturnType                                      CellularReturnYype;                                      // 0x001D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T42P[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CellularJitterMod;                                       // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFNDomainWarpType                                          DomainWarpType;                                          // 0x0024(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0W17[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WarpAmplitude;                                           // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.SDFModifierProperties
	 * Size -> 0x0038
	 */
	struct FSDFModifierProperties
	{
	public:
		float                                                      Offset;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFastNoiseProperties                                Noise;                                                   // 0x0004(0x002C) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      NoiseAmplitude;                                          // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.SDFSmoothingProperties
	 * Size -> 0x0008
	 */
	struct FSDFSmoothingProperties
	{
	public:
		float                                                      SmoothingDist;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SmoothingEnabled;                                        // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5781[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSDEngine.SDFOnionProperties
	 * Size -> 0x0004
	 */
	struct FSDFOnionProperties
	{
	public:
		float                                                      Thickness;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.SDFRandomizeTransformProperties
	 * Size -> 0x0054
	 */
	struct FSDFRandomizeTransformProperties
	{
	public:
		struct FCoreUObject_FBox                                   Translation;                                             // 0x0000(0x001C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      RotationMinZ;                                            // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationMaxZ;                                            // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationMinY;                                            // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationMaxY;                                            // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationMinX;                                            // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationMaxX;                                            // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ScaleMin;                                                // 0x0034(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ScaleMax;                                                // 0x0040(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ScaleAxesIndependent;                                    // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisableRandomize;                                        // 0x004D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XJI2[0x2];                                   // 0x004E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Seed;                                                    // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.SDFRandomDisableProperties
	 * Size -> 0x0004
	 */
	struct FSDFRandomDisableProperties
	{
	public:
		float                                                      DisableProbability;                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.SDFSphereProperties
	 * Size -> 0x000C
	 */
	struct FSDFSphereProperties
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RadiusOverrideName;                                      // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.SDFBoxProperties
	 * Size -> 0x000C
	 */
	struct FSDFBoxProperties
	{
	public:
		struct FVector                                             HalfSize;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.SDFCylinderProperties
	 * Size -> 0x0008
	 */
	struct FSDFCylinderProperties
	{
	public:
		float                                                      HalfLength;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.SDFCapsuleProperties
	 * Size -> 0x0008
	 */
	struct FSDFCapsuleProperties
	{
	public:
		float                                                      HalfLength;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.SDFTorusProperties
	 * Size -> 0x0010
	 */
	struct FSDFTorusProperties
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TubeRadius;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SizeOverrideName;                                        // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.MatrixWithExactSync
	 * Size -> 0x0040
	 */
	struct FMatrixWithExactSync
	{
	public:
		float                                                      Values[0x10];                                            // 0x0000(0x0040) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.CarveSplineSegment
	 * Size -> 0x0034
	 */
	struct FCarveSplineSegment
	{
	public:
		struct FVector                                             SplineStart;                                             // 0x0000(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SplineStartTangent;                                      // 0x000C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SplineEnd;                                               // 0x0018(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SplineEndTangent;                                        // 0x0024(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0030(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.ChunkOffset
	 * Size -> 0x0006
	 */
	struct FChunkOffset
	{
	public:
		int16_t                                                    X;                                                       // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    Y;                                                       // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    Z;                                                       // 0x0004(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.CellId
	 * Size -> 0x0006
	 */
	struct FCellId
	{
	public:
		int16_t                                                    X;                                                       // 0x0000(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    Y;                                                       // 0x0002(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    Z;                                                       // 0x0004(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.DeepCSGTreeOperations
	 * Size -> 0x0001
	 */
	struct FDeepCSGTreeOperations
	{
	public:
		unsigned char                                              UnknownData_VI1K[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSDEngine.DeepCSGUtils
	 * Size -> 0x0001
	 */
	struct FDeepCSGUtils
	{
	public:
		unsigned char                                              UnknownData_KDSF[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSDEngine.LinearCellId
	 * Size -> 0x0006
	 */
	struct FLinearCellId
	{
	public:
		uint16_t                                                   X;                                                       // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Y;                                                       // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Z;                                                       // 0x0004(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.EncodedChunkId
	 * Size -> 0x0004
	 */
	struct FEncodedChunkId
	{
	public:
		uint32_t                                                   ID;                                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.EncodedChunkCellId
	 * Size -> 0x0008
	 */
	struct FEncodedChunkCellId
	{
	public:
		struct FEncodedChunkId                                     ChunkId;                                                 // 0x0000(0x0004) NoDestructor, NativeAccessSpecifierPublic
		uint16_t                                                   cellOffset;                                              // 0x0004(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M3X0[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FSDEngine.ChunckIDAndOffsetBox
	 * Size -> 0x0012
	 */
	struct FChunckIDAndOffsetBox
	{
	public:
		struct FChunkId                                            ChunkId;                                                 // 0x0000(0x0006) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChunkOffset                                        minOffset;                                               // 0x0006(0x0006) NoDestructor, NativeAccessSpecifierPublic
		struct FChunkOffset                                        maxOffset;                                               // 0x000C(0x0006) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.ChunckIDAndOffset
	 * Size -> 0x000C
	 */
	struct FChunckIDAndOffset
	{
	public:
		struct FChunkId                                            ChunkId;                                                 // 0x0000(0x0006) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChunkOffset                                        Offset;                                                  // 0x0006(0x0006) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FSDEngine.CellBox
	 * Size -> 0x000C
	 */
	struct FCellBox
	{
	public:
		struct FCellId                                             Min;                                                     // 0x0000(0x0006) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCellId                                             Max;                                                     // 0x0006(0x0006) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
