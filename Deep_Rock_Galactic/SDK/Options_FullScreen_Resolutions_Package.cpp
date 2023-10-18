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
	 * 		Name   -> Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.AddNonPrimaryMonitorResolutions
	 * 		Flags  -> ()
	 */
	void UOptions_FullScreen_Resolutions_C::AddNonPrimaryMonitorResolutions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.AddNonPrimaryMonitorResolutions");
		
		UOptions_FullScreen_Resolutions_C_AddNonPrimaryMonitorResolutions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ShouldResolutionBeEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFSDGameUserSettings*                        usersettings                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UOptions_FullScreen_Resolutions_C::ShouldResolutionBeEnabled(class UFSDGameUserSettings* usersettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ShouldResolutionBeEnabled");
		
		UOptions_FullScreen_Resolutions_C_ShouldResolutionBeEnabled_Params params {};
		params.usersettings = usersettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.StringToRes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FIntPoint                                   IntPoint                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_FullScreen_Resolutions_C::StringToRes(const class FString& String, struct FIntPoint* IntPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.StringToRes");
		
		UOptions_FullScreen_Resolutions_C_StringToRes_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IntPoint != nullptr)
			*IntPoint = params.IntPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ResToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntPoint                                   IntPoint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UOptions_FullScreen_Resolutions_C::ResToString(struct FIntPoint* IntPoint, class FString* String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ResToString");
		
		UOptions_FullScreen_Resolutions_C_ResToString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IntPoint != nullptr)
			*IntPoint = params.IntPoint;
		if (String != nullptr)
			*String = params.String;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_FullScreen_Resolutions_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.Construct");
		
		UOptions_FullScreen_Resolutions_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.UINeedsUpdate
	 * 		Flags  -> ()
	 */
	void UOptions_FullScreen_Resolutions_C::UINeedsUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.UINeedsUpdate");
		
		UOptions_FullScreen_Resolutions_C_UINeedsUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ShowUI
	 * 		Flags  -> ()
	 */
	void UOptions_FullScreen_Resolutions_C::ShowUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ShowUI");
		
		UOptions_FullScreen_Resolutions_C_ShowUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_FullScreen_Resolutions_C::BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature(const class FText& Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature");
		
		UOptions_FullScreen_Resolutions_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature_Params params {};
		params.Value = Value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ExecuteUbergraph_Options_FullScreen_Resolutions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_FullScreen_Resolutions_C::ExecuteUbergraph_Options_FullScreen_Resolutions(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C.ExecuteUbergraph_Options_FullScreen_Resolutions");
		
		UOptions_FullScreen_Resolutions_C_ExecuteUbergraph_Options_FullScreen_Resolutions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_FullScreen_Resolutions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_FullScreen_Resolutions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C");
		return ptr;
	}

}


