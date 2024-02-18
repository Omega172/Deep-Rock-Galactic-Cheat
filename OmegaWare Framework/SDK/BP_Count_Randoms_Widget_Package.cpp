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
	 * 		Name   -> Function BP_Count_Randoms_Widget.BP_Count_Randoms_Widget_C.UpdateDepthText
	 * 		Flags  -> ()
	 */
	void UBP_Count_Randoms_Widget_C::UpdateDepthText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Count_Randoms_Widget.BP_Count_Randoms_Widget_C.UpdateDepthText");
		
		UBP_Count_Randoms_Widget_C_UpdateDepthText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Count_Randoms_Widget.BP_Count_Randoms_Widget_C.SetProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Count_Randoms_Widget_C::SetProgress(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Count_Randoms_Widget.BP_Count_Randoms_Widget_C.SetProgress");
		
		UBP_Count_Randoms_Widget_C_SetProgress_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Count_Randoms_Widget.BP_Count_Randoms_Widget_C.Construct
	 * 		Flags  -> ()
	 */
	void UBP_Count_Randoms_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Count_Randoms_Widget.BP_Count_Randoms_Widget_C.Construct");
		
		UBP_Count_Randoms_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Count_Randoms_Widget.BP_Count_Randoms_Widget_C.ExecuteUbergraph_BP_Count_Randoms_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Count_Randoms_Widget_C::ExecuteUbergraph_BP_Count_Randoms_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Count_Randoms_Widget.BP_Count_Randoms_Widget_C.ExecuteUbergraph_BP_Count_Randoms_Widget");
		
		UBP_Count_Randoms_Widget_C_ExecuteUbergraph_BP_Count_Randoms_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Count_Randoms_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Count_Randoms_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Count_Randoms_Widget.BP_Count_Randoms_Widget_C");
		return ptr;
	}

}


