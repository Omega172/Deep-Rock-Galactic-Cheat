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
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.GetDonkeyReturnPickupLocation
	 * 		Flags  -> ()
	 */
	struct FVector ABP_DropPod_Base_C::GetDonkeyReturnPickupLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.GetDonkeyReturnPickupLocation");
		
		ABP_DropPod_Base_C_GetDonkeyReturnPickupLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.OnRep_MuleSequenceComplete
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::OnRep_MuleSequenceComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnRep_MuleSequenceComplete");
		
		ABP_DropPod_Base_C_OnRep_MuleSequenceComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.CollectMule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AMULE*                                       MULE                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Base_C::CollectMule(class AMULE* MULE)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.CollectMule");
		
		ABP_DropPod_Base_C_CollectMule_Params params {};
		params.MULE = MULE;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.OnRep_MuleUnloadTransform
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::OnRep_MuleUnloadTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnRep_MuleUnloadTransform");
		
		ABP_DropPod_Base_C_OnRep_MuleUnloadTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.GetMuleUnloadTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AMULE*                                       MULE                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  RelativeTransform                                          (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_DropPod_Base_C::GetMuleUnloadTarget(class AMULE** MULE, struct FTransform* RelativeTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.GetMuleUnloadTarget");
		
		ABP_DropPod_Base_C_GetMuleUnloadTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MULE != nullptr)
			*MULE = params.MULE;
		if (RelativeTransform != nullptr)
			*RelativeTransform = params.RelativeTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.EnableMulebay
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::EnableMulebay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.EnableMulebay");
		
		ABP_DropPod_Base_C_EnableMulebay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.OnRep_DoorState
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::OnRep_DoorState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnRep_DoorState");
		
		ABP_DropPod_Base_C_OnRep_DoorState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.OperateMuleBay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Open                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                Montage                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_DropPod_Base_C::OperateMuleBay(bool Open, class UAnimMontage** Montage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OperateMuleBay");
		
		ABP_DropPod_Base_C_OperateMuleBay_Params params {};
		params.Open = Open;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Montage != nullptr)
			*Montage = params.Montage;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.AnyPlayersOnRamp
	 * 		Flags  -> ()
	 */
	bool ABP_DropPod_Base_C::AnyPlayersOnRamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.AnyPlayersOnRamp");
		
		ABP_DropPod_Base_C_AnyPlayersOnRamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.HandleRampPhotosensitivity
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::HandleRampPhotosensitivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.HandleRampPhotosensitivity");
		
		ABP_DropPod_Base_C_HandleRampPhotosensitivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.SetPathBlockersEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DropPod_Base_C::SetPathBlockersEnabled(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.SetPathBlockersEnabled");
		
		ABP_DropPod_Base_C_SetPathBlockersEnabled_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.DestroyIfClose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              Actors                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              DistanceSQ                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Base_C::DestroyIfClose(TArray<class AActor*>* Actors, float DistanceSQ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.DestroyIfClose");
		
		ABP_DropPod_Base_C_DestroyIfClose_Params params {};
		params.DistanceSQ = DistanceSQ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actors != nullptr)
			*Actors = params.Actors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.RemoveDangerousCaveItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Base_C::RemoveDangerousCaveItems(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.RemoveDangerousCaveItems");
		
		ABP_DropPod_Base_C_RemoveDangerousCaveItems_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.SetAllPlayersAnsel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DropPod_Base_C::SetAllPlayersAnsel(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.SetAllPlayersAnsel");
		
		ABP_DropPod_Base_C_SetAllPlayersAnsel_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.SetDoorState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDroppodDoorState                                  DoorState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Base_C::SetDoorState(EDroppodDoorState DoorState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.SetDoorState");
		
		ABP_DropPod_Base_C_SetDoorState_Params params {};
		params.DoorState = DoorState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.GetCountDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               First                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_Widget_DropPod_AltitudeMeter_C*          AsBPCountDownActor                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Base_C::GetCountDown(bool First, class ABP_Widget_DropPod_AltitudeMeter_C** AsBPCountDownActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.GetCountDown");
		
		ABP_DropPod_Base_C_GetCountDown_Params params {};
		params.First = First;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsBPCountDownActor != nullptr)
			*AsBPCountDownActor = params.AsBPCountDownActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.OnRep_MuleInstance
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::OnRep_MuleInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnRep_MuleInstance");
		
		ABP_DropPod_Base_C_OnRep_MuleInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.OnMuleLoaded
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::OnMuleLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnMuleLoaded");
		
		ABP_DropPod_Base_C_OnMuleLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.GetMule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AMolly*                                      Donkey                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Base_C::GetMule(class AMolly** Donkey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.GetMule");
		
		ABP_DropPod_Base_C_GetMule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Donkey != nullptr)
			*Donkey = params.Donkey;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.SetStandingDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsStandingDown                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DropPod_Base_C::SetStandingDown(bool IsStandingDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.SetStandingDown");
		
		ABP_DropPod_Base_C_SetStandingDown_Params params {};
		params.IsStandingDown = IsStandingDown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.CloseRamp
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::CloseRamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.CloseRamp");
		
		ABP_DropPod_Base_C_CloseRamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.OpenRamp
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::OpenRamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OpenRamp");
		
		ABP_DropPod_Base_C_OpenRamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.OnAllPlayersLeftPod
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::OnAllPlayersLeftPod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnAllPlayersLeftPod");
		
		ABP_DropPod_Base_C_OnAllPlayersLeftPod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.SetPreferredCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UChildActorComponent*                        Spawn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPlayerCharacterID*                          Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Base_C::SetPreferredCharacter(class UChildActorComponent* Spawn, class UPlayerCharacterID* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.SetPreferredCharacter");
		
		ABP_DropPod_Base_C_SetPreferredCharacter_Params params {};
		params.Spawn = Spawn;
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.UserConstructionScript");
		
		ABP_DropPod_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_5__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::Timeline_5__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_5__FinishedFunc");
		
		ABP_DropPod_Base_C_Timeline_5__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_5__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::Timeline_5__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_5__UpdateFunc");
		
		ABP_DropPod_Base_C_Timeline_5__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_1__FinishedFunc");
		
		ABP_DropPod_Base_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_1__UpdateFunc");
		
		ABP_DropPod_Base_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_0__FinishedFunc");
		
		ABP_DropPod_Base_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_0__UpdateFunc");
		
		ABP_DropPod_Base_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveBeginPlay");
		
		ABP_DropPod_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveActorBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Base_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveActorBeginOverlap");
		
		ABP_DropPod_Base_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveActorEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Base_C::ReceiveActorEndOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveActorEndOverlap");
		
		ABP_DropPod_Base_C_ReceiveActorEndOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.StartDeparture
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::StartDeparture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.StartDeparture");
		
		ABP_DropPod_Base_C_StartDeparture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.OnDroppodImpact
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::OnDroppodImpact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnDroppodImpact");
		
		ABP_DropPod_Base_C_OnDroppodImpact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.Start Donkey Unload Sequence
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::StartDonkeyUnloadSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Start Donkey Unload Sequence");
		
		ABP_DropPod_Base_C_StartDonkeyUnloadSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.Unload Donkey
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::UnloadDonkey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Unload Donkey");
		
		ABP_DropPod_Base_C_UnloadDonkey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.OnDrillingStarted
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::OnDrillingStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnDrillingStarted");
		
		ABP_DropPod_Base_C_OnDrillingStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.Load Donkey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AMULE*                                       MULE                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Base_C::LoadDonkey(class AMULE* MULE)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.Load Donkey");
		
		ABP_DropPod_Base_C_LoadDonkey_Params params {};
		params.MULE = MULE;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_DropPod_Base_C::BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_DropPod_Base_C_BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Base_C::BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		ABP_DropPod_Base_C_BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__KillSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_DropPod_Base_C::BndEvt__KillSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__KillSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_DropPod_Base_C_BndEvt__KillSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.DrillRotate
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::DrillRotate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.DrillRotate");
		
		ABP_DropPod_Base_C_DrillRotate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.OnCharacterEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Base_C::OnCharacterEnter(class APlayerCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnCharacterEnter");
		
		ABP_DropPod_Base_C_OnCharacterEnter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.OnCharacterExit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Base_C::OnCharacterExit(class APlayerCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnCharacterExit");
		
		ABP_DropPod_Base_C_OnCharacterExit_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.DropPodSetAnsel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DropPod_Base_C::DropPodSetAnsel(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.DropPodSetAnsel");
		
		ABP_DropPod_Base_C_DropPodSetAnsel_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.AllSetAnsel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DropPod_Base_C::AllSetAnsel(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.AllSetAnsel");
		
		ABP_DropPod_Base_C_AllSetAnsel_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_DropPod_Base_C::BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_DropPod_Base_C_BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Base_C::BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature");
		
		ABP_DropPod_Base_C_BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.MakeTruckerDicesMove
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::MakeTruckerDicesMove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.MakeTruckerDicesMove");
		
		ABP_DropPod_Base_C_MakeTruckerDicesMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.OnFirstPlayerLeftPod
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::OnFirstPlayerLeftPod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnFirstPlayerLeftPod");
		
		ABP_DropPod_Base_C_OnFirstPlayerLeftPod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveDestroyed");
		
		ABP_DropPod_Base_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.OnRepDoorState
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::OnRepDoorState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnRepDoorState");
		
		ABP_DropPod_Base_C_OnRepDoorState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.LowerMuleToGround
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::LowerMuleToGround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.LowerMuleToGround");
		
		ABP_DropPod_Base_C_LowerMuleToGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.OpenMuleBay
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::OpenMuleBay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OpenMuleBay");
		
		ABP_DropPod_Base_C_OpenMuleBay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.OnMuleBayOpenedDispatch_Event_1
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::OnMuleBayOpenedDispatch_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnMuleBayOpenedDispatch_Event_1");
		
		ABP_DropPod_Base_C_OnMuleBayOpenedDispatch_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.SetMuleInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AMolly*                                      Donkey                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Base_C::SetMuleInstance(class AMolly* Donkey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.SetMuleInstance");
		
		ABP_DropPod_Base_C_SetMuleInstance_Params params {};
		params.Donkey = Donkey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.OnRep_RampState
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::OnRep_RampState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnRep_RampState");
		
		ABP_DropPod_Base_C_OnRep_RampState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.OnGeneratedMissionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           OutGeneratedMission                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Base_C::OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnGeneratedMissionChanged");
		
		ABP_DropPod_Base_C_OnGeneratedMissionChanged_Params params {};
		params.OutGeneratedMission = OutGeneratedMission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.ExecuteUbergraph_BP_DropPod_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Base_C::ExecuteUbergraph_BP_DropPod_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.ExecuteUbergraph_BP_DropPod_Base");
		
		ABP_DropPod_Base_C_ExecuteUbergraph_BP_DropPod_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.OnMuleBayOpenedDispatch__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_DropPod_Base_C::OnMuleBayOpenedDispatch__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.OnMuleBayOpenedDispatch__DelegateSignature");
		
		ABP_DropPod_Base_C_OnMuleBayOpenedDispatch__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DropPod_Base.BP_DropPod_Base_C.DoorStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDroppodDoorState                                  DoorState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DropPod_Base_C::DoorStateChanged__DelegateSignature(EDroppodDoorState DoorState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DropPod_Base.BP_DropPod_Base_C.DoorStateChanged__DelegateSignature");
		
		ABP_DropPod_Base_C_DoorStateChanged__DelegateSignature_Params params {};
		params.DoorState = DoorState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DropPod_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DropPod_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DropPod_Base.BP_DropPod_Base_C");
		return ptr;
	}

}


