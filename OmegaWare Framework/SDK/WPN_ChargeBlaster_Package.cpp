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
	 * 		Name   -> Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.Fade Out if Valid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAudioComponent*                             AC                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_ChargeBlaster_C::FadeOutifValid(class UAudioComponent** AC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.Fade Out if Valid");
		
		AWPN_ChargeBlaster_C_FadeOutifValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AC != nullptr)
			*AC = params.AC;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.HandleHeatAudio
	 * 		Flags  -> ()
	 */
	void AWPN_ChargeBlaster_C::HandleHeatAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.HandleHeatAudio");
		
		AWPN_ChargeBlaster_C_HandleHeatAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.HandleChargeAudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              charge                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_ChargeBlaster_C::HandleChargeAudio(float charge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.HandleChargeAudio");
		
		AWPN_ChargeBlaster_C_HandleChargeAudio_Params params {};
		params.charge = charge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_ChargeBlaster_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.GetGearStatEntry");
		
		AWPN_ChargeBlaster_C_GetGearStatEntry_Params params {};
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
	 * 		Name   -> Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWPN_ChargeBlaster_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.UserConstructionScript");
		
		AWPN_ChargeBlaster_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.OnHeatChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              charge                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_ChargeBlaster_C::OnHeatChanged_Event_1(float charge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.OnHeatChanged_Event_1");
		
		AWPN_ChargeBlaster_C_OnHeatChanged_Event_1_Params params {};
		params.charge = charge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ChargeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              charge                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_ChargeBlaster_C::ChargeChanged(float charge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ChargeChanged");
		
		AWPN_ChargeBlaster_C_ChargeChanged_Params params {};
		params.charge = charge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.RecieveUnequipped
	 * 		Flags  -> ()
	 */
	void AWPN_ChargeBlaster_C::RecieveUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.RecieveUnequipped");
		
		AWPN_ChargeBlaster_C_RecieveUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ReceiveOverheatedChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isOverheated                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_ChargeBlaster_C::ReceiveOverheatedChanged(bool isOverheated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ReceiveOverheatedChanged");
		
		AWPN_ChargeBlaster_C_ReceiveOverheatedChanged_Params params {};
		params.isOverheated = isOverheated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.OnSkinChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkinEffect*                                 Skin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_ChargeBlaster_C::OnSkinChanged(class USkinEffect* Skin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.OnSkinChanged");
		
		AWPN_ChargeBlaster_C_OnSkinChanged_Params params {};
		params.Skin = Skin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.AddedToInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            ItemOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_ChargeBlaster_C::AddedToInventory(class APlayerCharacter* ItemOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.AddedToInventory");
		
		AWPN_ChargeBlaster_C_AddedToInventory_Params params {};
		params.ItemOwner = ItemOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.RecieveFiredWeapon
	 * 		Flags  -> ()
	 */
	void AWPN_ChargeBlaster_C::RecieveFiredWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.RecieveFiredWeapon");
		
		AWPN_ChargeBlaster_C_RecieveFiredWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ExecuteUbergraph_WPN_ChargeBlaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_ChargeBlaster_C::ExecuteUbergraph_WPN_ChargeBlaster(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ExecuteUbergraph_WPN_ChargeBlaster");
		
		AWPN_ChargeBlaster_C_ExecuteUbergraph_WPN_ChargeBlaster_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_ChargeBlaster_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_ChargeBlaster_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_ChargeBlaster.WPN_ChargeBlaster_C");
		return ptr;
	}

}


