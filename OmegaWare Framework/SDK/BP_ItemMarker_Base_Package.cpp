/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.96489.0
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
	 * 		Name   -> Function BP_ItemMarker_Base.BP_ItemMarker_Base_C.SetMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMeshComponent*                              Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInterface*                          ParentMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    DynamicMaterial                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ItemMarker_Base_C::SetMaterials(class UMeshComponent* Mesh, class UMaterialInterface* ParentMaterial, class UMaterialInstanceDynamic** DynamicMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemMarker_Base.BP_ItemMarker_Base_C.SetMaterials");
		
		ABP_ItemMarker_Base_C_SetMaterials_Params params {};
		params.Mesh = Mesh;
		params.ParentMaterial = ParentMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DynamicMaterial != nullptr)
			*DynamicMaterial = params.DynamicMaterial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemMarker_Base.BP_ItemMarker_Base_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ItemMarker_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemMarker_Base.BP_ItemMarker_Base_C.UserConstructionScript");
		
		ABP_ItemMarker_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemMarker_Base.BP_ItemMarker_Base_C.OnMarkerValidChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Valid                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ItemMarker_Base_C::OnMarkerValidChanged(bool Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemMarker_Base.BP_ItemMarker_Base_C.OnMarkerValidChanged");
		
		ABP_ItemMarker_Base_C_OnMarkerValidChanged_Params params {};
		params.Valid = Valid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemMarker_Base.BP_ItemMarker_Base_C.ExecuteUbergraph_BP_ItemMarker_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ItemMarker_Base_C::ExecuteUbergraph_BP_ItemMarker_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemMarker_Base.BP_ItemMarker_Base_C.ExecuteUbergraph_BP_ItemMarker_Base");
		
		ABP_ItemMarker_Base_C_ExecuteUbergraph_BP_ItemMarker_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ItemMarker_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ItemMarker_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemMarker_Base.BP_ItemMarker_Base_C");
		return ptr;
	}

}


