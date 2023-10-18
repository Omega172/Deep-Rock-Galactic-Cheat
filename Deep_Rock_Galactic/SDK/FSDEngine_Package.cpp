/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.91584.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTerrainMaterialBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTerrainMaterialBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.TerrainMaterialBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTerrainMaterialCore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTerrainMaterialCore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.TerrainMaterialCore");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDEngine.CSGBake.BakeCSG
	 * 		Flags  -> ()
	 */
	void UCSGBake::BakeCSG()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDEngine.CSGBake.BakeCSG");
		
		UCSGBake_BakeCSG_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGBake.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGBake::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGBake");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBuilderBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuilderBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.BuilderBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGBakedChildInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGBakedChildInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGBakedChildInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGBuilderBaseSceneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGBuilderBaseSceneComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGBuilderBaseSceneComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGBaseComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGBaseComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGBaseComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGBakedChildInstanceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGBakedChildInstanceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGBakedChildInstanceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGSingleChildBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGSingleChildBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGSingleChildBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGDuplicateSingleChildBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGDuplicateSingleChildBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGDuplicateSingleChildBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDEngine.CSGBuilderBase.PreGenerate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBakeConfig*                                 builder                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACSGBuilderBase::PreGenerate(class UBakeConfig* builder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDEngine.CSGBuilderBase.PreGenerate");
		
		ACSGBuilderBase_PreGenerate_Params params {};
		params.builder = builder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACSGBuilderBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACSGBuilderBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGBuilderBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACSGBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACSGBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDEngine.BakeConfig.GetVectorSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     defaultVal                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UBakeConfig::GetVectorSetting(const class FName& Name, const struct FVector& defaultVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDEngine.BakeConfig.GetVectorSetting");
		
		UBakeConfig_GetVectorSetting_Params params {};
		params.Name = Name;
		params.defaultVal = defaultVal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDEngine.BakeConfig.GetRandomStream
	 * 		Flags  -> ()
	 */
	struct FRandomStream UBakeConfig::GetRandomStream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDEngine.BakeConfig.GetRandomStream");
		
		UBakeConfig_GetRandomStream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDEngine.BakeConfig.GetObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UBuilderBase* UBakeConfig::GetObject(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDEngine.BakeConfig.GetObject");
		
		UBakeConfig_GetObject_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDEngine.BakeConfig.GetIntSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            defaultVal                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UBakeConfig::GetIntSetting(const class FName& Name, int32_t defaultVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDEngine.BakeConfig.GetIntSetting");
		
		UBakeConfig_GetIntSetting_Params params {};
		params.Name = Name;
		params.defaultVal = defaultVal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDEngine.BakeConfig.GetFloatSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              defaultVal                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UBakeConfig::GetFloatSetting(const class FName& Name, float defaultVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDEngine.BakeConfig.GetFloatSetting");
		
		UBakeConfig_GetFloatSetting_Params params {};
		params.Name = Name;
		params.defaultVal = defaultVal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDEngine.BakeConfig.GetBoolSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               defaultVal                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBakeConfig::GetBoolSetting(const class FName& Name, bool defaultVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDEngine.BakeConfig.GetBoolSetting");
		
		UBakeConfig_GetBoolSetting_Params params {};
		params.Name = Name;
		params.defaultVal = defaultVal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBakeConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBakeConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.BakeConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGCellNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGCellNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGCellNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGCellNoiseComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGCellNoiseComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGCellNoiseComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGChildInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGChildInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGChildInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGChildInstanceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGChildInstanceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGChildInstanceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimpleMeshWithCachedTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleMeshWithCachedTree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SimpleMeshWithCachedTree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConvexMeshWithCachedTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConvexMeshWithCachedTree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.ConvexMeshWithCachedTree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGConvexCollider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGConvexCollider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGConvexCollider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimpleMeshWithCachedTreeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleMeshWithCachedTreeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SimpleMeshWithCachedTreeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConvexMeshWithCachedTreeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConvexMeshWithCachedTreeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.ConvexMeshWithCachedTreeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGConvexColliderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGConvexColliderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGConvexColliderComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGGroupComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGGroupComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGGroupComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGLayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGLayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGLayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGLayerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGLayerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGLayerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGAddMaterialLayers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGAddMaterialLayers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGAddMaterialLayers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGAddMaterialLayersComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGAddMaterialLayersComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGAddMaterialLayersComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGRandomizeTransform.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGRandomizeTransform::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGRandomizeTransform");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGRandomizeTransformComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGRandomizeTransformComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGRandomizeTransformComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGRandomDisable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGRandomDisable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGRandomDisable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGRandomDisableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGRandomDisableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGRandomDisableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGGridDuplicator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGGridDuplicator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGGridDuplicator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGGridDuplicatorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGGridDuplicatorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGGridDuplicatorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGCircleDuplicator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGCircleDuplicator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGCircleDuplicator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGCircleDuplicatorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGCircleDuplicatorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGCircleDuplicatorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGPreviewComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGPreviewComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGPreviewComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGPreviewScene.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGPreviewScene::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGPreviewScene");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGPlane.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGPlane::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGPlane");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGPlaneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGPlaneComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGPlaneComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGBoxComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGBoxComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGBoxComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGCylinder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGCylinder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGCylinder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGCylinderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGCylinderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGCylinderComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGCone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGCone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGCone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGConeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGConeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGConeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGSphere.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGSphere::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGSphere");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGSphereComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGSphereComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGSphereComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGWarped.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGWarped::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGWarped");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGWarpedComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGWarpedComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGWarpedComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGSplineWarp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGSplineWarp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGSplineWarp");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGSplineWarpComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGSplineWarpComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGSplineWarpComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGSDFInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGSDFInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGSDFInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGSDFInstanceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGSDFInstanceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGSDFInstanceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGModulatedSDFInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGModulatedSDFInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGModulatedSDFInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGModulatedSDFInstanceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGModulatedSDFInstanceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGModulatedSDFInstanceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGVoronoi.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGVoronoi::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGVoronoi");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGVoronoiComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGVoronoiComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGVoronoiComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGSTL.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGSTL::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGSTL");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGSTLComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGSTLComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.CSGSTLComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADeepCSGSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeepCSGSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.DeepCSGSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDEngine.DeepProceduralMeshComponent.FindTerrainMaterialFromPhysicalMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPhysicalMaterial*                           Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTerrainMaterialCore* UDeepProceduralMeshComponent::FindTerrainMaterialFromPhysicalMaterial(class UPhysicalMaterial* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDEngine.DeepProceduralMeshComponent.FindTerrainMaterialFromPhysicalMaterial");
		
		UDeepProceduralMeshComponent_FindTerrainMaterialFromPhysicalMaterial_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeepProceduralMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeepProceduralMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.DeepProceduralMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASDFBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASDFBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDEngine.HeightMapWithMinMaxQuadTree.Generate
	 * 		Flags  -> ()
	 */
	void UHeightMapWithMinMaxQuadTree::Generate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDEngine.HeightMapWithMinMaxQuadTree.Generate");
		
		UHeightMapWithMinMaxQuadTree_Generate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHeightMapWithMinMaxQuadTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeightMapWithMinMaxQuadTree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.HeightMapWithMinMaxQuadTree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFHeightMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFHeightMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFHeightMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFBaseComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFBaseComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFBaseComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFHeightMapComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFHeightMapComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFHeightMapComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFSingleChildBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFSingleChildBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFSingleChildBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFModifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFModifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFModifier");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFModifierComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFModifierComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFModifierComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFUnionOp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFUnionOp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFUnionOp");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFUnionOpComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFUnionOpComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFUnionOpComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFIntersectOp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFIntersectOp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFIntersectOp");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFIntersectOpComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFIntersectOpComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFIntersectOpComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFSubOp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFSubOp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFSubOp");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFSubOpComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFSubOpComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFSubOpComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFOnion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFOnion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFOnion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFOnionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFOnionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFOnionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFRandomizeTransform.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFRandomizeTransform::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFRandomizeTransform");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFRandomizeTransformComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFRandomizeTransformComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFRandomizeTransformComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFRandomDisable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFRandomDisable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFRandomDisable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFRandomDisableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFRandomDisableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFRandomDisableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFBaseWithTransform.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFBaseWithTransform::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFBaseWithTransform");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFBaseWithTransformComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFBaseWithTransformComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFBaseWithTransformComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFSphere.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFSphere::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFSphere");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFSphereComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFSphereComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFSphereComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFPlane.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFPlane::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFPlane");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFPlaneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFPlaneComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFPlaneComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFBoxComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFBoxComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFBoxComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFCylinder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFCylinder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFCylinder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFCylinderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFCylinderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFCylinderComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFCapsule.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFCapsule::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFCapsule");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFCapsuleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFCapsuleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFCapsuleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFTorus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFTorus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFTorus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USDFTorusComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDFTorusComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.SDFTorusComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDEngine.StaticMeshCarver.Generate
	 * 		Flags  -> ()
	 */
	void UStaticMeshCarver::Generate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDEngine.StaticMeshCarver.Generate");
		
		UStaticMeshCarver_Generate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FSDEngine.StaticMeshCarver.ExportPreviewMesh
	 * 		Flags  -> ()
	 */
	void UStaticMeshCarver::ExportPreviewMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FSDEngine.StaticMeshCarver.ExportPreviewMesh");
		
		UStaticMeshCarver_ExportPreviewMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStaticMeshCarver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaticMeshCarver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FSDEngine.StaticMeshCarver");
		return ptr;
	}

}


