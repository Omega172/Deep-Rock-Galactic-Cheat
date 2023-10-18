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
	 * 		Name   -> Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.OnRep_Stick
	 * 		Flags  -> ()
	 */
	void APRJ_Grenade_StickySmall_C::OnRep_Stick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.OnRep_Stick");
		
		APRJ_Grenade_StickySmall_C_OnRep_Stick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.OnImpacted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PredictedImpact                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void APRJ_Grenade_StickySmall_C::OnImpacted(bool PredictedImpact, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.OnImpacted");
		
		APRJ_Grenade_StickySmall_C_OnImpacted_Params params {};
		params.PredictedImpact = PredictedImpact;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APRJ_Grenade_StickySmall_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.ReceiveBeginPlay");
		
		APRJ_Grenade_StickySmall_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.Boom
	 * 		Flags  -> ()
	 */
	void APRJ_Grenade_StickySmall_C::Boom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.Boom");
		
		APRJ_Grenade_StickySmall_C_Boom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.Beep
	 * 		Flags  -> ()
	 */
	void APRJ_Grenade_StickySmall_C::Beep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.Beep");
		
		APRJ_Grenade_StickySmall_C_Beep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.ExecuteUbergraph_PRJ_Grenade_StickySmall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_Grenade_StickySmall_C::ExecuteUbergraph_PRJ_Grenade_StickySmall(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.ExecuteUbergraph_PRJ_Grenade_StickySmall");
		
		APRJ_Grenade_StickySmall_C_ExecuteUbergraph_PRJ_Grenade_StickySmall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRJ_Grenade_StickySmall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRJ_Grenade_StickySmall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C");
		return ptr;
	}

}


