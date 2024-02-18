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
	 * 		Name   -> Function ITM_DeepDiveHeaderElite.ITM_DeepDiveHeaderElite_C.SetEliteContents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        EliteContents                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UITM_DeepDiveHeaderElite_C::SetEliteContents(const class FText& EliteContents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDiveHeaderElite.ITM_DeepDiveHeaderElite_C.SetEliteContents");
		
		UITM_DeepDiveHeaderElite_C_SetEliteContents_Params params {};
		params.EliteContents = EliteContents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDiveHeaderElite.ITM_DeepDiveHeaderElite_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDiveHeaderElite_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDiveHeaderElite.ITM_DeepDiveHeaderElite_C.PreConstruct");
		
		UITM_DeepDiveHeaderElite_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDiveHeaderElite.ITM_DeepDiveHeaderElite_C.ExecuteUbergraph_ITM_DeepDiveHeaderElite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDiveHeaderElite_C::ExecuteUbergraph_ITM_DeepDiveHeaderElite(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDiveHeaderElite.ITM_DeepDiveHeaderElite_C.ExecuteUbergraph_ITM_DeepDiveHeaderElite");
		
		UITM_DeepDiveHeaderElite_C_ExecuteUbergraph_ITM_DeepDiveHeaderElite_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_DeepDiveHeaderElite_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_DeepDiveHeaderElite_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_DeepDiveHeaderElite.ITM_DeepDiveHeaderElite_C");
		return ptr;
	}

}


