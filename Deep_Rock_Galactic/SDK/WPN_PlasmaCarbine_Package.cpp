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
	 * 		Name   -> Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.GetAmmoWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWeaponDisplay_PlasmaCarbine_AmmoCounter_C*  AsWeaponDisplayPlasmaCarbineAmmoCounter                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_PlasmaCarbine_C::GetAmmoWidget(class UWeaponDisplay_PlasmaCarbine_AmmoCounter_C** AsWeaponDisplayPlasmaCarbineAmmoCounter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.GetAmmoWidget");
		
		AWPN_PlasmaCarbine_C_GetAmmoWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsWeaponDisplayPlasmaCarbineAmmoCounter != nullptr)
			*AsWeaponDisplayPlasmaCarbineAmmoCounter = params.AsWeaponDisplayPlasmaCarbineAmmoCounter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.SetUpgradesAndOverclocks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgrade*                                ItemUpgrade                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_PlasmaCarbine_C::SetUpgradesAndOverclocks(class UItemUpgrade* ItemUpgrade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.SetUpgradesAndOverclocks");
		
		AWPN_PlasmaCarbine_C_SetUpgradesAndOverclocks_Params params {};
		params.ItemUpgrade = ItemUpgrade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_PlasmaCarbine_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.GetGearStatEntry");
		
		AWPN_PlasmaCarbine_C_GetGearStatEntry_Params params {};
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
	 * 		Name   -> Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWPN_PlasmaCarbine_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.UserConstructionScript");
		
		AWPN_PlasmaCarbine_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.Overheat Ammo Regen__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AWPN_PlasmaCarbine_C::OverheatAmmoRegen__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.Overheat Ammo Regen__FinishedFunc");
		
		AWPN_PlasmaCarbine_C_OverheatAmmoRegen__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.Overheat Ammo Regen__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AWPN_PlasmaCarbine_C::OverheatAmmoRegen__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.Overheat Ammo Regen__UpdateFunc");
		
		AWPN_PlasmaCarbine_C_OverheatAmmoRegen__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWPN_PlasmaCarbine_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.ReceiveBeginPlay");
		
		AWPN_PlasmaCarbine_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.CustomEvent1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemUpgrade*                                Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_PlasmaCarbine_C::CustomEvent1(class UItemUpgrade* Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.CustomEvent1");
		
		AWPN_PlasmaCarbine_C_CustomEvent1_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.OnTemperatureChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Temperature                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               overHeated                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_PlasmaCarbine_C::OnTemperatureChanged(float Temperature, bool overHeated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.OnTemperatureChanged");
		
		AWPN_PlasmaCarbine_C_OnTemperatureChanged_Params params {};
		params.Temperature = Temperature;
		params.overHeated = overHeated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.Receive_IsFiringChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_PlasmaCarbine_C::Receive_IsFiringChanged(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.Receive_IsFiringChanged");
		
		AWPN_PlasmaCarbine_C_Receive_IsFiringChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.Receive_Overheated
	 * 		Flags  -> ()
	 */
	void AWPN_PlasmaCarbine_C::Receive_Overheated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.Receive_Overheated");
		
		AWPN_PlasmaCarbine_C_Receive_Overheated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.RecieveStartUsing
	 * 		Flags  -> ()
	 */
	void AWPN_PlasmaCarbine_C::RecieveStartUsing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.RecieveStartUsing");
		
		AWPN_PlasmaCarbine_C_RecieveStartUsing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.Server Trigger Aoe
	 * 		Flags  -> ()
	 */
	void AWPN_PlasmaCarbine_C::ServerTriggerAoe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.Server Trigger Aoe");
		
		AWPN_PlasmaCarbine_C_ServerTriggerAoe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.Trigger Aoe Effects
	 * 		Flags  -> ()
	 */
	void AWPN_PlasmaCarbine_C::TriggerAoeEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.Trigger Aoe Effects");
		
		AWPN_PlasmaCarbine_C_TriggerAoeEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.ServerPushSpeedBoost
	 * 		Flags  -> ()
	 */
	void AWPN_PlasmaCarbine_C::ServerPushSpeedBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.ServerPushSpeedBoost");
		
		AWPN_PlasmaCarbine_C_ServerPushSpeedBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.OnSkinChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkinEffect*                                 Skin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_PlasmaCarbine_C::OnSkinChanged(class USkinEffect* Skin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.OnSkinChanged");
		
		AWPN_PlasmaCarbine_C_OnSkinChanged_Params params {};
		params.Skin = Skin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.ExecuteUbergraph_WPN_PlasmaCarbine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_PlasmaCarbine_C::ExecuteUbergraph_WPN_PlasmaCarbine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_PlasmaCarbine.WPN_PlasmaCarbine_C.ExecuteUbergraph_WPN_PlasmaCarbine");
		
		AWPN_PlasmaCarbine_C_ExecuteUbergraph_WPN_PlasmaCarbine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_PlasmaCarbine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_PlasmaCarbine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_PlasmaCarbine.WPN_PlasmaCarbine_C");
		return ptr;
	}

}


