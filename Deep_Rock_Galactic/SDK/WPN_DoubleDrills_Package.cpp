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
	 * 		Name   -> Function WPN_DoubleDrills.WPN_DoubleDrills_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_DoubleDrills_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.GetGearStatEntry");
		
		AWPN_DoubleDrills_C_GetGearStatEntry_Params params {};
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
	 * 		Name   -> Function WPN_DoubleDrills.WPN_DoubleDrills_C.GetHeatingAudioSceneComponent
	 * 		Flags  -> ()
	 */
	class USceneComponent* AWPN_DoubleDrills_C::GetHeatingAudioSceneComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.GetHeatingAudioSceneComponent");
		
		AWPN_DoubleDrills_C_GetHeatingAudioSceneComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnTemperatureChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Temperature                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               overHeated                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_DoubleDrills_C::OnTemperatureChanged(float Temperature, bool overHeated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnTemperatureChanged");
		
		AWPN_DoubleDrills_C_OnTemperatureChanged_Params params {};
		params.Temperature = Temperature;
		params.overHeated = overHeated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_DoubleDrills.WPN_DoubleDrills_C.Increase FOV
	 * 		Flags  -> ()
	 */
	void AWPN_DoubleDrills_C::IncreaseFOV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.Increase FOV");
		
		AWPN_DoubleDrills_C_IncreaseFOV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_DoubleDrills.WPN_DoubleDrills_C.Decrease FOV
	 * 		Flags  -> ()
	 */
	void AWPN_DoubleDrills_C::DecreaseFOV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.Decrease FOV");
		
		AWPN_DoubleDrills_C_DecreaseFOV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_DoubleDrills.WPN_DoubleDrills_C.AddedToInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            ItemOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_DoubleDrills_C::AddedToInventory(class APlayerCharacter* ItemOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.AddedToInventory");
		
		AWPN_DoubleDrills_C_AddedToInventory_Params params {};
		params.ItemOwner = ItemOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_DoubleDrills.WPN_DoubleDrills_C.BP_OnDrillDamage
	 * 		Flags  -> ()
	 */
	void AWPN_DoubleDrills_C::BP_OnDrillDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.BP_OnDrillDamage");
		
		AWPN_DoubleDrills_C_BP_OnDrillDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnStartDrilling
	 * 		Flags  -> ()
	 */
	void AWPN_DoubleDrills_C::OnStartDrilling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnStartDrilling");
		
		AWPN_DoubleDrills_C_OnStartDrilling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnStopDrilling
	 * 		Flags  -> ()
	 */
	void AWPN_DoubleDrills_C::OnStopDrilling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnStopDrilling");
		
		AWPN_DoubleDrills_C_OnStopDrilling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_DoubleDrills.WPN_DoubleDrills_C.Receive_Overheated
	 * 		Flags  -> ()
	 */
	void AWPN_DoubleDrills_C::Receive_Overheated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.Receive_Overheated");
		
		AWPN_DoubleDrills_C_Receive_Overheated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_DoubleDrills.WPN_DoubleDrills_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWPN_DoubleDrills_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.ReceiveBeginPlay");
		
		AWPN_DoubleDrills_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_DoubleDrills.WPN_DoubleDrills_C.Gunsling
	 * 		Flags  -> ()
	 */
	void AWPN_DoubleDrills_C::Gunsling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.Gunsling");
		
		AWPN_DoubleDrills_C_Gunsling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_DoubleDrills.WPN_DoubleDrills_C.RecieveCycledItem
	 * 		Flags  -> ()
	 */
	void AWPN_DoubleDrills_C::RecieveCycledItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.RecieveCycledItem");
		
		AWPN_DoubleDrills_C_RecieveCycledItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_DoubleDrills.WPN_DoubleDrills_C.ExecuteUbergraph_WPN_DoubleDrills
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_DoubleDrills_C::ExecuteUbergraph_WPN_DoubleDrills(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.ExecuteUbergraph_WPN_DoubleDrills");
		
		AWPN_DoubleDrills_C_ExecuteUbergraph_WPN_DoubleDrills_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_DoubleDrills_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_DoubleDrills_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_DoubleDrills.WPN_DoubleDrills_C");
		return ptr;
	}

}


