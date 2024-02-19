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
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.UpdateHolidayDecoration
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Bartender_C::UpdateHolidayDecoration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.UpdateHolidayDecoration");
		
		ABP_SpaceRig_Bartender_C_UpdateHolidayDecoration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetCableAnchors
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Bartender_C::SetCableAnchors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetCableAnchors");
		
		ABP_SpaceRig_Bartender_C_SetCableAnchors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PayCredits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Purchased                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SpaceRig_Bartender_C::PayCredits(class APlayerCharacter* User, int32_t Amount, bool* Purchased)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PayCredits");
		
		ABP_SpaceRig_Bartender_C_PayCredits_Params params {};
		params.User = User;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Purchased != nullptr)
			*Purchased = params.Purchased;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Spawn Mixer Beer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ControlEventID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            MixerCooldownToSet                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDrinkableDataAsset*                         OrderedDrink                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OrderingPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        AnnouncementText                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_SpaceRig_Bartender_C::SpawnMixerBeer(const class FString& ControlEventID, int32_t MixerCooldownToSet, class UDrinkableDataAsset* OrderedDrink, const class FString& OrderingPlayer, const class FText& AnnouncementText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Spawn Mixer Beer");
		
		ABP_SpaceRig_Bartender_C_SpawnMixerBeer_Params params {};
		params.ControlEventID = ControlEventID;
		params.MixerCooldownToSet = MixerCooldownToSet;
		params.OrderedDrink = OrderedDrink;
		params.OrderingPlayer = OrderingPlayer;
		params.AnnouncementText = AnnouncementText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayGreeting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Bartender_C::PlayGreeting(float* Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayGreeting");
		
		ABP_SpaceRig_Bartender_C_PlayGreeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Duration != nullptr)
			*Duration = params.Duration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Bartender_C::PlayAnim(class UAnimMontage* MontageToPlay, float* Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayAnim");
		
		ABP_SpaceRig_Bartender_C_PlayAnim_Params params {};
		params.MontageToPlay = MontageToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Duration != nullptr)
			*Duration = params.Duration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayNegative
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Bartender_C::PlayNegative(float* Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayNegative");
		
		ABP_SpaceRig_Bartender_C_PlayNegative_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Duration != nullptr)
			*Duration = params.Duration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayAffirmative
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Bartender_C::PlayAffirmative(float* Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayAffirmative");
		
		ABP_SpaceRig_Bartender_C_PlayAffirmative_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Duration != nullptr)
			*Duration = params.Duration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PourFinished
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Bartender_C::PourFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PourFinished");
		
		ABP_SpaceRig_Bartender_C_PourFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Pour
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_DrinksBox_C*                             DrinkBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PourDuration                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Bartender_C::Pour(class ABP_DrinksBox_C* DrinkBox, float* PourDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Pour");
		
		ABP_SpaceRig_Bartender_C_Pour_Params params {};
		params.DrinkBox = DrinkBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PourDuration != nullptr)
			*PourDuration = params.PourDuration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetBartenderLightMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          SourceMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Bartender_C::SetBartenderLightMaterial(class UMaterialInterface* SourceMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetBartenderLightMaterial");
		
		ABP_SpaceRig_Bartender_C_SetBartenderLightMaterial_Params params {};
		params.SourceMaterial = SourceMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnRep_CurrentCustomerState
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Bartender_C::OnRep_CurrentCustomerState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnRep_CurrentCustomerState");
		
		ABP_SpaceRig_Bartender_C_OnRep_CurrentCustomerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetCustomer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Customer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Bartender_C::SetCustomer(class APlayerCharacter* Customer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetCustomer");
		
		ABP_SpaceRig_Bartender_C_SetCustomer_Params params {};
		params.Customer = Customer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.CanOrderNewRound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanOrder                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SpaceRig_Bartender_C::CanOrderNewRound(bool* CanOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.CanOrderNewRound");
		
		ABP_SpaceRig_Bartender_C_CanOrderNewRound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanOrder != nullptr)
			*CanOrder = params.CanOrder;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Bartender_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.UserConstructionScript");
		
		ABP_SpaceRig_Bartender_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LerpTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Bartender_C::LerpTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LerpTimeline__FinishedFunc");
		
		ABP_SpaceRig_Bartender_C_LerpTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LerpTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Bartender_C::LerpTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LerpTimeline__UpdateFunc");
		
		ABP_SpaceRig_Bartender_C_LerpTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.FinishedTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Bartender_C::FinishedTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.FinishedTimeline__FinishedFunc");
		
		ABP_SpaceRig_Bartender_C_FinishedTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.FinishedTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Bartender_C::FinishedTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.FinishedTimeline__UpdateFunc");
		
		ABP_SpaceRig_Bartender_C_FinishedTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputKeys                                         Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Bartender_C::BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");
		
		ABP_SpaceRig_Bartender_C_BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params params {};
		params.User = User;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Bartender_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.ReceiveBeginPlay");
		
		ABP_SpaceRig_Bartender_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanUse                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SpaceRig_Bartender_C::BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature");
		
		ABP_SpaceRig_Bartender_C_BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature_Params params {};
		params.CanUse = CanUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LookAtCustomer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Customer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Bartender_C::LookAtCustomer(class APlayerCharacter* Customer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LookAtCustomer");
		
		ABP_SpaceRig_Bartender_C_LookAtCustomer_Params params {};
		params.Customer = Customer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnPlayerLeave_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Bartender_C::OnPlayerLeave_Event(class AFSDPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnPlayerLeave_Event");
		
		ABP_SpaceRig_Bartender_C_OnPlayerLeave_Event_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Update Bartender Lights
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Bartender_C::UpdateBartenderLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Update Bartender Lights");
		
		ABP_SpaceRig_Bartender_C_UpdateBartenderLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SpawnDrinks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDrinkableDataAsset*                         Drinable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Bartender_C::SpawnDrinks(class UDrinkableDataAsset* Drinable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SpawnDrinks");
		
		ABP_SpaceRig_Bartender_C_SpawnDrinks_Params params {};
		params.Drinable = Drinable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Lerp To
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  PourTransform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Bartender_C::LerpTo(const struct FTransform& PourTransform, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Lerp To");
		
		ABP_SpaceRig_Bartender_C_LerpTo_Params params {};
		params.PourTransform = PourTransform;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Server Spawn Next Drink
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Bartender_C::ServerSpawnNextDrink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Server Spawn Next Drink");
		
		ABP_SpaceRig_Bartender_C_ServerSpawnNextDrink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnAvailableForNewDrink_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_DrinksBox_C*                             DrinkBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Bartender_C::OnAvailableForNewDrink_Event(class ABP_DrinksBox_C* DrinkBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnAvailableForNewDrink_Event");
		
		ABP_SpaceRig_Bartender_C_OnAvailableForNewDrink_Event_Params params {};
		params.DrinkBox = DrinkBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnDrinkReady_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_DrinksBox_C*                             DrinkBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Bartender_C::OnDrinkReady_Event(class ABP_DrinksBox_C* DrinkBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnDrinkReady_Event");
		
		ABP_SpaceRig_Bartender_C_OnDrinkReady_Event_Params params {};
		params.DrinkBox = DrinkBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Return To Idle
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Bartender_C::ReturnToIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Return To Idle");
		
		ABP_SpaceRig_Bartender_C_ReturnToIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.All_BeginSpawnDrinks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayFireworks                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SpaceRig_Bartender_C::All_BeginSpawnDrinks(bool PlayFireworks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.All_BeginSpawnDrinks");
		
		ABP_SpaceRig_Bartender_C_All_BeginSpawnDrinks_Params params {};
		params.PlayFireworks = PlayFireworks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Client Spawn Next Drink
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_DrinksBox_C*                             DrinkBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Bartender_C::ClientSpawnNextDrink(class ABP_DrinksBox_C* DrinkBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Client Spawn Next Drink");
		
		ABP_SpaceRig_Bartender_C_ClientSpawnNextDrink_Params params {};
		params.DrinkBox = DrinkBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_SpaceRig_Bartender_C::BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_SpaceRig_Bartender_C_BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Look Towards
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Bartender_C::LookTowards(class AActor* Actor, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Look Towards");
		
		ABP_SpaceRig_Bartender_C_LookTowards_Params params {};
		params.Actor = Actor;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Init Background Menu
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Bartender_C::InitBackgroundMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Init Background Menu");
		
		ABP_SpaceRig_Bartender_C_InitBackgroundMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Toggle Fireworks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SpaceRig_Bartender_C::ToggleFireworks(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Toggle Fireworks");
		
		ABP_SpaceRig_Bartender_C_ToggleFireworks_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.InitializeMixer
	 * 		Flags  -> ()
	 */
	void ABP_SpaceRig_Bartender_C::InitializeMixer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.InitializeMixer");
		
		ABP_SpaceRig_Bartender_C_InitializeMixer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnUsableChanged_Mixer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanUse                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SpaceRig_Bartender_C::OnUsableChanged_Mixer(bool CanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnUsableChanged_Mixer");
		
		ABP_SpaceRig_Bartender_C_OnUsableChanged_Mixer_Params params {};
		params.CanUse = CanUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayBartenderTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Bartender_C::PlayBartenderTip(class APlayerCharacter* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayBartenderTip");
		
		ABP_SpaceRig_Bartender_C_PlayBartenderTip_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.ExecuteUbergraph_BP_SpaceRig_Bartender
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpaceRig_Bartender_C::ExecuteUbergraph_BP_SpaceRig_Bartender(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.ExecuteUbergraph_BP_SpaceRig_Bartender");
		
		ABP_SpaceRig_Bartender_C_ExecuteUbergraph_BP_SpaceRig_Bartender_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SpaceRig_Bartender_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SpaceRig_Bartender_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C");
		return ptr;
	}

}


