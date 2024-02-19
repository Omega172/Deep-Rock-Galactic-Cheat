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
	 * 		Name   -> Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.GetNewOperation
	 * 		Flags  -> ()
	 */
	void UWidget_DropPod_GarbageGen_C::GetNewOperation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.GetNewOperation");
		
		UWidget_DropPod_GarbageGen_C_GetNewOperation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.DoOperation
	 * 		Flags  -> ()
	 */
	void UWidget_DropPod_GarbageGen_C::DoOperation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.DoOperation");
		
		UWidget_DropPod_GarbageGen_C_DoOperation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.Construct
	 * 		Flags  -> ()
	 */
	void UWidget_DropPod_GarbageGen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.Construct");
		
		UWidget_DropPod_GarbageGen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWidget_DropPod_GarbageGen_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.PreConstruct");
		
		UWidget_DropPod_GarbageGen_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DropPod_GarbageGen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.Tick");
		
		UWidget_DropPod_GarbageGen_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.OnGeneratedMissionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGeneratedMission*                           OutGeneratedMission                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DropPod_GarbageGen_C::OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.OnGeneratedMissionChanged");
		
		UWidget_DropPod_GarbageGen_C_OnGeneratedMissionChanged_Params params {};
		params.OutGeneratedMission = OutGeneratedMission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.ExecuteUbergraph_Widget_DropPod_GarbageGen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DropPod_GarbageGen_C::ExecuteUbergraph_Widget_DropPod_GarbageGen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C.ExecuteUbergraph_Widget_DropPod_GarbageGen");
		
		UWidget_DropPod_GarbageGen_C_ExecuteUbergraph_Widget_DropPod_GarbageGen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_DropPod_GarbageGen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_DropPod_GarbageGen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_DropPod_GarbageGen.Widget_DropPod_GarbageGen_C");
		return ptr;
	}

}


