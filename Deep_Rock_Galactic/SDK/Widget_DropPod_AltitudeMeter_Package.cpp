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
	 * 		Name   -> Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.UpdateHeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_DropPod_AltitudeMeter_C::UpdateHeader(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.UpdateHeader");
		
		UWidget_DropPod_AltitudeMeter_C_UpdateHeader_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.UpdateDepthText
	 * 		Flags  -> ()
	 */
	void UWidget_DropPod_AltitudeMeter_C::UpdateDepthText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.UpdateDepthText");
		
		UWidget_DropPod_AltitudeMeter_C_UpdateDepthText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.SetProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DropPod_AltitudeMeter_C::SetProgress(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.SetProgress");
		
		UWidget_DropPod_AltitudeMeter_C_SetProgress_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.Construct
	 * 		Flags  -> ()
	 */
	void UWidget_DropPod_AltitudeMeter_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.Construct");
		
		UWidget_DropPod_AltitudeMeter_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.OnGeneratedMissionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           OutGeneratedMission                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DropPod_AltitudeMeter_C::OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.OnGeneratedMissionChanged");
		
		UWidget_DropPod_AltitudeMeter_C_OnGeneratedMissionChanged_Params params {};
		params.OutGeneratedMission = OutGeneratedMission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.ExecuteUbergraph_Widget_DropPod_AltitudeMeter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DropPod_AltitudeMeter_C::ExecuteUbergraph_Widget_DropPod_AltitudeMeter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.ExecuteUbergraph_Widget_DropPod_AltitudeMeter");
		
		UWidget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_DropPod_AltitudeMeter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_DropPod_AltitudeMeter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C");
		return ptr;
	}

}


