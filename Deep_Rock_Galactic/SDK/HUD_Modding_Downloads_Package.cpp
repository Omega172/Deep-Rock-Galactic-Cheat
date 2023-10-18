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
	 * 		Name   -> Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.ShowFailedToInstall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FString, EUGCPackageError>              InFailed                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUD_Modding_Downloads_C::ShowFailedToInstall(TMap<class FString, EUGCPackageError> InFailed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.ShowFailedToInstall");
		
		UHUD_Modding_Downloads_C_ShowFailedToInstall_Params params {};
		params.InFailed = InFailed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.SetOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsOpen                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Modding_Downloads_C::SetOpen(bool InIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.SetOpen");
		
		UHUD_Modding_Downloads_C_SetOpen_Params params {};
		params.InIsOpen = InIsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.GetEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InModName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UHUD_Modding_Downloads_Entry_C*              OutEntry                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutName                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUD_Modding_Downloads_C::GetEntry(const class FString& InModName, class UHUD_Modding_Downloads_Entry_C** OutEntry, class FString* OutName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.GetEntry");
		
		UHUD_Modding_Downloads_C_GetEntry_Params params {};
		params.InModName = InModName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEntry != nullptr)
			*OutEntry = params.OutEntry;
		if (OutName != nullptr)
			*OutName = params.OutName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.SetDownloadProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              ModsPendingDownload                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Downloading                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Total                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Modding_Downloads_C::SetDownloadProgress(const class FString& Name, TArray<class FString> ModsPendingDownload, bool Downloading, int32_t Progress, int32_t Total)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.SetDownloadProgress");
		
		UHUD_Modding_Downloads_C_SetDownloadProgress_Params params {};
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
	 * 		Name   -> Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Modding_Downloads_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.Construct");
		
		UHUD_Modding_Downloads_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.OnErrorInstalling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ModName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		EUGCPackageError                                   ErrorType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Modding_Downloads_C::OnErrorInstalling(const class FString& ModName, EUGCPackageError ErrorType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.OnErrorInstalling");
		
		UHUD_Modding_Downloads_C_OnErrorInstalling_Params params {};
		params.ModName = ModName;
		params.ErrorType = ErrorType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Modding_Downloads_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.PreConstruct");
		
		UHUD_Modding_Downloads_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.OnDownloadProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              ModsPendingDownload                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Downloading                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Total                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Modding_Downloads_C::OnDownloadProgress(const class FString& Name, TArray<class FString> ModsPendingDownload, bool Downloading, int32_t Progress, int32_t Total)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.OnDownloadProgress");
		
		UHUD_Modding_Downloads_C_OnDownloadProgress_Params params {};
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
	 * 		Name   -> Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.OnAnimFinished
	 * 		Flags  -> ()
	 */
	void UHUD_Modding_Downloads_C::OnAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.OnAnimFinished");
		
		UHUD_Modding_Downloads_C_OnAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.HideFromHUD
	 * 		Flags  -> ()
	 */
	void UHUD_Modding_Downloads_C::HideFromHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.HideFromHUD");
		
		UHUD_Modding_Downloads_C_HideFromHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.Destruct
	 * 		Flags  -> ()
	 */
	void UHUD_Modding_Downloads_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.Destruct");
		
		UHUD_Modding_Downloads_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.Simulate
	 * 		Flags  -> ()
	 */
	void UHUD_Modding_Downloads_C::Simulate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.Simulate");
		
		UHUD_Modding_Downloads_C_Simulate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.OnDownloadFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ModName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ModId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUD_Modding_Downloads_C::OnDownloadFinished(const class FString& ModName, const class FString& ModId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.OnDownloadFinished");
		
		UHUD_Modding_Downloads_C_OnDownloadFinished_Params params {};
		params.ModName = ModName;
		params.ModId = ModId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.ExecuteUbergraph_HUD_Modding_Downloads
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Modding_Downloads_C::ExecuteUbergraph_HUD_Modding_Downloads(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Modding_Downloads.HUD_Modding_Downloads_C.ExecuteUbergraph_HUD_Modding_Downloads");
		
		UHUD_Modding_Downloads_C_ExecuteUbergraph_HUD_Modding_Downloads_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Modding_Downloads_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Modding_Downloads_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Modding_Downloads.HUD_Modding_Downloads_C");
		return ptr;
	}

}


