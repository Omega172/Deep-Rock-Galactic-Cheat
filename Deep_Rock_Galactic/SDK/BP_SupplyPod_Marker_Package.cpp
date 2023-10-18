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
	 * 		Name   -> Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.SetMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterial*                                   ParentMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMeshComponent*                              Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    DynamicMaterial                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SupplyPod_Marker_C::SetMaterials(class UMaterial* ParentMaterial, class UMeshComponent* Mesh, class UMaterialInstanceDynamic** DynamicMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.SetMaterials");
		
		ABP_SupplyPod_Marker_C_SetMaterials_Params params {};
		params.ParentMaterial = ParentMaterial;
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DynamicMaterial != nullptr)
			*DynamicMaterial = params.DynamicMaterial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_SupplyPod_Marker_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.UserConstructionScript");
		
		ABP_SupplyPod_Marker_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SupplyPod_Marker_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.ReceiveBeginPlay");
		
		ABP_SupplyPod_Marker_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.OnMarkerValidChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Valid                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SupplyPod_Marker_C::OnMarkerValidChanged(bool Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.OnMarkerValidChanged");
		
		ABP_SupplyPod_Marker_C_OnMarkerValidChanged_Params params {};
		params.Valid = Valid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.OnMarkerVisibilityChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SupplyPod_Marker_C::OnMarkerVisibilityChanged(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.OnMarkerVisibilityChanged");
		
		ABP_SupplyPod_Marker_C_OnMarkerVisibilityChanged_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.ExecuteUbergraph_BP_SupplyPod_Marker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SupplyPod_Marker_C::ExecuteUbergraph_BP_SupplyPod_Marker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.ExecuteUbergraph_BP_SupplyPod_Marker");
		
		ABP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SupplyPod_Marker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SupplyPod_Marker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SupplyPod_Marker.BP_SupplyPod_Marker_C");
		return ptr;
	}

}


