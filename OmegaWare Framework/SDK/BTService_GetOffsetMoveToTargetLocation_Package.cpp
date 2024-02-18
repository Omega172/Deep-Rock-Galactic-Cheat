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
	 * 		Name   -> Function BTService_GetOffsetMoveToTargetLocation.BTService_GetOffsetMoveToTargetLocation_C.ReceiveTickAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTService_GetOffsetMoveToTargetLocation_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTService_GetOffsetMoveToTargetLocation.BTService_GetOffsetMoveToTargetLocation_C.ReceiveTickAI");
		
		UBTService_GetOffsetMoveToTargetLocation_C_ReceiveTickAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTService_GetOffsetMoveToTargetLocation.BTService_GetOffsetMoveToTargetLocation_C.ExecuteUbergraph_BTService_GetOffsetMoveToTargetLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTService_GetOffsetMoveToTargetLocation_C::ExecuteUbergraph_BTService_GetOffsetMoveToTargetLocation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTService_GetOffsetMoveToTargetLocation.BTService_GetOffsetMoveToTargetLocation_C.ExecuteUbergraph_BTService_GetOffsetMoveToTargetLocation");
		
		UBTService_GetOffsetMoveToTargetLocation_C_ExecuteUbergraph_BTService_GetOffsetMoveToTargetLocation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_GetOffsetMoveToTargetLocation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_GetOffsetMoveToTargetLocation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTService_GetOffsetMoveToTargetLocation.BTService_GetOffsetMoveToTargetLocation_C");
		return ptr;
	}

}


