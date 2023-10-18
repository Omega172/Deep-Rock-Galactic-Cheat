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
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.DisableDynamicElements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DropPod_Escape_Base_C::DisableDynamicElements(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.DisableDynamicElements");
		
		ABP_DropPod_Escape_Base_C_DisableDynamicElements_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.HandlePhotosentitivity
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Escape_Base_C::HandlePhotosentitivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.HandlePhotosentitivity");
		
		ABP_DropPod_Escape_Base_C_HandlePhotosentitivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.GetFrontLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     DoorLocation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Escape_Base_C::GetFrontLocation(struct FVector* DoorLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.GetFrontLocation");
		
		ABP_DropPod_Escape_Base_C_GetFrontLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DoorLocation != nullptr)
			*DoorLocation = params.DoorLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.IsAnyCharacterInEscapePod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EscapePodPopulated                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DropPod_Escape_Base_C::IsAnyCharacterInEscapePod(bool* EscapePodPopulated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.IsAnyCharacterInEscapePod");
		
		ABP_DropPod_Escape_Base_C_IsAnyCharacterInEscapePod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EscapePodPopulated != nullptr)
			*EscapePodPopulated = params.EscapePodPopulated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.LockCharactersInPod
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Escape_Base_C::LockCharactersInPod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.LockCharactersInPod");
		
		ABP_DropPod_Escape_Base_C_LockCharactersInPod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Escape_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.UserConstructionScript");
		
		ABP_DropPod_Escape_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDroppodImpact
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Escape_Base_C::OnDroppodImpact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDroppodImpact");
		
		ABP_DropPod_Escape_Base_C_OnDroppodImpact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_DropPod_Escape_Base_C::BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_DropPod_Escape_Base_C_BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Escape_Base_C::BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		ABP_DropPod_Escape_Base_C_BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDrillingStarted
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Escape_Base_C::OnDrillingStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDrillingStarted");
		
		ABP_DropPod_Escape_Base_C_OnDrillingStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Escape_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.ReceiveBeginPlay");
		
		ABP_DropPod_Escape_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDonkeyReachedDropShip
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Escape_Base_C::OnDonkeyReachedDropShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDonkeyReachedDropShip");
		
		ABP_DropPod_Escape_Base_C_OnDonkeyReachedDropShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDeparting
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Escape_Base_C::OnDeparting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDeparting");
		
		ABP_DropPod_Escape_Base_C_OnDeparting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnPrepForTakeOff
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Escape_Base_C::OnPrepForTakeOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnPrepForTakeOff");
		
		ABP_DropPod_Escape_Base_C_OnPrepForTakeOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnMuleLoaded
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Escape_Base_C::OnMuleLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnMuleLoaded");
		
		ABP_DropPod_Escape_Base_C_OnMuleLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnCharacterEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Escape_Base_C::OnCharacterEnter(class APlayerCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnCharacterEnter");
		
		ABP_DropPod_Escape_Base_C_OnCharacterEnter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnCharacterExit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Escape_Base_C::OnCharacterExit(class APlayerCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnCharacterExit");
		
		ABP_DropPod_Escape_Base_C_OnCharacterExit_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.HandleHurryShouts
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Escape_Base_C::HandleHurryShouts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.HandleHurryShouts");
		
		ABP_DropPod_Escape_Base_C_HandleHurryShouts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Escape_Base_C::BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(class APlayerCharacter* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature");
		
		ABP_DropPod_Escape_Base_C_BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Escape_Base_C::BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature(class APlayerCharacter* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature");
		
		ABP_DropPod_Escape_Base_C_BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DropPod_Escape_Base_C::BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature");
		
		ABP_DropPod_Escape_Base_C_BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnRepDoorState
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Escape_Base_C::OnRepDoorState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnRepDoorState");
		
		ABP_DropPod_Escape_Base_C_OnRepDoorState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnMuleBayOpenedDispatch_Event_2
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Escape_Base_C::OnMuleBayOpenedDispatch_Event_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnMuleBayOpenedDispatch_Event_2");
		
		ABP_DropPod_Escape_Base_C_OnMuleBayOpenedDispatch_Event_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.ForceTakeoff
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Escape_Base_C::ForceTakeoff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.ForceTakeoff");
		
		ABP_DropPod_Escape_Base_C_ForceTakeoff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.RecieveReturnTimerFifteenSecondWarning
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Escape_Base_C::RecieveReturnTimerFifteenSecondWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.RecieveReturnTimerFifteenSecondWarning");
		
		ABP_DropPod_Escape_Base_C_RecieveReturnTimerFifteenSecondWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.RecieveReturnTimerExpired
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Escape_Base_C::RecieveReturnTimerExpired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.RecieveReturnTimerExpired");
		
		ABP_DropPod_Escape_Base_C_RecieveReturnTimerExpired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnAllDwavesInsidePod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AllInside                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DropPod_Escape_Base_C::OnAllDwavesInsidePod(bool AllInside)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnAllDwavesInsidePod");
		
		ABP_DropPod_Escape_Base_C_OnAllDwavesInsidePod_Params params {};
		params.AllInside = AllInside;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.ExecuteUbergraph_BP_DropPod_Escape_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Escape_Base_C::ExecuteUbergraph_BP_DropPod_Escape_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.ExecuteUbergraph_BP_DropPod_Escape_Base");
		
		ABP_DropPod_Escape_Base_C_ExecuteUbergraph_BP_DropPod_Escape_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DropPod_Escape_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DropPod_Escape_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C");
		return ptr;
	}

}


