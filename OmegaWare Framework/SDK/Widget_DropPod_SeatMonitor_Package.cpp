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
	 * 		Name   -> Function Widget_DropPod_SeatMonitor.Widget_DropPod_SeatMonitor_C.Construct
	 * 		Flags  -> ()
	 */
	void UWidget_DropPod_SeatMonitor_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_SeatMonitor.Widget_DropPod_SeatMonitor_C.Construct");
		
		UWidget_DropPod_SeatMonitor_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_DropPod_SeatMonitor.Widget_DropPod_SeatMonitor_C.OnGeneratedMissionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           OutGeneratedMission                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DropPod_SeatMonitor_C::OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_SeatMonitor.Widget_DropPod_SeatMonitor_C.OnGeneratedMissionChanged");
		
		UWidget_DropPod_SeatMonitor_C_OnGeneratedMissionChanged_Params params {};
		params.OutGeneratedMission = OutGeneratedMission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_DropPod_SeatMonitor.Widget_DropPod_SeatMonitor_C.ExecuteUbergraph_Widget_DropPod_SeatMonitor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DropPod_SeatMonitor_C::ExecuteUbergraph_Widget_DropPod_SeatMonitor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_SeatMonitor.Widget_DropPod_SeatMonitor_C.ExecuteUbergraph_Widget_DropPod_SeatMonitor");
		
		UWidget_DropPod_SeatMonitor_C_ExecuteUbergraph_Widget_DropPod_SeatMonitor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_DropPod_SeatMonitor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_DropPod_SeatMonitor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_DropPod_SeatMonitor.Widget_DropPod_SeatMonitor_C");
		return ptr;
	}

}


