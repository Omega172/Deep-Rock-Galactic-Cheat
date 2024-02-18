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
	 * 		Name   -> Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.UpdateMaterial
	 * 		Flags  -> ()
	 */
	void ABP_LaserPointer_Marker_C::UpdateMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.UpdateMaterial");
		
		ABP_LaserPointer_Marker_C_UpdateMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_LaserPointer_Marker_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.ReceiveBeginPlay");
		
		ABP_LaserPointer_Marker_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDestroyed_Target
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LaserPointer_Marker_C::OnDestroyed_Target(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDestroyed_Target");
		
		ABP_LaserPointer_Marker_C_OnDestroyed_Target_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDestroyed_Self
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LaserPointer_Marker_C::OnDestroyed_Self(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDestroyed_Self");
		
		ABP_LaserPointer_Marker_C_OnDestroyed_Self_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDeath_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHealthComponentBase*                        HealthComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LaserPointer_Marker_C::OnDeath_Event(class UHealthComponentBase* HealthComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDeath_Event");
		
		ABP_LaserPointer_Marker_C_OnDeath_Event_Params params {};
		params.HealthComponent = HealthComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.ExecuteUbergraph_BP_LaserPointer_Marker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LaserPointer_Marker_C::ExecuteUbergraph_BP_LaserPointer_Marker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.ExecuteUbergraph_BP_LaserPointer_Marker");
		
		ABP_LaserPointer_Marker_C_ExecuteUbergraph_BP_LaserPointer_Marker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_LaserPointer_Marker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LaserPointer_Marker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LaserPointer_Marker.BP_LaserPointer_Marker_C");
		return ptr;
	}

}


