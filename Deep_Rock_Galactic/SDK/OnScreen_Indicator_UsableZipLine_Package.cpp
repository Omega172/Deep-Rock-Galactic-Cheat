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
	 * 		Name   -> Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.Refresh
	 * 		Flags  -> ()
	 */
	void UOnScreen_Indicator_UsableZipLine_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.Refresh");
		
		UOnScreen_Indicator_UsableZipLine_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.Construct
	 * 		Flags  -> ()
	 */
	void UOnScreen_Indicator_UsableZipLine_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.Construct");
		
		UOnScreen_Indicator_UsableZipLine_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOnScreen_Indicator_UsableZipLine_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.PreConstruct");
		
		UOnScreen_Indicator_UsableZipLine_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOnScreen_Indicator_UsableZipLine_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.Tick");
		
		UOnScreen_Indicator_UsableZipLine_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.OnCharacterStateChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterState                                    NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOnScreen_Indicator_UsableZipLine_C::OnCharacterStateChanged_Event(ECharacterState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.OnCharacterStateChanged_Event");
		
		UOnScreen_Indicator_UsableZipLine_C_OnCharacterStateChanged_Event_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.OnInputSourceChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFSDInputSource                                    InputSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOnScreen_Indicator_UsableZipLine_C::OnInputSourceChanged_Event(EFSDInputSource InputSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.OnInputSourceChanged_Event");
		
		UOnScreen_Indicator_UsableZipLine_C_OnInputSourceChanged_Event_Params params {};
		params.InputSource = InputSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.ExecuteUbergraph_OnScreen_Indicator_UsableZipLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOnScreen_Indicator_UsableZipLine_C::ExecuteUbergraph_OnScreen_Indicator_UsableZipLine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.ExecuteUbergraph_OnScreen_Indicator_UsableZipLine");
		
		UOnScreen_Indicator_UsableZipLine_C_ExecuteUbergraph_OnScreen_Indicator_UsableZipLine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnScreen_Indicator_UsableZipLine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnScreen_Indicator_UsableZipLine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C");
		return ptr;
	}

}


