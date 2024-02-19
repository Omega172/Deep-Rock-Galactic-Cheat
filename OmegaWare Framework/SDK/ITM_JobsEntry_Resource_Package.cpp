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
	 * 		Name   -> Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_JobsEntry_Resource_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.PreConstruct");
		
		UITM_JobsEntry_Resource_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RequiredLevel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_JobsEntry_Resource_C::SetData(int32_t RequiredLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.SetData");
		
		UITM_JobsEntry_Resource_C_SetData_Params params {};
		params.RequiredLevel = RequiredLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.ExecuteUbergraph_ITM_JobsEntry_Resource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_JobsEntry_Resource_C::ExecuteUbergraph_ITM_JobsEntry_Resource(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.ExecuteUbergraph_ITM_JobsEntry_Resource");
		
		UITM_JobsEntry_Resource_C_ExecuteUbergraph_ITM_JobsEntry_Resource_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_JobsEntry_Resource_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_JobsEntry_Resource_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C");
		return ptr;
	}

}


