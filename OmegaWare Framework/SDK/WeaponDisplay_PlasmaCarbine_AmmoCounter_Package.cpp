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
	 * 		Name   -> Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.SetProgressColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_PlasmaCarbine_AmmoCounter_C::SetProgressColor(const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.SetProgressColor");
		
		UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_SetProgressColor_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.Scrub Animation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_PlasmaCarbine_AmmoCounter_C::ScrubAnimation(class UWidgetAnimation* InAnimation, float InProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.Scrub Animation");
		
		UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_ScrubAnimation_Params params {};
		params.InAnimation = InAnimation;
		params.InProgress = InProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.OverheatStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponDisplay_PlasmaCarbine_AmmoCounter_C::OverheatStatus(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.OverheatStatus");
		
		UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_OverheatStatus_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.SetProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_PlasmaCarbine_AmmoCounter_C::SetProgress(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.SetProgress");
		
		UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_SetProgress_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.UpdateAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_PlasmaCarbine_AmmoCounter_C::UpdateAmount(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.UpdateAmount");
		
		UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_UpdateAmount_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.SetTotalCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_PlasmaCarbine_AmmoCounter_C::SetTotalCount(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.SetTotalCount");
		
		UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_SetTotalCount_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.Max Ammo Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_PlasmaCarbine_AmmoCounter_C::MaxAmmoChanged(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.Max Ammo Changed");
		
		UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_MaxAmmoChanged_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.Total Ammo left changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_PlasmaCarbine_AmmoCounter_C::TotalAmmoleftchanged(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.Total Ammo left changed");
		
		UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_TotalAmmoleftchanged_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.SetClipCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_PlasmaCarbine_AmmoCounter_C::SetClipCount(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.SetClipCount");
		
		UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_SetClipCount_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponDisplay_PlasmaCarbine_AmmoCounter_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.PreConstruct");
		
		UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.SetHeatValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HeatPercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               overHeated                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ThermalFeedbackLevel                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_PlasmaCarbine_AmmoCounter_C::SetHeatValue(float HeatPercentage, bool overHeated, float ThermalFeedbackLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.SetHeatValue");
		
		UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_SetHeatValue_Params params {};
		params.HeatPercentage = HeatPercentage;
		params.overHeated = overHeated;
		params.ThermalFeedbackLevel = ThermalFeedbackLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.ExecuteUbergraph_WeaponDisplay_PlasmaCarbine_AmmoCounter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDisplay_PlasmaCarbine_AmmoCounter_C::ExecuteUbergraph_WeaponDisplay_PlasmaCarbine_AmmoCounter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C.ExecuteUbergraph_WeaponDisplay_PlasmaCarbine_AmmoCounter");
		
		UWeaponDisplay_PlasmaCarbine_AmmoCounter_C_ExecuteUbergraph_WeaponDisplay_PlasmaCarbine_AmmoCounter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponDisplay_PlasmaCarbine_AmmoCounter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponDisplay_PlasmaCarbine_AmmoCounter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponDisplay_PlasmaCarbine_AmmoCounter.WeaponDisplay_PlasmaCarbine_AmmoCounter_C");
		return ptr;
	}

}


