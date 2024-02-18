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
	 * 		Name   -> Function Options_GrapplingHookEquipPrevious.Options_GrapplingHookEquipPrevious_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_GrapplingHookEquipPrevious_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_GrapplingHookEquipPrevious.Options_GrapplingHookEquipPrevious_C.Construct");
		
		UOptions_GrapplingHookEquipPrevious_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_GrapplingHookEquipPrevious.Options_GrapplingHookEquipPrevious_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_GrapplingHookEquipPrevious_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_GrapplingHookEquipPrevious.Options_GrapplingHookEquipPrevious_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");
		
		UOptions_GrapplingHookEquipPrevious_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_GrapplingHookEquipPrevious.Options_GrapplingHookEquipPrevious_C.ExecuteUbergraph_Options_GrapplingHookEquipPrevious
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_GrapplingHookEquipPrevious_C::ExecuteUbergraph_Options_GrapplingHookEquipPrevious(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_GrapplingHookEquipPrevious.Options_GrapplingHookEquipPrevious_C.ExecuteUbergraph_Options_GrapplingHookEquipPrevious");
		
		UOptions_GrapplingHookEquipPrevious_C_ExecuteUbergraph_Options_GrapplingHookEquipPrevious_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_GrapplingHookEquipPrevious_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_GrapplingHookEquipPrevious_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_GrapplingHookEquipPrevious.Options_GrapplingHookEquipPrevious_C");
		return ptr;
	}

}


