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
	 * 		Name   -> Function UI_SimpleAngleIndicator.UI_SimpleAngleIndicator_C.SetAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AngleDegrees                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SimpleAngleIndicator_C::SetAngle(float AngleDegrees)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SimpleAngleIndicator.UI_SimpleAngleIndicator_C.SetAngle");
		
		UUI_SimpleAngleIndicator_C_SetAngle_Params params {};
		params.AngleDegrees = AngleDegrees;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SimpleAngleIndicator.UI_SimpleAngleIndicator_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SimpleAngleIndicator_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SimpleAngleIndicator.UI_SimpleAngleIndicator_C.PreConstruct");
		
		UUI_SimpleAngleIndicator_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SimpleAngleIndicator.UI_SimpleAngleIndicator_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SimpleAngleIndicator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SimpleAngleIndicator.UI_SimpleAngleIndicator_C.Tick");
		
		UUI_SimpleAngleIndicator_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SimpleAngleIndicator.UI_SimpleAngleIndicator_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_SimpleAngleIndicator_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SimpleAngleIndicator.UI_SimpleAngleIndicator_C.Construct");
		
		UUI_SimpleAngleIndicator_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SimpleAngleIndicator.UI_SimpleAngleIndicator_C.ExecuteUbergraph_UI_SimpleAngleIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SimpleAngleIndicator_C::ExecuteUbergraph_UI_SimpleAngleIndicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SimpleAngleIndicator.UI_SimpleAngleIndicator_C.ExecuteUbergraph_UI_SimpleAngleIndicator");
		
		UUI_SimpleAngleIndicator_C_ExecuteUbergraph_UI_SimpleAngleIndicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SimpleAngleIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SimpleAngleIndicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SimpleAngleIndicator.UI_SimpleAngleIndicator_C");
		return ptr;
	}

}


