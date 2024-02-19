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
	 * 		Name   -> Function WPN_Autocannon.WPN_Autocannon_C.RoundStatValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      Suffix                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               KeepSign                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FText AWPN_Autocannon_C::RoundStatValue(const class FText& InText, const class FString& Suffix, bool KeepSign)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.RoundStatValue");
		
		AWPN_Autocannon_C_RoundStatValue_Params params {};
		params.InText = InText;
		params.Suffix = Suffix;
		params.KeepSign = KeepSign;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Autocannon.WPN_Autocannon_C.GetGearStatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFSDPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGearStatEntry>                      Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AWPN_Autocannon_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.GetGearStatEntry");
		
		AWPN_Autocannon_C_GetGearStatEntry_Params params {};
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
	 * 		Name   -> Function WPN_Autocannon.WPN_Autocannon_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWPN_Autocannon_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.UserConstructionScript");
		
		AWPN_Autocannon_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Autocannon.WPN_Autocannon_C.ShowCurentFireTime
	 * 		Flags  -> ()
	 */
	void AWPN_Autocannon_C::ShowCurentFireTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.ShowCurentFireTime");
		
		AWPN_Autocannon_C_ShowCurentFireTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Autocannon.WPN_Autocannon_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWPN_Autocannon_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.ReceiveBeginPlay");
		
		AWPN_Autocannon_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Autocannon.WPN_Autocannon_C.RecieveUnequipped
	 * 		Flags  -> ()
	 */
	void AWPN_Autocannon_C::RecieveUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.RecieveUnequipped");
		
		AWPN_Autocannon_C_RecieveUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Autocannon.WPN_Autocannon_C.RecieveEquipped
	 * 		Flags  -> ()
	 */
	void AWPN_Autocannon_C::RecieveEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.RecieveEquipped");
		
		AWPN_Autocannon_C_RecieveEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Autocannon.WPN_Autocannon_C.Receive_IsFiringChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWPN_Autocannon_C::Receive_IsFiringChanged(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.Receive_IsFiringChanged");
		
		AWPN_Autocannon_C_Receive_IsFiringChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Autocannon.WPN_Autocannon_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AWPN_Autocannon_C::BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature");
		
		AWPN_Autocannon_C_BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Autocannon.WPN_Autocannon_C.RecieveFiredWeapon
	 * 		Flags  -> ()
	 */
	void AWPN_Autocannon_C::RecieveFiredWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.RecieveFiredWeapon");
		
		AWPN_Autocannon_C_RecieveFiredWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPN_Autocannon.WPN_Autocannon_C.ExecuteUbergraph_WPN_Autocannon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWPN_Autocannon_C::ExecuteUbergraph_WPN_Autocannon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.ExecuteUbergraph_WPN_Autocannon");
		
		AWPN_Autocannon_C_ExecuteUbergraph_WPN_Autocannon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWPN_Autocannon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWPN_Autocannon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WPN_Autocannon.WPN_Autocannon_C");
		return ptr;
	}

}


