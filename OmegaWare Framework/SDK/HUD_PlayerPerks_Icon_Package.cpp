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
	 * 		Name   -> Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetCooldownDuration
	 * 		Flags  -> ()
	 */
	float UHUD_PlayerPerks_Icon_C::GetCooldownDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetCooldownDuration");
		
		UHUD_PlayerPerks_Icon_C_GetCooldownDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetCoolDownProgress
	 * 		Flags  -> ()
	 */
	float UHUD_PlayerPerks_Icon_C::GetCoolDownProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetCoolDownProgress");
		
		UHUD_PlayerPerks_Icon_C_GetCoolDownProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetMaxUseCharges
	 * 		Flags  -> ()
	 */
	int32_t UHUD_PlayerPerks_Icon_C::GetMaxUseCharges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetMaxUseCharges");
		
		UHUD_PlayerPerks_Icon_C_GetMaxUseCharges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetRemainingUseCharges
	 * 		Flags  -> ()
	 */
	int32_t UHUD_PlayerPerks_Icon_C::GetRemainingUseCharges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetRemainingUseCharges");
		
		UHUD_PlayerPerks_Icon_C_GetRemainingUseCharges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.RefreshCounterAndProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CoolDownActive                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_PlayerPerks_Icon_C::RefreshCounterAndProgress(bool* CoolDownActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.RefreshCounterAndProgress");
		
		UHUD_PlayerPerks_Icon_C_RefreshCounterAndProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CoolDownActive != nullptr)
			*CoolDownActive = params.CoolDownActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.SetCounter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerPerks_Icon_C::SetCounter(int32_t InCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.SetCounter");
		
		UHUD_PlayerPerks_Icon_C_SetCounter_Params params {};
		params.InCount = InCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.SetProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OutProgress                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerPerks_Icon_C::SetProgress(float InProgress, float* OutProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.SetProgress");
		
		UHUD_PlayerPerks_Icon_C_SetProgress_Params params {};
		params.InProgress = InProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutProgress != nullptr)
			*OutProgress = params.OutProgress;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.OnTick_64B6D09E4CB7705CDF68E9949787003B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NormalizedTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerPerks_Icon_C::OnTick_64B6D09E4CB7705CDF68E9949787003B(float DeltaTime, float NormalizedTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.OnTick_64B6D09E4CB7705CDF68E9949787003B");
		
		UHUD_PlayerPerks_Icon_C_OnTick_64B6D09E4CB7705CDF68E9949787003B_Params params {};
		params.DeltaTime = DeltaTime;
		params.NormalizedTime = NormalizedTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Completed_64B6D09E4CB7705CDF68E9949787003B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NormalizedTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerPerks_Icon_C::Completed_64B6D09E4CB7705CDF68E9949787003B(float DeltaTime, float NormalizedTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Completed_64B6D09E4CB7705CDF68E9949787003B");
		
		UHUD_PlayerPerks_Icon_C_Completed_64B6D09E4CB7705CDF68E9949787003B_Params params {};
		params.DeltaTime = DeltaTime;
		params.NormalizedTime = NormalizedTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.ReceivePerkAssetChanged
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerPerks_Icon_C::ReceivePerkAssetChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.ReceivePerkAssetChanged");
		
		UHUD_PlayerPerks_Icon_C_ReceivePerkAssetChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerPerks_Icon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Construct");
		
		UHUD_PlayerPerks_Icon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.OnAnimCoolDownFinished
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerPerks_Icon_C::OnAnimCoolDownFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.OnAnimCoolDownFinished");
		
		UHUD_PlayerPerks_Icon_C_OnAnimCoolDownFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Begin Cool Down
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerPerks_Icon_C::BeginCoolDown(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Begin Cool Down");
		
		UHUD_PlayerPerks_Icon_C_BeginCoolDown_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_PlayerPerks_Icon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.PreConstruct");
		
		UHUD_PlayerPerks_Icon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.RefreshUseCharges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPerkAsset*                                  Perk                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerPerks_Icon_C::RefreshUseCharges(class UPerkAsset* Perk, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.RefreshUseCharges");
		
		UHUD_PlayerPerks_Icon_C_RefreshUseCharges_Params params {};
		params.Perk = Perk;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.CoolDownTick
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerPerks_Icon_C::CoolDownTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.CoolDownTick");
		
		UHUD_PlayerPerks_Icon_C_CoolDownTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.ExecuteUbergraph_HUD_PlayerPerks_Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerPerks_Icon_C::ExecuteUbergraph_HUD_PlayerPerks_Icon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.ExecuteUbergraph_HUD_PlayerPerks_Icon");
		
		UHUD_PlayerPerks_Icon_C_ExecuteUbergraph_HUD_PlayerPerks_Icon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_PlayerPerks_Icon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_PlayerPerks_Icon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C");
		return ptr;
	}

}


