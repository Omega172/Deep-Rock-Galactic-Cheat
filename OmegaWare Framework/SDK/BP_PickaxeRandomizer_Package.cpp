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
	 * 		Name   -> Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.SetStaticMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        MeshComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PickaxeRandomizer_C::SetStaticMesh(class UStaticMeshComponent* MeshComponent, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.SetStaticMesh");
		
		ABP_PickaxeRandomizer_C_SetStaticMesh_Params params {};
		params.MeshComponent = MeshComponent;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.SelectRandomMesh
	 * 		Flags  -> ()
	 */
	void ABP_PickaxeRandomizer_C::SelectRandomMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.SelectRandomMesh");
		
		ABP_PickaxeRandomizer_C_SelectRandomMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PickaxeRandomizer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.ReceiveBeginPlay");
		
		ABP_PickaxeRandomizer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.Loaded
	 * 		Flags  -> ()
	 */
	void ABP_PickaxeRandomizer_C::Loaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.Loaded");
		
		ABP_PickaxeRandomizer_C_Loaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.LoadedMaterial
	 * 		Flags  -> ()
	 */
	void ABP_PickaxeRandomizer_C::LoadedMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.LoadedMaterial");
		
		ABP_PickaxeRandomizer_C_LoadedMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.ExecuteUbergraph_BP_PickaxeRandomizer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PickaxeRandomizer_C::ExecuteUbergraph_BP_PickaxeRandomizer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.ExecuteUbergraph_BP_PickaxeRandomizer");
		
		ABP_PickaxeRandomizer_C_ExecuteUbergraph_BP_PickaxeRandomizer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PickaxeRandomizer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PickaxeRandomizer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PickaxeRandomizer.BP_PickaxeRandomizer_C");
		return ptr;
	}

}


