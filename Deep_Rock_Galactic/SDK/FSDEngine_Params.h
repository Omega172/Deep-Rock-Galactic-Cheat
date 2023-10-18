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
	 * Function FSDEngine.CSGBake.BakeCSG
	 */
	struct UCSGBake_BakeCSG_Params
	{	};

	/**
	 * Function FSDEngine.CSGBuilderBase.PreGenerate
	 */
	struct ACSGBuilderBase_PreGenerate_Params
	{
	public:
		class UBakeConfig*                                         builder;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FSDEngine.BakeConfig.GetVectorSetting
	 */
	struct UBakeConfig_GetVectorSetting_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             defaultVal;                                              // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FSDEngine.BakeConfig.GetRandomStream
	 */
	struct UBakeConfig_GetRandomStream_Params
	{
	public:
		struct FRandomStream                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FSDEngine.BakeConfig.GetObject
	 */
	struct UBakeConfig_GetObject_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UBuilderBase*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FSDEngine.BakeConfig.GetIntSetting
	 */
	struct UBakeConfig_GetIntSetting_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    defaultVal;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FSDEngine.BakeConfig.GetFloatSetting
	 */
	struct UBakeConfig_GetFloatSetting_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      defaultVal;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FSDEngine.BakeConfig.GetBoolSetting
	 */
	struct UBakeConfig_GetBoolSetting_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       defaultVal;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FSDEngine.DeepProceduralMeshComponent.FindTerrainMaterialFromPhysicalMaterial
	 */
	struct UDeepProceduralMeshComponent_FindTerrainMaterialFromPhysicalMaterial_Params
	{
	public:
		class UPhysicalMaterial*                                   Material;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTerrainMaterialCore*                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FSDEngine.HeightMapWithMinMaxQuadTree.Generate
	 */
	struct UHeightMapWithMinMaxQuadTree_Generate_Params
	{	};

	/**
	 * Function FSDEngine.StaticMeshCarver.Generate
	 */
	struct UStaticMeshCarver_Generate_Params
	{	};

	/**
	 * Function FSDEngine.StaticMeshCarver.ExportPreviewMesh
	 */
	struct UStaticMeshCarver_ExportPreviewMesh_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
