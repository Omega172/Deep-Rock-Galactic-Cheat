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
	 * 		Name   -> Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetTintOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TintOpacity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CircularProgressBar01_C::SetTintOpacity(float TintOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetTintOpacity");
		
		UW_CircularProgressBar01_C_SetTintOpacity_Params params {};
		params.TintOpacity = TintOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetTint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_MenuColors                                    Tint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CircularProgressBar01_C::SetTint(ENUM_MenuColors Tint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetTint");
		
		UW_CircularProgressBar01_C_SetTint_Params params {};
		params.Tint = Tint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CircularProgressBar01.W_CircularProgressBar01_C.IncPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CircularProgressBar01_C::IncPercent(float Value, float* Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CircularProgressBar01.W_CircularProgressBar01_C.IncPercent");
		
		UW_CircularProgressBar01_C_IncPercent_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Percent != nullptr)
			*Percent = params.Percent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CircularProgressBar01.W_CircularProgressBar01_C.GetPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CircularProgressBar01_C::GetPercent(float* Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CircularProgressBar01.W_CircularProgressBar01_C.GetPercent");
		
		UW_CircularProgressBar01_C_GetPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Percent != nullptr)
			*Percent = params.Percent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetClockwise
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowClockwise                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_CircularProgressBar01_C::SetClockwise(bool ShowClockwise)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetClockwise");
		
		UW_CircularProgressBar01_C_SetClockwise_Params params {};
		params.ShowClockwise = ShowClockwise;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetRingThickness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CircularProgressBar01_C::SetRingThickness(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetRingThickness");
		
		UW_CircularProgressBar01_C_SetRingThickness_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetRingRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CircularProgressBar01_C::SetRingRadius(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetRingRadius");
		
		UW_CircularProgressBar01_C_SetRingRadius_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetCompleteRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CircularProgressBar01_C::SetCompleteRange(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetCompleteRange");
		
		UW_CircularProgressBar01_C_SetCompleteRange_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetStartAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CircularProgressBar01_C::SetStartAngle(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetStartAngle");
		
		UW_CircularProgressBar01_C_SetStartAngle_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CircularProgressBar01.W_CircularProgressBar01_C.CreateMaterial
	 * 		Flags  -> ()
	 */
	void UW_CircularProgressBar01_C::CreateMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CircularProgressBar01.W_CircularProgressBar01_C.CreateMaterial");
		
		UW_CircularProgressBar01_C_CreateMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CircularProgressBar01_C::SetPercent(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CircularProgressBar01.W_CircularProgressBar01_C.SetPercent");
		
		UW_CircularProgressBar01_C_SetPercent_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CircularProgressBar01.W_CircularProgressBar01_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_CircularProgressBar01_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CircularProgressBar01.W_CircularProgressBar01_C.PreConstruct");
		
		UW_CircularProgressBar01_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CircularProgressBar01.W_CircularProgressBar01_C.ExecuteUbergraph_W_CircularProgressBar01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CircularProgressBar01_C::ExecuteUbergraph_W_CircularProgressBar01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CircularProgressBar01.W_CircularProgressBar01_C.ExecuteUbergraph_W_CircularProgressBar01");
		
		UW_CircularProgressBar01_C_ExecuteUbergraph_W_CircularProgressBar01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_CircularProgressBar01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_CircularProgressBar01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_CircularProgressBar01.W_CircularProgressBar01_C");
		return ptr;
	}

}


