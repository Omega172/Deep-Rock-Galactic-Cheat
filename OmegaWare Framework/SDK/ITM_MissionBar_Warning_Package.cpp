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
	 * 		Name   -> Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENUM_MenuColors                                    Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MissionBar_Warning_C::Update(const class FText& Title, class UTexture2D* Icon, ENUM_MenuColors Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.Update");
		
		UITM_MissionBar_Warning_C_Update_Params params {};
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
	 * 		Name   -> Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_MissionBar_Warning_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.PreConstruct");
		
		UITM_MissionBar_Warning_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.SetWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionWarning*                             Warning                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MissionBar_Warning_C::SetWarning(class UMissionWarning* Warning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.SetWarning");
		
		UITM_MissionBar_Warning_C_SetWarning_Params params {};
		params.Warning = Warning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.SetMutator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionMutator*                             Mutator                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MissionBar_Warning_C::SetMutator(class UMissionMutator* Mutator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.SetMutator");
		
		UITM_MissionBar_Warning_C_SetMutator_Params params {};
		params.Mutator = Mutator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.ExecuteUbergraph_ITM_MissionBar_Warning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_MissionBar_Warning_C::ExecuteUbergraph_ITM_MissionBar_Warning(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.ExecuteUbergraph_ITM_MissionBar_Warning");
		
		UITM_MissionBar_Warning_C_ExecuteUbergraph_ITM_MissionBar_Warning_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_MissionBar_Warning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_MissionBar_Warning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_MissionBar_Warning.ITM_MissionBar_Warning_C");
		return ptr;
	}

}


