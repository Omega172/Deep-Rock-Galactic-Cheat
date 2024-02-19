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
	 * 		Name   -> Function PRJ_Foam.PRJ_Foam_C.GetCleaningPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     fromLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UInfectionPointCleaningComponent* APRJ_Foam_C::GetCleaningPoints(const struct FVector& fromLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_Foam.PRJ_Foam_C.GetCleaningPoints");
		
		APRJ_Foam_C_GetCleaningPoints_Params params {};
		params.fromLocation = fromLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_Foam.PRJ_Foam_C.OnImpacted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PredictedImpact                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void APRJ_Foam_C::OnImpacted(bool PredictedImpact, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_Foam.PRJ_Foam_C.OnImpacted");
		
		APRJ_Foam_C_OnImpacted_Params params {};
		params.PredictedImpact = PredictedImpact;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRJ_Foam.PRJ_Foam_C.ExecuteUbergraph_PRJ_Foam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRJ_Foam_C::ExecuteUbergraph_PRJ_Foam(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRJ_Foam.PRJ_Foam_C.ExecuteUbergraph_PRJ_Foam");
		
		APRJ_Foam_C_ExecuteUbergraph_PRJ_Foam_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRJ_Foam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRJ_Foam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRJ_Foam.PRJ_Foam_C");
		return ptr;
	}

}


