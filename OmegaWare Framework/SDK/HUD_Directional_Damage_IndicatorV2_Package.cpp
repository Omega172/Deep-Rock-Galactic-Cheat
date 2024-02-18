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
	 * 		Name   -> Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.UpdatePoints
	 * 		Flags  -> ()
	 */
	void UHUD_Directional_Damage_IndicatorV2_C::UpdatePoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.UpdatePoints");
		
		UHUD_Directional_Damage_IndicatorV2_C_UpdatePoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.CalcFadeStrength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeLeft                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HitSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UHUD_Directional_Damage_IndicatorV2_C::CalcFadeStrength(float TimeLeft, float HitSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.CalcFadeStrength");
		
		UHUD_Directional_Damage_IndicatorV2_C_CalcFadeStrength_Params params {};
		params.TimeLeft = TimeLeft;
		params.HitSize = HitSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.OnHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageData                                 DamageData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               anyHealthLost                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Directional_Damage_IndicatorV2_C::OnHit(float Damage, struct FDamageData* DamageData, bool anyHealthLost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.OnHit");
		
		UHUD_Directional_Damage_IndicatorV2_C_OnHit_Params params {};
		params.Damage = Damage;
		params.anyHealthLost = anyHealthLost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageData != nullptr)
			*DamageData = params.DamageData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Directional_Damage_IndicatorV2_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.Tick");
		
		UHUD_Directional_Damage_IndicatorV2_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Directional_Damage_IndicatorV2_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.Construct");
		
		UHUD_Directional_Damage_IndicatorV2_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.ExecuteUbergraph_HUD_Directional_Damage_IndicatorV2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Directional_Damage_IndicatorV2_C::ExecuteUbergraph_HUD_Directional_Damage_IndicatorV2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.ExecuteUbergraph_HUD_Directional_Damage_IndicatorV2");
		
		UHUD_Directional_Damage_IndicatorV2_C_ExecuteUbergraph_HUD_Directional_Damage_IndicatorV2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Directional_Damage_IndicatorV2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Directional_Damage_IndicatorV2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C");
		return ptr;
	}

}


