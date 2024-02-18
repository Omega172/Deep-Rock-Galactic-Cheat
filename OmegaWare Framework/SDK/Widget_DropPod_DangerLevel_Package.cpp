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
	 * 		Name   -> Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.AdjustBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DropPod_DangerLevel_C::AdjustBar(float InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.AdjustBar");
		
		UWidget_DropPod_DangerLevel_C_AdjustBar_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.SetGeneratedMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           InMission                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DropPod_DangerLevel_C::SetGeneratedMission(class UGeneratedMission* InMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.SetGeneratedMission");
		
		UWidget_DropPod_DangerLevel_C_SetGeneratedMission_Params params {};
		params.InMission = InMission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.Construct
	 * 		Flags  -> ()
	 */
	void UWidget_DropPod_DangerLevel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.Construct");
		
		UWidget_DropPod_DangerLevel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DropPod_DangerLevel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.Tick");
		
		UWidget_DropPod_DangerLevel_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.OnGeneratedMissionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           OutGeneratedMission                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DropPod_DangerLevel_C::OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.OnGeneratedMissionChanged");
		
		UWidget_DropPod_DangerLevel_C_OnGeneratedMissionChanged_Params params {};
		params.OutGeneratedMission = OutGeneratedMission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.ExecuteUbergraph_Widget_DropPod_DangerLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DropPod_DangerLevel_C::ExecuteUbergraph_Widget_DropPod_DangerLevel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.ExecuteUbergraph_Widget_DropPod_DangerLevel");
		
		UWidget_DropPod_DangerLevel_C_ExecuteUbergraph_Widget_DropPod_DangerLevel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_DropPod_DangerLevel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_DropPod_DangerLevel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C");
		return ptr;
	}

}


