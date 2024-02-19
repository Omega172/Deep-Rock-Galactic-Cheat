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
	 * 		Name   -> Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_SupplyBarItem_C::SetProgress(float InProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetProgress");
		
		UITM_SupplyBarItem_C_SetProgress_Params params {};
		params.InProgress = InProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetColors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENUM_MenuColors                                    InBorderColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENUM_MenuColors                                    InInnerColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENUM_MenuColors                                    InLowColorColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_SupplyBarItem_C::SetColors(ENUM_MenuColors InBorderColor, ENUM_MenuColors InInnerColor, ENUM_MenuColors InLowColorColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetColors");
		
		UITM_SupplyBarItem_C_SetColors_Params params {};
		params.InBorderColor = InBorderColor;
		params.InInnerColor = InInnerColor;
		params.InLowColorColor = InLowColorColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_SupplyBarItem_C::SetOn(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.SetOn");
		
		UITM_SupplyBarItem_C_SetOn_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_SupplyBarItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.PreConstruct");
		
		UITM_SupplyBarItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UITM_SupplyBarItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.Construct");
		
		UITM_SupplyBarItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.OnBlinkingFinished
	 * 		Flags  -> ()
	 */
	void UITM_SupplyBarItem_C::OnBlinkingFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.OnBlinkingFinished");
		
		UITM_SupplyBarItem_C_OnBlinkingFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.ExecuteUbergraph_ITM_SupplyBarItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_SupplyBarItem_C::ExecuteUbergraph_ITM_SupplyBarItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_SupplyBarItem.ITM_SupplyBarItem_C.ExecuteUbergraph_ITM_SupplyBarItem");
		
		UITM_SupplyBarItem_C_ExecuteUbergraph_ITM_SupplyBarItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_SupplyBarItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_SupplyBarItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_SupplyBarItem.ITM_SupplyBarItem_C");
		return ptr;
	}

}


