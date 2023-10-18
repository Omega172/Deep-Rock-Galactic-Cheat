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
	 * 		Name   -> Function BP_GooCannon_Cannister.BP_GooCannon_Cannister_C.OnSpawnRelease_Attached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Parent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_GooCannon_Cannister_C::OnSpawnRelease_Attached(class AActor* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GooCannon_Cannister.BP_GooCannon_Cannister_C.OnSpawnRelease_Attached");
		
		ABP_GooCannon_Cannister_C_OnSpawnRelease_Attached_Params params {};
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GooCannon_Cannister.BP_GooCannon_Cannister_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_GooCannon_Cannister_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GooCannon_Cannister.BP_GooCannon_Cannister_C.Timeline_0__FinishedFunc");
		
		ABP_GooCannon_Cannister_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GooCannon_Cannister.BP_GooCannon_Cannister_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_GooCannon_Cannister_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GooCannon_Cannister.BP_GooCannon_Cannister_C.Timeline_0__UpdateFunc");
		
		ABP_GooCannon_Cannister_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GooCannon_Cannister.BP_GooCannon_Cannister_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_GooCannon_Cannister_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GooCannon_Cannister.BP_GooCannon_Cannister_C.ReceiveBeginPlay");
		
		ABP_GooCannon_Cannister_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GooCannon_Cannister.BP_GooCannon_Cannister_C.ExecuteUbergraph_BP_GooCannon_Cannister
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GooCannon_Cannister_C::ExecuteUbergraph_BP_GooCannon_Cannister(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GooCannon_Cannister.BP_GooCannon_Cannister_C.ExecuteUbergraph_BP_GooCannon_Cannister");
		
		ABP_GooCannon_Cannister_C_ExecuteUbergraph_BP_GooCannon_Cannister_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GooCannon_Cannister_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GooCannon_Cannister_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GooCannon_Cannister.BP_GooCannon_Cannister_C");
		return ptr;
	}

}


