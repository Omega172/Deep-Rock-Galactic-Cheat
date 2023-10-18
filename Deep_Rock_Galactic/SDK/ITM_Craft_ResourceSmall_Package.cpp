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
	 * 		Name   -> Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.Refresh
	 * 		Flags  -> ()
	 */
	void UITM_Craft_ResourceSmall_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.Refresh");
		
		UITM_Craft_ResourceSmall_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.SetAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Craft_ResourceSmall_C::SetAmount(float InAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.SetAmount");
		
		UITM_Craft_ResourceSmall_C_SetAmount_Params params {};
		params.InAmount = InAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_Craft_ResourceSmall_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.PreConstruct");
		
		UITM_Craft_ResourceSmall_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.ExecuteUbergraph_ITM_Craft_ResourceSmall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_Craft_ResourceSmall_C::ExecuteUbergraph_ITM_Craft_ResourceSmall(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.ExecuteUbergraph_ITM_Craft_ResourceSmall");
		
		UITM_Craft_ResourceSmall_C_ExecuteUbergraph_ITM_Craft_ResourceSmall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_Craft_ResourceSmall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_Craft_ResourceSmall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C");
		return ptr;
	}

}


