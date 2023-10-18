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
	 * 		Name   -> Function HUD_Health_Base.HUD_Health_Base_C.CheckPingPongAnim
	 * 		Flags  -> ()
	 */
	void UHUD_Health_Base_C::CheckPingPongAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.CheckPingPongAnim");
		
		UHUD_Health_Base_C_CheckPingPongAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Health_Base.HUD_Health_Base_C.SetAlphaHealthbar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Health_Base_C::SetAlphaHealthbar(float alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.SetAlphaHealthbar");
		
		UHUD_Health_Base_C_SetAlphaHealthbar_Params params {};
		params.alpha = alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Health_Base.HUD_Health_Base_C.HasLowHealth
	 * 		Flags  -> ()
	 */
	bool UHUD_Health_Base_C::HasLowHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.HasLowHealth");
		
		UHUD_Health_Base_C_HasLowHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Health_Base.HUD_Health_Base_C.HealthChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Health                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Health_Base_C::HealthChanged(float Health)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.HealthChanged");
		
		UHUD_Health_Base_C_HealthChanged_Params params {};
		params.Health = Health;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Health_Base.HUD_Health_Base_C.Bind Health Component
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerHealthComponent*                      HealthComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Health_Base_C::BindHealthComponent(class UPlayerHealthComponent* HealthComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.Bind Health Component");
		
		UHUD_Health_Base_C_BindHealthComponent_Params params {};
		params.HealthComponent = HealthComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Health_Base.HUD_Health_Base_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Health_Base_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.PreConstruct");
		
		UHUD_Health_Base_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Health_Base.HUD_Health_Base_C.Set Health Pct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InPercent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Health_Base_C::SetHealthPct(float InPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.Set Health Pct");
		
		UHUD_Health_Base_C_SetHealthPct_Params params {};
		params.InPercent = InPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Health_Base.HUD_Health_Base_C.Unbind Health Component
	 * 		Flags  -> ()
	 */
	void UHUD_Health_Base_C::UnbindHealthComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.Unbind Health Component");
		
		UHUD_Health_Base_C_UnbindHealthComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Health_Base.HUD_Health_Base_C.Bind To Player
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCharacter*                            Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Health_Base_C::BindToPlayer(class APlayerCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.Bind To Player");
		
		UHUD_Health_Base_C_BindToPlayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Health_Base.HUD_Health_Base_C.OnHealthRegeneratingChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isRegenerating                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Health_Base_C::OnHealthRegeneratingChanged_Event(bool isRegenerating)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.OnHealthRegeneratingChanged_Event");
		
		UHUD_Health_Base_C_OnHealthRegeneratingChanged_Event_Params params {};
		params.isRegenerating = isRegenerating;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Health_Base.HUD_Health_Base_C.Unbind HealthChanged
	 * 		Flags  -> ()
	 */
	void UHUD_Health_Base_C::UnbindHealthChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.Unbind HealthChanged");
		
		UHUD_Health_Base_C_UnbindHealthChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Health_Base.HUD_Health_Base_C.Unbind Regenerating Changed
	 * 		Flags  -> ()
	 */
	void UHUD_Health_Base_C::UnbindRegeneratingChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.Unbind Regenerating Changed");
		
		UHUD_Health_Base_C_UnbindRegeneratingChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Health_Base.HUD_Health_Base_C.ExecuteUbergraph_HUD_Health_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Health_Base_C::ExecuteUbergraph_HUD_Health_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.ExecuteUbergraph_HUD_Health_Base");
		
		UHUD_Health_Base_C_ExecuteUbergraph_HUD_Health_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Health_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Health_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Health_Base.HUD_Health_Base_C");
		return ptr;
	}

}


