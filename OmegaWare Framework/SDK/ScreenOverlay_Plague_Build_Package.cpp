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
	 * 		Name   -> Function ScreenOverlay_Plague_Build.ScreenOverlay_Plague_Build_C.Construct
	 * 		Flags  -> ()
	 */
	void UScreenOverlay_Plague_Build_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Plague_Build.ScreenOverlay_Plague_Build_C.Construct");
		
		UScreenOverlay_Plague_Build_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenOverlay_Plague_Build.ScreenOverlay_Plague_Build_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScreenOverlay_Plague_Build_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Plague_Build.ScreenOverlay_Plague_Build_C.Tick");
		
		UScreenOverlay_Plague_Build_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenOverlay_Plague_Build.ScreenOverlay_Plague_Build_C.OnCharacterStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterState                                    NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScreenOverlay_Plague_Build_C::OnCharacterStateChanged(ECharacterState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Plague_Build.ScreenOverlay_Plague_Build_C.OnCharacterStateChanged");
		
		UScreenOverlay_Plague_Build_C_OnCharacterStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenOverlay_Plague_Build.ScreenOverlay_Plague_Build_C.End Splat
	 * 		Flags  -> ()
	 */
	void UScreenOverlay_Plague_Build_C::EndSplat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Plague_Build.ScreenOverlay_Plague_Build_C.End Splat");
		
		UScreenOverlay_Plague_Build_C_EndSplat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenOverlay_Plague_Build.ScreenOverlay_Plague_Build_C.OnCameraModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterCameraMode                               NewCameraMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterCameraMode                               OldCameraMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScreenOverlay_Plague_Build_C::OnCameraModeChanged(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Plague_Build.ScreenOverlay_Plague_Build_C.OnCameraModeChanged");
		
		UScreenOverlay_Plague_Build_C_OnCameraModeChanged_Params params {};
		params.NewCameraMode = NewCameraMode;
		params.OldCameraMode = OldCameraMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScreenOverlay_Plague_Build.ScreenOverlay_Plague_Build_C.ExecuteUbergraph_ScreenOverlay_Plague_Build
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScreenOverlay_Plague_Build_C::ExecuteUbergraph_ScreenOverlay_Plague_Build(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Plague_Build.ScreenOverlay_Plague_Build_C.ExecuteUbergraph_ScreenOverlay_Plague_Build");
		
		UScreenOverlay_Plague_Build_C_ExecuteUbergraph_ScreenOverlay_Plague_Build_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScreenOverlay_Plague_Build_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScreenOverlay_Plague_Build_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScreenOverlay_Plague_Build.ScreenOverlay_Plague_Build_C");
		return ptr;
	}

}


