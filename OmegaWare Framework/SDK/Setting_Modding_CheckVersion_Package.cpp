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
	 * 		Name   -> Function Setting_Modding_CheckVersion.Setting_Modding_CheckVersion_C.GetBasicToolTipWidget
	 * 		Flags  -> ()
	 */
	class UWidget* USetting_Modding_CheckVersion_C::GetBasicToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Setting_Modding_CheckVersion.Setting_Modding_CheckVersion_C.GetBasicToolTipWidget");
		
		USetting_Modding_CheckVersion_C_GetBasicToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Setting_Modding_CheckVersion.Setting_Modding_CheckVersion_C.Construct
	 * 		Flags  -> ()
	 */
	void USetting_Modding_CheckVersion_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Setting_Modding_CheckVersion.Setting_Modding_CheckVersion_C.Construct");
		
		USetting_Modding_CheckVersion_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Setting_Modding_CheckVersion.Setting_Modding_CheckVersion_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USetting_Modding_CheckVersion_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Setting_Modding_CheckVersion.Setting_Modding_CheckVersion_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");
		
		USetting_Modding_CheckVersion_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Setting_Modding_CheckVersion.Setting_Modding_CheckVersion_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USetting_Modding_CheckVersion_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Setting_Modding_CheckVersion.Setting_Modding_CheckVersion_C.PreConstruct");
		
		USetting_Modding_CheckVersion_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Setting_Modding_CheckVersion.Setting_Modding_CheckVersion_C.ExecuteUbergraph_Setting_Modding_CheckVersion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USetting_Modding_CheckVersion_C::ExecuteUbergraph_Setting_Modding_CheckVersion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Setting_Modding_CheckVersion.Setting_Modding_CheckVersion_C.ExecuteUbergraph_Setting_Modding_CheckVersion");
		
		USetting_Modding_CheckVersion_C_ExecuteUbergraph_Setting_Modding_CheckVersion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USetting_Modding_CheckVersion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetting_Modding_CheckVersion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Setting_Modding_CheckVersion.Setting_Modding_CheckVersion_C");
		return ptr;
	}

}


