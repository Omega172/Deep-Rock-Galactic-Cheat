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
	 * 		Name   -> Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_BoolUserSetting_C::SetValue(bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.SetValue");
		
		UBasic_BoolUserSetting_C_SetValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.GetValue
	 * 		Flags  -> ()
	 */
	bool UBasic_BoolUserSetting_C::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.GetValue");
		
		UBasic_BoolUserSetting_C_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.SetBoolUserSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBoolUserSettingAsset*                       InSetting                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_BoolUserSetting_C::SetBoolUserSetting(class UBoolUserSettingAsset* InSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.SetBoolUserSetting");
		
		UBasic_BoolUserSetting_C_SetBoolUserSetting_Params params {};
		params.InSetting = InSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_BoolUserSetting_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.PreConstruct");
		
		UBasic_BoolUserSetting_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.Construct
	 * 		Flags  -> ()
	 */
	void UBasic_BoolUserSetting_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.Construct");
		
		UBasic_BoolUserSetting_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.OnClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasic_BoolUserSetting_C::OnClicked(bool InChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.OnClicked");
		
		UBasic_BoolUserSetting_C_OnClicked_Params params {};
		params.InChecked = InChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.Refresh
	 * 		Flags  -> ()
	 */
	void UBasic_BoolUserSetting_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.Refresh");
		
		UBasic_BoolUserSetting_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.ExecuteUbergraph_Basic_BoolUserSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBasic_BoolUserSetting_C::ExecuteUbergraph_Basic_BoolUserSetting(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Basic_BoolUserSetting.Basic_BoolUserSetting_C.ExecuteUbergraph_Basic_BoolUserSetting");
		
		UBasic_BoolUserSetting_C_ExecuteUbergraph_Basic_BoolUserSetting_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasic_BoolUserSetting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasic_BoolUserSetting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Basic_BoolUserSetting.Basic_BoolUserSetting_C");
		return ptr;
	}

}


