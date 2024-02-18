/**
 * Name: Deep_Rock_Galactic
 * Version: 1.38.94396.0
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
	 * 		Name   -> Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.SetAngleRestriction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AngleRestriction                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SentryItem_PlaceMarker_C::SetAngleRestriction(float AngleRestriction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.SetAngleRestriction");
		
		ABP_SentryItem_PlaceMarker_C_SetAngleRestriction_Params params {};
		params.AngleRestriction = AngleRestriction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.SetMaterials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMeshComponent*                              Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInterface*                          ParentMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    DynamicMaterial                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SentryItem_PlaceMarker_C::SetMaterials(class UMeshComponent* Mesh, class UMaterialInterface* ParentMaterial, class UMaterialInstanceDynamic** DynamicMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.SetMaterials");
		
		ABP_SentryItem_PlaceMarker_C_SetMaterials_Params params {};
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
	 * 		Name   -> Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_SentryItem_PlaceMarker_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.UserConstructionScript");
		
		ABP_SentryItem_PlaceMarker_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SentryItem_PlaceMarker_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.ReceiveBeginPlay");
		
		ABP_SentryItem_PlaceMarker_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.OnMarkerValidChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Valid                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SentryItem_PlaceMarker_C::OnMarkerValidChanged(bool Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.OnMarkerValidChanged");
		
		ABP_SentryItem_PlaceMarker_C_OnMarkerValidChanged_Params params {};
		params.Valid = Valid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.SetArcIndicatorActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SentryItem_PlaceMarker_C::SetArcIndicatorActive(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.SetArcIndicatorActive");
		
		ABP_SentryItem_PlaceMarker_C_SetArcIndicatorActive_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.ExecuteUbergraph_BP_SentryItem_PlaceMarker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SentryItem_PlaceMarker_C::ExecuteUbergraph_BP_SentryItem_PlaceMarker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.ExecuteUbergraph_BP_SentryItem_PlaceMarker");
		
		ABP_SentryItem_PlaceMarker_C_ExecuteUbergraph_BP_SentryItem_PlaceMarker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SentryItem_PlaceMarker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SentryItem_PlaceMarker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C");
		return ptr;
	}

}


