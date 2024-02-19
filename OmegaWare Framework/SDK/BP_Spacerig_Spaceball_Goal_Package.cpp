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
	 * 		Name   -> Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.OnRep_GoalClosedTimer
	 * 		Flags  -> ()
	 */
	void ABP_Spacerig_Spaceball_Goal_C::OnRep_GoalClosedTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.OnRep_GoalClosedTimer");
		
		ABP_Spacerig_Spaceball_Goal_C_OnRep_GoalClosedTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.HandlePopUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Spacerig_Spaceball_Goal_C::HandlePopUp(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.HandlePopUp");
		
		ABP_Spacerig_Spaceball_Goal_C_HandlePopUp_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.OnRep_GoalsScored
	 * 		Flags  -> ()
	 */
	void ABP_Spacerig_Spaceball_Goal_C::OnRep_GoalsScored()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.OnRep_GoalsScored");
		
		ABP_Spacerig_Spaceball_Goal_C_OnRep_GoalsScored_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputKeys                                         Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Spacerig_Spaceball_Goal_C::BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");
		
		ABP_Spacerig_Spaceball_Goal_C_BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params params {};
		params.User = User;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanUse                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Spacerig_Spaceball_Goal_C::BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool CanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature");
		
		ABP_Spacerig_Spaceball_Goal_C_BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature_Params params {};
		params.CanUse = CanUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_Spacerig_Spaceball_Goal_C::BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature");
		
		ABP_Spacerig_Spaceball_Goal_C_BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_Spacerig_Spaceball_Goal_C::BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature");
		
		ABP_Spacerig_Spaceball_Goal_C_BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Spacerig_Spaceball_Goal_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.ReceiveBeginPlay");
		
		ABP_Spacerig_Spaceball_Goal_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Spacerig_Spaceball_Goal_C::BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature");
		
		ABP_Spacerig_Spaceball_Goal_C_BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Spacerig_Spaceball_Goal_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.ReceiveTick");
		
		ABP_Spacerig_Spaceball_Goal_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.SetGoalVisible
	 * 		Flags  -> ()
	 */
	void ABP_Spacerig_Spaceball_Goal_C::SetGoalVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.SetGoalVisible");
		
		ABP_Spacerig_Spaceball_Goal_C_SetGoalVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.Throw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Spacerig_Spaceball_Goal_C::Throw(const struct FVector& force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.Throw");
		
		ABP_Spacerig_Spaceball_Goal_C_Throw_Params params {};
		params.force = force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__GoalBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Spacerig_Spaceball_Goal_C::BndEvt__GoalBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.BndEvt__GoalBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_Spacerig_Spaceball_Goal_C_BndEvt__GoalBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.Countdown Completed
	 * 		Flags  -> ()
	 */
	void ABP_Spacerig_Spaceball_Goal_C::CountdownCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.Countdown Completed");
		
		ABP_Spacerig_Spaceball_Goal_C_CountdownCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.ExecuteUbergraph_BP_Spacerig_Spaceball_Goal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Spacerig_Spaceball_Goal_C::ExecuteUbergraph_BP_Spacerig_Spaceball_Goal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C.ExecuteUbergraph_BP_Spacerig_Spaceball_Goal");
		
		ABP_Spacerig_Spaceball_Goal_C_ExecuteUbergraph_BP_Spacerig_Spaceball_Goal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Spacerig_Spaceball_Goal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Spacerig_Spaceball_Goal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Spacerig_Spaceball_Goal.BP_Spacerig_Spaceball_Goal_C");
		return ptr;
	}

}


