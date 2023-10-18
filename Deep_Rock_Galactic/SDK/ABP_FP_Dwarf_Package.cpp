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
	 * 		Name   -> Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_FP_Dwarf_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.AnimGraph");
		
		UABP_FP_Dwarf_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.AnimNotify_Mine
	 * 		Flags  -> ()
	 */
	void UABP_FP_Dwarf_C::AnimNotify_Mine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.AnimNotify_Mine");
		
		UABP_FP_Dwarf_C_AnimNotify_Mine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.StartInspectWeapon
	 * 		Flags  -> ()
	 */
	void UABP_FP_Dwarf_C::StartInspectWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.StartInspectWeapon");
		
		UABP_FP_Dwarf_C_StartInspectWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.StopInspectWeapon
	 * 		Flags  -> ()
	 */
	void UABP_FP_Dwarf_C::StopInspectWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.StopInspectWeapon");
		
		UABP_FP_Dwarf_C_StopInspectWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.AnimNotify_BeginBuild
	 * 		Flags  -> ()
	 */
	void UABP_FP_Dwarf_C::AnimNotify_BeginBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.AnimNotify_BeginBuild");
		
		UABP_FP_Dwarf_C_AnimNotify_BeginBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.AnimNotify_EndBuild
	 * 		Flags  -> ()
	 */
	void UABP_FP_Dwarf_C::AnimNotify_EndBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.AnimNotify_EndBuild");
		
		UABP_FP_Dwarf_C_AnimNotify_EndBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.AnimNotify_Generic
	 * 		Flags  -> ()
	 */
	void UABP_FP_Dwarf_C::AnimNotify_Generic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.AnimNotify_Generic");
		
		UABP_FP_Dwarf_C_AnimNotify_Generic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.ExecuteUbergraph_ABP_FP_Dwarf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_FP_Dwarf_C::ExecuteUbergraph_ABP_FP_Dwarf(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FP_Dwarf.ABP_FP_Dwarf_C.ExecuteUbergraph_ABP_FP_Dwarf");
		
		UABP_FP_Dwarf_C_ExecuteUbergraph_ABP_FP_Dwarf_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_FP_Dwarf_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_FP_Dwarf_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_FP_Dwarf.ABP_FP_Dwarf_C");
		return ptr;
	}

}


