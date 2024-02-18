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
	 * 		Name   -> Function BP_WallSaw.BP_WallSaw_C.SpawnWobble__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_WallSaw_C::SpawnWobble__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WallSaw.BP_WallSaw_C.SpawnWobble__FinishedFunc");
		
		ABP_WallSaw_C_SpawnWobble__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WallSaw.BP_WallSaw_C.SpawnWobble__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_WallSaw_C::SpawnWobble__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WallSaw.BP_WallSaw_C.SpawnWobble__UpdateFunc");
		
		ABP_WallSaw_C_SpawnWobble__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WallSaw.BP_WallSaw_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_WallSaw_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WallSaw.BP_WallSaw_C.ReceiveBeginPlay");
		
		ABP_WallSaw_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WallSaw.BP_WallSaw_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WallSaw_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WallSaw.BP_WallSaw_C.ReceiveTick");
		
		ABP_WallSaw_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WallSaw.BP_WallSaw_C.DestroySelf
	 * 		Flags  -> ()
	 */
	void ABP_WallSaw_C::DestroySelf()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WallSaw.BP_WallSaw_C.DestroySelf");
		
		ABP_WallSaw_C_DestroySelf_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WallSaw.BP_WallSaw_C.GrazeOverlapCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         prim                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WallSaw_C::GrazeOverlapCallback(class AActor* Actor, class UPrimitiveComponent* prim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WallSaw.BP_WallSaw_C.GrazeOverlapCallback");
		
		ABP_WallSaw_C_GrazeOverlapCallback_Params params {};
		params.Actor = Actor;
		params.prim = prim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WallSaw.BP_WallSaw_C.ExecuteUbergraph_BP_WallSaw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WallSaw_C::ExecuteUbergraph_BP_WallSaw(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WallSaw.BP_WallSaw_C.ExecuteUbergraph_BP_WallSaw");
		
		ABP_WallSaw_C_ExecuteUbergraph_BP_WallSaw_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_WallSaw_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WallSaw_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WallSaw.BP_WallSaw_C");
		return ptr;
	}

}


