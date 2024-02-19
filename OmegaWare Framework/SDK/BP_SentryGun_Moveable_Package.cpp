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
	 * 		Name   -> Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetStateDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (Parm, OutParm)
	 */
	void ABP_SentryGun_Moveable_C::GetStateDescription(class FText* Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetStateDescription");
		
		ABP_SentryGun_Moveable_C_GetStateDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Description != nullptr)
			*Description = params.Description;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.SpawnAudioOnPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  audio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SentryGun_Moveable_C::SpawnAudioOnPlayer(class USoundBase* audio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.SpawnAudioOnPlayer");
		
		ABP_SentryGun_Moveable_C_SpawnAudioOnPlayer_Params params {};
		params.audio = audio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryGunClass
	 * 		Flags  -> ()
	 */
	class UClass* ABP_SentryGun_Moveable_C::GetSentryGunClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryGunClass");
		
		ABP_SentryGun_Moveable_C_GetSentryGunClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryOwner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            AsPlayerCharacter                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SentryGun_Moveable_C::GetSentryOwner(class APlayerCharacter** AsPlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryOwner");
		
		ABP_SentryGun_Moveable_C_GetSentryOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsPlayerCharacter != nullptr)
			*AsPlayerCharacter = params.AsPlayerCharacter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryGun
	 * 		Flags  -> ()
	 */
	class ASentryGun* ABP_SentryGun_Moveable_C::GetSentryGun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryGun");
		
		ABP_SentryGun_Moveable_C_GetSentryGun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SentryGun_Moveable_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveBeginPlay");
		
		ABP_SentryGun_Moveable_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoveRequested
	 * 		Flags  -> ()
	 */
	void ABP_SentryGun_Moveable_C::OnMoveRequested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoveRequested");
		
		ABP_SentryGun_Moveable_C_OnMoveRequested_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnStateChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARedeployableSentryGun*                      Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERedeployableSentryGunState                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SentryGun_Moveable_C::OnStateChanged_Event(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnStateChanged_Event");
		
		ABP_SentryGun_Moveable_C_OnStateChanged_Event_Params params {};
		params.Sender = Sender;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveOnSentryReady
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASentryGun*                                  SentryGun                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerCharacter*                            PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SentryGun_Moveable_C::ReceiveOnSentryReady(class ASentryGun* SentryGun, class APlayerCharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveOnSentryReady");
		
		ABP_SentryGun_Moveable_C_ReceiveOnSentryReady_Params params {};
		params.SentryGun = SentryGun;
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnAmmoCountChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmmoCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Change                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SentryGun_Moveable_C::OnAmmoCountChanged_Event_1(int32_t AmmoCount, int32_t Change)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnAmmoCountChanged_Event_1");
		
		ABP_SentryGun_Moveable_C_OnAmmoCountChanged_Event_1_Params params {};
		params.AmmoCount = AmmoCount;
		params.Change = Change;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioReadyToBuild
	 * 		Flags  -> ()
	 */
	void ABP_SentryGun_Moveable_C::AudioReadyToBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioReadyToBuild");
		
		ABP_SentryGun_Moveable_C_AudioReadyToBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoving
	 * 		Flags  -> ()
	 */
	void ABP_SentryGun_Moveable_C::OnMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoving");
		
		ABP_SentryGun_Moveable_C_OnMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoveFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               returnedHome                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SentryGun_Moveable_C::OnMoveFinished(bool returnedHome)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoveFinished");
		
		ABP_SentryGun_Moveable_C_OnMoveFinished_Params params {};
		params.returnedHome = returnedHome;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioBeginMove
	 * 		Flags  -> ()
	 */
	void ABP_SentryGun_Moveable_C::AudioBeginMove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioBeginMove");
		
		ABP_SentryGun_Moveable_C_AudioBeginMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioMoveFinished
	 * 		Flags  -> ()
	 */
	void ABP_SentryGun_Moveable_C::AudioMoveFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioMoveFinished");
		
		ABP_SentryGun_Moveable_C_AudioMoveFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioReturnedHome
	 * 		Flags  -> ()
	 */
	void ABP_SentryGun_Moveable_C::AudioReturnedHome()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioReturnedHome");
		
		ABP_SentryGun_Moveable_C_AudioReturnedHome_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveOnStateChanged
	 * 		Flags  -> ()
	 */
	void ABP_SentryGun_Moveable_C::ReceiveOnStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveOnStateChanged");
		
		ABP_SentryGun_Moveable_C_ReceiveOnStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.Update Outline And Icon
	 * 		Flags  -> ()
	 */
	void ABP_SentryGun_Moveable_C::UpdateOutlineAndIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.Update Outline And Icon");
		
		ABP_SentryGun_Moveable_C_UpdateOutlineAndIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnSentryStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARedeployableSentryGun*                      Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERedeployableSentryGunState                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SentryGun_Moveable_C::OnSentryStateChanged(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnSentryStateChanged");
		
		ABP_SentryGun_Moveable_C_OnSentryStateChanged_Params params {};
		params.Sender = Sender;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnToggleNameplatesEvent_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               boolValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SentryGun_Moveable_C::OnToggleNameplatesEvent_Event_1(bool boolValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnToggleNameplatesEvent_Event_1");
		
		ABP_SentryGun_Moveable_C_OnToggleNameplatesEvent_Event_1_Params params {};
		params.boolValue = boolValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnItemEquipped_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SentryGun_Moveable_C::OnItemEquipped_Event(class AItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnItemEquipped_Event");
		
		ABP_SentryGun_Moveable_C_OnItemEquipped_Event_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnSelectedItemChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARecallableSentryGun*                        SentryGun                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SentryGun_Moveable_C::OnSelectedItemChanged(class ARecallableSentryGun* SentryGun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnSelectedItemChanged");
		
		ABP_SentryGun_Moveable_C_OnSelectedItemChanged_Params params {};
		params.SentryGun = SentryGun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ExecuteUbergraph_BP_SentryGun_Moveable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SentryGun_Moveable_C::ExecuteUbergraph_BP_SentryGun_Moveable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ExecuteUbergraph_BP_SentryGun_Moveable");
		
		ABP_SentryGun_Moveable_C_ExecuteUbergraph_BP_SentryGun_Moveable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SentryGun_Moveable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SentryGun_Moveable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SentryGun_Moveable.BP_SentryGun_Moveable_C");
		return ptr;
	}

}


