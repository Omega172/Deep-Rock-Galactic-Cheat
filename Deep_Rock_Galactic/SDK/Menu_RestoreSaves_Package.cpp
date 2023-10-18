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
	 * 		Name   -> Function Menu_RestoreSaves.Menu_RestoreSaves_C.LoadCloudSaves
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMenu_RestoreSaves_C::LoadCloudSaves(int32_t Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.LoadCloudSaves");
		
		UMenu_RestoreSaves_C_LoadCloudSaves_Params params {};
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_RestoreSaves.Menu_RestoreSaves_C.UpdateCloudSaveUI
	 * 		Flags  -> ()
	 */
	void UMenu_RestoreSaves_C::UpdateCloudSaveUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.UpdateCloudSaveUI");
		
		UMenu_RestoreSaves_C_UpdateCloudSaveUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_RestoreSaves.Menu_RestoreSaves_C.CreateCloudSaveList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UFSDSaveGame*>                        Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMenu_RestoreSaves_C::CreateCloudSaveList(TArray<class UFSDSaveGame*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.CreateCloudSaveList");
		
		UMenu_RestoreSaves_C_CreateCloudSaveList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_RestoreSaves.Menu_RestoreSaves_C.ClearList
	 * 		Flags  -> ()
	 */
	void UMenu_RestoreSaves_C::ClearList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.ClearList");
		
		UMenu_RestoreSaves_C_ClearList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_RestoreSaves.Menu_RestoreSaves_C.CreateSaveList
	 * 		Flags  -> ()
	 */
	void UMenu_RestoreSaves_C::CreateSaveList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.CreateSaveList");
		
		UMenu_RestoreSaves_C_CreateSaveList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_RestoreSaves.Menu_RestoreSaves_C.Construct
	 * 		Flags  -> ()
	 */
	void UMenu_RestoreSaves_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.Construct");
		
		UMenu_RestoreSaves_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_RestoreSaves.Menu_RestoreSaves_C.BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMenu_RestoreSaves_C::BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UMenu_RestoreSaves_C_BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_RestoreSaves.Menu_RestoreSaves_C.Back
	 * 		Flags  -> ()
	 */
	void UMenu_RestoreSaves_C::Back()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.Back");
		
		UMenu_RestoreSaves_C_Back_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_RestoreSaves.Menu_RestoreSaves_C.OnShown
	 * 		Flags  -> ()
	 */
	void UMenu_RestoreSaves_C::OnShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.OnShown");
		
		UMenu_RestoreSaves_C_OnShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_RestoreSaves.Menu_RestoreSaves_C.OnClosed
	 * 		Flags  -> ()
	 */
	void UMenu_RestoreSaves_C::OnClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.OnClosed");
		
		UMenu_RestoreSaves_C_OnClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_RestoreSaves.Menu_RestoreSaves_C.Refresh
	 * 		Flags  -> ()
	 */
	void UMenu_RestoreSaves_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.Refresh");
		
		UMenu_RestoreSaves_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_RestoreSaves.Menu_RestoreSaves_C.CloudFailed
	 * 		Flags  -> ()
	 */
	void UMenu_RestoreSaves_C::CloudFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.CloudFailed");
		
		UMenu_RestoreSaves_C_CloudFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_RestoreSaves.Menu_RestoreSaves_C.CloadSaveGames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UFSDSaveGame*>                        savegames                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMenu_RestoreSaves_C::CloadSaveGames(TArray<class UFSDSaveGame*> savegames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.CloadSaveGames");
		
		UMenu_RestoreSaves_C_CloadSaveGames_Params params {};
		params.savegames = savegames;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_RestoreSaves.Menu_RestoreSaves_C.BndEvt__LoadMoreCloudsavesButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMenu_RestoreSaves_C::BndEvt__LoadMoreCloudsavesButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.BndEvt__LoadMoreCloudsavesButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UMenu_RestoreSaves_C_BndEvt__LoadMoreCloudsavesButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_RestoreSaves.Menu_RestoreSaves_C.ReceiveOkCommand
	 * 		Flags  -> ()
	 */
	void UMenu_RestoreSaves_C::ReceiveOkCommand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.ReceiveOkCommand");
		
		UMenu_RestoreSaves_C_ReceiveOkCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_RestoreSaves.Menu_RestoreSaves_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMenu_RestoreSaves_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.PreConstruct");
		
		UMenu_RestoreSaves_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_RestoreSaves.Menu_RestoreSaves_C.ReenableLoadmoreButton
	 * 		Flags  -> ()
	 */
	void UMenu_RestoreSaves_C::ReenableLoadmoreButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.ReenableLoadmoreButton");
		
		UMenu_RestoreSaves_C_ReenableLoadmoreButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_RestoreSaves.Menu_RestoreSaves_C.Timeout
	 * 		Flags  -> ()
	 */
	void UMenu_RestoreSaves_C::Timeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.Timeout");
		
		UMenu_RestoreSaves_C_Timeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_RestoreSaves.Menu_RestoreSaves_C.ExecuteUbergraph_Menu_RestoreSaves
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMenu_RestoreSaves_C::ExecuteUbergraph_Menu_RestoreSaves(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.ExecuteUbergraph_Menu_RestoreSaves");
		
		UMenu_RestoreSaves_C_ExecuteUbergraph_Menu_RestoreSaves_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMenu_RestoreSaves_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenu_RestoreSaves_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Menu_RestoreSaves.Menu_RestoreSaves_C");
		return ptr;
	}

}


