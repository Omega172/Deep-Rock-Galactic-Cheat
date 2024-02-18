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
	 * 		Name   -> Function ITM_Modding_ToolTip_Entry.ITM_Modding_ToolTip_Entry_C.SetMetaData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UModioModInfoWrapper*                        InMetaData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Modding_ToolTip_Entry_C::SetMetaData(class UModioModInfoWrapper* InMetaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Modding_ToolTip_Entry.ITM_Modding_ToolTip_Entry_C.SetMetaData");
		
		UITM_Modding_ToolTip_Entry_C_SetMetaData_Params params {};
		params.InMetaData = InMetaData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Modding_ToolTip_Entry.ITM_Modding_ToolTip_Entry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Modding_ToolTip_Entry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Modding_ToolTip_Entry.ITM_Modding_ToolTip_Entry_C.PreConstruct");
		
		UITM_Modding_ToolTip_Entry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Modding_ToolTip_Entry.ITM_Modding_ToolTip_Entry_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_Modding_ToolTip_Entry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Modding_ToolTip_Entry.ITM_Modding_ToolTip_Entry_C.Construct");
		
		UITM_Modding_ToolTip_Entry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Modding_ToolTip_Entry.ITM_Modding_ToolTip_Entry_C.ExecuteUbergraph_ITM_Modding_ToolTip_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Modding_ToolTip_Entry_C::ExecuteUbergraph_ITM_Modding_ToolTip_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Modding_ToolTip_Entry.ITM_Modding_ToolTip_Entry_C.ExecuteUbergraph_ITM_Modding_ToolTip_Entry");
		
		UITM_Modding_ToolTip_Entry_C_ExecuteUbergraph_ITM_Modding_ToolTip_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Modding_ToolTip_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Modding_ToolTip_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Modding_ToolTip_Entry.ITM_Modding_ToolTip_Entry_C");
		return ptr;
	}

}


