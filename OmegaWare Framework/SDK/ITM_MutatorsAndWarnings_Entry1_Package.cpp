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
	 * 		Name   -> Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MutatorsAndWarnings_Entry1_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.PreConstruct");
		
		UITM_MutatorsAndWarnings_Entry1_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.SetMutator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionMutator*                             Mutator                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MutatorsAndWarnings_Entry1_C::SetMutator(class UMissionMutator* Mutator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.SetMutator");
		
		UITM_MutatorsAndWarnings_Entry1_C_SetMutator_Params params {};
		params.Mutator = Mutator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.SetWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionWarning*                             Warning                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MutatorsAndWarnings_Entry1_C::SetWarning(class UMissionWarning* Warning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.SetWarning");
		
		UITM_MutatorsAndWarnings_Entry1_C_SetWarning_Params params {};
		params.Warning = Warning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.SetInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MutatorsAndWarnings_Entry1_C::SetInfo(const class FText& Title, class UTexture2D* Icon, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.SetInfo");
		
		UITM_MutatorsAndWarnings_Entry1_C_SetInfo_Params params {};
		params.Title = Title;
		params.Icon = Icon;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.ExecuteUbergraph_ITM_MutatorsAndWarnings_Entry1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MutatorsAndWarnings_Entry1_C::ExecuteUbergraph_ITM_MutatorsAndWarnings_Entry1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.ExecuteUbergraph_ITM_MutatorsAndWarnings_Entry1");
		
		UITM_MutatorsAndWarnings_Entry1_C_ExecuteUbergraph_ITM_MutatorsAndWarnings_Entry1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_MutatorsAndWarnings_Entry1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_MutatorsAndWarnings_Entry1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C");
		return ptr;
	}

}


