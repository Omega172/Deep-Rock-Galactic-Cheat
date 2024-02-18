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
	 * 		Name   -> Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.FindTakeOffPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TakeOffPoint                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShieldRegenerator_Mover_C::FindTakeOffPoint(struct FVector* TakeOffPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.FindTakeOffPoint");
		
		ABP_ShieldRegenerator_Mover_C_FindTakeOffPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TakeOffPoint != nullptr)
			*TakeOffPoint = params.TakeOffPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.MoveToInstigator
	 * 		Flags  -> ()
	 */
	bool ABP_ShieldRegenerator_Mover_C::MoveToInstigator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.MoveToInstigator");
		
		ABP_ShieldRegenerator_Mover_C_MoveToInstigator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.LiftOff__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_ShieldRegenerator_Mover_C::LiftOff__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.LiftOff__FinishedFunc");
		
		ABP_ShieldRegenerator_Mover_C_LiftOff__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.LiftOff__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_ShieldRegenerator_Mover_C::LiftOff__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.LiftOff__UpdateFunc");
		
		ABP_ShieldRegenerator_Mover_C_LiftOff__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ShieldRegenerator_Mover_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.ReceiveBeginPlay");
		
		ABP_ShieldRegenerator_Mover_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.All_LiftOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InHoverPoint                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShieldRegenerator_Mover_C::All_LiftOff(const struct FVector& InHoverPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.All_LiftOff");
		
		ABP_ShieldRegenerator_Mover_C_All_LiftOff_Params params {};
		params.InHoverPoint = InHoverPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDeepMovementState                                 State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShieldRegenerator_Mover_C::BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature(EDeepMovementState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature");
		
		ABP_ShieldRegenerator_Mover_C_BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.Begin Lift Off Effects
	 * 		Flags  -> ()
	 */
	void ABP_ShieldRegenerator_Mover_C::BeginLiftOffEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.Begin Lift Off Effects");
		
		ABP_ShieldRegenerator_Mover_C_BeginLiftOffEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.Begin Move To Actor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InTargetActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShieldRegenerator_Mover_C::BeginMoveToActor(class AActor* InTargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.Begin Move To Actor");
		
		ABP_ShieldRegenerator_Mover_C_BeginMoveToActor_Params params {};
		params.InTargetActor = InTargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.OnReturned
	 * 		Flags  -> ()
	 */
	void ABP_ShieldRegenerator_Mover_C::OnReturned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.OnReturned");
		
		ABP_ShieldRegenerator_Mover_C_OnReturned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_2_PathFinished__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ShieldRegenerator_Mover_C::BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_2_PathFinished__DelegateSignature(bool success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_2_PathFinished__DelegateSignature");
		
		ABP_ShieldRegenerator_Mover_C_BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_2_PathFinished__DelegateSignature_Params params {};
		params.success = success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.ExecuteUbergraph_BP_ShieldRegenerator_Mover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShieldRegenerator_Mover_C::ExecuteUbergraph_BP_ShieldRegenerator_Mover(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C.ExecuteUbergraph_BP_ShieldRegenerator_Mover");
		
		ABP_ShieldRegenerator_Mover_C_ExecuteUbergraph_BP_ShieldRegenerator_Mover_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ShieldRegenerator_Mover_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ShieldRegenerator_Mover_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C");
		return ptr;
	}

}


