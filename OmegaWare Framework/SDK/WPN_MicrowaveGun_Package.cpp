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
	 * 		Name   -> Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_MicrowaveGun_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.GetGearStatEntry");
		
		AWPN_MicrowaveGun_C_GetGearStatEntry_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Stats != nullptr)
			*Stats = params.Stats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWPN_MicrowaveGun_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.UserConstructionScript");
		
		AWPN_MicrowaveGun_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWPN_MicrowaveGun_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.ReceiveBeginPlay");
		
		AWPN_MicrowaveGun_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.AddedToInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            ItemOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_MicrowaveGun_C::AddedToInventory(class APlayerCharacter* ItemOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.AddedToInventory");
		
		AWPN_MicrowaveGun_C_AddedToInventory_Params params {};
		params.ItemOwner = ItemOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.OnTemperatureChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Temperature                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               overHeated                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_MicrowaveGun_C::OnTemperatureChanged(float Temperature, bool overHeated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.OnTemperatureChanged");
		
		AWPN_MicrowaveGun_C_OnTemperatureChanged_Params params {};
		params.Temperature = Temperature;
		params.overHeated = overHeated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.CustomEvent1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgrade*                                Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_MicrowaveGun_C::CustomEvent1(class UItemUpgrade* Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.CustomEvent1");
		
		AWPN_MicrowaveGun_C_CustomEvent1_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.Receive_IsFiringChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_MicrowaveGun_C::Receive_IsFiringChanged(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.Receive_IsFiringChanged");
		
		AWPN_MicrowaveGun_C_Receive_IsFiringChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.HeatUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SmoothedTemperature                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_MicrowaveGun_C::HeatUpdated(float SmoothedTemperature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.HeatUpdated");
		
		AWPN_MicrowaveGun_C_HeatUpdated_Params params {};
		params.SmoothedTemperature = SmoothedTemperature;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.RecieveStopUsing
	 * 		Flags  -> ()
	 */
	void AWPN_MicrowaveGun_C::RecieveStopUsing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.RecieveStopUsing");
		
		AWPN_MicrowaveGun_C_RecieveStopUsing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.BndEvt__WPN_MicrowaveGun_CapsuleHitscanComp_K2Node_ComponentBoundEvent_0_OnClosestHitDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Normal                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHitEnemy                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_MicrowaveGun_C::BndEvt__WPN_MicrowaveGun_CapsuleHitscanComp_K2Node_ComponentBoundEvent_0_OnClosestHitDelegate__DelegateSignature(const struct FVector& Location, const struct FVector& Normal, bool bHitEnemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.BndEvt__WPN_MicrowaveGun_CapsuleHitscanComp_K2Node_ComponentBoundEvent_0_OnClosestHitDelegate__DelegateSignature");
		
		AWPN_MicrowaveGun_C_BndEvt__WPN_MicrowaveGun_CapsuleHitscanComp_K2Node_ComponentBoundEvent_0_OnClosestHitDelegate__DelegateSignature_Params params {};
		params.Location = Location;
		params.Normal = Normal;
		params.bHitEnemy = bHitEnemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.OnStartCharacterOverheat_Event
	 * 		Flags  -> ()
	 */
	void AWPN_MicrowaveGun_C::OnStartCharacterOverheat_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.OnStartCharacterOverheat_Event");
		
		AWPN_MicrowaveGun_C_OnStartCharacterOverheat_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.RecieveUnequipped
	 * 		Flags  -> ()
	 */
	void AWPN_MicrowaveGun_C::RecieveUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.RecieveUnequipped");
		
		AWPN_MicrowaveGun_C_RecieveUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.ExecuteUbergraph_WPN_MicrowaveGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_MicrowaveGun_C::ExecuteUbergraph_WPN_MicrowaveGun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_MicrowaveGun.WPN_MicrowaveGun_C.ExecuteUbergraph_WPN_MicrowaveGun");
		
		AWPN_MicrowaveGun_C_ExecuteUbergraph_WPN_MicrowaveGun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_MicrowaveGun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_MicrowaveGun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_MicrowaveGun.WPN_MicrowaveGun_C");
		return ptr;
	}

}


