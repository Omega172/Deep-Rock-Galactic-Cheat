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
	 * 		Name   -> Function BTTask_SetEnemyOffsetPositionForTrackingMovement.BTTask_SetEnemyOffsetPositionForTrackingMovement_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_SetEnemyOffsetPositionForTrackingMovement_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_SetEnemyOffsetPositionForTrackingMovement.BTTask_SetEnemyOffsetPositionForTrackingMovement_C.ReceiveExecuteAI");
		
		UBTTask_SetEnemyOffsetPositionForTrackingMovement_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTTask_SetEnemyOffsetPositionForTrackingMovement.BTTask_SetEnemyOffsetPositionForTrackingMovement_C.ExecuteUbergraph_BTTask_SetEnemyOffsetPositionForTrackingMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_SetEnemyOffsetPositionForTrackingMovement_C::ExecuteUbergraph_BTTask_SetEnemyOffsetPositionForTrackingMovement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_SetEnemyOffsetPositionForTrackingMovement.BTTask_SetEnemyOffsetPositionForTrackingMovement_C.ExecuteUbergraph_BTTask_SetEnemyOffsetPositionForTrackingMovement");
		
		UBTTask_SetEnemyOffsetPositionForTrackingMovement_C_ExecuteUbergraph_BTTask_SetEnemyOffsetPositionForTrackingMovement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetEnemyOffsetPositionForTrackingMovement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetEnemyOffsetPositionForTrackingMovement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_SetEnemyOffsetPositionForTrackingMovement.BTTask_SetEnemyOffsetPositionForTrackingMovement_C");
		return ptr;
	}

}


