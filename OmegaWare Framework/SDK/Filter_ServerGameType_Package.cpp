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
	 * 		Name   -> Function Filter_ServerGameType.Filter_ServerGameType_C.VerifyOnlyModded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGameType                                          LastClicked                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFilter_ServerGameType_C::VerifyOnlyModded(EGameType LastClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerGameType.Filter_ServerGameType_C.VerifyOnlyModded");
		
		UFilter_ServerGameType_C_VerifyOnlyModded_Params params {};
		params.LastClicked = LastClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ServerGameType.Filter_ServerGameType_C.VerifyRules
	 * 		Flags  -> ()
	 */
	void UFilter_ServerGameType_C::VerifyRules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerGameType.Filter_ServerGameType_C.VerifyRules");
		
		UFilter_ServerGameType_C_VerifyRules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ServerGameType.Filter_ServerGameType_C.IsSandBoxMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SandboxMode                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFilter_ServerGameType_C::IsSandBoxMode(bool* SandboxMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerGameType.Filter_ServerGameType_C.IsSandBoxMode");
		
		UFilter_ServerGameType_C_IsSandBoxMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SandboxMode != nullptr)
			*SandboxMode = params.SandboxMode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ServerGameType.Filter_ServerGameType_C.CreateEntries
	 * 		Flags  -> ()
	 */
	void UFilter_ServerGameType_C::CreateEntries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerGameType.Filter_ServerGameType_C.CreateEntries");
		
		UFilter_ServerGameType_C_CreateEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ServerGameType.Filter_ServerGameType_C.Reset
	 * 		Flags  -> ()
	 */
	void UFilter_ServerGameType_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerGameType.Filter_ServerGameType_C.Reset");
		
		UFilter_ServerGameType_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ServerGameType.Filter_ServerGameType_C.GetSelectedGameTypes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EGameType>                                  GameTypes                                                  (Parm, OutParm)
	 */
	void UFilter_ServerGameType_C::GetSelectedGameTypes(TArray<EGameType>* GameTypes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerGameType.Filter_ServerGameType_C.GetSelectedGameTypes");
		
		UFilter_ServerGameType_C_GetSelectedGameTypes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameTypes != nullptr)
			*GameTypes = params.GameTypes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ServerGameType.Filter_ServerGameType_C.OpenMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Open                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFilter_ServerGameType_C::OpenMenu(bool Open)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerGameType.Filter_ServerGameType_C.OpenMenu");
		
		UFilter_ServerGameType_C_OpenMenu_Params params {};
		params.Open = Open;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ServerGameType.Filter_ServerGameType_C.UpdateSubheader
	 * 		Flags  -> ()
	 */
	void UFilter_ServerGameType_C::UpdateSubheader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerGameType.Filter_ServerGameType_C.UpdateSubheader");
		
		UFilter_ServerGameType_C_UpdateSubheader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ServerGameType.Filter_ServerGameType_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFilter_ServerGameType_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerGameType.Filter_ServerGameType_C.PreConstruct");
		
		UFilter_ServerGameType_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ServerGameType.Filter_ServerGameType_C.OnGameTypeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EGameType                                          Gametype                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFilter_ServerGameType_C::OnGameTypeChanged(bool IsChecked, EGameType Gametype)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerGameType.Filter_ServerGameType_C.OnGameTypeChanged");
		
		UFilter_ServerGameType_C_OnGameTypeChanged_Params params {};
		params.IsChecked = IsChecked;
		params.Gametype = Gametype;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ServerGameType.Filter_ServerGameType_C.Construct
	 * 		Flags  -> ()
	 */
	void UFilter_ServerGameType_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerGameType.Filter_ServerGameType_C.Construct");
		
		UFilter_ServerGameType_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ServerGameType.Filter_ServerGameType_C.BndEvt__Basic_BoolUserSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFilter_ServerGameType_C::BndEvt__Basic_BoolUserSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerGameType.Filter_ServerGameType_C.BndEvt__Basic_BoolUserSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");
		
		UFilter_ServerGameType_C_BndEvt__Basic_BoolUserSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ServerGameType.Filter_ServerGameType_C.ExecuteUbergraph_Filter_ServerGameType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFilter_ServerGameType_C::ExecuteUbergraph_Filter_ServerGameType(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerGameType.Filter_ServerGameType_C.ExecuteUbergraph_Filter_ServerGameType");
		
		UFilter_ServerGameType_C_ExecuteUbergraph_Filter_ServerGameType_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ServerGameType.Filter_ServerGameType_C.OnSelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFilter_ServerGameType_C::OnSelectionChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ServerGameType.Filter_ServerGameType_C.OnSelectionChanged__DelegateSignature");
		
		UFilter_ServerGameType_C_OnSelectionChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFilter_ServerGameType_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFilter_ServerGameType_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Filter_ServerGameType.Filter_ServerGameType_C");
		return ptr;
	}

}


