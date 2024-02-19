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
	 * 		Name   -> Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.CalculateScreenPos
	 * 		Flags  -> ()
	 */
	struct FVector2D UOnScreenIndicator_Actor_Shout_C::CalculateScreenPos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.CalculateScreenPos");
		
		UOnScreenIndicator_Actor_Shout_C_CalculateScreenPos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOnScreenIndicator_Actor_Shout_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Tick");
		
		UOnScreenIndicator_Actor_Shout_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Construct
	 * 		Flags  -> ()
	 */
	void UOnScreenIndicator_Actor_Shout_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Construct");
		
		UOnScreenIndicator_Actor_Shout_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.OnShout
	 * 		Flags  -> ()
	 */
	void UOnScreenIndicator_Actor_Shout_C::OnShout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.OnShout");
		
		UOnScreenIndicator_Actor_Shout_C_OnShout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOnScreenIndicator_Actor_Shout_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.PreConstruct");
		
		UOnScreenIndicator_Actor_Shout_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.BndEvt__OnScreenIndicator_Actor_Shout_ShoutBox_K2Node_ComponentBoundEvent_0_OnShoutActiveChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InShoutActive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOnScreenIndicator_Actor_Shout_C::BndEvt__OnScreenIndicator_Actor_Shout_ShoutBox_K2Node_ComponentBoundEvent_0_OnShoutActiveChanged__DelegateSignature(bool InShoutActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.BndEvt__OnScreenIndicator_Actor_Shout_ShoutBox_K2Node_ComponentBoundEvent_0_OnShoutActiveChanged__DelegateSignature");
		
		UOnScreenIndicator_Actor_Shout_C_BndEvt__OnScreenIndicator_Actor_Shout_ShoutBox_K2Node_ComponentBoundEvent_0_OnShoutActiveChanged__DelegateSignature_Params params {};
		params.InShoutActive = InShoutActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.UpdateScreenPosAndDistance
	 * 		Flags  -> ()
	 */
	void UOnScreenIndicator_Actor_Shout_C::UpdateScreenPosAndDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.UpdateScreenPosAndDistance");
		
		UOnScreenIndicator_Actor_Shout_C_UpdateScreenPosAndDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.ExecuteUbergraph_OnScreenIndicator_Actor_Shout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOnScreenIndicator_Actor_Shout_C::ExecuteUbergraph_OnScreenIndicator_Actor_Shout(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.ExecuteUbergraph_OnScreenIndicator_Actor_Shout");
		
		UOnScreenIndicator_Actor_Shout_C_ExecuteUbergraph_OnScreenIndicator_Actor_Shout_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnScreenIndicator_Actor_Shout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnScreenIndicator_Actor_Shout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C");
		return ptr;
	}

}


