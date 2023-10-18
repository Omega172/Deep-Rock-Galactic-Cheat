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
	 * 		Name   -> Function ITM_SaveSlot_Entry_Header.ITM_SaveSlot_Entry_Header_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_SaveSlot_Entry_Header_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry_Header.ITM_SaveSlot_Entry_Header_C.Construct");
		
		UITM_SaveSlot_Entry_Header_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SaveSlot_Entry_Header.ITM_SaveSlot_Entry_Header_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_SaveSlot_Entry_Header_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry_Header.ITM_SaveSlot_Entry_Header_C.PreConstruct");
		
		UITM_SaveSlot_Entry_Header_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SaveSlot_Entry_Header.ITM_SaveSlot_Entry_Header_C.ExecuteUbergraph_ITM_SaveSlot_Entry_Header
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_SaveSlot_Entry_Header_C::ExecuteUbergraph_ITM_SaveSlot_Entry_Header(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SaveSlot_Entry_Header.ITM_SaveSlot_Entry_Header_C.ExecuteUbergraph_ITM_SaveSlot_Entry_Header");
		
		UITM_SaveSlot_Entry_Header_C_ExecuteUbergraph_ITM_SaveSlot_Entry_Header_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_SaveSlot_Entry_Header_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_SaveSlot_Entry_Header_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_SaveSlot_Entry_Header.ITM_SaveSlot_Entry_Header_C");
		return ptr;
	}

}


