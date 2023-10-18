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
	 * 		Name   -> Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.Add Index
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUDLSSMode                                         Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_NVIDIA_DLSS_Quality_C::AddIndex(EUDLSSMode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.Add Index");
		
		UOptions_NVIDIA_DLSS_Quality_C_AddIndex_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.ModeToIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUDLSSMode                                         Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_NVIDIA_DLSS_Quality_C::ModeToIndex(EUDLSSMode Mode, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.ModeToIndex");
		
		UOptions_NVIDIA_DLSS_Quality_C_ModeToIndex_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.IndexToMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EUDLSSMode                                         Mode                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_NVIDIA_DLSS_Quality_C::IndexToMode(int32_t Index, EUDLSSMode* Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.IndexToMode");
		
		UOptions_NVIDIA_DLSS_Quality_C_IndexToMode_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mode != nullptr)
			*Mode = params.Mode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.GetDLSSModeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUDLSSMode                                         Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (Parm, OutParm)
	 */
	void UOptions_NVIDIA_DLSS_Quality_C::GetDLSSModeName(EUDLSSMode Mode, class FText* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.GetDLSSModeName");
		
		UOptions_NVIDIA_DLSS_Quality_C_GetDLSSModeName_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_NVIDIA_DLSS_Quality_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.Construct");
		
		UOptions_NVIDIA_DLSS_Quality_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.UINeedsUpdate
	 * 		Flags  -> ()
	 */
	void UOptions_NVIDIA_DLSS_Quality_C::UINeedsUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.UINeedsUpdate");
		
		UOptions_NVIDIA_DLSS_Quality_C_UINeedsUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.ShowOptions
	 * 		Flags  -> ()
	 */
	void UOptions_NVIDIA_DLSS_Quality_C::ShowOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.ShowOptions");
		
		UOptions_NVIDIA_DLSS_Quality_C_ShowOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.BndEvt__Options_NVIDIA_DLSS_Quality_Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_NVIDIA_DLSS_Quality_C::BndEvt__Options_NVIDIA_DLSS_Quality_Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(const class FText& Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.BndEvt__Options_NVIDIA_DLSS_Quality_Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");
		
		UOptions_NVIDIA_DLSS_Quality_C_BndEvt__Options_NVIDIA_DLSS_Quality_Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params params {};
		params.Value = Value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.ExecuteUbergraph_Options_NVIDIA_DLSS_Quality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_NVIDIA_DLSS_Quality_C::ExecuteUbergraph_Options_NVIDIA_DLSS_Quality(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C.ExecuteUbergraph_Options_NVIDIA_DLSS_Quality");
		
		UOptions_NVIDIA_DLSS_Quality_C_ExecuteUbergraph_Options_NVIDIA_DLSS_Quality_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_NVIDIA_DLSS_Quality_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_NVIDIA_DLSS_Quality_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_NVIDIA_DLSS_Quality.Options_NVIDIA_DLSS_Quality_C");
		return ptr;
	}

}


