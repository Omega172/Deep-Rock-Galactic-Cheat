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
	 * 		Name   -> Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.OnRep_DefendingPlayerCount
	 * 		Flags  -> ()
	 */
	void AEVENT_DropPodDefense_Base_C::OnRep_DefendingPlayerCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.OnRep_DefendingPlayerCount");
		
		AEVENT_DropPodDefense_Base_C_OnRep_DefendingPlayerCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.UpdateDefenderCount
	 * 		Flags  -> ()
	 */
	void AEVENT_DropPodDefense_Base_C::UpdateDefenderCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.UpdateDefenderCount");
		
		AEVENT_DropPodDefense_Base_C_UpdateDefenderCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.GetDefenderBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DefendingPlayers                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float AEVENT_DropPodDefense_Base_C::GetDefenderBonus(int32_t DefendingPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.GetDefenderBonus");
		
		AEVENT_DropPodDefense_Base_C_GetDefenderBonus_Params params {};
		params.DefendingPlayers = DefendingPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.AnyPlayersDefending
	 * 		Flags  -> ()
	 */
	bool AEVENT_DropPodDefense_Base_C::AnyPlayersDefending()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.AnyPlayersDefending");
		
		AEVENT_DropPodDefense_Base_C_AnyPlayersDefending_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.OnRep_Progress
	 * 		Flags  -> ()
	 */
	void AEVENT_DropPodDefense_Base_C::OnRep_Progress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.OnRep_Progress");
		
		AEVENT_DropPodDefense_Base_C_OnRep_Progress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AEVENT_DropPodDefense_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.UserConstructionScript");
		
		AEVENT_DropPodDefense_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AEVENT_DropPodDefense_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ReceiveBeginPlay");
		
		AEVENT_DropPodDefense_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEVENT_DropPodDefense_Base_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ReceiveTick");
		
		AEVENT_DropPodDefense_Base_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AEVENT_DropPodDefense_Base_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		AEVENT_DropPodDefense_Base_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEVENT_DropPodDefense_Base_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		AEVENT_DropPodDefense_Base_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.EventSucceded
	 * 		Flags  -> ()
	 */
	void AEVENT_DropPodDefense_Base_C::EventSucceded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.EventSucceded");
		
		AEVENT_DropPodDefense_Base_C_EventSucceded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.EventFailed
	 * 		Flags  -> ()
	 */
	void AEVENT_DropPodDefense_Base_C::EventFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.EventFailed");
		
		AEVENT_DropPodDefense_Base_C_EventFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ExecuteUbergraph_EVENT_DropPodDefense_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEVENT_DropPodDefense_Base_C::ExecuteUbergraph_EVENT_DropPodDefense_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ExecuteUbergraph_EVENT_DropPodDefense_Base");
		
		AEVENT_DropPodDefense_Base_C_ExecuteUbergraph_EVENT_DropPodDefense_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefenderCountUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DefenderCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEVENT_DropPodDefense_Base_C::DefenderCountUpdated__DelegateSignature(int32_t DefenderCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefenderCountUpdated__DelegateSignature");
		
		AEVENT_DropPodDefense_Base_C_DefenderCountUpdated__DelegateSignature_Params params {};
		params.DefenderCount = DefenderCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ProgressUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewProgress                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEVENT_DropPodDefense_Base_C::ProgressUpdated__DelegateSignature(float NewProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ProgressUpdated__DelegateSignature");
		
		AEVENT_DropPodDefense_Base_C_ProgressUpdated__DelegateSignature_Params params {};
		params.NewProgress = NewProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefendFailed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AEVENT_DropPodDefense_Base_C::DefendFailed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefendFailed__DelegateSignature");
		
		AEVENT_DropPodDefense_Base_C_DefendFailed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefendSucceded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AEVENT_DropPodDefense_Base_C::DefendSucceded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefendSucceded__DelegateSignature");
		
		AEVENT_DropPodDefense_Base_C_DefendSucceded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEVENT_DropPodDefense_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEVENT_DropPodDefense_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C");
		return ptr;
	}

}


