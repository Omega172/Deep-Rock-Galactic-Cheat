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
	 * 		Name   -> Function BP_FoamPuddle.BP_FoamPuddle_C.OnRep_ShouldDestory
	 * 		Flags  -> ()
	 */
	void ABP_FoamPuddle_C::OnRep_ShouldDestory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoamPuddle.BP_FoamPuddle_C.OnRep_ShouldDestory");
		
		ABP_FoamPuddle_C_OnRep_ShouldDestory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FoamPuddle.BP_FoamPuddle_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_FoamPuddle_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoamPuddle.BP_FoamPuddle_C.Timeline_0__FinishedFunc");
		
		ABP_FoamPuddle_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FoamPuddle.BP_FoamPuddle_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_FoamPuddle_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoamPuddle.BP_FoamPuddle_C.Timeline_0__UpdateFunc");
		
		ABP_FoamPuddle_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FoamPuddle.BP_FoamPuddle_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_FoamPuddle_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoamPuddle.BP_FoamPuddle_C.Timeline_1__FinishedFunc");
		
		ABP_FoamPuddle_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FoamPuddle.BP_FoamPuddle_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_FoamPuddle_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoamPuddle.BP_FoamPuddle_C.Timeline_1__UpdateFunc");
		
		ABP_FoamPuddle_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FoamPuddle.BP_FoamPuddle_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_FoamPuddle_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoamPuddle.BP_FoamPuddle_C.ReceiveBeginPlay");
		
		ABP_FoamPuddle_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FoamPuddle.BP_FoamPuddle_C.ScaleOutAndDestroy
	 * 		Flags  -> ()
	 */
	void ABP_FoamPuddle_C::ScaleOutAndDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoamPuddle.BP_FoamPuddle_C.ScaleOutAndDestroy");
		
		ABP_FoamPuddle_C_ScaleOutAndDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FoamPuddle.BP_FoamPuddle_C.SetPuddleLifetime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              LifeTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FoamPuddle_C::SetPuddleLifetime(float LifeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoamPuddle.BP_FoamPuddle_C.SetPuddleLifetime");
		
		ABP_FoamPuddle_C_SetPuddleLifetime_Params params {};
		params.LifeTime = LifeTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FoamPuddle.BP_FoamPuddle_C.ExecuteUbergraph_BP_FoamPuddle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FoamPuddle_C::ExecuteUbergraph_BP_FoamPuddle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoamPuddle.BP_FoamPuddle_C.ExecuteUbergraph_BP_FoamPuddle");
		
		ABP_FoamPuddle_C_ExecuteUbergraph_BP_FoamPuddle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FoamPuddle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FoamPuddle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FoamPuddle.BP_FoamPuddle_C");
		return ptr;
	}

}


