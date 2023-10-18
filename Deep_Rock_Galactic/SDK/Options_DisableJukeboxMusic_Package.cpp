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
	 * 		Name   -> Function Options_DisableJukeboxMusic.Options_DisableJukeboxMusic_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_DisableJukeboxMusic_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_DisableJukeboxMusic.Options_DisableJukeboxMusic_C.Construct");
		
		UOptions_DisableJukeboxMusic_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_DisableJukeboxMusic.Options_DisableJukeboxMusic_C.UINeedsUpdate
	 * 		Flags  -> ()
	 */
	void UOptions_DisableJukeboxMusic_C::UINeedsUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_DisableJukeboxMusic.Options_DisableJukeboxMusic_C.UINeedsUpdate");
		
		UOptions_DisableJukeboxMusic_C_UINeedsUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_DisableJukeboxMusic.Options_DisableJukeboxMusic_C.ShowOptions
	 * 		Flags  -> ()
	 */
	void UOptions_DisableJukeboxMusic_C::ShowOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_DisableJukeboxMusic.Options_DisableJukeboxMusic_C.ShowOptions");
		
		UOptions_DisableJukeboxMusic_C_ShowOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_DisableJukeboxMusic.Options_DisableJukeboxMusic_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_DisableJukeboxMusic_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_DisableJukeboxMusic.Options_DisableJukeboxMusic_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature");
		
		UOptions_DisableJukeboxMusic_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_DisableJukeboxMusic.Options_DisableJukeboxMusic_C.ExecuteUbergraph_Options_DisableJukeboxMusic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_DisableJukeboxMusic_C::ExecuteUbergraph_Options_DisableJukeboxMusic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_DisableJukeboxMusic.Options_DisableJukeboxMusic_C.ExecuteUbergraph_Options_DisableJukeboxMusic");
		
		UOptions_DisableJukeboxMusic_C_ExecuteUbergraph_Options_DisableJukeboxMusic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_DisableJukeboxMusic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_DisableJukeboxMusic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_DisableJukeboxMusic.Options_DisableJukeboxMusic_C");
		return ptr;
	}

}


