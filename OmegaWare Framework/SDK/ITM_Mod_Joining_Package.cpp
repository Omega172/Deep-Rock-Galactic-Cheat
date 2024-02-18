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
	 * 		Name   -> Function ITM_Mod_Joining.ITM_Mod_Joining_C.GetModName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ModName                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UITM_Mod_Joining_C::GetModName(class FString* ModName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod_Joining.ITM_Mod_Joining_C.GetModName");
		
		UITM_Mod_Joining_C_GetModName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModName != nullptr)
			*ModName = params.ModName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod_Joining.ITM_Mod_Joining_C.Update
	 * 		Flags  -> ()
	 */
	void UITM_Mod_Joining_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod_Joining.ITM_Mod_Joining_C.Update");
		
		UITM_Mod_Joining_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod_Joining.ITM_Mod_Joining_C.SetMetaData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UModioModInfoWrapper*                        InModMetaData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Mod_Joining_C::SetMetaData(class UModioModInfoWrapper* InModMetaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod_Joining.ITM_Mod_Joining_C.SetMetaData");
		
		UITM_Mod_Joining_C_SetMetaData_Params params {};
		params.InModMetaData = InModMetaData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod_Joining.ITM_Mod_Joining_C.Get_LinkButton_ToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UITM_Mod_Joining_C::Get_LinkButton_ToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod_Joining.ITM_Mod_Joining_C.Get_LinkButton_ToolTip");
		
		UITM_Mod_Joining_C_Get_LinkButton_ToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod_Joining.ITM_Mod_Joining_C.OnDownloadExtractModFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ModName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ModId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UITM_Mod_Joining_C::OnDownloadExtractModFinished(const class FString& ModName, const class FString& ModId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod_Joining.ITM_Mod_Joining_C.OnDownloadExtractModFinished");
		
		UITM_Mod_Joining_C_OnDownloadExtractModFinished_Params params {};
		params.ModName = ModName;
		params.ModId = ModId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod_Joining.ITM_Mod_Joining_C.OnDownloadExtractMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              ModsPendingDownload                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Downloading                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Total                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Mod_Joining_C::OnDownloadExtractMod(const class FString& Name, TArray<class FString> ModsPendingDownload, bool Downloading, int32_t Progress, int32_t Total)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod_Joining.ITM_Mod_Joining_C.OnDownloadExtractMod");
		
		UITM_Mod_Joining_C_OnDownloadExtractMod_Params params {};
		params.Name = Name;
		params.ModsPendingDownload = ModsPendingDownload;
		params.Downloading = Downloading;
		params.Progress = Progress;
		params.Total = Total;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod_Joining.ITM_Mod_Joining_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_Mod_Joining_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod_Joining.ITM_Mod_Joining_C.Construct");
		
		UITM_Mod_Joining_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod_Joining.ITM_Mod_Joining_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Mod_Joining_C::BndEvt__LinkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod_Joining.ITM_Mod_Joining_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UITM_Mod_Joining_C_BndEvt__LinkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod_Joining.ITM_Mod_Joining_C.OnOverlayClosed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LastURL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UITM_Mod_Joining_C::OnOverlayClosed(const class FString& LastURL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod_Joining.ITM_Mod_Joining_C.OnOverlayClosed");
		
		UITM_Mod_Joining_C_OnOverlayClosed_Params params {};
		params.LastURL = LastURL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod_Joining.ITM_Mod_Joining_C.Destruct
	 * 		Flags  -> ()
	 */
	void UITM_Mod_Joining_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod_Joining.ITM_Mod_Joining_C.Destruct");
		
		UITM_Mod_Joining_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod_Joining.ITM_Mod_Joining_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Mod_Joining_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod_Joining.ITM_Mod_Joining_C.PreConstruct");
		
		UITM_Mod_Joining_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod_Joining.ITM_Mod_Joining_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Mod_Joining_C::BndEvt__LinkButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod_Joining.ITM_Mod_Joining_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Mod_Joining_C_BndEvt__LinkButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod_Joining.ITM_Mod_Joining_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Mod_Joining_C::BndEvt__LinkButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod_Joining.ITM_Mod_Joining_C.BndEvt__LinkButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UITM_Mod_Joining_C_BndEvt__LinkButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod_Joining.ITM_Mod_Joining_C.BndEvt__OptionalRequiredButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UITM_Mod_Joining_C::BndEvt__OptionalRequiredButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod_Joining.ITM_Mod_Joining_C.BndEvt__OptionalRequiredButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UITM_Mod_Joining_C_BndEvt__OptionalRequiredButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod_Joining.ITM_Mod_Joining_C.ExecuteUbergraph_ITM_Mod_Joining
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Mod_Joining_C::ExecuteUbergraph_ITM_Mod_Joining(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod_Joining.ITM_Mod_Joining_C.ExecuteUbergraph_ITM_Mod_Joining");
		
		UITM_Mod_Joining_C_ExecuteUbergraph_ITM_Mod_Joining_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod_Joining.ITM_Mod_Joining_C.SwitchedDownload__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldDownload                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      ModId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UITM_Mod_Joining_C::SwitchedDownload__DelegateSignature(bool ShouldDownload, const class FString& ModId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod_Joining.ITM_Mod_Joining_C.SwitchedDownload__DelegateSignature");
		
		UITM_Mod_Joining_C_SwitchedDownload__DelegateSignature_Params params {};
		params.ShouldDownload = ShouldDownload;
		params.ModId = ModId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Mod_Joining.ITM_Mod_Joining_C.OnMetaDataLoaded__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ModId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		EUGCApprovalStatus                                 ModStatus                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UITM_Mod_Joining_C*                          ModWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Mod_Joining_C::OnMetaDataLoaded__DelegateSignature(const class FString& ModId, EUGCApprovalStatus ModStatus, class UITM_Mod_Joining_C* ModWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Mod_Joining.ITM_Mod_Joining_C.OnMetaDataLoaded__DelegateSignature");
		
		UITM_Mod_Joining_C_OnMetaDataLoaded__DelegateSignature_Params params {};
		params.ModId = ModId;
		params.ModStatus = ModStatus;
		params.ModWidget = ModWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Mod_Joining_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Mod_Joining_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Mod_Joining.ITM_Mod_Joining_C");
		return ptr;
	}

}


