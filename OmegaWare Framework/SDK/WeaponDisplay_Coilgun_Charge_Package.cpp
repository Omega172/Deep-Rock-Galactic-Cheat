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
	 * 		Name   -> Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.SequenceEvent__ENTRYPOINTWeaponDisplay_Coilgun_Charge_2
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_Coilgun_Charge_C::SequenceEvent__ENTRYPOINTWeaponDisplay_Coilgun_Charge_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.SequenceEvent__ENTRYPOINTWeaponDisplay_Coilgun_Charge_2");
		
		UWeaponDisplay_Coilgun_Charge_C_SequenceEvent__ENTRYPOINTWeaponDisplay_Coilgun_Charge_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.SequenceEvent__ENTRYPOINTWeaponDisplay_Coilgun_Charge_1
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_Coilgun_Charge_C::SequenceEvent__ENTRYPOINTWeaponDisplay_Coilgun_Charge_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.SequenceEvent__ENTRYPOINTWeaponDisplay_Coilgun_Charge_1");
		
		UWeaponDisplay_Coilgun_Charge_C_SequenceEvent__ENTRYPOINTWeaponDisplay_Coilgun_Charge_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.AmmoCountDownTick
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_Coilgun_Charge_C::AmmoCountDownTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.AmmoCountDownTick");
		
		UWeaponDisplay_Coilgun_Charge_C_AmmoCountDownTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.SetChargeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ChargeValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               overHeated                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ready                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FullCharge                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponDisplay_Coilgun_Charge_C::SetChargeValue(float ChargeValue, bool overHeated, bool ready, bool FullCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.SetChargeValue");
		
		UWeaponDisplay_Coilgun_Charge_C_SetChargeValue_Params params {};
		params.ChargeValue = ChargeValue;
		params.overHeated = overHeated;
		params.ready = ready;
		params.FullCharge = FullCharge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.Construct
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_Coilgun_Charge_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.Construct");
		
		UWeaponDisplay_Coilgun_Charge_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponDisplay_Coilgun_Charge_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.PreConstruct");
		
		UWeaponDisplay_Coilgun_Charge_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.Total Ammo left changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Coilgun_Charge_C::TotalAmmoleftchanged(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.Total Ammo left changed");
		
		UWeaponDisplay_Coilgun_Charge_C_TotalAmmoleftchanged_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.WidgetAnimationEvt_AmmoCountDown_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UWeaponDisplay_Coilgun_Charge_C::WidgetAnimationEvt_AmmoCountDown_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.WidgetAnimationEvt_AmmoCountDown_K2Node_WidgetAnimationEvent_1");
		
		UWeaponDisplay_Coilgun_Charge_C_WidgetAnimationEvt_AmmoCountDown_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.ExecuteUbergraph_WeaponDisplay_Coilgun_Charge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_Coilgun_Charge_C::ExecuteUbergraph_WeaponDisplay_Coilgun_Charge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C.ExecuteUbergraph_WeaponDisplay_Coilgun_Charge");
		
		UWeaponDisplay_Coilgun_Charge_C_ExecuteUbergraph_WeaponDisplay_Coilgun_Charge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponDisplay_Coilgun_Charge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponDisplay_Coilgun_Charge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponDisplay_Coilgun_Charge.WeaponDisplay_Coilgun_Charge_C");
		return ptr;
	}

}


