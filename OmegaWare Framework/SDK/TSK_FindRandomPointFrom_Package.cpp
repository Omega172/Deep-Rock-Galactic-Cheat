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
	 * 		Name   -> Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.GetBestFlatGround
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ArrayElement                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTSK_FindRandomPointFrom_C::GetBestFlatGround(const struct FVector& Origin, struct FVector* ArrayElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.GetBestFlatGround");
		
		UTSK_FindRandomPointFrom_C_GetBestFlatGround_Params params {};
		params.Origin = Origin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayElement != nullptr)
			*ArrayElement = params.ArrayElement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.GetLocation
	 * 		Flags  -> ()
	 */
	struct FVector UTSK_FindRandomPointFrom_C::GetLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.GetLocation");
		
		UTSK_FindRandomPointFrom_C_GetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.snap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SnapToCeiling                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDeepPathfinderMovement*                     Pathfinder                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTSK_FindRandomPointFrom_C::snap(bool SnapToCeiling, class UDeepPathfinderMovement* Pathfinder, struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.snap");
		
		UTSK_FindRandomPointFrom_C_snap_Params params {};
		params.SnapToCeiling = SnapToCeiling;
		params.Pathfinder = Pathfinder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTSK_FindRandomPointFrom_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.ReceiveExecuteAI");
		
		UTSK_FindRandomPointFrom_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.ExecuteUbergraph_TSK_FindRandomPointFrom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTSK_FindRandomPointFrom_C::ExecuteUbergraph_TSK_FindRandomPointFrom(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.ExecuteUbergraph_TSK_FindRandomPointFrom");
		
		UTSK_FindRandomPointFrom_C_ExecuteUbergraph_TSK_FindRandomPointFrom_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTSK_FindRandomPointFrom_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTSK_FindRandomPointFrom_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C");
		return ptr;
	}

}


