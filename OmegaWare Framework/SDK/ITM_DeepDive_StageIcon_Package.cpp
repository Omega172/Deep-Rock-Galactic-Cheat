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
	 * 		Name   -> Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetClaimStatusActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDive_StageIcon_C::SetClaimStatusActive(bool Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetClaimStatusActive");
		
		UITM_DeepDive_StageIcon_C_SetClaimStatusActive_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UITM_DeepDive_StageIcon_C::SetText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetText");
		
		UITM_DeepDive_StageIcon_C_SetText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDive_StageIcon_C::SetActive(bool Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetActive");
		
		UITM_DeepDive_StageIcon_C_SetActive_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UITM_DeepDive_StageIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.PreConstruct");
		
		UITM_DeepDive_StageIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.ExecuteUbergraph_ITM_DeepDive_StageIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UITM_DeepDive_StageIcon_C::ExecuteUbergraph_ITM_DeepDive_StageIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.ExecuteUbergraph_ITM_DeepDive_StageIcon");
		
		UITM_DeepDive_StageIcon_C_ExecuteUbergraph_ITM_DeepDive_StageIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UITM_DeepDive_StageIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITM_DeepDive_StageIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C");
		return ptr;
	}

}


