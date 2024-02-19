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
	 * 		Name   -> Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.FromActiveDeepDive
	 * 		Flags  -> ()
	 */
	void UITM_DeepDiveHeader_C::FromActiveDeepDive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.FromActiveDeepDive");
		
		UITM_DeepDiveHeader_C_FromActiveDeepDive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.FromDeepDive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDeepDive*                                   InDeepDive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDiveHeader_C::FromDeepDive(class UDeepDive* InDeepDive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.FromDeepDive");
		
		UITM_DeepDiveHeader_C_FromDeepDive_Params params {};
		params.InDeepDive = InDeepDive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.SetEliteActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EliteActive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDiveHeader_C::SetEliteActive(bool EliteActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.SetEliteActive");
		
		UITM_DeepDiveHeader_C_SetEliteActive_Params params {};
		params.EliteActive = EliteActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.SetHeaderContents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        HeaderContents                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UITM_DeepDiveHeader_C::SetHeaderContents(const class FText& HeaderContents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.SetHeaderContents");
		
		UITM_DeepDiveHeader_C_SetHeaderContents_Params params {};
		params.HeaderContents = HeaderContents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDiveHeader_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.PreConstruct");
		
		UITM_DeepDiveHeader_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.ExecuteUbergraph_ITM_DeepDiveHeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDiveHeader_C::ExecuteUbergraph_ITM_DeepDiveHeader(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.ExecuteUbergraph_ITM_DeepDiveHeader");
		
		UITM_DeepDiveHeader_C_ExecuteUbergraph_ITM_DeepDiveHeader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_DeepDiveHeader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_DeepDiveHeader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_DeepDiveHeader.ITM_DeepDiveHeader_C");
		return ptr;
	}

}


