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
	 * 		Name   -> Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InModID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InVersion                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InDescription                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InAuthor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		EUGCApprovalStatus                                 InApprovalState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InFetchThumbnail                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTOOLTIP_Mod_Joining_C::SetData(const class FString& InModID, const class FString& InName, const class FString& InVersion, const class FString& InDescription, const class FString& InAuthor, EUGCApprovalStatus InApprovalState, bool InFetchThumbnail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.SetData");
		
		UTOOLTIP_Mod_Joining_C_SetData_Params params {};
		params.InModID = InModID;
		params.InName = InName;
		params.InVersion = InVersion;
		params.InDescription = InDescription;
		params.InAuthor = InAuthor;
		params.InApprovalState = InApprovalState;
		params.InFetchThumbnail = InFetchThumbnail;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.FromMetaData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UModioModInfoWrapper*                        InMetaData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTOOLTIP_Mod_Joining_C::FromMetaData(class UModioModInfoWrapper* InMetaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.FromMetaData");
		
		UTOOLTIP_Mod_Joining_C_FromMetaData_Params params {};
		params.InMetaData = InMetaData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTOOLTIP_Mod_Joining_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.PreConstruct");
		
		UTOOLTIP_Mod_Joining_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.LoadThumbnail
	 * 		Flags  -> ()
	 */
	void UTOOLTIP_Mod_Joining_C::LoadThumbnail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.LoadThumbnail");
		
		UTOOLTIP_Mod_Joining_C_LoadThumbnail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.ExecuteUbergraph_TOOLTIP_Mod_Joining
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTOOLTIP_Mod_Joining_C::ExecuteUbergraph_TOOLTIP_Mod_Joining(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C.ExecuteUbergraph_TOOLTIP_Mod_Joining");
		
		UTOOLTIP_Mod_Joining_C_ExecuteUbergraph_TOOLTIP_Mod_Joining_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTOOLTIP_Mod_Joining_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTOOLTIP_Mod_Joining_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C");
		return ptr;
	}

}


