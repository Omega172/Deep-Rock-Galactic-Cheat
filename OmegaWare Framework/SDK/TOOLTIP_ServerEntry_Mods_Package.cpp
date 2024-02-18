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
	 * 		Name   -> Function TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C.SplitByInstalled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              InNames                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FString>                              OutPending                                                 (Parm, OutParm)
	 * 		TArray<class FString>                              OutInstalled                                               (Parm, OutParm)
	 */
	void UTOOLTIP_ServerEntry_Mods_C::SplitByInstalled(TArray<class FString>* InNames, TArray<class FString>* OutPending, TArray<class FString>* OutInstalled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C.SplitByInstalled");
		
		UTOOLTIP_ServerEntry_Mods_C_SplitByInstalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InNames != nullptr)
			*InNames = params.InNames;
		if (OutPending != nullptr)
			*OutPending = params.OutPending;
		if (OutInstalled != nullptr)
			*OutInstalled = params.OutInstalled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C.SetModNames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVerticalBox*                                InBox                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              InNames                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               InInstalled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTOOLTIP_ServerEntry_Mods_C::SetModNames(class UVerticalBox** InBox, TArray<class FString>* InNames, bool InInstalled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C.SetModNames");
		
		UTOOLTIP_ServerEntry_Mods_C_SetModNames_Params params {};
		params.InInstalled = InInstalled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InBox != nullptr)
			*InBox = params.InBox;
		if (InNames != nullptr)
			*InNames = params.InNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              InModNames                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UGeneratedMission*                           InMission                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTOOLTIP_ServerEntry_Mods_C::SetData(TArray<class FString>* InModNames, class UGeneratedMission* InMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C.SetData");
		
		UTOOLTIP_ServerEntry_Mods_C_SetData_Params params {};
		params.InMission = InMission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InModNames != nullptr)
			*InModNames = params.InModNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTOOLTIP_ServerEntry_Mods_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C.PreConstruct");
		
		UTOOLTIP_ServerEntry_Mods_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C.Destruct
	 * 		Flags  -> ()
	 */
	void UTOOLTIP_ServerEntry_Mods_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C.Destruct");
		
		UTOOLTIP_ServerEntry_Mods_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C.ExecuteUbergraph_TOOLTIP_ServerEntry_Mods
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTOOLTIP_ServerEntry_Mods_C::ExecuteUbergraph_TOOLTIP_ServerEntry_Mods(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C.ExecuteUbergraph_TOOLTIP_ServerEntry_Mods");
		
		UTOOLTIP_ServerEntry_Mods_C_ExecuteUbergraph_TOOLTIP_ServerEntry_Mods_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTOOLTIP_ServerEntry_Mods_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTOOLTIP_ServerEntry_Mods_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TOOLTIP_ServerEntry_Mods.TOOLTIP_ServerEntry_Mods_C");
		return ptr;
	}

}


