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
	 * 		Name   -> Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OpenMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Open                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFilter_ServerWorkEnvironment_C::OpenMenu(bool Open)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OpenMenu");
		
		UFilter_ServerWorkEnvironment_C_OpenMenu_Params params {};
		params.Open = Open;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.GetSelectedDifficulties
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UDifficultySetting*>                  Difficulties                                               (Parm, OutParm)
	 */
	void UFilter_ServerWorkEnvironment_C::GetSelectedDifficulties(TArray<class UDifficultySetting*>* Difficulties)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.GetSelectedDifficulties");
		
		UFilter_ServerWorkEnvironment_C_GetSelectedDifficulties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Difficulties != nullptr)
			*Difficulties = params.Difficulties;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.IsDifficultySelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDifficultySetting*                          InDifficulty                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Selected                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFilter_ServerWorkEnvironment_C::IsDifficultySelected(class UDifficultySetting* InDifficulty, bool* Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.IsDifficultySelected");
		
		UFilter_ServerWorkEnvironment_C_IsDifficultySelected_Params params {};
		params.InDifficulty = InDifficulty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Selected != nullptr)
			*Selected = params.Selected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.UpdateSubheader
	 * 		Flags  -> ()
	 */
	void UFilter_ServerWorkEnvironment_C::UpdateSubheader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.UpdateSubheader");
		
		UFilter_ServerWorkEnvironment_C_UpdateSubheader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.Add Work Environment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDifficultySetting*                          Difficulty                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCheck_ServerWorkEnvironment_C*              OutWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsChecked                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFilter_ServerWorkEnvironment_C::AddWorkEnvironment(class UDifficultySetting* Difficulty, class UCheck_ServerWorkEnvironment_C** OutWidget, bool* OutIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.Add Work Environment");
		
		UFilter_ServerWorkEnvironment_C_AddWorkEnvironment_Params params {};
		params.Difficulty = Difficulty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWidget != nullptr)
			*OutWidget = params.OutWidget;
		if (OutIsChecked != nullptr)
			*OutIsChecked = params.OutIsChecked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFilter_ServerWorkEnvironment_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.PreConstruct");
		
		UFilter_ServerWorkEnvironment_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OnCheckedChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCheck_ServerWorkEnvironment_C*              CheckBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDifficultySetting*                          Difficulty                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFilter_ServerWorkEnvironment_C::OnCheckedChanged(class UCheck_ServerWorkEnvironment_C* CheckBox, class UDifficultySetting* Difficulty, bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OnCheckedChanged");
		
		UFilter_ServerWorkEnvironment_C_OnCheckedChanged_Params params {};
		params.CheckBox = CheckBox;
		params.Difficulty = Difficulty;
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.Reset
	 * 		Flags  -> ()
	 */
	void UFilter_ServerWorkEnvironment_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.Reset");
		
		UFilter_ServerWorkEnvironment_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.ExecuteUbergraph_Filter_ServerWorkEnvironment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFilter_ServerWorkEnvironment_C::ExecuteUbergraph_Filter_ServerWorkEnvironment(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.ExecuteUbergraph_Filter_ServerWorkEnvironment");
		
		UFilter_ServerWorkEnvironment_C_ExecuteUbergraph_Filter_ServerWorkEnvironment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OnSelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFilter_ServerWorkEnvironment_C::OnSelectionChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OnSelectionChanged__DelegateSignature");
		
		UFilter_ServerWorkEnvironment_C_OnSelectionChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFilter_ServerWorkEnvironment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFilter_ServerWorkEnvironment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C");
		return ptr;
	}

}


